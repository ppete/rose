#pragma once

#include <map>
#include <utility>
#include "rose.h"
#include "staticSingleAssignment.h"
#include <boost/foreach.hpp>
#include "LatticeArith.h"
#include "genericDataflowCommon.h"
#include "genUID.h"
#include "VirtualCFGIterator.h"
#include "cfgUtils.h"
#include "CallGraphTraverse.h"
#include "analysisCommon.h"
#include "analysis.h"
#include "dataflow.h"
#include "latticeFull.h"
#include "heapSSA.h"

// \pp added
#include "defaultLattice.h"

namespace scc_private
{
  using namespace boost;
  using namespace std;
  using namespace hssa_private;

  using ::Function;  ///< multiple Functions are pulled in by some using namespace
                     ///  directives in header files :(

  typedef StaticSingleAssignment::FilteredCfgNode FilteredCfgNode;
  typedef StaticSingleAssignment::FilteredCfgEdge FilteredCfgEdge;
  typedef StaticSingleAssignment::VarName VarName;
  typedef StaticSingleAssignment::ReachingDefPtr ReachingDefPtr;
  typedef StaticSingleAssignment::UseTable UseTable;
  typedef StaticSingleAssignment::NodeReachingDefTable NodeReachingDefTable;
  typedef ssa_private::FunctionFilter FunctionFilter;

  typedef vector<SgNode* > Nodes;
  typedef vector<CFGNode> CFGNodes;
  typedef vector<CFGEdge> CFGEdges;
  typedef set<SgNode* > SgNodeList;
  typedef set<FilteredCfgNode> NodeList;
  typedef set<FilteredCfgEdge> EdgeList;
  typedef map<VarName, LatticeArith * > VarLatticeMap;
  typedef map<SgNode *, LatticeArith * > NodeLatticeMap;
  typedef boost::unordered_map<SgNode *, map<VarName, set<ReachingDefPtr> > > UseSetTable;
  typedef boost::unordered_map<SgNode *, map<SgNode *, bool> > SgNodeEdgeTable;
  typedef boost::unordered_map<SgNode *, map<VarName, ReachingDefPtr > > PHINodeTable;

  class ConstantAnalysis : public IntraProceduralDataflow
  {
  private:
    // The project to perform Constant Analysis on.
    SgProject* project;
    HeapSSA* ssa;

  public:
    ConstantAnalysis(SgProject* proj, HeapSSA* ssaInstance);
    ~ConstantAnalysis();

    // Run the analysis
    void run(bool hierarchical);

    // Run the intra-procedural analysis
    virtual bool runAnalysis(const Function& func, NodeState* state, bool analyzeDueToCallers,
         std::set<Function> calleesUpdated);

    // \pp changed interface
    Lattice* genLattice(const ::Function& func, const DataflowNode& n, const NodeState& state);
    std::vector<NodeFact*> genFacts(const ::Function& func, const DataflowNode& n, const NodeState& state);

    bool transfer(const Function& func, const DataflowNode& n, NodeState& state, Lattice& dfInfo);

/*
    boost::shared_ptr<IntraDFTransferVisitor>
      getTransferVisitor(const Function& func, const DataflowNode& n, NodeState& state,
       const std::vector<Lattice*>& dfInfo);
*/

    void dumpLattices();

  protected:
    // Main framework of wegman-zadeck SCC
    void SCC(const Function& func, bool edgeBased);
    void dummyTrav(SgFunctionDefinition* func);
    // Visiting phi function, including lattice propagation
    void visitPhi(FilteredCfgNode& node, EdgeList& executableFlags);
    void visitPhi(SgNode* sgNode, EdgeList& executableFlags);
    // Visiting normal expression, including expression evaluation
    void visitExpr(FilteredCfgNode& node, EdgeList& flowWorkList, SgNodeList& ssaWorkList);
    void visitExpr(SgNode* node, EdgeList& FlowWorkList, SgNodeList& SSAWorkList);
    // Evaluate the expression in the given CFG node
    bool evaluate(FilteredCfgNode& node);
    // Evaluate the expression
    bool evaluateExpr(SgNode * node);
    // Check if the given CFG node has corresponding PHI function
    bool isPhiNode(FilteredCfgNode& node);
    bool isPhiNode(SgNode* node);

    void addOutEdges(EdgeList& FlowWorkList, FilteredCfgNode& node);
    void addOutEdges(EdgeList& FlowWorkList, FilteredCfgEdge& currentEdge);

    // Check if the given CFG node has been marked as an executable node
    bool isExecutable(EdgeList& executableFlags, FilteredCfgEdge& edge);
    bool isExecutable(EdgeList& executableFlags, SgNode* sgNode);

    // Set the CFG node as an executable node
    void setExecutable(EdgeList& executableFlags, FilteredCfgEdge& edge);

    // Check if the given CFG node is an assignment operation
    bool isAssignNode(FilteredCfgNode& node);
    // Get SSA out nodes
    void SSAOut(FilteredCfgNode& cfgNode, SgNodeList& SSAWorkList);
    void SSAOut(SgNode* sgNode, SgNodeList& SSAWorkList);
    // Check if the given CFG node is a branch node, i.e. if condition
    bool isBranch(FilteredCfgNode& node);
    bool isBranch(SgNode* node);
    // Get number of executable in edges
    int numOfExecIn(FilteredCfgNode& cfgNode, EdgeList& executableFlags);
    // Get number of executable out edges
    int numOfExecOut(FilteredCfgNode& cfgNode, EdgeList& executableFlags);
    // Get number of out edges
    int numOfOut(FilteredCfgNode& node);
    // Get the single out node when the number of out edges is 1
    FilteredCfgNode outNode(FilteredCfgNode& node);
    // Get the SgNode's corresponding lattice
    LatticeArith * getLattice(SgNode * node);
    // Set the SgNode and its lattice into the global map
    void setLattice(SgNode * node, LatticeArith * lattice);
    // Get the SSA instance
    StaticSingleAssignment * getSSA();
    // Unreachable code analysis
    EdgeList& UCA();

    // Build the SSA suse table
    /*bool buildUseTable(vector<FilteredCfgNode>& cfgNodes,
           UseTable& useTable, UseSetTable& ssaUseTable,
           PHINodeTable& phiNodeMap);*/
    bool buildUseTable(vector<FilteredCfgNode>& cfgNodes, UseSetTable& ssaUseTable,
           PHINodeTable& phiNodeMap);
      // Get all CFG node within the given function
    vector<FilteredCfgNode> getCfgNodesInPostorder(SgFunctionDefinition* func);

  protected:
    NodeLatticeMap latticeMap;
    UseSetTable SSAUseTable;
    PHINodeTable PHINodeMap;
    unordered_set<SgFunctionDefinition*> interestingFunctions;
    EdgeList executableEdges;
    // A global transfer visitor
    // boost::shared_ptr<IntraDFTransferVisitor> transferVisitor;
    IntraDFTransferVisitor* transferVisitor;
    map<SgFunctionDefinition*, IntraDFTransferVisitor* > funcTransferMap;
  };
};
