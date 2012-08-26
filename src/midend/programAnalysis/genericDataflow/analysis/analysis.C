#define ANALYSIS_C
#include "genericDataflowCommon.h"
#include "VirtualCFGIterator.h"
#include "cfgUtils.h"
#include "CallGraphTraverse.h"
#include "analysisCommon.h"
#include "analysis.h"
#include "dataflow.h"
#include "latticeFull.h"
#include "compose.h"
#include "functionState.h"
#include "abstract_object.h"
#include <vector>
#include <set>
#include <map>
#include <boost/make_shared.hpp>


using namespace std;
namespace dataflow {
  
int analysisDebugLevel=1;

/*******************************
 *** IntraProceduralAnalysis ***
 *******************************/

void IntraProceduralAnalysis::runAnalysis(const Function& func, NodeState* state) { 
  /* GB: For some reason the compiler complains that SyntacticAnalysis doesn't implement this
         when it is implemented in its ancestor IntraProceduralDataflow. As such, 
         a dummy implementation is provided here. */
  ROSE_ASSERT(0); 
}

IntraProceduralAnalysis::~IntraProceduralAnalysis() {}

/*******************************
 *** InterProceduralAnalysis ***
 *******************************/
InterProceduralAnalysis::~InterProceduralAnalysis() {}

/*************************************
 *** UnstructuredPassIntraAnalysis ***
 *************************************/

// runs the intra-procedural analysis on the given function, returns true if 
// the function's NodeState gets modified as a result and false otherwise
// state - the function's NodeState
void UnstructuredPassIntraAnalysis::runAnalysis(const Function& func, NodeState* state)
{
  PartPtr funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(),filter);
  PartPtr funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(), filter);
  
  if(analysisDebugLevel>=2)
    Dbg::dbg << "UnstructuredPassIntraAnalysis::runAnalysis() function "<<func.get_name().getString()<<"()\n";
  
  // iterate over all the nodes in this function
  for(VirtualCFG::iterator it(funcCFGStart); it!=VirtualCFG::iterator::end(); it++)
  {
    PartPtr p = *it;
    // The number of NodeStates associated with the given dataflow node
    //int numStates=NodeState::numNodeStates(n);
    // The actual NodeStates associated with the given dataflow node
    const vector<NodeState*> nodeStates = NodeState::getNodeStates(p);
    
    // Visit each CFG node
    for(vector<NodeState*>::const_iterator itS = nodeStates.begin(); itS!=nodeStates.end(); itS++)
      visit(func, p, *(*itS));
  }
}

/*************************************
 *** UnstructuredPassInterAnalysis ***
 *************************************/
void UnstructuredPassInterAnalysis::runAnalysis()
{
  set<FunctionState*> allFuncs = FunctionState::getAllDefinedFuncs();
  // Go through functions one by one, call an intra-procedural analysis on each of them
  // iterate over all functions with bodies
  for(set<FunctionState*>::iterator it=allFuncs.begin(); it!=allFuncs.end(); it++)
  {
    FunctionState* fState = *it;
    intraAnalysis->runAnalysis(fState->func, &(fState->state));
  }
}

/*class Dataflow : virtual public Analysis
{

};*/

/*******************************
 *** InterProceduralDataflow ***
 *******************************/

InterProceduralDataflow::InterProceduralDataflow(IntraProceduralDataflow* intraDataflowAnalysis) : 
  InterProceduralAnalysis((IntraProceduralAnalysis*)intraDataflowAnalysis)
{
       filter = intraDataflowAnalysis->filter; // propagate the CFG filter from intra- to inter-level, or the default filter will kick in at inter-level.
  Dbg::dbg << "InterProceduralDataflow() intraAnalysis="<<intraAnalysis<<", intraDataflowAnalysis="<<intraDataflowAnalysis<<endl;
  set<FunctionState*> allFuncs = FunctionState::getAllDefinedFuncs();
  
  // Initialize the dataflow state of all functions with bodies
  for(set<FunctionState*>::iterator it=allFuncs.begin(); it!=allFuncs.end(); it++)  
  {
    FunctionState* funcS = *it;
    Function func = funcS->func;
    //Dbg::dbg << "func="<<func.get_name().getString()<<"() func.get_definition()="<<func.get_definition()<<endl;
    if(func.get_definition())
    {
      /*vector<Lattice*> initLats = intraDataflowAnalysis->genInitState(
               func, func.get_definition()->cfgForBeginning(), funcS->state);*/
      
      // !!! NOTE: cfgForEnd() AND cfgForBeginning() PRODUCE THE SAME SgFunctionDefinition SgNode BUT THE DIFFERENT INDEXES
      // !!!       (0 FOR BEGINNING AND 3 FOR END). AS SUCH, IT DOESN'T MATTER WHICH ONE WE CHOOSE. HOWEVER, IT DOES MATTER
      // !!!       WHETHER WE CALL genInitState TO GENERATE THE STATE BELOW THE NODE (START OF THE FUNCTION) OR ABOVE IT 
      // !!!       (END OF THE FUNCTION). THE CAPABILITY TO DIFFERENTIATE THE TWO CASES NEEDS TO BE ADDED TO genInitState
      // !!!       AND WHEN IT IS, WE'LL NEED TO CALL IT INDEPENDENTLY FOR cfgForEnd() AND cfgForBeginning() AND ALSO TO MAKE
      // !!!       TO SET THE LATTICES ABOVE THE ANALYSIS 
      vector<Lattice*>  initLats;
      vector<NodeFact*> initFacts;
      
      /*PartPtr end = func.get_definition()->cfgForEnd();
      intraDataflowAnalysis->genInitState(func, func.get_definition()->cfgForEnd(), funcS->state,
                  initLats, initFacts);
      
      Dbg::dbg << "InterProceduralAnalysis initLats at Ending "<<(*it)->func.get_name().getString()<<"): node=%s\n", , end.str().c_str());
        for(vector<Lattice*>::iterator it = initLats.begin(); 
            it!=initLats.end(); it++)
        {       
          Dbg::dbg << *it << ": " << (*it)->str("    ") << endl;
        }
      */
      //PartPtr begin = boost::make_shared<DataflowNode>(func.get_definition()->cfgForBeginning(), filter);
      PartPtr begin = DataflowNode(func.get_definition()->cfgForBeginning(), filter);
      Dbg::dbg << "begin="<<begin.getNode()<<" = ["<<Dbg::escape(begin.getNode()->unparseToString())<<" | "<<begin.getNode()->class_name()<<"]"<<endl;
      //PartPtr startN = boost::make_shared<Part>(func.get_definition()->cfgForBeginning(), filter);
      PartPtr startN = Part(func.get_definition()->cfgForBeginning(), filter);
      intraDataflowAnalysis->genInitState(func, startN, funcS->state, initLats, initFacts);
      // Make sure that the starting lattices are initialized
      for(vector<Lattice*>::iterator it=initLats.begin(); it!=initLats.end(); it++)
        (*it)->initialize();
      
      /*if(analysisDebugLevel>=1){
        Dbg::dbg << "InterProceduralAnalysis initLats at Beginning "<<func.get_name().getString()<<"(): node="<<begin.str()<<endl;
        for(vector<Lattice*>::iterator it = initLats.begin(); 
            it!=initLats.end(); it++)
        {       
          Dbg::dbg << *it << ": " << (*it)->str("    ") << endl;
        }
      }*/
      funcS->state.setLattices((Analysis*)intraAnalysis, initLats);
      funcS->state.setFacts((Analysis*)intraAnalysis, initFacts);
      Dbg::dbg << "Initialized state of function "<<func.get_name().getString()<<"(), state="<<(&(funcS->state))<<endl;
      Dbg::dbg << "    "<<funcS->state.str(intraDataflowAnalysis, "    ")<<endl;
      
      // Initialize funcS->retState with initLats. 
      // !!!Need to make a copy of initLats first
      //funcS->retState.setLatticeBelow((Analysis*)intraAnalysis, initLats);
      
      // We do not initialize retState since we don't know the type of the lattice that will capture
      // the projection of the normal lattice type on the return variables. However, there is no
      // need to provide default lattices since DFStateAtReturns and MergeAllReturnStates can
      // deal with Lattice* vectors that start out empty.
      
      // We do not need to deallocate facts in initFacts and lattices in initLats since setFacts() and
      // setLattices() have taken the original facts in initFacts and did not make private copies of them
      
      /*const vector<Lattice*>* funcLatticesBefore = &(funcS->state.getLatticeAbove((Analysis*)intraAnalysis));
      Dbg::dbg << "  funcLatticesBefore->size()="<<funcLatticesBefore->size()<<", intraAnalysis="<<intraAnalysis<<endl;*/
    }
  }
}

/*************************
 *** InitDataflowState ***
 *************************/

void InitDataflowState::visit(const Function& func, PartPtr p, NodeState& state)
{
  SgNode* sgn = p.getNode();
  if(analysisDebugLevel>=2)
    Dbg::dbg << "InitDataflowState::visit() sgn="<<sgn<<"["<<sgn->class_name()<<" | "<<Dbg::escape(sgn->unparseToString())<<"], dfAnalysis="<<dfAnalysis<<endl;
  
  // generate a new initial state for this node
  vector<Lattice*>  initLats;
  vector<NodeFact*> initFacts;
  dfAnalysis->genInitState(func, p, state, initLats, initFacts);
  
  /*if(analysisDebugLevel>=2){
    int i=0;
    for(vector<Lattice*>::iterator l=initLats.begin(); l!=initLats.end(); l++, i++)
      Dbg::dbg << "Lattice "<<i<<": "<<(*l)->str("      ")<<endl;
    
    i=0;
    for(vector<NodeFact*>::iterator f=initFacts.begin(); f!=initFacts.end(); f++, i++)
      Dbg::dbg << "Lattice "<<i<<": "<<(*f)->str("      ")<<endl;
  }*/
                
  //Dbg::dbg << "InitDataflowState::visit() calling state.setLattices()"<<endl;
  state.setLattices((Analysis*)dfAnalysis, initLats);
  state.setFacts((Analysis*)dfAnalysis, initFacts);
  
  if(analysisDebugLevel>=2){
    Dbg::dbg << "    state="<<state.str((Analysis*)dfAnalysis, "    ")<<endl;
  }
  
  /*vector<Lattice*> initState = dfAnalysis->genInitState(func, n, state);
  Dbg::dbg << "InitDataflowState::visit() 1"<<endl;
      
  for(int i=0; i<initState.size(); i++)
  {
    Dbg::dbg << "       i="<<i<<", initState[i]="<<initState[i]->str("")<<endl;
    state.addLattice((Analysis*)dfAnalysis, i, initState[i]);
    Dbg::dbg << "       state->getLatticeAbove((Analysis*)dfAnalysis).size()="<<state.getLatticeAbove((Analysis*)dfAnalysis).size()<<endl, );
    //Dbg::dbg << printf("       state->getLatticeBelow((Analysis*)dfAnalysis).size()="<<state.getLatticeBelow((Analysis*)dfAnalysis).size()<<endl;
  }*/
  
  //const vector<Lattice*>& masterLatBel = state.getLatticeBelow((Analysis*)dfAnalysis);
  //printf("    creator=%p, state=%p, masterLatBel.size()=%d\n", (Analysis*)dfAnalysis, &state, masterLatBel.size());
}


/****************************
 *** FindAllFunctionCalls ***
 ****************************/
 
void FindAllFunctionCalls::visit(const Function& func, PartPtr p, NodeState& state)
{
  SgNode* sgn = p.getNode();
  if(analysisDebugLevel>=2){
    Dbg::dbg << "FindAllFunctionCalls::visit() sgn="<<sgn<<"["<<sgn->class_name()<<" | "<<Dbg::escape(sgn->unparseToString())<<"]"<<endl;
  }
  
  // If this is a function call, find the function that is being called and if it is 
  // in funcsToFind, record the call in funcCalls
  if(isSgFunctionCallExp(sgn)) {
    for(set<Function>::const_iterator func=funcsToFind.begin(); func!=funcsToFind.end(); func++) {
      if((*func).get_declaration() == isSgFunctionCallExp(sgn)->getAssociatedFunctionDeclaration()) {
        funcCalls[*func].insert(p);
        break;
      }
    }
  }
}

/***********************************
 *** IntraUniDirectionalDataflow ***
 ***********************************/


// Propagates the dataflow info from the current node's NodeState (curNodeState) to the next node's 
//     NodeState (nextNodeState).
// Returns true if the next node's meet state is modified and false otherwise.
bool IntraUniDirectionalDataflow::propagateStateToNextNode(
          const vector<Lattice*>& curNodeState, PartPtr curNode, int curNodeIndex,
          const vector<Lattice*>& nextNodeState, PartPtr nextNode)
{
  Dbg::region reg(analysisDebugLevel, 1, Dbg::region::topLevel, "propagateStateToNextNode");
  bool modified = false;
  vector<Lattice*>::const_iterator itC, itN;
  if(analysisDebugLevel>=1){
    Dbg::dbg << endl << "Propagating to Next Node: "<<nextNode.getNode()<<"["<<nextNode.getNode()->class_name()<<" | "<<Dbg::escape(nextNode.getNode()->unparseToString())<<"]"<<endl;
    int j;
    for(j=0, itC = curNodeState.begin(); itC != curNodeState.end(); itC++, j++) {
      Dbg::dbg << "Cur node: Lattice "<<j<<":"<<endl;
      { Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg<<(*itC)->str("      ")<<endl; }
    }
    for(j=0, itN = nextNodeState.begin(); itN != nextNodeState.end(); itN++, j++) {
      Dbg::dbg << "Next node: Lattice "<<j<<": "<<endl;
      { Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg<<(*itN)->str("      ")<<endl; }
    }
  }

  // Update forward info above nextNode from the forward info below curNode.
  
  // Compute the meet of the dataflow information along the curNode->nextNode edge with the 
  // next node's current state one Lattice at a time and save the result above the next node.
  Dbg::dbg << "curNodeState.size()="<<curNodeState.size()<<" nextNodeState.size()="<<nextNodeState.size()<<endl;
  for(itC = curNodeState.begin(), itN = nextNodeState.begin();
      itC != curNodeState.end() && itN != nextNodeState.end(); 
      itC++, itN++)
  {
    Dbg::indent ind(analysisDebugLevel, 1);
    Dbg::dbg << "itN(finite="<<(*itN)->finiteLattice()<<")=";
    { Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg<<(*itN)->str()<<endl; }
    Dbg::dbg << "itC(finite="<<(*itC)->finiteLattice()<<")=";
    { Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg<<(*itC)->str("          ")<<endl; }
    // Finite Lattices can use the regular meet operator, while infinite Lattices
    // must also perform widening to ensure convergence.
    if((*itN)->finiteLattice())
      modified = (*itN)->meetUpdate(*itC) || modified;
    else
    {
      //InfiniteLattice* meetResult = (InfiniteLattice*)itN->second->meet(itC->second);
      InfiniteLattice* meetResult = dynamic_cast<InfiniteLattice*>((*itN)->copy());
      Dbg::dbg << "*itN: ";
      { Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg<<dynamic_cast<InfiniteLattice*>(*itN)->str() << endl; }
      Dbg::dbg << "*itC: ";
      { Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg<<dynamic_cast<InfiniteLattice*>(*itC)->str() << endl; }
      meetResult->meetUpdate(*itC);
      Dbg::dbg << "meetResult: " <<endl;
      { Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg<<meetResult->str() << endl; }
    
      // Widen the resulting meet
      modified =  dynamic_cast<InfiniteLattice*>(*itN)->widenUpdate(meetResult);
      delete meetResult;
    }
  }
  
  if(analysisDebugLevel>=1) {
    Dbg::indent ind(analysisDebugLevel, 1);
    if(modified)
    {
      Dbg::dbg << "  Next node's in-data modified. Adding..."<<endl;
      int j=0;
      for(itN = nextNodeState.begin(); itN != nextNodeState.end(); itN++, j++)
      {
        Dbg::dbg << "Propagated: Lattice "<<j<<":"<<endl;
        { Dbg::indent ind(analysisDebugLevel, 1); Dbg::dbg<<(*itN)->str()<<endl; }
      }
    }
    else
      Dbg::dbg << "  No modification on this node"<<endl;
  }

  return modified;
}

/**********************************
 *** IntraFWPerVariableDataflow ***
 ********************************** /

IntraFWPerVariableDataflow::IntraFWPerVariableDataflow(bool includeScalars, bool includeArrays)
{
  this->includeScalars = includeScalars;
  this->includeArrays = includeArrays;
  constVarLattices_init = false;
}

// returns the set of global variables(scalars and/or arrays)
varIDSet& IntraFWPerVariableDataflow::getGlobalVars()
{
  if(includeScalars)
  {
    if(includeArrays)
      return varSets::getGlobalVars(getProject());
    else
      return varSets::getGlobalScalars(getProject());
  }
  else
    return varSets::getGlobalArrays(getProject());
}

// returns the set of variables(scalars and/or arrays) declared in this function
varIDSet& IntraFWPerVariableDataflow::getLocalVars(Function func)
{
  if(includeScalars)
  {
    if(includeArrays)
      return varSets::getLocalVars(func);
    else
      return varSets::getLocalScalars(func);
  }
  else
    return varSets::getLocalArrays(func);
}

// returns the set of variables(scalars and/or arrays) referenced in this function
varIDSet& IntraFWPerVariableDataflow::getRefVars(Function func)
{
  if(includeScalars)
  {
    if(includeArrays)
      return varSets::getLocalVars(func);
    else
      return varSets::getLocalScalars(func);
  }
  else
    return varSets::getLocalArrays(func);
}

// generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
vector<Lattice*> IntraFWPerVariableDataflow::genInitState(const Function& func, PartPtr p, const NodeState& state)
{
  printf("IntraFWPerVariableDataflow::genInitState(%s(), [%s | %s])\n", func.get_name().getString(), n.getNode()->class_name().c_str(), p.getNode()->unparseToString().c_str());
    
  // initState contains the non-variable state
  vector<Lattice*> initState;
  Lattice* newLattice = genInitNonVarState(func, n, state);
  if(newLattice!=NULL) initState.push_back(newLattice);
  varIDSet& refVars = getRefVars(func);

  // if varLatticeIndex has not yet been set up for this function
  if(varLatticeIndex.find(func) == varLatticeIndex.end())
  {
    map<varID, int> varIndex;
    int varLatticeCntr=initState.size();
    for(varIDSet::iterator it = refVars.begin(); it!=refVars.end(); it++, varLatticeCntr++)
      varIndex[*it] = varLatticeCntr;
    varLatticeIndex[func] = varIndex;
  }
  
  // iterate over all the variables (arrays and/or scalars) referenced in this function
  // adding their initial lattices to initState
  for(varIDSet::iterator it = refVars.begin(); it!=refVars.end(); it++)
  {
    newLattice = genInitVarState(func, n, state);
    if(newLattice!=NULL) initState.push_back(newLattice);
  }
  
  return initState;
}

Lattice* IntraFWPerVariableDataflow::getVarLattice(const Function& func, const varID& var, const vector<Lattice*>& dfInfo)
{
  // initialize constVarLattices, if necessary
  if(!constVarLattices_init)
  {
    constVarLattices = genConstVarLattices();
    constVarLattices_init=true;
  }
  
  map<varID, Lattice*>::iterator constIt;
  // if this is a constant variable
  if((constIt = constVarLattices.find(var)) != constVarLattices.end())
    // return its lattice
    return constIt->second;
  // else, if this is a regular variable
  else
  {
    int varIndex = (varLatticeIndex.find(func)->second).find(var)->second;
    return dfInfo[varIndex];
  }
}*/

/******************************************************
 ***      printDataflowInfoPass         ***
 *** Prints out the dataflow information associated ***
 *** with a given analysis for every CFG node a     ***
 *** function.              ***
 ******************************************************/

//vector<Lattice*> printDataflowInfoPass::genInitState(const Function& func, PartPtr p, const NodeState& state)
void printDataflowInfoPass::genInitState(const Function& func, PartPtr p, const NodeState& state,
           vector<Lattice*>& initLattices, vector<NodeFact*>& initFacts)
  
{
  //vector<Lattice*> initState;
  initLattices.push_back((Lattice*)(new BoolAndLattice(p)));
  //return initState;
}
  
bool printDataflowInfoPass::transfer(const Function& func, PartPtr p, NodeState& state, const vector<Lattice*>& dfInfo)
{
  Dbg::dbg << "-----#############################--------\n";
  Dbg::dbg << "Node: ["<<Dbg::escape(p.getNode()->unparseToString())<<" | "<< p.getNode()->class_name()<<"]\n";
  // print out all the dataflow facts associated with analysis at this node
  
  const /*map <int, NodeFact*>*/vector<NodeFact*> facts = state.getFacts(analysis);
  int i=0;
  for(/*map <int, NodeFact*>*/vector<NodeFact*>::const_iterator it = facts.begin(); it!=facts.end(); it++, i++)
  {
    //Dbg::dbg << "Fact "<<it->first<<": \n    "<<it->second->str("  ")<<endl;
    Dbg::dbg << "Fact "<<i<<": \n    "<<(*it)->str("  ")<<endl;
  }
  
  const vector<Lattice*> dfInfoAbove  = state.getLatticeAbove((Analysis*)analysis);
  const vector<Lattice*> dfInfoBelow  = state.getLatticeBelow((Analysis*)analysis);
  
  vector<Lattice*>::const_iterator itA, itB;
  for(itA = dfInfoAbove.begin(), itB = dfInfoBelow.begin();
      itA != dfInfoAbove.end() && itB != dfInfoBelow.end(); 
      itA++, itB++)
  {
    Dbg::dbg << "    Lattice Above "<<*itA<<": \n    "<<(*itA)->str("  ")<<endl;
    Dbg::dbg << "    Lattice Below "<<*itB<<": \n    "<<(*itB)->str("  ")<<endl;
  }
  
  return dynamic_cast<BoolAndLattice*>(dfInfo[0])->set(true);
}

/*************************************
 *** UnstructuredPassInterDataflow ***
 *************************************/
void UnstructuredPassInterDataflow::runAnalysis()
{
  set<FunctionState*> allFuncs = FunctionState::getAllDefinedFuncs();
  IntraProceduralDataflow *intraDataflow = dynamic_cast<IntraProceduralDataflow*>(intraAnalysis);
  ROSE_ASSERT(intraDataflow);
  
  // iterate over all functions with bodies
  for(set<FunctionState*>::iterator it=allFuncs.begin(); it!=allFuncs.end(); it++)
  {
    const Function& func = (*it)->func;
    FunctionState* fState = FunctionState::getDefinedFuncState(func);
    
    // Initialize the lattices used by this analysis, if this is the first time the analysis visits this function
    if(visited.find(func) == visited.end()) {
      InitDataflowState ids(intraDataflow);
      ids.runAnalysis(func, &(fState->state));
      visited.insert(func);
    }
    
    // Call the current intra-procedural dataflow as if it were a generic analysi
    intraAnalysis->runAnalysis(func, &(fState->state));
  }
}

/************************
 *** DFStateAtReturns ***
 ************************ /

/ *DFStateAtReturns::DFStateAtReturns()
{}* /

DFStateAtReturns::DFStateAtReturns(vector<Lattice*>& latsAtFuncReturn, vector<Lattice*>& latsRetVal) : 
    latsAtFuncReturn(latsAtFuncReturn), latsRetVal(latsRetVal)
{}

// Returns a copy of this node fact
NodeFact* DFStateAtReturns::copy() const{
/ *      DFStateAtReturns* newState = new DFStateAtReturns();
  for(vector<Lattice*>::const_iterator l=latsAtFuncReturn.begin(); l!=latsAtFuncReturn.end(); l++)
    newState->latsAtFuncReturn.push_back((*l)->copy());
  for(vector<Lattice*>::const_iterator l=latsRetVal.begin(); l!=latsRetVal.end(); l++)
    newState->latsRetVal.push_back((*l)->copy());
  return newState;* /
  // We don't need a copy method
  ROSE_ASSERT(0);
  return NULL;
}

// Applies the MergeAllReturnStates analysis on the given function, incorporating the results into
// the lattices held by this object.
// Returns true of the lattices change as a result and false otherwise.
bool DFStateAtReturns::mergeReturnStates(const Function& func, FunctionState* fState, ComposedAnalysis* intraAnalysis)
{
  // Create a MergeAllReturnStates, initializing its lattices with this object's lattices to make sure
  // that the analysis pass simply updates these original lattices in-place, also updating the state of 
  // this object in the process.
  Dbg::region r(analysisDebugLevel, 1, "Merging Return States");
  MergeAllReturnStates mars(intraAnalysis, latsAtFuncReturn, latsRetVal);
  mars.runAnalysis(func, &(fState->state));
  // If this is the first time we're computing the lattices at return statements, initialize lattices
  //if(latsAtFuncReturn.size()==0) latsAtFuncReturn = mars.getMergedLatsRetStmt();
  if(latsRetVal.size()==0)       latsRetVal       = mars.getMergedLatsRetVal();
  
  if(analysisDebugLevel>=1) {
    / *Dbg::dbg << "DFStateAtReturns final #latsAtFuncReturn="<<latsAtFuncReturn.size()<<": \n";
    for(vector<Lattice*>::iterator l=latsAtFuncReturn.begin(); l!=latsAtFuncReturn.end(); l++)
        Dbg::dbg << "    "<<(*l)->str("      ")<<endl;* /
    
    Dbg::dbg << "DFStateAtReturns final #latsRetVal="<<latsRetVal.size()<<": \n";
    {
      Dbg::indent(analysisDebugLevel, 1);
      for(vector<Lattice*>::iterator l=latsRetVal.begin(); l!=latsRetVal.end(); l++)
          Dbg::dbg << (*l)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    }
    Dbg::dbg << "modified = "<<mars.getModified()<<endl;
  }
  bool modified = mars.getModified();
  return modified;
}

string DFStateAtReturns::str(string indent) {
  ostringstream outs;
  outs << "<DFStateAtReturns: \n";
  / *outs << indent << " latsAtFuncReturn=\n";
  for(vector<Lattice*>::iterator l=latsAtFuncReturn.begin(); l!=latsAtFuncReturn.end(); ) {
    outs << indent << "&nbsp;&nbsp;&nbsp;&nbsp;"<<((*l) ? (*l)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;") : "NULL");
    l++;
    if(l!=latsAtFuncReturn.end()) outs <<endl;
  }* /
  outs << endl;
  outs << indent << " latsRetVal=\n";
  for(vector<Lattice*>::iterator l=latsRetVal.begin(); l!=latsRetVal.end(); ) {
    outs << indent << "&nbsp;&nbsp;&nbsp;&nbsp;"<<((*l) ? (*l)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;") : "NULL");
    l++;
    if(l!=latsRetVal.end()) outs <<endl;
  }
  outs << ">";
  return outs.str();
}*/

/****************************
 *** MergeAllReturnStates ***
 ****************************/

void MergeAllReturnStates::visit(const Function& func, PartPtr p, NodeState& state)
{
  SgNode* sgn = p.getNode();
  //if(analysisDebugLevel>=1) Dbg::dbg << "MergeAllReturnStates::visit() func="<<func.get_name().getString()<<"()"<<endl; // sgn="<<sgn<<"["<<Dbg::escape(sgn->unparseToString())<<" | "<<sgn->class_name()<<"]\n";
  //Dbg::dbg << "visit {{{: modified="<<modified<<endl;
  
  Dbg::indent ind(analysisDebugLevel, 1);
  
  // If this is an explicit return statement
  if(isSgReturnStmt(sgn)) {
    if(analysisDebugLevel>=1)
      Dbg::dbg << "MergeAllReturnStates::visit() isSgReturnStmt(sgn)->get_expression()="<<isSgReturnStmt(sgn)->get_expression()<<"["<<Dbg::escape(isSgReturnStmt(sgn)->get_expression()->unparseToString())<<" | "<<isSgReturnStmt(sgn)->get_expression()->class_name()<<"]\n";

    ROSE_ASSERT(NodeState::getNodeStates(p).size()==1);
    NodeState* state = *(NodeState::getNodeStates(p).begin());

    // Incorporate the entire dataflow state at the return statement
    if(analysisDebugLevel>=1) Dbg::dbg << "    Merging dataflow state at return statement\n";
    //modified = mergeLats(mergedLatsRetStmt, state->getLatticeAbove((Analysis*)analysis)) || modified;

    // Incorporate just the portion of the dataflow state that corresponds to the value being returned,
    // assuming that any information is available
    vector<Lattice*> exprLats;
    std::set<pair<MemLocObjectPtr, MemLocObjectPtr> > retVal2Decl;
    retVal2Decl.insert(make_pair(analysis->getComposer()->Expr2MemLoc(isSgReturnStmt(sgn)->get_expression(), p, analysis).expr,
                                 analysis->getComposer()->Expr2MemLoc(func.get_declaration()->search_for_symbol_from_symbol_table(), p, analysis).mem));
    for(vector<Lattice*>::const_iterator l=state->getLatticeAbove((Analysis*)analysis).begin(); 
        l!=state->getLatticeAbove((Analysis*)analysis).end(); l++) {
      /*exprLats.push_back((*l)->project(analysis->getComposer()->Expr2MemLoc(isSgReturnStmt(sgn)->get_expression(), p, analysis).expr,
                                       analysis->getComposer()->Expr2MemLoc(func.get_declaration()->search_for_symbol_from_symbol_table(), p, analysis).mem));*/
      exprLats.push_back((*l)->remapML(retVal2Decl));
    }
    if(analysisDebugLevel>=1) Dbg::dbg << "    Merging dataflow state of return value\n";
    modified = mergeLats(mergedLatsRetVal, exprLats) || modified; 
    // Deallocate the newly-created renamed lattices
    for(vector<Lattice*>::iterator l=exprLats.begin(); l!=exprLats.end(); l++) 
      delete *l;
  }
  // If this is the end of a function, which is an implicit return that has no return value
  else if(isSgFunctionDefinition(sgn)) {
    if(analysisDebugLevel>=1)
      Dbg::dbg << "MergeAllReturnStates::visit() isSgFunctionDefinition\n";
    
    ROSE_ASSERT(NodeState::getNodeStates(p).size()==1);
    NodeState* state = *(NodeState::getNodeStates(p).begin());
    
    // Incorporate the entire dataflow state at the implicit return statement
    //modified = mergeLats(mergedLatsRetStmt, state->getLatticeAbove((Analysis*)analysis)) || modified;
    modified = mergeLats(mergedLatsRetVal, state->getLatticeAbove((Analysis*)analysis)) || modified;
  }
  
  //Dbg::dbg << "visit >>>: modified="<<modified<<endl;
}

// Merges the lattices in the given vector into mergedLats. 
// Returns true of mergeLats changes as a result and false otherwise.
bool MergeAllReturnStates::mergeLats(vector<Lattice*>& mergedLat, const vector<Lattice*>& lats) {
  Dbg::indent(analysisDebugLevel, 1);
  // If this is the first return statement we've observed, initialize mergedLat with its lattices
  if(mergedLat.size()==0) {
    if(analysisDebugLevel>=1) Dbg::dbg << "Fresh lattice: "<<endl;
    for(vector<Lattice*>::const_iterator l=lats.begin(); l!=lats.end(); l++) {
      mergedLat.push_back((*l)->copy());
      if(analysisDebugLevel>=1) Dbg::dbg <<(*l)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    }
    return true;
  // Otherwise, merge lats into mergedLats
  } else {
    if(analysisDebugLevel>=1) {
      if(mergedLat.size()!=lats.size()) {
        Dbg::dbg << "#mergedLat="<<mergedLat.size()<<endl;
        for(vector<Lattice*>::iterator ml=mergedLat.begin(); ml!=mergedLat.end(); ml++)
          Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<(*ml)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
        Dbg::dbg << "#lats="<<lats.size()<<endl;
        for(vector<Lattice*>::const_iterator l=lats.begin(); l!=lats.end(); l++)
          Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<(*l)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
      }
    }
    ROSE_ASSERT(mergedLat.size()==lats.size());
    vector<Lattice*>::const_iterator l;
    vector<Lattice*>::iterator ml;
    bool modified = false;
    if(analysisDebugLevel>=1) Dbg::dbg << "    Updating lattice: \n";
    for(l=lats.begin(), ml=mergedLat.begin(); l!=lats.end(); l++, ml++) {
      if(analysisDebugLevel>=1) {
        Dbg::dbg << "Update: "<<(*l)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
        Dbg::dbg << "+ Orig: "<<(*ml)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
      }
      modified = (*ml)->meetUpdate(*l) || modified;
      if(analysisDebugLevel>=1) {
        Dbg::dbg << "=> New: "<<(*ml)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
        Dbg::dbg << "modified="<<modified<<endl;
      }
    }
    return modified;
  }
}

// Deallocates all the merged lattices
MergeAllReturnStates::~MergeAllReturnStates()
{
  /*for(vector<Lattice*>::iterator ml=mergedLat.begin(); ml!=mergedLat.end(); ml++)
    delete *ml;*/
}


/****************************
 *** SetAllReturnStates ***
 ****************************/

void SetAllReturnStates::visit(const Function& func, PartPtr p, NodeState& state)
{
  SgNode* sgn = p.getNode();
  //if(analysisDebugLevel>=1) Dbg::dbg << "SetAllReturnStates::visit() func="<<func.get_name().getString()<<"() sgn="<<sgn<<"["<<Dbg::escape(sgn->unparseToString())<<" | "<<sgn->class_name()<<"], #state.getLatticeAbove="<<state.getLatticeAboveMod((Analysis*)analysis).size()<<", #lats="<<lats.size()<<endl;
  //Dbg::dbg << "visit {{{: modified="<<modified<<endl;
  
  Dbg::indent ind(analysisDebugLevel, 1);
  
  if(isSgFunctionParameterList(sgn)) { 
    paramList = isSgFunctionParameterList(sgn);
    paramsState = &state;
  }
  
  // If this is an explicit return statement
  if(isSgReturnStmt(sgn)) {
    Dbg::region r(analysisDebugLevel, 1, Dbg::region::topLevel, "Setting dataflow at Return Statement");
    
    if(analysisDebugLevel>=1)
      Dbg::dbg << "SetAllReturnStates::visit() isSgReturnStmt(sgn)->get_expression()="<<isSgReturnStmt(sgn)->get_expression()<<"["<<Dbg::escape(isSgReturnStmt(sgn)->get_expression()->unparseToString())<<" | "<<isSgReturnStmt(sgn)->get_expression()->class_name()<<"]\n";

    //ROSE_ASSERT(NodeState::getNodeStates(p).size()==1);
    //NodeState* state = *(NodeState::getNodeStates(p).begin());

    // Incorporate the entire dataflow state at the return statement
    // Incorporate just the portion of the dataflow state that corresponds to the value being returned,
    // assuming that any information is available
    std::set<pair<MemLocObjectPtr, MemLocObjectPtr> > decl2RetVal;
    decl2RetVal.insert(make_pair(analysis->getComposer()->Expr2MemLoc(func.get_declaration()->search_for_symbol_from_symbol_table(), p, analysis).mem,
                                 analysis->getComposer()->Expr2MemLoc(isSgReturnStmt(sgn)->get_expression(), p, analysis).expr));

    vector<Lattice*> exprLats;
    for(vector<Lattice*>::const_iterator l=lats.begin(); l!=lats.end(); l++) {
      exprLats.push_back((*l)->remapML(decl2RetVal));
    }
    
    if(analysisDebugLevel>=1) Dbg::dbg << "    Setting dataflow state of return value" << endl;
    modified = mergeLats(state.getLatticeBelowMod((Analysis*)analysis), exprLats) || modified; 
    
    // Deallocate the newly-created renamed lattices
    for(vector<Lattice*>::iterator l=exprLats.begin(); l!=exprLats.end(); l++) 
      delete *l;
  }
  // If this is the end of a function, which is an implicit return that has no return value
  else if(isSgFunctionDefinition(sgn)) {
    Dbg::region r(analysisDebugLevel, 1, Dbg::region::topLevel, "Setting dataflow at isSgFunctionDefinition");
    
    //ROSE_ASSERT(NodeState::getNodeStates(p).size()==1);
    //NodeState* state = *(NodeState::getNodeStates(p).begin());
    
    // Incorporate the entire dataflow state at the implicit return statement
    //modified = mergeLats(mergedLatsRetStmt, state->getLatticeAbove((Analysis*)analysis)) || modified;
    modified = mergeLats(state.getLatticeBelowMod((Analysis*)analysis), lats) || modified;
  }
  
  //Dbg::dbg << "visit >>>: modified="<<modified<<endl;
}

// Merges the lattices in the given vector into mergedLats. 
// Returns true of mergeLats changes as a result and false otherwise.
bool SetAllReturnStates::mergeLats(vector<Lattice*>& mergedLat, const vector<Lattice*>& lats) {
  Dbg::indent(analysisDebugLevel, 1);
  
  if(analysisDebugLevel>=1) {
    if(mergedLat.size()!=lats.size()) {
      Dbg::dbg << "#mergedLat="<<mergedLat.size()<<endl;
      for(vector<Lattice*>::iterator ml=mergedLat.begin(); ml!=mergedLat.end(); ml++)
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<(*ml)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
      Dbg::dbg << "#lats="<<lats.size()<<endl;
      for(vector<Lattice*>::const_iterator l=lats.begin(); l!=lats.end(); l++)
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<(*l)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    }
  }
  ROSE_ASSERT(mergedLat.size()==lats.size());
  vector<Lattice*>::const_iterator l;
  vector<Lattice*>::iterator ml;
  bool modified = false;
  if(analysisDebugLevel>=1) Dbg::dbg << "Updating lattice:"<<endl;
  for(l=lats.begin(), ml=mergedLat.begin(); l!=lats.end(); l++, ml++) {
    if(analysisDebugLevel>=1) {
      Dbg::dbg << "Update: "<<(*l)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
      Dbg::dbg << "+ Orig: "<<(*ml)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    }
    modified = (*ml)->meetUpdate(*l) || modified;
    if(analysisDebugLevel>=1) {
      Dbg::dbg << "=> New: "<<(*ml)->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
      Dbg::dbg << "modified="<<modified<<endl;
    }
  }
  return modified;
}

/*************************************************
 *** ContextInsensitiveInterProceduralDataflow ***
 *************************************************/

ContextInsensitiveInterProceduralDataflow::ContextInsensitiveInterProceduralDataflow
        (IntraUniDirectionalDataflow* intraDataflow, SgIncidenceDirectedGraph* graph) :
             InterProceduralAnalysis((IntraProceduralAnalysis*)intraDataflow),
             InterProceduralDataflow((IntraProceduralDataflow*)intraDataflow), 
             TraverseCallGraphDataflow(graph)
{
  // Record that the functions that have no callers are being analyzed because the data flow at their
  // callers (the environment) has changed. This is done to jump-start the analysis.
  for(set<const CGFunction*>::iterator func=noPred.begin(); func!=noPred.end(); func++)
    remainingDueToCallers.insert(**func);
  
  if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::none) return;
  
  // Record as part of each FunctionState the merged lattice states above the function's return statements
  set<FunctionState*> allFuncs = FunctionState::getAllDefinedFuncs();
  for(set<FunctionState*>::iterator it=allFuncs.begin(); it!=allFuncs.end(); it++)
  {
    FunctionState* funcS = *it;
    if(funcS->func.get_definition()) {
//DFStateAtReturns NEED REFERENCES TO vector<Lattice*>'S RATHER THAN COPIES OF THEM
      std::vector<Lattice *> initLats;
      vector<NodeFact*> initFacts;
      if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::fw)
        intraDataflow->genInitState(funcS->getFunc(), cfgUtils::getFuncStartCFG(funcS->getFunc().get_definition(), filter), funcS->state, initLats, initFacts);
      else if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::bw)
        intraDataflow->genInitState(funcS->getFunc(), cfgUtils::getFuncEndCFG(funcS->getFunc().get_definition(), filter), funcS->state, initLats, initFacts);
      funcS->state.setLattices(intraAnalysis, initLats);
      funcS->state.setFacts(intraAnalysis, initFacts);
      /*funcS->retState.setLattices(intraAnalysis, empty);
      
      funcS->state.addFact(this, 0, 
             new DFStateAtReturns(funcS->state.getLatticeBelowMod(intraAnalysis), 
                                  funcS->retState.getLatticeBelowMod(intraAnalysis)));*/
      Dbg::dbg << "Return state for function " << funcS << " " << funcS->func.get_name().getString() << endl
               << "funcS->state" << funcS->state.str(intraAnalysis) << endl;
      //         << "funcS->retState="<<  funcS->retState.str(intraDataflow) << endl;
    }
  }
  
/*      set<FunctionState*> allFuncs = FunctionState::getAllDefinedFuncs();
  //Function main;
  
  // initialize the dataflow state of all functions with bodies
  for(set<FunctionState*>::iterator it=allFuncs.begin(); it!=allFuncs.end(); it++)  
  {
    FunctionState* funcS = *it;
    Function func = funcS->func;
    vector<Lattice*> initState = intraDataflow->genInitState(
             func, func.get_definition()->cfgForBeginning(), funcS->state);

printf("ContextInsensitiveInterProceduralDataflow initState %s():\n", (*it)->func.get_name().getString());
for(vector<Lattice*>::iterator it = initState.begin(); 
    it!=initState.end(); it++)
{       
  Dbg::dbg << *it << ": " << (*it)->str("    ") << endl;
}
  
    funcS->state.setLattices(this, initState);
    
     // remember the main() function
    if(strcmp(func.get_name().getString(), "main")==0)
      main = func;
  }
  
  for(set<FunctionState*>::iterator it=allFuncs.begin(); it!=allFuncs.end(); it++)  
  {
    FunctionState* funcS = *it;
  }*/
}
  
// The transfer function that is applied to SgFunctionCallExp nodes to perform the appropriate state transfers
// fw - =true if this is a forward analysis and =false if this is a backward analysis
// n - the dataflow node that is being processed
// state - The NodeState object that describes the dataflow state immediately before (if fw=true) or immediately after 
//   (if fw=false) the SgFunctionCallExp node, as established by earlier analysis passes
// dfInfo - The Lattices that this transfer function operates on. The function propagates them 
//    to the callee function and overwrites them with the dataflow result of calling this function.
/*// retState - Pointer reference to a Lattice* vector that will be assigned to point to the lattices of
//    the function call's return value. The caller may not modify these lattices.*/
// Returns true if any of the input lattices changed as a result of the transfer function and
//    false otherwise.  
bool ContextInsensitiveInterProceduralDataflow::transfer(
           const Function& caller, PartPtr p, NodeState& state, 
           const vector<Lattice*>& dfInfo/*, vector<Lattice*>** retState*/)
{
  // First pass information from the caller to the callee, placing the callee on the worklist if it is modified.
  // Then, we do not wait for the callee to be processed but rather optimistically guess that the new pass will not 
  // change the info after it and simply take the current info and pass it back to the caller. This is simpler and
  // ensures that we get debug output for the caller as one contiguous sequence that is not interspersed by debug 
  // info of analysis of other functions.
  // Caller -> Callee
  //   Remap lattices before the call from caller's to callee's scope
  //      fw: all arguments mapped to their parameters
  //      bw: all arguments passed by reference mapped to their parameters
  //          Function call expression mapped to the function's SgDefinition
  //   Merge resulting lattice to the lattice before the function in its FunctionState
  //   If this lattice is modified, merge the results 
  // Callee -> Caller
  //   Remap lattices after the callee function to the caller's scope. It is assumed that the state after the function 
  //     is the merge of all the states at possible end points. For fw this means the function exit and the
  //     return statements and for bw it is just the function's entry. For fw it is also assumed that the function's 
  //     symbol is mapped to the merge of all return values in all the return statements.
  //     fw: all parameters passed by reference are mapped to their callers (remaining parameters are ignored but 
  //         if a live-dead analysis is used then they'll automatically be mapped to DEAD, meaning that in practice 
  //         it won't be necessary to remove them as part of remap). The function's symbol is mapped to the function
  //         call expression in the caller.
  //     bw: all parameters are mapped back to their arguments
   
  bool modified = false;
  SgFunctionCallExp* call = isSgFunctionCallExp(p.getNode());
  Function callee(call);
  ROSE_ASSERT(call);
  
  ComposedAnalysis *intraDataflow = dynamic_cast<ComposedAnalysis*>(intraAnalysis);
  ROSE_ASSERT(intraDataflow);
  
  ROSE_ASSERT(intraDataflow->getDirection()!=IntraUniDirectionalDataflow::none);
  
  if(analysisDebugLevel > 0)
    Dbg::dbg << "ContextInsensitiveInterProceduralDataflow::transfer "<<caller.get_name().getString()<<"()=>"<<callee.get_name().getString()<<"()\n";
  if(callee.get_definition())
  {
    FunctionState* funcS = FunctionState::getDefinedFuncState(callee);
    // The lattices before the function (forward: before=above, after=below; backward: before=below, after=above)
    const vector<Lattice*>* funcLatticesBefore;
    if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::fw)
      funcLatticesBefore = &(funcS->state.getLatticeAbove((Analysis*)intraAnalysis));
    else if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::bw)
      funcLatticesBefore = &(funcS->state.getLatticeBelow((Analysis*)intraAnalysis));
      
    //if(analysisDebugLevel > 0)
    //      printf("  dfInfo.size()=%d, funcLatticesBefore->size()=%d, this=%p\n", dfInfo.size(), funcLatticesBefore->size(), this);
    
    // Caller -> Callee
    // ----------------
    {
      Dbg::region reg(analysisDebugLevel, 1, Dbg::region::topLevel, "Inter::transfer Caller -> Callee");
      // Create a MemLocObject map to remap the lattices from the caller's to the callee's context
      std::set<pair<MemLocObjectPtr, MemLocObjectPtr> > ml2ml;
      if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::fw)
        FunctionState::setArgParamMap(call, ml2ml, 
                                      getIntraComposeAnalysis()->getComposer(),
                                      getIntraComposeAnalysis());
      else if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::bw) {
        FunctionState::setArgByRef2ParamMap(call, ml2ml, 
                                      getIntraComposeAnalysis()->getComposer(),
                                      getIntraComposeAnalysis());
      }
      Dbg::dbg << "ml2ml="<<endl;
      for(std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >::const_iterator m=ml2ml.begin(); m!=ml2ml.end(); m++) {
        Dbg::indent ind(analysisDebugLevel, 1);
        Dbg::dbg << m->first.get()->str("")<<" => "<<m->second.get()->str("")<<endl;
      }

      // Update the function's entry/exit state with the caller's state at the call site
      vector<Lattice*>::const_iterator itCalleeBefore, itCallerBefore;
      for(itCallerBefore = dfInfo.begin(), itCalleeBefore = funcLatticesBefore->begin(); 
          itCallerBefore!=dfInfo.end() && itCalleeBefore!=funcLatticesBefore->end(); 
          itCallerBefore++, itCalleeBefore++)
      {
        Lattice* calleeL = *itCalleeBefore;
        Lattice* callerL = *itCallerBefore;

        if(analysisDebugLevel>=1) {
          Dbg::indent(analysisDebugLevel, 1);
          Dbg::dbg << "callerL=["<<calleeL<<"]"<<endl;
          {Dbg::indent indt; Dbg::dbg<<callerL->str()<<endl;}
          Dbg::dbg << "Before calleeL=["<<calleeL<<"]"<<endl;
          {Dbg::indent indt; Dbg::dbg<<calleeL->str()<<endl; }
        }

        Lattice* remappedL = callerL->remapML(ml2ml);
        if(analysisDebugLevel>=1) {
          Dbg::dbg << "remappedCallerL=["<<remappedL<<"]="<<endl;
          { Dbg::indent ind; Dbg::dbg<<remappedL->str()<<endl; }
        }

        // Update the callee's Lattice with the new information at the call site
        modified = calleeL->meetUpdate(remappedL) || modified;

        if(analysisDebugLevel>=1) {
          Dbg::dbg << "After modified = "<<modified << endl;
          Dbg::dbg << "calleeL=["<<calleeL<<"]="<<endl;
          { Dbg::indent ind; Dbg::dbg<<calleeL->str()<<endl; }
        }

  //!!!     delete remappedL;
      }

      // If this resulted in the dataflow information before the callee changing, add it to the remaining list.
      if(modified) {
        if(analysisDebugLevel > 0) Dbg::dbg << "ContextInsensitiveInterProceduralDataflow::transfer Incoming Dataflow info modified\n";
        // Record that the callee function needs to be re-analyzed because of new information from the caller
        TraverseCallGraphDataflow::addToRemaining(getFunc(callee));
        remainingDueToCallers.insert(getFunc(callee));
      }
    } // Caller -> Callee
      
    // Callee -> Caller
    // ----------------
    {
      Dbg::region reg(analysisDebugLevel, 1, Dbg::region::topLevel, "Inter::transfer Callee -> Caller");
      // The lattices after the function (forward: before=above, after=below; backward: before=below, after=above).
      const vector<Lattice*>* funcLatticesAfter;
      if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::fw) 
        funcLatticesAfter = &(funcS->state.getLatticeBelow((Analysis*)intraAnalysis));
      else if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::bw)
        funcLatticesAfter = &(funcS->state.getLatticeAbove((Analysis*)intraAnalysis));

      //Dbg::dbg << "  funcLatticesAfter->size()="<<funcLatticesAfter->size()<<endl;   
      // Create a MemLocObject map to remap the lattices from the callee's to the caller's context
      std::set<pair<MemLocObjectPtr, MemLocObjectPtr> > ml2ml;
      if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::fw)
        FunctionState::setArgByRef2ParamMap(call, ml2ml, 
                                      getIntraComposeAnalysis()->getComposer(),
                                      getIntraComposeAnalysis());
      else if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::bw)
        FunctionState::setArgParamMap(call, ml2ml, 
                                      getIntraComposeAnalysis()->getComposer(),
                                      getIntraComposeAnalysis());        
      // Invert the above mappings to map parameters to arguments
      ml2ml = FunctionState::invertArg2ParamMap(ml2ml);
      
      // Transfer the result of the function call into the dfInfo Lattices.
      vector<Lattice*>::const_iterator itCalleeAfter, itCallerAfter;
      for(itCallerAfter = dfInfo.begin(), itCalleeAfter = funcLatticesAfter->begin(); 
          itCallerAfter!=dfInfo.end() && itCalleeAfter!=funcLatticesAfter->end(); 
          itCallerAfter++, itCalleeAfter++)
      {
        Dbg::indent ind(analysisDebugLevel, 1);
        Lattice* callerL = *itCallerAfter;
        Lattice* calleeL = *itCalleeAfter;
        //Dbg::dbg << "      calleeL-after=["<<calleeL<<"] "<<calleeL->str()<<endl;

        if(analysisDebugLevel>=1) {
          Dbg::dbg << "callerL-before=["<<callerL<<"]"<<endl;
          {Dbg::indent ind; Dbg::dbg<<callerL->str()<<endl; }
          Dbg::dbg << "+calleeL=["<<calleeL<<"]"<<endl;
          {Dbg::indent ind; Dbg::dbg<<calleeL->str()<<endl; }
        }
        Dbg::dbg << "ml2ml="<<endl;
        for(std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >::const_iterator m=ml2ml.begin(); m!=ml2ml.end(); m++) {
          Dbg::indent ind(analysisDebugLevel, 1);
          Dbg::dbg << m->first.get()->str("")<<" => "<<m->second.get()->str("")<<endl;
        }

        // Update the caller's Lattice with the new information at the call site
        Lattice* calleeRemapped = calleeL->remapML(ml2ml);
        if(analysisDebugLevel>=1) {
          Dbg::dbg << "~calleeRemapped=["<<calleeRemapped<<"]"<<endl; 
          {Dbg::indent ind; Dbg::dbg<<calleeRemapped->str()<<endl; }
        }
        modified = callerL->replaceML(calleeRemapped) || modified;
        delete calleeRemapped;
        
        if(analysisDebugLevel>=1) {
          Dbg::dbg << "==> callerL-after=["<<callerL<<"] "<<endl;
          {Dbg::indent ind; Dbg::dbg<<callerL->str()<<endl; }
        }
      }
    } // Callee -> Caller
    // Point retState to the lattices of the function's return values
    //*retState = &(funcS->retState.getLatticeBelowMod((Analysis*)intraAnalysis));
    
    /*Dbg::dbg << "      retState="<<retState<<endl;
    for(vector<Lattice*>::iterator l=(*retState)->begin(); l!=(*retState)->end(); l++)
      Dbg::dbg << "    "<<(*l)->str("      ")<<endl;*/
  }
  // Don't do anything for functions with no definitions
  else
  {
    
  }
  
  return modified;
}

// Uses TraverseCallGraphDataflow to traverse the call graph.
void ContextInsensitiveInterProceduralDataflow::runAnalysis()
{
  traverse();
}

// Runs the intra-procedural analysis every time TraverseCallGraphDataflow passes a function.
void ContextInsensitiveInterProceduralDataflow::visit(const CGFunction* funcCG)
{
  Function func = *funcCG;
  Dbg::region r(analysisDebugLevel, 1, Dbg::region::topLevel, "function "+func.get_name().getString());
  
  // 1. Invoke the intra-procedural analysis on the given function. It is assumed that currently the state before this 
  // function is initialized to the dataflow state at one or more calls to func, remapped to the func's context. 
  //   fw: Call arguments remapped to function parameters
  //   bw: For pass-by-reference parameters the call arguments remapped to parameters, and
  //       the function's return value mapped to the function's symbol.
  // 2. propagate the state before func in its FunctionState to the intra analysis on the func.
  //   fw: Copy from before function to function start
  //   bw: Copy from before function to function end (all return statements and the end of the function) and within
  //       these lattices, maps the state associated with the function's symbol to be the state of the returned values 
  //       in all the return statements (done by SetAllReturnStates).
  // 3. Propagate the state produced by the intra analysis to the function's FunctionState after the function
  //   fw: Merge the state at all return statements and function end, mapping the state of the returned values to 
  //       the function's symbol (done by MergeAllReturnStates).
  //   bw: Copy from the function's start in the intra analysis to the FunctionState after it.
  
  if(func.get_definition())
  {
    FunctionState* fState = FunctionState::getDefinedFuncState(func);
    
    ComposedAnalysis *intraDataflow = dynamic_cast<ComposedAnalysis*>(intraAnalysis);
    ROSE_ASSERT(intraDataflow);
    /*// If this is the first time we've visited this function, initialize its dataflow state
    if(intraDataflow->visited.find(func) == intraDataflow->visited.end()) {
      vector<Lattice*>  initLats;
      vector<NodeFact*> initFacts;
      PartPtr startN = cfgUtils::getFuncStartCFG(func.get_definition(), filter);
      intraDataflow->genInitState(func, startN, fState->state, initLats, initFacts);
      //      intraAnalysis->genInitState(func, cfgUtils::getFuncEndCFG(func.get_definition()),
      //          fState->state, initLats, initFacts);
      fState->state.setLattices(intraAnalysis, initLats);
      fState->state.setFacts(intraAnalysis, initFacts);
    }*/
  
    if(analysisDebugLevel>=1)
    {
      if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::fw) {
        Dbg::dbg<<"Function LatticeAboveMod:"<<endl;
        for(vector<Lattice*>::const_iterator it = fState->state.getLatticeAbove((Analysis*)intraAnalysis).begin();
            it!=fState->state.getLatticeAbove((Analysis*)intraAnalysis).end(); it++)
        { Dbg::indent ind; Dbg::dbg << (*it)->str("") << endl; }
      } else if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::bw) {
        Dbg::dbg<<"Function LatticeBelowMod:"<<endl;
        for(vector<Lattice*>::const_iterator it = fState->state.getLatticeBelow((Analysis*)intraAnalysis).begin();
            it!=fState->state.getLatticeBelow((Analysis*)intraAnalysis).end(); it++)
        { Dbg::indent ind; Dbg::dbg << (*it)->str("") << endl; }
      }
    }
    
    // The reason why the visit function was called was because this is the first time this function was analyzed
    // or because its incoming information was changed. As such, by default we assume that the intra analysis
    // must be re-run.
    
    /*Dbg::dbg << "Visited functions (visited.find(func) == visited.end())="<<(visited.find(func) == visited.end())<<endl;
    for(std::set<Function>::iterator f=visited.begin(); f!=visited.end(); f++)
      Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<f->get_name().getString();*/
    
    // Initialize the lattices used by this analysis, if this is the first time the analysis visits this function
    // Flag that indicates whether this function is being analyzed for the first time
    bool firstVisit = visited.find(func) == visited.end(); 
    if(firstVisit) {
      if(intraDataflow->getDirection()!=IntraUniDirectionalDataflow::none) {
        InitDataflowState ids(intraDataflow);
        ids.runAnalysis(func, &(fState->state));
      }
      visited.insert(func);
    }
    
    SgFunctionParameterList* paramListNode = NULL;
    NodeState* paramsListState = NULL;
    
    if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::bw) {
      SetAllReturnStates sars(intraDataflow, fState->state.getLatticeBelowMod(intraAnalysis));
      sars.runAnalysis(func, &(fState->state)); 
      ROSE_ASSERT(sars.paramList);
      paramListNode = sars.paramList;
      paramsListState = sars.paramsState;
      
      // Here we can be more precisely when deciding whether to rerun the intra analysis because it may be the case 
      // that the overall analysis state gets changed but the state at the function end and the returns to not change. 
      // However, this shouldn't happen except in buggy situations so we'll take the conservative route and 
      // always re-run the intra analysis if the visit method gets called.
      //mustRerunIntra = sars.getModified() || mustRerunIntra;
    }
    
    // Run the intra-procedural dataflow analysis on the current function
    
    // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    intraDataflow->runAnalysis(func, &(fState->state), 
                      firstVisit || (remainingDueToCallers.find(func)!=remainingDueToCallers.end()),
                      remainingDueToCalls[func]);
    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    vector<Lattice*>* finalLatsToPrint=NULL;
    // Flag that indicates whether the dataflow information after this function was modified, in which case
    // its callers need to be re-analyzed.
    bool afterFuncModified=false;

    if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::fw) {
      // For forward analyses merge the dataflow states above all the return statements in the function, storing
      // the results in the lattices after the function
      //DFStateAtReturns* dfsar = dynamic_cast<DFStateAtReturns*>(fState->state.getFact(this, 0));
      //bool modified = dfsar->mergeReturnStates(func, fState, dynamic_cast<ComposedAnalysis*>(intraAnalysis));  

      MergeAllReturnStates mars(intraDataflow, fState->state.getLatticeBelowMod(intraAnalysis));
      mars.runAnalysis(func, &(fState->state));  
      afterFuncModified = mars.getModified();
      finalLatsToPrint = &(fState->state.getLatticeBelowMod(intraAnalysis));
    } else if(intraDataflow->getDirection()==IntraUniDirectionalDataflow::bw) {
      // For backward analyses get the dataflow state at the start of the function and copy it to the dataflow
      // state above the function
      Dbg::dbg << "funcCG->get_definition()->get_declaration()="<<funcCG->get_definition()->get_declaration()<<" funcCG->get_declaration()="<<funcCG->get_declaration()<<endl;
      Dbg::dbg << "paramListNode="<<paramListNode<<" funcCG->get_definition()->get_declaration()->get_parameterList()="<<funcCG->get_definition()->get_declaration()->get_parameterList()<<" funcCG->get_declaration()->get_parameterList()="<<funcCG->get_declaration()->get_parameterList()<<endl;

      //PartPtr paramList = DataflowNode(funcCG->get_definition()->get_declaration()->get_parameterList(), intraDataflow->filter);
      //PartPtr paramListPart = DataflowNode(paramListNode, intraDataflow->filter);
      //ROSE_ASSERT(NodeState::getNodeStates(paramListPart).size()==1);
      //NodeState* paramsState = *(NodeState::getNodeStates(paramListPart).begin());
      ROSE_ASSERT(paramsListState);
      NodeState* paramsState = paramsListState;
      ROSE_ASSERT(fState->state.getLatticeBelowMod(intraAnalysis).size() == paramsState->getLatticeBelowMod(intraAnalysis).size());
      afterFuncModified = !NodeState::equivLattices(fState->state.getLatticeBelowMod(intraAnalysis), paramsState->getLatticeBelowMod(intraAnalysis));
      NodeState::copyLattices_aEQb(intraAnalysis, fState->state, *paramsState);
      /*for(vector<Lattice*>::iterator lA=fState->state.getLatticeAboveMod(intraAnalysis).begin(), lP=paramsState->getLatticeBelowMod(intraAnalysis).begin();
          lA!=fState->state.getLatticeAboveMod(intraAnalysis).end(); lA++, lP++)
        (*lA)->copy(*lP);*/
      finalLatsToPrint = &(fState->state.getLatticeAboveMod(intraAnalysis));
    }

    if(intraDataflow->getDirection()!=IntraUniDirectionalDataflow::none && analysisDebugLevel>=1) {
      Dbg::dbg << "final #lattice="<<finalLatsToPrint->size()<<": "<<endl;
      {
        Dbg::indent ind();
        for(vector<Lattice*>::iterator l=finalLatsToPrint->begin(); l!=finalLatsToPrint->end(); l++)
            Dbg::dbg << (*l)->str("&nbsp;&nbsp;")<<endl;
      }

      Dbg::dbg << "function "<<func.get_name().getString()<<" "<<(afterFuncModified? "modified": "not modified")<<endl;
      Dbg::dbg << "remaining = ";
      for(list<const CGFunction*>::iterator f=remaining.begin(); f!=remaining.end(); f++)
        Dbg::dbg << (*f)->get_name().getString() << ", ";
      Dbg::dbg << endl;

      /*Dbg::dbg << "State below:\n";
      for(vector<Lattice*>::const_iterator it = fState->state.getLatticeBelow((Analysis*)this).begin();
          it!=fState->state.getLatticeBelow((Analysis*)this).end(); it++)
      {
        Dbg::dbg << (*it)->str("    ") << endl; 
      }*/
      /*Dbg::dbg << "States at Return Statements:\n";
      {
        Dbg::indent ind;
        for(vector<Lattice*>::iterator it = dfsar->getLatsAtFuncReturn().begin();
            it!=dfsar->getLatsAtFuncReturn().end(); it++)
        {
          Dbg::dbg << (*it)->str("&nbsp;&nbsp;") << endl; 
        }
      }

      vector<Lattice*> retState = fState->retState.getLatticeBelow((Analysis*)intraAnalysis);
      Dbg::dbg << "retState: \n";
      {
        Dbg::indent ind;
        for(vector<Lattice*>::iterator it = retState.begin(); it!=retState.end(); it++)
        Dbg::dbg << (*it)->str("&nbsp;&nbsp;") << endl;
      }

      Dbg::dbg << "States of Return Values: "<<&(dfsar->getLatsRetVal())<<endl;
      {
        Dbg::indent ind;
        for(vector<Lattice*>::iterator it = dfsar->getLatsRetVal().begin();
            it!=dfsar->getLatsRetVal().end(); it++)
        {
          Dbg::dbg << (*it)->str("&nbsp;&nbsp;") << endl; 
        }
      }*/
    }

    // If this function's final dataflow state was modified, its callers must be 
    // placed back onto the remaining list, recording that they're on the list
    // because of their calls to this function
    if(afterFuncModified)
    {
      //Dbg::dbg << "Inserting Callers\n";
      for(CGFunction::iterator it = funcCG->predecessors(); it!=funcCG->end(); it++)
      {
        const CGFunction* caller = it.getTarget(functions);

        //Dbg::dbg << "Caller of "<<funcCG->get_name().getString()<<": "<<caller->get_name().getString()<<endl;
        addToRemaining(caller);
        remainingDueToCalls[caller].insert(func);
      }
    }
  } // if(modified)
} // ContextInsensitiveInterProceduralDataflow::visit(const CGFunction* funcCG)
} // namespace dataflow;