#include "analysis.h"
#include "dataflow.h"

#include <memory>
#include <utility>
#include <algorithm>

#include <boost/mem_fn.hpp>

#include "sageGeneric.h"

NodeState* IntraBWDataflow::initializeFunctionNodeState(const Function &func, NodeState *fState)
{
  DataflowNode funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(),filter);
  DataflowNode funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(),filter);

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
  DataflowNode funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(), filter);
  DataflowNode funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(), filter);

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

VirtualCFG::dataflow*
IntraFWDataflow::getInitialWorklist(const Function &func, bool firstVisit, bool analyzeDueToCallers, const set<Function> &calleesUpdated, NodeState *fState)
{
  DataflowNode funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(),filter);
  DataflowNode funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(),filter);

  // Initialize the set of nodes that this dataflow will iterate over
  VirtualCFG::dataflow *it = new VirtualCFG::dataflow(funcCFGEnd);

  // If we're analyzing this function for the first time or because the dataflow information coming in from its
  // callers has changed, add the function's entry point
  if(firstVisit || analyzeDueToCallers)
    it->add(funcCFGStart);

  // If we're analyzing this function because of a change in the exit dataflow states of some of the
  // functions called by this function (these functions are recorded in calleesUpdated), add the calls
  // by this function to those functions to the dataflow iterator
  FindAllFunctionCalls fafc(calleesUpdated);
  fafc.runAnalysis(func, fState);
  for(map<Function, set<DataflowNode> >::iterator callee=fafc.getFuncCalls().begin(); callee!=fafc.getFuncCalls().end(); callee++)
    for(set<DataflowNode>::iterator callNode=callee->second.begin(); callNode!=callee->second.end(); callNode++)
      {
        it->add(*callNode);
      }

  //Dbg::dbg << "analyzeDueToCallers="<<analyzeDueToCallers<<" #calleesUpdated="<<calleesUpdated.size()<<" it="<<it.str()<<endl;

  return it;
}

VirtualCFG::dataflow*
IntraBWDataflow::getInitialWorklist(const Function &func, bool firstVisit, bool analyzeDueToCallers, const set<Function> &calleesUpdated, NodeState *fState)
{
  DataflowNode funcCFGStart = cfgUtils::getFuncStartCFG(func.get_definition(),filter);
  DataflowNode funcCFGEnd   = cfgUtils::getFuncEndCFG(func.get_definition(),filter);

  return new VirtualCFG::back_dataflow(funcCFGEnd, funcCFGStart);
}

LatticePtr IntraFWDataflow::getLatticeAnte(NodeState *state) { return state->getLatticeAboveMod(this); }
LatticePtr IntraFWDataflow::getLatticePost(NodeState *state) { return state->getLatticeBelowMod(this); }
LatticePtr IntraBWDataflow::getLatticeAnte(NodeState *state) { return state->getLatticeBelowMod(this); }
LatticePtr IntraBWDataflow::getLatticePost(NodeState *state) { return state->getLatticeAboveMod(this); }

void IntraFWDataflow::transferFunctionCall(const Function &func, const DataflowNode &n, NodeState *state)
{
  // vector<Lattice*>* retState = NULL;

  Lattice*                 nullLattice = 0;
  LatticePtr               dfInfoBelow = state->getLatticeBelowMod(this);
  ConstLatticePtr          retState(nullLattice);
  InterProceduralDataflow& ipdf = dynamic_cast<InterProceduralDataflow&>(*interAnalysis);

  ipdf.transfer(func, n, *state, dfInfoBelow, retState, true);
  ROSE_ASSERT(retState);

#if OBSOLETE_CODE
  if(retState && !(retState->size()==0 || (retState->size() == dfInfoBelow.size()))) {
    Dbg::dbg << "#retState="<<retState->size()<<endl;
    for(vector<Lattice*>::iterator ml=retState->begin(); ml!=retState->end(); ml++)
      Dbg::dbg << "        "<<(*ml)->str("            ")<<endl;
    Dbg::dbg << "#dfInfoBelow="<<dfInfoBelow.size()<<endl;
    for(vector<Lattice*>::const_iterator l=dfInfoBelow.begin(); l!=dfInfoBelow.end(); l++)
      Dbg::dbg << "        "<<(*l)->str("            ")<<endl;
  }
#endif /* OBSOLETE_CODE */

  // Incorporate information about the function's return value into the caller's dataflow state
  // as the information of the SgFunctionCallExp
  // \pp \todo should always be initialized???
  if (retState->isInitialized()) {
      Dbg::dbg << "    lDF Before=" << dfInfoBelow->str("        ") << endl;
      Dbg::dbg << "    lRet Before=" << retState->str("        ") << endl;

      dfInfoBelow->unProject(isSgFunctionCallExp(n.getNode()), retState.get());

      Dbg::dbg << "    lDF After="<< dfInfoBelow->str("        ") <<endl;
  }
}

void IntraBWDataflow::transferFunctionCall(const Function &func, const DataflowNode &n, NodeState *state)
{
  Lattice*        nullLattice = 0;
  ConstLatticePtr retState(nullLattice);

  dynamic_cast<InterProceduralDataflow*>(interAnalysis)->
    transfer(func, n, *state, state->getLatticeAboveMod(this), retState, false);

  // ROSE_ASSERT(retState.get()); \pp does not hold b/c not all analysis set the
  //                                  the retState lattice
  // NEED TO INCORPORATE INFORMATION ABOUT RETURN INTO DATAFLOW SOMEHOW
}


#if OBSOLETE_CODE
struct ConnectionMaker
{
  typedef IntraUniDirectionalDataflow::ConnectionContainer ConnectionContainer;
  typedef DataflowNode (DataflowEdge::*EdgeFn)() const;

  EdgeFn edgeFn;

  explicit
  ConnectionMaker(EdgeFn edge_fn)
  : edgeFn(edge_fn)
  {}

  ConnectionContainer::value_type operator()(const DataflowEdge& e)
  {
    return std::make_pair(boost::mem_fn(edgeFn)(e), e);
  }
};


IntraUniDirectionalDataflow::ConnectionContainer
IntraUniDirectionalDataflow::gatherDescendants(vector<DataflowEdge> edges, DataflowNode (DataflowEdge::*)() const)
{
  return edges;
}
#endif /* OBSOLETE_CODE */

IntraFWDataflow::ConnectionContainer
IntraFWDataflow::getDescendants(const DataflowNode& n)
{
  // return gatherDescendants(n.outEdges(), &DataflowEdge::target);
  return n.outEdges();
}

IntraBWDataflow::ConnectionContainer
IntraBWDataflow::getDescendants(const DataflowNode& n)
{
  // return gatherDescendants(n.inEdges(),  &DataflowEdge::source);
  return n.inEdges();
}

// local debugging functions
namespace {
  void dbg_Descendants(const IntraBWDataflow::ConnectionContainer& cont)
  {
    if(analysisDebugLevel>=1) {
            Dbg::dbg << "    Descendants ("<<cont.size()<<"):" << endl;
            Dbg::dbg << "    ~~~~~~~~~~~~"<<endl;
    }
  }

  void dbg_NextNode(const DataflowNode& n)
  {
    if(analysisDebugLevel>=1)
    {
            SgNode* nextSgNode = n.getNode();
            ROSE_ASSERT  (nextSgNode != NULL);
            Dbg::dbg << "    Descendant: "<<nextSgNode<<"["<<nextSgNode->class_name()<<" | "<<Dbg::escape(nextSgNode->unparseToString())<<"]"<<endl;
    }
  }

  void dbg_LatticeUpdate(bool p)
  {
    if(analysisDebugLevel>=1){
            Dbg::dbg << "    propagated, lattice_update= " << p << endl;
            Dbg::dbg << "    ^^^^^^^^^^^^^^^^^^" << endl;
    }
  }
}

DataflowNode IntraFWDataflow::getUltimate(const Function &func)
{ return cfgUtils::getFuncEndCFG(func.get_definition(), filter); }
DataflowNode IntraBWDataflow::getUltimate(const Function &func)
{ return cfgUtils::getFuncStartCFG(func.get_definition(), filter); }


namespace {
  inline
  Lattice* clone_lattice(Lattice* l)
  {
    return l->copy();
  }

  inline
  Lattice* delete_lattice(Lattice* l)
  {
    delete l;
    return 0;
  }

  struct LatticeContainerGuard
  {
      typedef std::vector<Lattice*> LatticeContainer;

      explicit
      LatticeContainerGuard(const LatticeContainer& orig)
      : lattices(orig)
      {
        std::transform(lattices.begin(), lattices.end(), lattices.begin(), clone_lattice);
      }

      ~LatticeContainerGuard()
      {
        std::transform(lattices.begin(), lattices.end(), lattices.begin(), delete_lattice);
      }

      operator LatticeContainer&() { return lattices; }

    private:
      LatticeContainer lattices;

      LatticeContainerGuard();
      LatticeContainerGuard(const LatticeContainerGuard&);
      LatticeContainerGuard& operator=(const LatticeContainerGuard&);
  };
}

bool IntraUniDirectionalDataflow::edgeSensitiveAnalysis() const
{
  return false;
}

// virtual function implementing forwarding transfer to node-transfer
bool IntraUniDirectionalDataflow::transfer(const Function& func, const DataflowEdge& e, NodeState& state, LatticePtr lat)
{
  return transfer(func, flowSource(e), state, lat);
}

void IntraUniDirectionalDataflow::node_transfer( const Function& func,
                                                 const DataflowNode& n,
                                                 NodeState& state,
                                                 LatticePtr lattice,
                                                 VirtualCFG::dataflow& worklist
                                               )
{
  // invoke transfer function
  transfer(func, n, state, lattice);

  // propagate result to all children
  ConnectionContainer descendants = getDescendants(n);

  dbg_Descendants(descendants);
  for (ConnectionContainer::const_iterator di = descendants.begin(); di != descendants.end(); ++di)
  {
          // The CFG node corresponding to the current descendant of n
          DataflowEdge  thisEdge = *di;
          DataflowNode  nextNode = flowTarget(thisEdge);

          dbg_NextNode(nextNode);

          // \question \pp can we have multiple states
          //               if yes, do we need to invoke the transfer function
          //               on each state separately?
          NodeState* nextState = NodeState::getNodeState(nextNode, 0);
          ROSE_ASSERT(nextState);

          // Propagate the Lattices below this node to its descendant
          // if there are multiple out edges the lattice can be reduced
          // according to the edge.
          const bool updNextstate = propagateStateToNextNode(lattice, n, getLatticeAnte(nextState), nextNode);

          // If the next node's state gets modified as a result of the propagation,
          // add the node to the processing queue.
          if (updNextstate)
          {
                  worklist.add(nextNode);
          }

          dbg_LatticeUpdate(updNextstate);
  }
}

void IntraUniDirectionalDataflow::edge_transfer(const Function& func, const DataflowNode& n, NodeState& state, LatticePtr lattice, VirtualCFG::dataflow& worklist)
{
  LatticePtr          totalNodeLattice(lattice->copy());
  ConnectionContainer descendants = getDescendants(n);

  dbg_Descendants(descendants);

  for (ConnectionContainer::const_iterator di = descendants.begin(); di != descendants.end(); ++di)
  {
          // The CFG node corresponding to the current descendant of n
          DataflowEdge  thisEdge = *di;
          DataflowNode  nextNode = flowTarget(thisEdge);
          LatticePtr    thisLattice(lattice->copy());

          // \pp shall we distinguish between forward / backward flow
          const bool    valid_edge = transfer(func, thisEdge, state, thisLattice);

          if (valid_edge)
          {
            dbg_NextNode(nextNode);

            // \question \pp can we have multiple states
            //               if yes, do we need to invoke the transfer function
            //               on each state separately?
            NodeState* nextState = NodeState::getNodeState(nextNode, 0);
            ROSE_ASSERT(nextState);

            // Propagate the Lattices below this node to its descendant
            // if there are multiple out edges the lattice can be reduced
            // according to the edge.
            const bool updNextstate = propagateStateToNextNode(thisLattice, n, getLatticeAnte(nextState), nextNode);

            // If the next node's state gets modified as a result of the propagation,
            // add the node to the processing queue.
            if (updNextstate)
            {
                    worklist.add(nextNode);
            }

            totalNodeLattice->meetUpdate(thisLattice.get());
            dbg_LatticeUpdate(updNextstate);
            // \pp \todo shall we assert that there is at least one valid edge?
          }
  }

  // storing the result back in the input lattice (lattice = totalNodeLattice)
  //   implemented through swap
  swap(lattice, totalNodeLattice);
}


// Runs the intra-procedural analysis on the given function. Returns true if
// the function's NodeState gets modified as a result and false otherwise.
// state - the function's NodeState
bool IntraUniDirectionalDataflow::runAnalysis(const Function& func, NodeState* fState, bool analyzeDueToCallers, set<Function> calleesUpdated)
{
        // Make sure that we've been paired with a valid inter-procedural dataflow analysis
        ROSE_ASSERT(dynamic_cast<InterProceduralDataflow*>(interAnalysis));

        ostringstream funcNameStr; funcNameStr << "Function "<<func.get_name().getString()<<"()";
        if(analysisDebugLevel>=1) {
                Dbg::enterFunc(funcNameStr.str());
                Dbg::dbg << "analyzeDueToCallers="<<analyzeDueToCallers<<" calleesUpdated=";
                for(set<Function>::iterator f=calleesUpdated.begin(); f!=calleesUpdated.end(); f++)
                        Dbg::dbg << f->get_name().getString()<<", ";
                Dbg::dbg << endl;
        }

        // Set of functions that have already been visited by this analysis, used
        // to make sure that the dataflow state of previously-visited functions is
        // not re-initialized when they are visited again.
        //static set<Function> visited;
        /*Dbg::dbg << "visited (#"<<visited.size()<<")="<<endl;
        for(set<Function>::iterator f=visited.begin(); f!=visited.end(); f++)
                Dbg::dbg << "    "<<f->str("        ")<<endl;*/

        bool firstVisit = visited.find(func) == visited.end();
        // Initialize the lattices used by this analysis, if this is the first time the analysis visits this function
        if(firstVisit)
        {
                //Dbg::dbg << "Initializing Dataflow State"<<endl;
                InitDataflowState ids(this/*, initState*/);
                ids.runAnalysis(func, fState);

                //UnstructuredPassInterAnalysis upia_ids(ids);
                //upia_ids.runAnalysis();
                visited.insert(func);
        }

        // Initialize the function's entry NodeState
        //NodeState* entryState = initializeFunctionNodeState(func, fState);

        // int i=0;
        //Dbg::dbg << "after: entryState-above="<<endl;
        //for(vector<Lattice*>::const_iterator l=entryState->getLatticeAbove(this).begin(); l!=entryState->getLatticeAbove(this).end(); l++, i++)
        //      Dbg::dbg << "Lattice "<<i<<": "<<(*l)->str("            ")<<endl;

        //printf("IntraFWDataflow::runAnalysis() function %s()\n", func.get_name().getString());

        std::auto_ptr<VirtualCFG::dataflow> workList(getInitialWorklist(func, firstVisit, analyzeDueToCallers, calleesUpdated, fState));

        VirtualCFG::dataflow &it = *workList;
        VirtualCFG::iterator itEnd = VirtualCFG::dataflow::end();

        // Iterate over the nodes in this function that are downstream from the nodes added above
        for(; it != itEnd; it++)
        {
                DataflowNode n = *it;
                SgNode* sgn = n.getNode();
                ostringstream nodeNameStr;
                nodeNameStr << "Current Node "<<sgn<<"["<<sgn->class_name()<<" | "<<Dbg::escape(sgn->unparseToString())<<" | "<<n.getIndex()<<"]";
                if(analysisDebugLevel>=1){
                        Dbg::enterFunc(nodeNameStr.str());
                }

                // \todo \pp ask about the use of this variable
                bool modified_flag = false;

                // the number of NodeStates associated with the given dataflow node
                int numStates=NodeState::numNodeStates(n);
                ROSE_ASSERT(numStates == 1);
                // the NodeStates themselves
                const vector<NodeState*> nodeStates = NodeState::getNodeStates(n);
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

                        ConstLatticePtr dfInfoAnte = getLatticeAnte(state);
                        LatticePtr      dfInfoPost = getLatticePost(state);

                        dfInfoPost->copy(dfInfoAnte.get());

#if OBSOLETE_CODE
                        // Overwrite the Lattices below this node with the lattices above this node.
                        // The transfer function will then operate on these Lattices to produce the
                        // correct state below this node.

                        //printf("                 dfInfoAnte.size()=%d, dfInfoPost.size()=%d, this=%p\n", dfInfoAnte.size(), dfInfoPost.size(), this);
                        int j=0;
                        for(vector<Lattice*>::const_iterator itA  = dfInfoAnte.begin(), itP  = dfInfoPost.begin();
                            itA != dfInfoAnte.end() && itP != dfInfoPost.end();
                            itA++, itP++, j++)
                        {
                                if(analysisDebugLevel>=1){
                                        Dbg::dbg << " ==================================  "<<endl;
                                        Dbg::dbg << "  Copying incoming Lattice "<<j<<": \n        "<<(*itA)->str("            ")<<endl;
                                        Dbg::dbg << "  To outgoing Lattice "<<j<<": \n        "<<(*itP)->str("            ")<<endl;
                                }
                                (*itP)->copy(*itA);
                                /*if(analysisDebugLevel>=1){
                                        Dbg::dbg << "    Copied Meet Below: Lattice "<<j<<": \n        "<<(*itB)->str("            ")<<endl;
                                }*/
                        }
#endif /* OBSOLETE_CODE */


                        // =================== TRANSFER FUNCTION ===================

                        if(analysisDebugLevel>=1){
                          Dbg::dbg << " ==================================  "<<endl;
                          Dbg::dbg << "  Transferring the outgoing  Lattice ... "<<endl;
                        }
                        if (isSgFunctionCallExp(sgn))
                          transferFunctionCall(func, n, state);


#if OBSOLETE_CODE
                        boost::shared_ptr<IntraDFTransferVisitor> transferVisitor = getTransferVisitor(func, n, *state, dfInfoPost);
                        sgn->accept(*transferVisitor);
                        modified = transferVisitor->finish() || modified;

                        // was: transfer(func, n, *state, dfInfoPost);
#endif /* OBSOLETE_CODE */

                        if (edgeSensitiveAnalysis())
                          edge_transfer(func, n, *state, dfInfoPost, it);
                        else
                          node_transfer(func, n, *state, dfInfoPost, it);

                        // =================== TRANSFER FUNCTION ===================
                        if(analysisDebugLevel>=1)
                        {
                                Dbg::dbg << "    Transferred: Lattice: \n        "<<dfInfoPost->str("            ")<<endl;
                                // Dbg::dbg << "    transferred, modified="<<modified<<endl;
                        }


                        // XXX: Greg believes this plurality of
                        // NodeState objects per DataflowNode is due
                        // to FunctionCallExp, and may not even be
                        // used there anymore, either

                        // Look at the next NodeState
                        i++; itS++;

#if 0 // FW
                        // if this is not the last NodeState associated with this CFG node
                        //if((i+1)<numStates)
                        if(itS!=nodeStates.end())
                        {
                                // Get the next NodeState
                                //NodeState* nextState = NodeState::getNodeState(n, i);
                                NodeState* nextState = *itS;
                                ROSE_ASSERT(nextState);
                                modified = propagateStateToNextNode(
                                 dfInfoBelow, n, i-1,
                                 nextState->getLatticeAbove((Analysis*)this), n) || modified;
                        }
#elseif 0 // BW version
                        if(itS!=nodeStates.rend())
                        {
                                // Get the next NodeState
                                //NodeState* nextState = NodeState::getNodeState(n, i);
                                NodeState* nextState = *itS;
                                ROSE_ASSERT(nextState);
                                modified = propagateStateToNextNode(
                                 dfInfoAbove, n, i-1,
                                 nextState->getLatticeBelow((Analysis*)this), n) || modified;
                        }
#endif
                //        if(analysisDebugLevel>=1){
                 //               Dbg::dbg << "    ------------------"<<endl;
                  //      }
                }
                ROSE_ASSERT(state);


#if OBSOLETE_CODE
/*                      // if there has been a change in the dataflow state immediately below this node AND*/
                // If this is not the last node in the function
                if(/*modified && */*it != getUltimate(func))
                {
                        if(analysisDebugLevel>=1){
                          Dbg::dbg << " ==================================  "<<endl;
                          Dbg::dbg << " Propagating/Merging the outgoing  Lattice to all descendant nodes ... "<<endl;
                        }
                        // iterate over all descendants
                        ConnectionContainer descendants = getDescendants(n);
                        if(analysisDebugLevel>=1) {
                                Dbg::dbg << "    Descendants ("<<descendants.size()<<"):"<<endl;
                                Dbg::dbg << "    ~~~~~~~~~~~~"<<endl;
                        }

                        const bool          single_edge = (descendants.size() == 1);
                        for(ConnectionContainer::const_iterator di = descendants.begin(); di != descendants.end(); di++)
                        {
                                // The CFG node corresponding to the current descendant of n
                                DataflowNode nextNode = (*di).first;
                                DataflowEdge thisEdge = (*di).second;

                                if(analysisDebugLevel>=1)
                                {
                                        SgNode*      nextSgNode = nextNode.getNode();
                                        ROSE_ASSERT  (nextSgNode != NULL);
                                if(analysisDebugLevel>=1)
                                        Dbg::dbg << "    Descendant: "<<nextSgNode<<"["<<nextSgNode->class_name()<<" | "<<Dbg::escape(nextSgNode->unparseToString())<<"]"<<endl;
                                }

                                const vector<Lattice*>& postLatticeState = getLatticePost(state);

                                NodeState* nextState = NodeState::getNodeState(nextNode, 0);
                                ROSE_ASSERT(nextState);

                                // Propagate the Lattices below this node to its descendant
                                // if there are multiple out edges the lattice can be reduced
                                // according to the edge.
                                // \todo \pp shall we invoke the check always or only when
                                //           there are multiple outflowing edges?
                                const bool lattice_update = propagateStateToNextNode(postLatticeState, n, getLatticeAnte(nextState), nextNode);

                                {
                                  // copy the lattice and RAII object-lifetime management
                                  LatticeContainerGuard lattices(postLatticeState);

                                  // reduceOnEdge(n, nextNode, thisEdge, lattices);

                                  if (is_empty(lattices))
                                  {
                                    lattice_update = propagateStateToNextNode(lattices, n, getLatticeAnte(nextState), nextNode);
                                  }
                                }

                                if(analysisDebugLevel>=1){
                                        Dbg::dbg << "    propagated/merged, modified="<<modified<<endl;
                                        Dbg::dbg << "    ^^^^^^^^^^^^^^^^^^"<<endl;
                                }
                                // If the next node's state gets modified as a result of the propagation,
                                // add the node to the processing queue.
                                if (lattice_update)
                                        it.add(nextNode);
                        }
                }
#endif /* OBSOLETE_CODE */


                if(analysisDebugLevel>=1) Dbg::exitFunc(nodeNameStr.str());
        }

#if 0
        Dbg::dbg << "(*(NodeState::getNodeStates(funcCFGEnd).begin()))->getLatticeAbove((Analysis*)this) == fState->getLatticeBelow((Analysis*)this):"<<endl;
        printf("fState->getLatticeBelow((Analysis*)this).size()=%d\n", fState->getLatticeBelow((Analysis*)interAnalysis).size());
        printf("fState->getLatticeAbove((Analysis*)this).size()=%d\n", fState->getLatticeAbove((Analysis*)interAnalysis).size());
#endif

        // Test if the Lattices at the end of the function after the analysis are equal to their
        // original values in the function state.

        bool modified = getLatticeAnte(*(NodeState::getNodeStates(getUltimate(func)).begin())) != getLatticePost(fState);

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

        if(analysisDebugLevel>=1) Dbg::exitFunc(funcNameStr.str());

        return modified;
}


DataflowNode IntraBWDataflow::flowSource(const DataflowEdge& e)
{
  return e.target();
}

DataflowNode IntraBWDataflow::flowTarget(const DataflowEdge& e)
{
  return e.source();
}

DataflowNode IntraFWDataflow::flowSource(const DataflowEdge& e)
{
  return e.source();
}

DataflowNode IntraFWDataflow::flowTarget(const DataflowEdge& e)
{
  return e.target();
}





#if OBSOLETE_CODE
// Manages the underlying containers
template <class SequenceContainer>
struct Managed
{
  SequenceContainer cont;

  typedef typename SequenceContainer::value_type     value_type;
  typedef typename SequenceContainer::iterator       iterator;
  typedef typename SequenceContainer::const_iterator const_iterator;

  static
  value_type copy_elem(value_type ptr)
  {
    return ptr->copy();
  }

  static
  void delete_elem(Lattice* ptr)
  {
    delete ptr;
  }

  explicit
  Managed(const SequenceContainer& orig)
  : cont()
  {
    cont.reserve(orig.size());

    std::transform(orig.begin(), orig.end(), std::back_inserter(cont), copy_elem);
  }

  ~Managed()
  {
    std::for_each(cont.begin(), cont.end(), delete_elem);
  }

        iterator begin()       { return cont.begin(); }
  const_iterator begin() const { return cont.begin(); }

        iterator end()         { return cont.end(); }
  const_iterator end() const   { return cont.end(); }

  operator       SequenceContainer&()       { return cont; }
  operator const SequenceContainer&() const { return cont; }
};
#endif /* OBSOLETE_CODE */
