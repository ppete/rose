#include "analysis.h"
#include "dataflow.h"
#include "compose.h"

#include <memory>
using std::auto_ptr;

#include <utility>
using std::pair;
using std::make_pair;

#include <boost/mem_fn.hpp>
using boost::mem_fn;
#include <boost/make_shared.hpp>

namespace dataflow
{
NodeState* IntraBWDataflow::initializeFunctionNodeState(const Function &func, NodeState *fState)
{
  // Initialize the function's entry NodeState 
  NodeState* entryState = NodeState::getNodeState(this, getComposer()->GetFunctionEndPart(func, this));
  //printf("before copyLattices on [%s | %s]\n", funcCFGStart.getNode()->class_name().c_str(), funcCFGStart.getNode()->unparseToString().c_str());
  NodeState::copyLattices_bEQb(this, *entryState, /*interAnalysis*//*this, */*fState);
  
  return entryState;
}

NodeState* IntraFWDataflow::initializeFunctionNodeState(const Function &func, NodeState *fState)
{
  // Initialize the function's entry NodeState 
  NodeState* entryState = NodeState::getNodeState(this, getComposer()->GetFunctionStartPart(func, this));
                
  //printf("before copyLattices on [%s | %s] %d\n", funcCFGStart.getNode()->unparseToString().c_str(), funcCFGStart.getNode()->class_name().c_str(), funcCFGStart.getIndex());
        
  //int i=0;
  //Dbg::dbg << "Before: entryState-above="<<entryState<<endl;
  //for(vector<Lattice*>::const_iterator l=entryState->getLatticeAbove(this).begin(); l!=entryState->getLatticeAbove(this).end(); l++, i++)
  //    Dbg::dbg << "Lattice "<<i<<": "<<*l<<" = "<<(*l)->str("            ")<<endl;
  //i=0;
  //Dbg::dbg << "Before: fState-above="<<fState<<endl;
  //for(vector<Lattice*>::const_iterator l=fState->getLatticeAbove(this).begin(); l!=fState->getLatticeAbove(this).end(); l++, i++)
  ///   Dbg::dbg << "Lattice "<<i<<": "<<*l<<" = "<<(*l)->str("            ")<<endl;
  //Dbg::dbg << "this="<<this<<endl;
        
  NodeState::copyLattices_aEQa(this, *entryState, /*interAnalysis*/this, *fState);

  return entryState;
}

list<PartPtr>
IntraFWDataflow::getInitialWorklist(const Function &func, bool analyzeFromDirectionStart, const set<Function> &calleesUpdated, NodeState *fState)
{
  // Initialize the set of nodes that this dataflow will iterate over
  list<PartPtr> dfIt;

  // If we're analyzing this function for the first time or because the dataflow information coming in from its
  // callers has changed, add the function's entry point
/* GB 2012-09-18 : We currently do not support incremental inter-procedural analysis 
  if(analyzeFromDirectionStart)*/
    //dfIt->add(funcCFGStart);
    dfIt.push_back(getComposer()->GetFunctionStartPart(func, this));
/* GB 2012-09-18 : We currently do not support incremental inter-procedural analysis   
  else {
    / *
     * // If we're analyzing this function because of a change in the exit dataflow states of some of the 
    // functions called by this function (these functions are recorded in calleesUpdated), add the calls
    // by this function to those functions to the dataflow iterator
    FindAllFunctionCalls fafc(calleesUpdated);
    fafc.runAnalysis(func, fState);
    for(map<Function, set<PartPtr> >::iterator callee=fafc.getFuncCalls().begin(); callee!=fafc.getFuncCalls().end(); callee++)
      for(set<PartPtr>::iterator callNode=callee->second.begin(); callNode!=callee->second.end(); callNode++)
        {
          //dfIt->add(*callNode);
          dfIt.push_back(*callNode);
        }* /
    
      / * This doesn't work because it is possible to process a single call that appears early in the function,
         get no updates from it and stop, without processing any subsequent calls.* /
      
    // Iterate over the function in the forward direction, identifying the calls to functions in calleesUpdated.
    // Calls are added to the dfIt in the order they were discovered. This is done to ensure that when the intra
    // analysis is run it is likely to take all effects of the function calls into account with the calls
    // that appear early in the list (earlier in the CFG) and for the later ones will terminate quickly.
    PartPtr funcCFGStart = getComposer()->GetFunctionStartPart(func, this);
    PartPtr funcCFGEnd   = getComposer()->GetFunctionEndPart(func, this);
    
    // iterate over all the nodes in this function
    for(partIterator it(funcCFGStart); it!=partIterator::end(); it++)
    {
      PartPtr p = *it;
      SgNode* n = p.getNode();
      
      // Flag that indicates whether this node is tained.
      // A node is tainted if a predecessor has tainted it
      //bool pTaint = (tainted.find(p)!=tainted.end());
      
      // If this is a call to one of the functions that have had their information updated that is
      // not reachable from another call to such function
      if(/ *!pTaint &&* / isSgFunctionCallExp(n)) {
        for(set<Function>::const_iterator func=calleesUpdated.begin(); func!=calleesUpdated.end(); func++) {
          if((*func).get_declaration() == isSgFunctionCallExp(n)->getAssociatedFunctionDeclaration()) {
            // Add it to the start set of the dataflow iterator
            //dfIt->add(*callNode); 
              dfIt.push_back(p); 
            
            // A node is also tainted if it is a member of the start set
            //pTaint = true;
            break;
        }}
      }
      
      // If the current node is tainted, taint its successors
      / *if(pTaint)
      vector<PartPtr> desc = IntraFWDataflow::getDescendants(p);
      for(vector<PartPtr>::iterator d=desc.begin(); d!=desc.end(); d++)
        tainted.insert(*d);* /
    }
  }*/
  //Dbg::dbg << "analyzeFromDirectionStart="<<analyzeFromDirectionStart<<" #calleesUpdated="<<calleesUpdated.size()<<" it="<<it.str()<<endl;

  return dfIt;
}

class GetReturnStmts : public UnstructuredPassIntraAnalysis
{
  public:
  set<PartPtr> returns;
  
  GetReturnStmts(ComposedAnalysis* analysis) : UnstructuredPassIntraAnalysis(analysis) {}
  
  void visit(const Function& func, PartPtr part, NodeState& state) {
    if(part->maySgNodeAny<SgReturnStmt>()) {
      returns.insert(part);
    }
  }
};
//

list<PartPtr>
IntraBWDataflow::getInitialWorklist(const Function &func, bool analyzeFromDirectionStart, const set<Function> &calleesUpdated, NodeState *fState)
{
  list<PartPtr> dfIt;
  dfIt.push_back(getComposer()->GetFunctionEndPart(func, this));
  //RoseSTLContainer<SgNode*> rets=NodeQuery::querySubTree(project,VSgReturnStmt);
  //for(RoseSTLContainer<SgNode*>::iterator r=rets.begin(); r!=rets.end(); r++)
  GetReturnStmts grs(this);
  grs.runAnalysis(func, fState);
  for(set<PartPtr>::iterator r=grs.returns.begin(); r!=grs.returns.end(); r++)
    dfIt.push_back(*r);
  return dfIt;
}

vector<Lattice*> IntraFWDataflow::getLatticeAnte(NodeState *state) { return state->getLatticeAbove(this); }
vector<Lattice*> IntraFWDataflow::getLatticePost(NodeState *state) { return state->getLatticeBelow(this); }
vector<Lattice*> IntraBWDataflow::getLatticeAnte(NodeState *state) { return state->getLatticeBelow(this); }
vector<Lattice*> IntraBWDataflow::getLatticePost(NodeState *state) { return state->getLatticeAbove(this); }

void IntraFWDataflow::transferFunctionCall(const Function &caller, PartPtr callPart, CFGNode callCFG, NodeState *state)
{
  vector<Lattice*> dfInfoBelow = state->getLatticeBelow(this);

  //vector<Lattice*>* retState = NULL;
  dynamic_cast<InterProceduralDataflow*>(interAnalysis)->
    transfer(caller, callPart, callCFG, *state, dfInfoBelow/*, &retState*/);
/*
  if(analysisDebugLevel>=1) {
    if(retState && !(retState->size()==0 || (retState->size() == dfInfoBelow.size()))) {
      Dbg::dbg << "#retState="<<retState->size()<<endl;
      for(vector<Lattice*>::iterator ml=retState->begin(); ml!=retState->end(); ml++)
        Dbg::dbg << "        "<<(*ml)->str("            ")<<endl;
      Dbg::dbg << "#dfInfoBelow="<<dfInfoBelow.size()<<endl;
      for(vector<Lattice*>::const_iterator l=dfInfoBelow.begin(); l!=dfInfoBelow.end(); l++)
        Dbg::dbg << "        "<<(*l)->str("            ")<<endl;
    }
  }

  // Incorporate information about the function's return value into the caller's dataflow state
  // as the information of the SgFunctionCallExp
  ROSE_ASSERT(retState==NULL || retState->size()==0 || (retState->size() == dfInfoBelow.size()));
  if(retState) {
    Dbg::indent(analysisDebugLevel, 1);
    vector<Lattice*>::iterator lRet;
    vector<Lattice*>::const_iterator lDF;
    for(lRet=retState->begin(), lDF=dfInfoBelow.begin(); 
        lRet!=retState->end(); lRet++, lDF++) {
      if(analysisDebugLevel>=1) {
        Dbg::dbg << "lDF Before="<<(*lDF)->str("        ")<<endl;
        Dbg::dbg << "lRet Before="<<(*lRet)->str("        ")<<endl;
      }
      Function callee(isSgFunctionCallExp(p.getNode()));
      (*lDF)->unProject(getComposer()->Expr2MemLoc(isSgFunctionCallExp(p.getNode()), p, this).expr,
                        getComposer()->Expr2MemLoc(func.get_declaration(), p, this).expr, 
                        *lRet);
      
      if(analysisDebugLevel>=1) Dbg::dbg << "lDF After="<<(*lDF)->str("        ")<<endl;
    }
  }*/
}

void IntraBWDataflow::transferFunctionCall(const Function &caller, PartPtr callPart, CFGNode callCFG, NodeState *state)
{
  //vector<Lattice*>* retState;
  dynamic_cast<InterProceduralDataflow*>(interAnalysis)->
    transfer(caller, callPart, callCFG, *state, state->getLatticeAbove(this)/*, &retState*/);
                                
  // NEED TO INCORPORATE INFORMATION ABOUT RETURN INTO DATAFLOW SOMEHOW
}

vector<PartPtr> IntraFWDataflow::getDescendants(PartPtr part)
{ 
  vector<PartPtr> descendants;
  for(vector<PartEdgePtr>::const_iterator ei = part->outEdges().begin(); ei!=part->outEdges().end(); ei++)
    descendants.push_back((*ei)->target());
  return descendants;
}

vector<PartPtr> IntraBWDataflow::getDescendants(PartPtr part)
{ 
  vector<PartPtr> descendants;
  for(vector<PartEdgePtr>::const_iterator ei = part->inEdges().begin(); ei!=part->inEdges().end(); ei++)
    descendants.push_back((*ei)->source());
  return descendants;
}

PartPtr IntraFWDataflow::getUltimate(const Function &func)
{ return getComposer()->GetFunctionEndPart(func, this); }
PartPtr IntraBWDataflow::getUltimate(const Function &func)
{ return getComposer()->GetFunctionStartPart(func, this); }

dataflowPartIterator* IntraFWDataflow::getIterator(const Function &func)
{ return new dataflowPartIterator(getComposer()->GetFunctionEndPart(func, this)); }
dataflowPartIterator* IntraBWDataflow::getIterator(const Function &func)
{ return new back_dataflowPartIterator(getComposer()->GetFunctionStartPart(func, this)); }

// Runs the intra-procedural analysis on the given function. Returns true if 
// the function's NodeState gets modified as a result and false otherwise.
// state - the function's NodeState
// analyzeFromDirectionStart - If true the function should be analyzed from its starting point from the analysis' 
//    perspective (fw: entry point, bw: exit point)
void ComposedAnalysis::runAnalysis(const Function& func, NodeState* fState, bool analyzeFromDirectionStart, 
                                              set<Function> calleesUpdated)
{
  // Make sure that we've been paired with a valid inter-procedural dataflow analysis
  ROSE_ASSERT(dynamic_cast<InterProceduralDataflow*>(interAnalysis));

  ostringstream funcNameStr; funcNameStr << "Intra-analysis Function "<<func.get_name().getString()<<"()";
  Dbg::region reg(analysisDebugLevel, 1, Dbg::region::topLevel, funcNameStr.str());
  if(analysisDebugLevel>=1) {
      Dbg::dbg << "analyzeFromDirectionStart="<<analyzeFromDirectionStart<<" calleesUpdated=";
      for(set<Function>::iterator f=calleesUpdated.begin(); f!=calleesUpdated.end(); f++)
          Dbg::dbg << f->get_name().getString()<<", ";
      Dbg::dbg << endl;
  }

  // int i=0;
  //Dbg::dbg << "after: entryState-above="<<endl;
  //for(vector<Lattice*>::const_iterator l=entryState->getLatticeAbove(this).begin(); l!=entryState->getLatticeAbove(this).end(); l++, i++)
  //    Dbg::dbg << "Lattice "<<i<<": "<<(*l)->str("      ")<<endl;

  //printf("IntraFWDataflow::runAnalysis() function %s()\n", func.get_name().getString());
  
  // Set of all the Parts that have already been visited by the analysis
  set<PartPtr> visited;
  
  // Re-analyze it from scratch
  list<PartPtr> startingParts = getInitialWorklist(func, true, calleesUpdated, fState);
  PartPtr ultimatePart = getUltimate(func);
  for(list<PartPtr>::iterator start=startingParts.begin(); start!=startingParts.end(); start++) {
    ostringstream startStr; startStr << "Starting from "<<(*start)->str()<<endl;
    Dbg::region reg(analysisDebugLevel, 1, Dbg::region::topLevel, startStr.str());
    
    // Iterate over the nodes in this function that are downstream from the nodes added above
    dataflowPartIterator* curNodeIt = getIterator(func);
    Dbg::dbg << "Initial curNodeIt="<<curNodeIt->str()<<endl;
    curNodeIt->add(*start);
    for(; *curNodeIt!=dataflowPartIterator::end(); )
    {
      PartPtr part = **curNodeIt;
      ostringstream nodeNameStr;
      nodeNameStr << "Current Part "<<part->str()<<endl; Dbg::region reg(analysisDebugLevel, 1, Dbg::region::topLevel, nodeNameStr.str());
      
      bool modified = false;
      visited.insert(part);
      
      // The NodeState associated with this part
      NodeState* state = NodeState::getNodeState(this, part);
        
      // Iterate over all the CFGNodes associated with this part and merge the result of applying to transfer function
      // to all of them
      vector<CFGNode> v=part->CFGNodes();
      for(vector<CFGNode>::iterator c=v.begin(); c!=v.end(); c++) {
        SgNode* sgn = c->getNode();
        
        ostringstream nodeNameStr; nodeNameStr << "Current CFGNode "<<part->str()<<endl;
        Dbg::region reg(analysisDebugLevel, (v.size()==1 ? 10: 1), Dbg::region::topLevel, nodeNameStr.str());
        
        // =================== Copy incoming lattices to outgoing lattices ===================
        const vector<Lattice*> dfInfoAnte = getLatticeAnte(state);
        vector<Lattice*> dfInfoPost;

        // Overwrite the Lattices below this node with the lattices above this node.
        // The transfer function will then operate on these Lattices to produce the
        // correct state below this node.

        //printf("                 dfInfoAnte.size()=%d, dfInfoPost.size()=%d, this=%p\n", dfInfoAnte.size(), dfInfoPost.size(), this);
        // If this is the first CFGNode within Part p, use the lattices stored in the NodeState as the post state
        if(c==v.begin()) {
          dfInfoPost = getLatticePost(state);

          vector<Lattice*>::const_iterator itA, itP;
          int j=0;
          for(itA  = dfInfoAnte.begin(), itP  = dfInfoPost.begin();
              itA != dfInfoAnte.end() && itP != dfInfoPost.end(); 
              itA++, itP++, j++)
          {
             if(analysisDebugLevel>=1) {
               Dbg::dbg << "==================================  "<<endl;
               Dbg::dbg << "  Copying incoming Lattice "<<j<<":"<<endl;
               {Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg <<(*itA)->str()<<endl; }
               Dbg::dbg << "  To outgoing Lattice "<<j<<":"<<endl;
               {Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg <<(*itP)->str()<<endl; }
             }
             (*itP)->copy(*itA);
             /*if(analysisDebugLevel>=1){
                     Dbg::dbg << "    Copied Meet Below: Lattice "<<j<<": \n        "<<(*itB)->str("            ")<<endl;
             }*/
          }
        // If this is not the first CFGNode, create a new post state. It will be merged into the lattices in 
        // the NodeState after the transfer function
        } else {
          Dbg::dbg << "=================================="<<endl;
          Dbg::dbg << "Creating outgoing state from incoming state"<<endl;

          for(vector<Lattice*>::const_iterator itA = dfInfoAnte.begin(); itA != dfInfoAnte.end(); itA++)
             dfInfoPost.push_back((*itA)->copy());
        }

        // <<<<<<<<<<<<<<<<<<< TRANSFER FUNCTION <<<<<<<<<<<<<<<<<<<

        if(analysisDebugLevel>=1) {
          Dbg::dbg << " ==================================  "<<endl;
          Dbg::dbg << "  Transferring the outgoing  Lattice ... "<<endl;
        }
        if (isSgFunctionCallExp(sgn))
          transferFunctionCall(func, part, *c, state);

        boost::shared_ptr<IntraDFTransferVisitor> transferVisitor = getTransferVisitor(func, part, *state, dfInfoPost);
        sgn->accept(*transferVisitor);
        modified = transferVisitor->finish() || modified;

        // >>>>>>>>>>>>>>>>>>> TRANSFER FUNCTION >>>>>>>>>>>>>>>>>>>
        if(analysisDebugLevel>=1) {
          int j=0;
          for(vector<Lattice*>::const_iterator itP = dfInfoPost.begin(); itP != dfInfoPost.end(); itP++, j++) {
            Dbg::dbg << "Transferred: outgoing Lattice "<<j<<":"<<endl;
            {Dbg::indent ind(analysisDebugLevel, 1);
             Dbg::dbg <<(*itP)->str()<<endl;}
          }
          Dbg::dbg << "Transferred: "<<(modified? "<font color=\"#990000\">Modified</font>": "<font color=\"#000000\">Not Modified</font>")<<endl;
        }
        
        // If this is not the first CFGNode within this Part, merge its outgoing lattices with the outgoing
        // lattices produced by the transfer function's execution on the prior CFGNodes in this Part
        if(c!=v.begin()) {
          vector<Lattice*>::const_iterator itPprior, itPcur;
          ROSE_ASSERT(getLatticePost(state).size() == dfInfoPost.size());
          int j=0;
          for(itPprior  = getLatticePost(state).begin(), itPcur  = dfInfoPost.begin();
              itPprior != getLatticePost(state).end() && itPcur != dfInfoPost.end(); 
              itPprior++, itPcur++, j++)
          {
             if(analysisDebugLevel>=1) {
               Dbg::dbg << "==================================  "<<endl;
               Dbg::dbg << "  Merging lattice "<<j<<" for prior CFGNodes:"<<endl;
               {Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg <<(*itPprior)->str()<<endl; }
               Dbg::dbg << "  With lattice "<<j<<" for the current CFGNodes:"<<endl;
               {Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg <<(*itPcur)->str()<<endl; }
             }
             modified = (*itPprior)->meetUpdate(*itPcur) || modified;
             delete *itPcur;
          }
          
          if(analysisDebugLevel>=1) {
            int j=0;
            for(vector<Lattice*>::const_iterator itP = getLatticePost(state).begin(); itP != getLatticePost(state).end(); itP++, j++) {
              Dbg::dbg << "Merged within Part: Lattice "<<j<<":"<<endl;
              {Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg <<(*itP)->str()<<endl;}
            }
            Dbg::dbg << "Intra-part merged: "<<(modified? "<font color=\"#990000\">Modified</font>": "<font color=\"#000000\">Not Modified</font>")<<endl;
          }
        }
      } // for(vector<CFGNode>::iterator c=v.begin(); c!=v.end(); c++) {
      
      // =================== Populate the generated outgoing lattice to descendants (meetUpdate) ===================
/*              // if there has been a change in the dataflow state immediately below this node AND*/
        // If this is not the last node in the function
      
      /*Dbg::dbg << "curNodeIt=["<<(**curNodeIt).getNode()->unparseToString()<<" | "<<(**curNodeIt).getNode()->class_name()<<"]"<<endl;
      Dbg::dbg << "ultimatePart=["<<ultimatePart.getNode()->unparseToString()<<" | "<<ultimatePart.getNode()->class_name()<<"]"<<endl;
      Dbg::dbg << "(*curNodeIt != ultimatePart)="<<(*curNodeIt != ultimatePart)<<endl;*/
      if(/*modified && */**curNodeIt != ultimatePart)
      {
        if(analysisDebugLevel>=1){
          Dbg::dbg << " ==================================  "<<endl;
          Dbg::dbg << " Propagating/Merging the outgoing  Lattice to all descendant nodes ... "<<endl;
        }
        Dbg::indent ind(analysisDebugLevel, 1);
        
        // iterate over all descendants
        vector<PartPtr> descendants = getDescendants(part);
        if(analysisDebugLevel>=1) {
          Dbg::dbg << "Descendants ("<<descendants.size()<<"):"<<endl;
          Dbg::dbg << "~~~~~~~~~~~~"<<endl;
        }
        
        for(vector<PartPtr>::iterator di = descendants.begin(); di != descendants.end(); di++)
        {
          // The CFG node corresponding to the current descendant of n
          PartPtr nextNode = *di;
          if(analysisDebugLevel>=1) Dbg::dbg << "    Descendant: "<<nextNode->str()<<endl;
          
          NodeState* nextState = NodeState::getNodeState(this, nextNode);
          
          // Propagate the Lattices below this node to its descendant
          modified = propagateStateToNextNode(getLatticePost(state), part, getLatticeAnte(nextState), nextNode);
          if(analysisDebugLevel>=1){
            Dbg::dbg << "Propagated/merged: "<<(modified? "<font color=\"#990000\">Modified</font>": "<font color=\"#000000\">Not Modified</font>")<<endl;
            Dbg::dbg << "<hline>";
          }
          // If the next node's state gets modified as a result of the propagation, or the next node has not yet been
          // visited, add it to the processing queue.
          if(modified || visited.find(nextNode)==visited.end())
            curNodeIt->add(nextNode);
        }
      }
      (*curNodeIt)++;
    }
  }
#if 0
        Dbg::dbg << "(*(NodeState::getNodeStates(funcCFGEnd).begin()))->getLatticeAbove((Analysis*)this) == fState->getLatticeBelow((Analysis*)this):"<<endl;
        printf("fState->getLatticeBelow((Analysis*)this).size()=%d\n", fState->getLatticeBelow((Analysis*)interAnalysis).size());
        printf("fState->getLatticeAbove((Analysis*)this).size()=%d\n", fState->getLatticeAbove((Analysis*)interAnalysis).size());
#endif

#if 0 // GB: There is no need to check for modification since now the inter-procedural analysis
      //     does this by merging all the states at all the return points
      
        // Test if the Lattices at the end of the function after the analysis are equal to their
        // original values in the function state.
        bool modified = !NodeState::eqLattices(getLatticeAnte(*(NodeState::getNodeStates(getUltimate(func)).begin())),
                                               getLatticePost(fState));
#endif

#if 0
        // XXX: This was dead code in the separate IntraFWDataflow::runAnalysis
        // Update the the function's exit NodeState with the final state of this function's dataflow analysis.
        NodeState* exitState = *(NodeState::getNodeStates(funcCFGEnd).begin());

        const vector<Lattice*>& funcLatticesExit = exitState->getLatticeAbove(this);
        Dbg::dbg << "    exitState Above"<<endl;
        for(vector<Lattice*>::const_iterator it = funcLatticesExit.begin(); it !=funcLatticesExit.end(); it++)
                Dbg::dbg << "        "<<(*it)->str("        ")<<endl;

        const vector<Lattice*>& funcLatticesAfter = fState->getLatticeBelow(this);
        Dbg::dbg << "    fState.below Before"<<endl;
        for(vector<Lattice*>::const_iterator it = funcLatticesAfter.begin(); it !=funcLatticesAfter.end(); it++)
                Dbg::dbg << "        "<<(*it)->str("        ")<<endl;

        Dbg::dbg <<"     Equal = "<<NodeState::eqLattices(exitState->getLatticeAbove((Analysis*)this), fState->getLatticeBelow((Analysis*)this))<<endl;;
        
        NodeState::copyLattices_bEQa(/ *interAnalysis* /this, *fState, this, *exitState);

        {
                Dbg::dbg << "    fState.below After"<<endl;
                const vector<Lattice*>& funcLatticesAfter = fState->getLatticeBelow(this);
                for(vector<Lattice*>::const_iterator it = funcLatticesAfter.begin(); it!=funcLatticesAfter.end(); it++)
                        Dbg::dbg << "        "<<(*it)->str("        ")<<endl;
        }
#elseif 0
        // XXX: This was live code in the separate IntraBWDataflow::runAnalysis
        // Update the the function's exit NodeState with the final state of this function's dataflow analysis.
        NodeState* exitState = *(NodeState::getNodeStates(funcCFGStart).rbegin());
        NodeState::copyLattices_aEQb(/*interAnalysis*/this, *fState, /*this, */*exitState);
#endif
  
// GB: There is no need to check for modification since now the inter-procedural analysis
//     does this by merging all the states at all the return points      
//        return modified;
}

}; // namespace dataflow
