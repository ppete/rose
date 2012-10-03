#include "compose.h"
#include "stx_analysis.h"
#include "const_prop_analysis.h"
#include <boost/enable_shared_from_this.hpp>
#include "printAnalysisStates.h"

namespace dataflow
{
int composerDebugLevel=1;

// -------------------------------------
// ----- Expression Interpretation -----
// -------------------------------------

// ----------------------
// --- Calling Expr2* ---
// ----------------------

// Contains the arguments needed by Expr2* calls
class FuncCallerArgs_Expr2Any
{
  public:
  SgNode* n;
  PartPtr part;
  
  FuncCallerArgs_Expr2Any(SgNode* n, PartPtr part) : n(n), part(part){}
  
  std::string str(std::string indent="") const {
    ostringstream oss;
    oss << "["<<n->class_name()<<" | "<<Dbg::escape(n->unparseToString())<<"]";
    return oss.str();
  }
};

// --- Calling Expr2Val ---

// These classes wrap the functionality of calling a specific function within an 
// Analysis or a Part
class Expr2ValCaller : public FuncCaller<ValueObjectPtr, const FuncCallerArgs_Expr2Any>
{
  public:
  // Calls the given analysis' implementation of Expr2Val within the given node
  ValueObjectPtr operator()(const FuncCallerArgs_Expr2Any& args/*SgNode* n, PartPtr p*/, ComposedAnalysis* client)
  {
    try{
      //FuncCallerArgs_Expr2Any& a = dynamic_cast<FuncCallerArgs_Expr2Any&>(args);
      return client->Expr2Val(args.n, args.part);
    } catch (std::bad_cast bc) { ROSE_ASSERT(false); }
  }
  string funcName() const{ return "Expr2Val"; }
};

ValueObjectPtr ChainComposer::Expr2Val(SgNode* n, PartPtr p, ComposedAnalysis* client) { 
  Expr2ValCaller c;
  FuncCallerArgs_Expr2Any args(n, p);
  return callServerAnalysisFunc<ValueObjectPtr, FuncCallerArgs_Expr2Any>(args, client, c);
}

// Variant of Expr2Val that inquires about the value of the memory location denoted by the operand of the 
// given node n, where the part denotes the set of prefixes that terminate at SgNode n.
ValueObjectPtr ChainComposer::OperandExpr2Val(SgNode* n, SgNode* operand, PartPtr part, ComposedAnalysis* client) {
  // Get the parts of the execution prefixes that terminate at the operand before continuing directly 
  // to SgNode n in the given part
  list<PartPtr> opParts = part.getOperandPart(n, operand);
  
  // The memory and expression MemLocObjects that represent the operand within different Parts in opParts
  list<ValueObjectPtr> partVs; 
  
  // Iterate over all the parts to get the expression and memory MemLocObjects for operand within those parts
  for(list<PartPtr>::iterator part=opParts.begin(); part!=opParts.end(); part++)
    partVs.push_back(Expr2Value(operand, *part, client));

  return boost::make_shared<UnionValueObjectPtr>(partVs);
}

// --- Calling Expr2MemLoc ---

class Expr2MemLocCaller : public FuncCaller<MemLocObjectPtr, const FuncCallerArgs_Expr2Any>
{
  public:
  // Calls the given analysis' implementation of Expr2MemLoc within the given node
  MemLocObjectPtr operator()(const FuncCallerArgs_Expr2Any& args/*SgNode* n, PartPtr p*/, ComposedAnalysis* client)
  {
    try{
      //FuncCallerArgs_Expr2Any& a = dynamic_cast<FuncCallerArgs_Expr2Any&>(args);
      return client->Expr2MemLoc(args.n, args.part);
    } catch (std::bad_cast bc) { ROSE_ASSERT(false); }
  }
  string funcName() const{ return "Expr2MemLoc"; }
};

MemLocObjectPtrPair ChainComposer::Expr2MemLoc(SgNode* n, PartPtr p, ComposedAnalysis* client) { 
  // Return the pair of <object that specifies the expression temporary of n, 
  //                     object that specifies the memory location that n corresponds to>
  Expr2MemLocCaller c;
  FuncCallerArgs_Expr2Any args(n, p);
  MemLocObjectPtr mem = callServerAnalysisFunc<MemLocObjectPtr, FuncCallerArgs_Expr2Any>(args, client, c);
  // If mem is an expression object returned by the syntactic analysis, there is no object that
  // specifies n's memory location
  if(boost::dynamic_pointer_cast<ExprObj>(mem))
    // Return mem as n's expression object and do not return an object for n's memory location
    return MemLocObjectPtrPair(mem, MemLocObjectPtr());
  // If mem actually corresponds to a location in memory 
  else
    // Generate a fresh object for n's expression temporary and return it along with mem
    return MemLocObjectPtrPair(
              isSgExpression(n) && !isSgVarRefExp(n) ? 
                createExpressionMemLocObject(isSgExpression(n), isSgExpression(n)->get_type(), p) :
                MemLocObjectPtr(),
              mem);
}

// Variant of Expr2MemLoc that inquires about the memory location denoted by the operand of the given node n, where
// the part denotes the set of prefixes that terminate at SgNode n.
MemLocObjectPtrPair ChainComposer::OperandExpr2MemLoc(SgNode* n, SgNode* operand, PartPtr part, ComposedAnalysis* client)
{
  Dbg::dbg << "ChainComposer::OperandExpr2MemLoc()"<<endl << "n="<<cfgUtils::SgNode2Str(n)<<endl << "operand("<<operand<<")="<<cfgUtils::SgNode2Str(operand)<<endl << "part="<<part.str()<<endl;
  
  // Get the parts of the execution prefixes that terminate at the operand before continuing directly 
  // to SgNode n in the given part
  list<PartPtr> opParts = part.getOperandPart(n, operand);
  
  // The memory and expression MemLocObjects that represent the operand within different Parts in opParts
  list<MemLocObjectPtr> partMLsExpr; 
  list<MemLocObjectPtr> partMLsMem;
  
  // Flags that indicate whether we have memory and expression objects from all/none of the sub-parts
  // Exactly One of these must be true
  bool expr4All=true, expr4None=true;
  bool mem4All=true,  mem4None=true;
  
  // Iterate over all the parts to get the expression and memory MemLocObjects for operand within those parts
  for(list<PartPtr>::iterator part=opParts.begin(); part!=opParts.end(); part++) {
    MemLocObjectPtrPair p = Expr2MemLoc(operand, *part, client);
    if(!p.expr) expr4All=false;
    else        expr4None=false;
    
    if(!p.mem) mem4All=false;
    else       mem4None=false;
    
    if(p.expr) partMLsMem.push_back(p.expr);
    if(p.mem)  partMLsMem.push_back(p.mem);
  }
  
  // Either we got expression/memory MemLocObjects from all parts or none of them
  ROSE_ASERT((expr4All && !expr4None) || (!expr4All && expr4None));
  ROSE_ASERT((mem4All  && !mem4None)  || (!mem4All  && mem4None));
  
  // Create a MemLocObjectPtrPair that includes UnionMemLocObjects that combine all the expression and memory
  // MemLocObjects from all the Parts that terminate at operand, using the Null MemLocObjectPtr if either
  // the expression or the memory MemLocObjects were not provided.
  if(expr4all && mem4All) 
    return MemLocObjectPtrPair(boost::make_shared<UnionMemLocObjectPtr>(partMLsExpr),
                               boost::make_shared<UnionMemLocObjectPtr>(partMLsMem));
  else if(expr4All)
    return MemLocObjectPtrPair(boost::make_shared<UnionMemLocObjectPtr>(partMLsExpr),
                               MemLocObjectPtr());
  else if(mem4All)
    return MemLocObjectPtrPair(MemLocObjectPtr(),
                               boost::make_shared<UnionMemLocObjectPtr>(partMLsMem));
  // We must get either an expression or a memory object
  else
    ROSE_ASSERT(0);
  
  /*// Find the Partition(s) that correspond to the given operand of n
  std::vector<PartEdgePtr> in=part->inEdges();
  list<PartPtr> opParts;
  //for(std::vector<PartEdgePtr>::iterator e=in.begin(); e!=in.end(); e++) {
  // Walk backwards through the partition graph until we reach the Part that includes the operand
  // GB 2012-09-24: Note that there may be multiple such parts and right now we're only reaching the first one.
  //                To fully support this we need to integrate partitions into SgNodes to create a fixed mapping 
  //                between SgNodes and their containing Parts.
  back_partIterator curPart(part); curPart++;
  for(; curPart!=back_partIterator::end(); curPart++) {
    Dbg::indent ind;
    Dbg::dbg << "curPart="<<(*curPart)->str()<<endl;
    std::vector<CFGNode> nodes = (*curPart)->CFGNodes();
    Dbg::indent ind2;
    // Look to see if any of the CFGNodes within this source Part include this operand
    for(std::vector<CFGNode>::iterator node=nodes.begin(); node!=nodes.end(); node++) {
      Dbg::dbg << "node("<<node->getNode()<<")="<<cfgUtils::CFGNode2Str(*node)<<endl;
      // If so, record it in opParts
      if(node->getNode()==operand) opParts.push_back(*curPart);
    }
    // If we've reached the part that includes the operand, we're done with the search
    if(opParts.size()>0) { break; }
  }
  if(opParts.size()==0) { Dbg::dbg << "Empty opParts."<<endl; }
  ROSE_ASSERT(opParts.size()>=1);
  // We currently can only deal with the case where the operand appears in one source Part. To support the general
  // case we need to implement support for intersections of analyses, where any query to multiple analyses comes back
  // with the tightest result returned by any of them.
  ROSE_ASSERT(opParts.size()==1);
  PartPtr opPart = *opParts.begin();
  
  return Expr2MemLoc(operand, opPart, client);*/
}

// --- CallingExpr2CodeLoc ---

class Expr2CodeLocCaller : public FuncCaller<CodeLocObjectPtr, const FuncCallerArgs_Expr2Any>
{
  public:
  // Calls the given analysis' implementation of Expr2CodeLoc within the given node
  CodeLocObjectPtr operator()(const FuncCallerArgs_Expr2Any& args/*SgNode* n, PartPtr p*/, ComposedAnalysis* client)
  {
    try{
      //FuncCallerArgs_Expr2Any& a = dynamic_cast<FuncCallerArgs_Expr2Any&>(args);
      return client->Expr2CodeLoc(args.n, args.part);
    } catch (std::bad_cast bc) { ROSE_ASSERT(false); }
  }
  
  string funcName() const{ return "Expr2CodeLoc"; }
};


CodeLocObjectPtrPair ChainComposer::Expr2CodeLoc(SgNode* n, PartPtr p, ComposedAnalysis* client) { 
  // Return the pair of <object that specifies the expression temporary of n, 
  //                     object that specifies the memory location that n corresponds to>
  // GB: !!! Right now we don't have a firm idea of how to manage CodeLocObjects and have not yet implemented
  //     !!! an ExprObj for them. When we have done so, this code will likely mirror the code for Expr2MemLoc.
  Expr2CodeLocCaller c;
  FuncCallerArgs_Expr2Any args(n, p);
  return CodeLocObjectPtrPair(boost::make_shared<StxCodeLocObject>(n, p),
                              callServerAnalysisFunc<CodeLocObjectPtr, FuncCallerArgs_Expr2Any>(args, client, c));
}


// --------------------------------
// --- Calling GetFunction*Part ---
// --------------------------------

// Contains the arguments needed by GetFunction*Part calls
/*class FuncCallerArgs_GetFunctionAnyPart
{
  public:
  Function& func;
  
  FuncCallerArgs_GetFunctionAnyPart(Function& func) : func(func) {}
  
  std::string str(std::string indent="") {
    ostringstream oss;
    oss << func.get_name()<<"()";
    return oss.str();
  }
};*/

// --- Calling GetFunctionStartPart ---
class GetFunctionStartPartCaller : public FuncCaller<PartPtr, const Function>
{
  public:
  // Calls the given analysis' implementation of GetFunctionStartPart within the given node
  PartPtr operator()(const Function& func, ComposedAnalysis* client)
  {
    return client->GetFunctionStartPart(func);
  }
  string funcName() const{ return "GetFunctionStartPart"; }
};

PartPtr ChainComposer::GetFunctionStartPart(const Function& func, ComposedAnalysis* client) { 
  GetFunctionStartPartCaller c;
  //FuncCallerArgs_GetFunctionAnyPart args(func);
  return callServerAnalysisFunc<PartPtr, Function>(func, client, c);
}


// --- Calling GetFunctionEndPart ---
class GetFunctionEndPartCaller : public FuncCaller<PartPtr, const Function>
{
  public:
  // Calls the given analysis' implementation of GetFunctionEndPart within the given node
  PartPtr operator()(const Function& func, ComposedAnalysis* client)
  {
    return client->GetFunctionEndPart(func);
  }
  string funcName() const{ return "GetFunctionEndPart"; }
};

PartPtr ChainComposer::GetFunctionEndPart(const Function& func, ComposedAnalysis* client) { 
  GetFunctionEndPartCaller c;
  //FuncCallerArgs_GetFunctionAnyPart args(func);
  return callServerAnalysisFunc<PartPtr, Function>(func, client, c);
}



// Maps and Sets 
// (when analyses can implement these internally, these functions will also invoke 
//  callServerAnalysisFunc)
/*ValueSet* ChainComposer::NewValueSet()  { return new ValueSet(); }
ValueMap* ChainComposer::NewValueMap()  { return new ValueMap(); }

MemLocSet* ChainComposer::NewMemLocSet() { return new MemLocSet(); }
MemLocMap* ChainComposer::NewMemLocMap() { return new MemLocMap(); }

CodeLocSet* ChainComposer::NewCodeLocSet() { return new CodeLocSet(); }
CodeLocMap* ChainComposer::NewCodeLocMap() { return new CodeLocMap(); }*/

// ------------------------------
// ----- Composition Driver -----
// ------------------------------
  
ChainComposer::ChainComposer(int argc, char** argv, list<ComposedAnalysis*>& analyses) : allAnalyses(analyses)
{
  //cout << "#allAnalyses="<<allAnalyses.size()<<endl;
  // Create an instance of the syntactic analysis and insert it at the front of the done list.
  // This analysis will be called last if matching functions do not exist in any other
  // analysis and does not need a round of fixed-point iteration to produce its results.
  doneAnalyses.push_front((ComposedAnalysis*)new SyntacticAnalysis());
  
  // Inform each analysis of the composer's identity
  //cout << "#allAnalyses="<<allAnalyses.size()<<endl;
  for(list<ComposedAnalysis*>::iterator a=allAnalyses.begin(); a!=allAnalyses.end(); a++) {
    (*a)->setComposer(this);
  }
  
  project = frontend(argc,argv);
  initAnalysis(project);
  Dbg::init("Composed Analysis", ".", "index.html");
  
  composerDebugLevel = 1;
}

void ChainComposer::runAnalysis()
//void ChainComposer::runAnalysis(int argc, char** argv)
{
  CallGraphBuilder cgb(project);
  cgb.buildCallGraph();
  SgIncidenceDirectedGraph* graph = cgb.getGraph();
  
  int i=1;
  for(list<ComposedAnalysis*>::iterator a=allAnalyses.begin(); a!=allAnalyses.end(); a++, i++) {
    ostringstream label; label << "Running Analysis " << (*a)->str("");
    Dbg::region reg(composerDebugLevel, 1, Dbg::region::topLevel, label.str());
    
    ContextInsensitiveInterProceduralDataflow inter_cc(*a, graph);
    inter_cc.runAnalysis();
    /*UnstructuredPassInterDataflow up_cc(*a);
    up_cc.runAnalysis();*/
    
    if(composerDebugLevel >= 3) {
      Dbg::region reg(composerDebugLevel, 3, Dbg::region::topLevel, label.str()+" Final State");
      std::vector<int> factNames;
      std::vector<int> latticeNames;
      latticeNames.push_back(0);
      printAnalysisStates paa(*a, factNames, latticeNames, printAnalysisStates::below);
      UnstructuredPassInterAnalysis up_paa(paa);
      up_paa.runAnalysis();
    }
    
    // Record that we've completed the given analysis
    doneAnalyses.push_back(*a);
  }
  
  return;
}
 
// Generic function that looks up the composition chain from the given client 
// analysis and returns the result produced by the first instance of the function 
// called by the caller object found along the way.
template<class RetObject, class FuncCallerArgs>
RetObject ChainComposer::callServerAnalysisFunc(const FuncCallerArgs& args, ComposedAnalysis* client,
                                   FuncCaller<RetObject, const FuncCallerArgs>& caller) {
  if(composerDebugLevel>=2) Dbg::dbg << "ChainComposer::callServerAnalysisFunc() "<<caller.funcName()<<" #doneAnalyses="<<doneAnalyses.size()<<endl;
  ROSE_ASSERT(doneAnalyses.size()>0);
  /*for(list<ComposedAnalysis*>::reverse_iterator a=doneAnalyses.rbegin(); a!=doneAnalyses.rend(); a++) {
      Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<(*a)->str("")<<endl;
  }*/
  list<ComposedAnalysis*> doneAnalyses_back;
  // Iterate backwards looking for an analysis that implements caller() behind in the chain of completed analyses
  list<ComposedAnalysis*>::reverse_iterator a=doneAnalyses.rbegin();
  while(doneAnalyses.size() >= 0) {
    std::ostringstream label; label << caller.funcName() << "  : " << (*a)->str("") << " " << args.str();
    Dbg::region reg(composerDebugLevel, 1, Dbg::region::topLevel, label.str());
    ComposedAnalysis* curAnalysis = *a;
    // Move the current analysis from doneAnalyses onto a backup list to ensure that in recursive calls
    // to callServerAnalysisFunc() doneAnalyses excludes the current analysis. doneAnalyses will be restored
    // at the end of this function.
    doneAnalyses_back.push_front(curAnalysis);
    doneAnalyses.pop_back();
    a=doneAnalyses.rbegin();
    
    /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Post-pop doneAnalysis="<<endl;
    for(list<ComposedAnalysis*>::iterator a=doneAnalyses.begin(); a!=doneAnalyses.end(); a++)
    { Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<<(*a)->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl; }
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Post-pop doneAnalyses_back="<<endl;
    for(list<ComposedAnalysis*>::iterator a=doneAnalyses_back.begin(); a!=doneAnalyses_back.end(); a++)
    { Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<<(*a)->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl; }
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Post-pop a="<<(a!=doneAnalyses.rend()?(*a)->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"):"END")<<endl;*/
    
    try {
      //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;In TRY, caller="<<caller.funcName()<<endl;
      RetObject v(caller(args, curAnalysis));
      // If control reaches here, we know that the current analysis does 
      // implement this method, so reconstruct doneAnalyses and return its reply

      /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Pre-splice doneAnalysis="<<endl;
        for(list<ComposedAnalysis*>::iterator a=doneAnalyses.begin(); a!=doneAnalyses.end(); a++)
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<<(*a)->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Pre-splice doneAnalyses_back="<<endl;
        for(list<ComposedAnalysis*>::iterator a=doneAnalyses_back.begin(); a!=doneAnalyses_back.end(); a++)
        { Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<<(*a)->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl; }
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Pre-splice a="<<(a!=doneAnalyses.rend()?(*a)->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"):"END")<<endl;*/
      
      // Restore doneAnalyses by pushing back all the analyses that were removed for the sake of recursive
      // calls to callServerAnalysisFunc().
      doneAnalyses.splice(doneAnalyses.end(), doneAnalyses_back);
      
      /*Dbg::dbg << "Final State of doneAnalysis="<<endl;
      for(list<ComposedAnalysis*>::iterator a=doneAnalyses.begin(); a!=doneAnalyses.end(); a++)
        Dbg::dbg << "    "<<(*a)->str("        ")<<endl;*/
      if(composerDebugLevel>=1) {
        /*if(boost::dynamic_pointer_cast<AbstractObject>(v)) {
          ROSE_ASSERT(reinterpret_cast<const FuncCallerArgs_Expr2Any*>(&args));
          Dbg::dbg << "Returning "<<boost::dynamic_pointer_cast<AbstractObject>(v)->
                strp(reinterpret_cast<const FuncCallerArgs_Expr2Any*>(&args)->part, "")<<endl;
        } else*/ Dbg::dbg << "Returning "<<v.get()->str("")<<endl;
      }
      return v;
    } catch (NotImplementedException exc) {
      if(composerDebugLevel>=1) Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<caller.funcName()<<" Not Implemented. Advancing to "<<(*a)->str("")<<endl;
      // If control reaches here then the current analysis must not implement 
      // this method so we keep looking further back in the chain
      continue;
    }
  }
  
  // The first analysis in the chain must implement every optional method so 
  // control should never reach this point
  cerr << "ERROR: no analysis implements method "<<caller.funcName()<<"(SgExpression)";
  ROSE_ASSERT(0);
}

}; //namespace dataflow;
