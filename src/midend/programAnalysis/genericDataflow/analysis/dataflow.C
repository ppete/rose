#include "analysis.h"
#include "dataflow.h"
#include "compose.h"
#include "printAnalysisStates.h"

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
  PartPtr funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(),filter);
  PartPtr funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(),filter);
  
  //Dbg::dbg << "funcCFGStart="<<funcCFGStart.getNode()<<" = ["<<Dbg::escape(funcCFGStart.getNode()->unparseToString())<<" | "<<funcCFGStart.getNode()->class_name()<<" | "<<funcCFGStart.getIndex()<<"]"<<endl;
  //Dbg::dbg << "funcCFGEnd="<<funcCFGEnd.getNode()<<" = ["<<Dbg::escape(funcCFGEnd.getNode()->unparseToString())<<" | "<<funcCFGEnd.getNode()->class_name()<<" | "<<funcCFGEnd.getIndex()<<"]"<<endl;
  
  // Initialize the function's entry NodeState 
  NodeState* entryState = *(NodeState::getNodeStates(funcCFGEnd).rbegin());
  //printf("before copyLattices on [%s | %s]\n", funcCFGStart.getNode()->class_name().c_str(), funcCFGStart.getNode()->unparseToString().c_str());
  NodeState::copyLattices_bEQb(this, *entryState, /*interAnalysis*//*this, */*fState);
  
  return entryState;
}

NodeState* IntraFWDataflow::initializeFunctionNodeState(const Function &func, NodeState *fState)
{
  PartPtr funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(), filter);
  PartPtr funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(), filter);
  
  //Dbg::dbg << "funcCFGStart="<<funcCFGStart.getNode()<<" = ["<<Dbg::escape(funcCFGStart.getNode()->unparseToString())<<" | "<<funcCFGStart.getNode()->class_name()<<" | "<<funcCFGStart.getIndex()<<"]"<<endl;
  //Dbg::dbg << "funcCFGEnd="<<funcCFGEnd.getNode()<<" = ["<<Dbg::escape(funcCFGEnd.getNode()->unparseToString())<<" | "<<funcCFGEnd.getNode()->class_name()<<" | "<<funcCFGEnd.getIndex()<<"]"<<endl;

  // Initialize the function's entry NodeState 
  NodeState* entryState = *(NodeState::getNodeStates(funcCFGStart).begin());
                
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

//VirtualCFG::dataflowIterator*
list<PartPtr>
IntraFWDataflow::getInitialWorklist(const Function &func, bool analyzeFromDirectionStart, const set<Function> &calleesUpdated, NodeState *fState)
{
  PartPtr funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(),filter);
  PartPtr funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(),filter);
  
  // Initialize the set of nodes that this dataflow will iterate over
  //VirtualCFG::dataflowIterator *dfIt = new VirtualCFG::dataflowIterator(funcCFGEnd);
  list<PartPtr> dfIt;

  // If we're analyzing this function for the first time or because the dataflow information coming in from its
  // callers has changed, add the function's entry point
  if(analyzeFromDirectionStart)
    //dfIt->add(funcCFGStart);
    dfIt.push_back(funcCFGStart);
  else {
    /*
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
        }*/
    
      /* This doesn't work because it is possible to process a single call that appears early in the function,
         get no updates from it and stop, without processing any subsequent calls.*/
      
    // Iterate over the function in the forward direction, identifying the calls to functions in calleesUpdated.
    // Calls are added to the dfIt in the order they were discovered. This is done to ensure that when the intra
    // analysis is run it is likely to take all effects of the function calls into account with the calls
    // that appear early in the list (earlier in the CFG) and for the later ones will terminate quickly.
    PartPtr funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(),filter);
    PartPtr funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(), filter);
    //set<PartPtr> tainted;

    // iterate over all the nodes in this function
    for(VirtualCFG::iterator it(funcCFGStart); it!=VirtualCFG::iterator::end(); it++)
    {
      PartPtr p = *it;
      SgNode* n = p.getNode();
      
      // Flag that indicates whether this node is tained.
      // A node is tainted if a predecessor has tainted it
      //bool pTaint = (tainted.find(p)!=tainted.end());
      
      // If this is a call to one of the functions that have had their information updated that is
      // not reachable from another call to such function
      if(/*!pTaint &&*/ isSgFunctionCallExp(n)) {
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
      /*if(pTaint)
      vector<PartPtr> desc = IntraFWDataflow::getDescendants(p);
      for(vector<PartPtr>::iterator d=desc.begin(); d!=desc.end(); d++)
        tainted.insert(*d);*/
    }
  }
  //Dbg::dbg << "analyzeFromDirectionStart="<<analyzeFromDirectionStart<<" #calleesUpdated="<<calleesUpdated.size()<<" it="<<it.str()<<endl;

  return dfIt;
}

class GetReturnStmts : public UnstructuredPassIntraAnalysis
{
  public:
  set<PartPtr> returns;

  void visit(const Function& func, PartPtr p, NodeState& state) {
    if(isSgReturnStmt(p.getNode())) {
      returns.insert(p);
    }
  }
};
//

//VirtualCFG::dataflowIterator*
list<PartPtr>
IntraBWDataflow::getInitialWorklist(const Function &func, bool analyzeFromDirectionStart, const set<Function> &calleesUpdated, NodeState *fState)
{
  PartPtr funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(),filter);
  PartPtr funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(),filter);

  //return new VirtualCFG::back_dataflowIterator(funcCFGEnd, funcCFGStart);
  list<PartPtr> dfIt;
  dfIt.push_back(funcCFGEnd);
  //RoseSTLContainer<SgNode*> rets=NodeQuery::querySubTree(project,VSgReturnStmt);
  //for(RoseSTLContainer<SgNode*>::iterator r=rets.begin(); r!=rets.end(); r++)
  GetReturnStmts grs;
  grs.runAnalysis(func, fState);
  for(set<PartPtr>::iterator r=grs.returns.begin(); r!=grs.returns.end(); r++)
    dfIt.push_back(*r);
  return dfIt;
}

vector<Lattice*> IntraFWDataflow::getLatticeAnte(NodeState *state) { return state->getLatticeAbove(this); }
vector<Lattice*> IntraFWDataflow::getLatticePost(NodeState *state) { return state->getLatticeBelow(this); }
vector<Lattice*> IntraBWDataflow::getLatticeAnte(NodeState *state) { return state->getLatticeBelow(this); }
vector<Lattice*> IntraBWDataflow::getLatticePost(NodeState *state) { return state->getLatticeAbove(this); }

void IntraFWDataflow::transferFunctionCall(const Function &caller, PartPtr p, NodeState *state)
{
  vector<Lattice*> dfInfoBelow = state->getLatticeBelow(this);

  //vector<Lattice*>* retState = NULL;
  dynamic_cast<InterProceduralDataflow*>(interAnalysis)->
    transfer(caller, p, *state, dfInfoBelow/*, &retState*/);
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

void IntraBWDataflow::transferFunctionCall(const Function &caller, PartPtr p, NodeState *state)
{
  //vector<Lattice*>* retState;
  dynamic_cast<InterProceduralDataflow*>(interAnalysis)->
    transfer(caller, p, *state, state->getLatticeAbove(this)/*, &retState*/);
                                
  // NEED TO INCORPORATE INFORMATION ABOUT RETURN INTO DATAFLOW SOMEHOW
}

vector<PartPtr> IntraUniDirectionalDataflow::gatherDescendants(vector<DataflowEdge> edges,
                                                               DataflowNode (DataflowEdge::*edgeFn)() const)
{
  vector<PartPtr> descendants;

  for(vector<DataflowEdge>::const_iterator ei = edges.begin(); ei!=edges.end(); ei++)
  {
    //descendants.push_back(boost::make_shared<DataflowNode>(mem_fn(edgeFn)(*ei)));
    descendants.push_back(DataflowNode(mem_fn(edgeFn)(*ei)));
  }

  return descendants;
}
vector<PartPtr> IntraFWDataflow::getDescendants(PartPtr p)
{ return gatherDescendants(p.outEdges(), &DataflowEdge::target); }
vector<PartPtr> IntraBWDataflow::getDescendants(PartPtr p)
{ return gatherDescendants(p.inEdges(), &DataflowEdge::source); }

PartPtr IntraFWDataflow::getUltimate(const Function &func)
{ return cfgUtils::getFuncEndCFG(func.get_definition(), filter); }
PartPtr IntraBWDataflow::getUltimate(const Function &func)
{ return cfgUtils::getFuncStartCFG(func.get_definition(), filter); }

VirtualCFG::dataflowIterator* IntraFWDataflow::getIterator(const Function &func)
{ return new VirtualCFG::dataflowIterator(cfgUtils::getFuncEndCFG(func.get_definition(), filter)); }
VirtualCFG::dataflowIterator* IntraBWDataflow::getIterator(const Function &func)
{ return new VirtualCFG::back_dataflowIterator(cfgUtils::getFuncStartCFG(func.get_definition(), filter)); }

// Runs the intra-procedural analysis on the given function. Returns true if 
// the function's NodeState gets modified as a result and false otherwise.
// state - the function's NodeState
// analyzeFromDirectionStart - If true the function should be analyzed from its starting point from the analysis' 
//    perspective (fw: entry point, bw: exit point)
void IntraUniDirectionalDataflow::runAnalysis(const Function& func, NodeState* fState, bool analyzeFromDirectionStart, 
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

   // Initialize the function's entry NodeState 
  //Akshatha(08/12): Uncommenting the code which updates the function's entry( As per Greg's suggestion)
  //GB - Don't need this
  //NodeState* entryState = initializeFunctionNodeState(func, fState);

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
    ostringstream startStr; startStr << "Starting from ["<<(*start).getNode()->unparseToString()<<" | "<<(*start).getNode()->class_name()<<"]"<<endl;
    Dbg::region reg(analysisDebugLevel, 1, Dbg::region::topLevel, startStr.str());
    
    // Iterate over the nodes in this function that are downstream from the nodes added above
    //VirtualCFG::dataflowIterator it(getUltimate(func));
    VirtualCFG::dataflowIterator* curNodeIt = getIterator(func);
    Dbg::dbg << "Initial curNodeIt="<<curNodeIt->str()<<endl;
    curNodeIt->add(*start);
    for(; *curNodeIt!=VirtualCFG::dataflowIterator::end(); )
    {
      PartPtr p = **curNodeIt;
      SgNode* sgn = p.getNode();
      ostringstream nodeNameStr;
      nodeNameStr << "Current Node ["<<sgn->class_name()<<" | "<<Dbg::escape(sgn->unparseToString())<<" | "<<p.getIndex()<<"] "<<sgn;
      Dbg::region reg(analysisDebugLevel, 1, Dbg::region::topLevel, nodeNameStr.str());
      bool modified = false;
      visited.insert(p);
      
      // the number of NodeStates associated with the given dataflow node
      int numStates=NodeState::numNodeStates(p);
      ROSE_ASSERT(numStates == 1);
      // the NodeStates themselves
      const vector<NodeState*> nodeStates = NodeState::getNodeStates(p);
      //printf("                               nodeStates.size()=%d\n", nodeStates.size());
      int i=0;
      //NodeState* state = NodeState::getNodeState(n, 0);
      NodeState* state = NULL;
      //ROSE_ASSERT(state);
      
      // Iterate over all of this node's NodeStates
      //for(int i=0; i<numStates;)
      for(vector<NodeState*>::const_iterator itS = nodeStates.begin(); itS!=nodeStates.end(); )
      {
        state = *itS;
        //printf("                               state=%p\n", state);
                
        // reset the modified state, since only the last NodeState's change matters
        //modified = false; 

        // =================== Copy incoming lattices to outgoing lattices ===================
        const vector<Lattice*> dfInfoAnte = getLatticeAnte(state);
        const vector<Lattice*> dfInfoPost = getLatticePost(state);
                                
        // Overwrite the Lattices below this node with the lattices above this node.
        // The transfer function will then operate on these Lattices to produce the
        // correct state below this node.
        
        //printf("                 dfInfoAnte.size()=%d, dfInfoPost.size()=%d, this=%p\n", dfInfoAnte.size(), dfInfoPost.size(), this);
        vector<Lattice*>::const_iterator itA, itP;
        int j=0;
        for(itA  = dfInfoAnte.begin(), itP  = dfInfoPost.begin();
            itA != dfInfoAnte.end() && itP != dfInfoPost.end(); 
            itA++, itP++, j++)
        {
           if(analysisDebugLevel>=1){
             Dbg::dbg << " ==================================  "<<endl;
             Dbg::dbg << "  Copying incoming Lattice "<<j<<":"<<endl;
             {Dbg::indent ind(analysisDebugLevel, 1);
              Dbg::dbg <<(*itA)->str()<<endl; }
             Dbg::dbg << "  To outgoing Lattice "<<j<<":"<<endl;
             {Dbg::indent ind(analysisDebugLevel, 1);
              Dbg::dbg <<(*itP)->str()<<endl; }
           }
           (*itP)->copy(*itA);
           /*if(analysisDebugLevel>=1){
                   Dbg::dbg << "    Copied Meet Below: Lattice "<<j<<": \n        "<<(*itB)->str("            ")<<endl;
           }*/
        }
        
        // =================== TRANSFER FUNCTION ===================
        
        if(analysisDebugLevel>=1){
          Dbg::dbg << " ==================================  "<<endl;
          Dbg::dbg << "  Transferring the outgoing  Lattice ... "<<endl;
        }
        if (isSgFunctionCallExp(sgn))
          transferFunctionCall(func, p, state);

        boost::shared_ptr<IntraDFTransferVisitor> transferVisitor = getTransferVisitor(func, p, *state, dfInfoPost);
        sgn->accept(*transferVisitor);
        modified = transferVisitor->finish() || modified;

        // =================== TRANSFER FUNCTION ===================
        if(analysisDebugLevel>=1)
        {
          j=0;
          for(itP = dfInfoPost.begin();
              itP != dfInfoPost.end(); itP++, j++)
          {
            Dbg::dbg << "    Transferred: outgoing Lattice "<<j<<":"<<endl;
            {Dbg::indent ind(analysisDebugLevel, 1);
             Dbg::dbg <<(*itP)->str()<<endl;}
          }
          Dbg::dbg << "    transferred, modified="<<modified<<endl;
        }

        // Look at the next NodeState
        i++; itS++;
      }
      ROSE_ASSERT(state);
        
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
        vector<PartPtr> descendants = getDescendants(p);
        if(analysisDebugLevel>=1) {
          Dbg::dbg << "Descendants ("<<descendants.size()<<"):"<<endl;
          Dbg::dbg << "~~~~~~~~~~~~"<<endl;
        }
        
        for(vector<PartPtr>::iterator di = descendants.begin(); di != descendants.end(); di++)
        {
          // The CFG node corresponding to the current descendant of n
          PartPtr nextNode = *di;
          SgNode *nextSgNode = nextNode.getNode();
          ROSE_ASSERT  (nextSgNode != NULL);
          if(analysisDebugLevel>=1)
            Dbg::dbg << "    Descendant: "<<nextSgNode<<"["<<nextSgNode->class_name()<<" | "<<Dbg::escape(nextSgNode->unparseToString())<<"]"<<endl;
        
          NodeState* nextState = NodeState::getNodeState(nextNode, 0);
          ROSE_ASSERT(nextSgNode && nextState);
          
          // Propagate the Lattices below this node to its descendant
          modified = propagateStateToNextNode(getLatticePost(state), p, numStates-1, getLatticeAnte(nextState), nextNode);
          if(analysisDebugLevel>=1){
            Dbg::dbg << "propagated/merged, modified="<<modified<<endl;
            Dbg::dbg << "<hline>";
//            Dbg::dbg << "^^^^^^^^^^^^^^^^^^"<<endl;
//            Dbg::dbg << "curNodeIt before="<<curNodeIt->str()<<endl;
          }
          // If the next node's state gets modified as a result of the propagation, or the next node has not yet been
          // visited, add it to the processing queue.
          if(modified || visited.find(nextNode)==visited.end())
            curNodeIt->add(nextNode);
          
//          if(analysisDebugLevel>=1) Dbg::dbg << "curNodeIt after="<<curNodeIt->str()<<endl;
        }
      }
      //if(analysisDebugLevel>=1) Dbg::dbg << "curNodeIt final="<<curNodeIt->str()<<endl;
      (*curNodeIt)++;
      //if(analysisDebugLevel>=1) Dbg::dbg << "curNodeIt post-increment="<<curNodeIt->str()<<endl;   
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
