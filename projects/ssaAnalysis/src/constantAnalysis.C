#include "constantAnalysis.h"
#include "rose.h"
#include <boost/foreach.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/operators.hpp>
#include <new>
#include "CallGraph.h"
#include "LatticeArithInstance.h"
#include "constantAnalysisTransfer.h"
#include <iostream>

/**
 * This is an implementation of Wegman & Zadeck sparse conditional constant progagation (SCC)
 *
 * author: jisheng zhao (jz10@rice.edu)
 */

#define foreach BOOST_FOREACH
#define reverse_foreach BOOST_REVERSE_FOREACH

using namespace std;
using namespace boost;
using namespace scc_private;

ConstantAnalysis::ConstantAnalysis(SgProject* proj, HeapSSA* ssaInstance)
  : project(proj), ssa(ssaInstance) {
  // 1.) Get a list of all the functions that we'll process
  // This is same as backstroke SSA calculor
  vector<SgFunctionDefinition*> funcs
    = SageInterface::querySubTree<SgFunctionDefinition>(project, V_SgFunctionDefinition);

  FunctionFilter functionFilter;
  foreach (SgFunctionDefinition* f, funcs) {
    if (functionFilter(f->get_declaration()))
      interestingFunctions.insert(f);
  }

  // 2.) Build the use table
  foreach (SgFunctionDefinition* func, interestingFunctions) {
    // Get all CFG node within the function
    vector<FilteredCfgNode> cfgNodes = getCfgNodesInPostorder(func);
    // Build the use table
    buildUseTable(cfgNodes, SSAUseTable, PHINodeMap);
  }
}

ConstantAnalysis::~ConstantAnalysis() {
  // TODO: cleanup the memory
}

/**
 * This is the main procedure that perform intra-procedural SCC, based on call-graph traversal
 */
bool ConstantAnalysis::runAnalysis(const Function& func, NodeState* state,
           bool analyzeDueToCallers, std::set<Function> calleesUpdated) {
  // TODO: move the intro-procedural process here
  if (interestingFunctions.find(func.get_declaration()->get_definition())
      != interestingFunctions.end()) {
    VirtualCFG::cfgToDotForDebugging(func.get_declaration()->get_definition(), "test.dot");
    // Invoke SCC
    SCC(func, false);
  } else
    std::cout << "not for analysis" << std::endl;

  return false;
}

// \pp changed interface
void ConstantAnalysis::genInitState( const ::Function& func,
                                     const DataflowNode& n,
                                     const NodeState& state,
                                     Lattice*& initLattices,
                                     std::vector<NodeFact*>& initFacts
                                   )
{
  // TODO: implement this
  // std::cout << "generate init state" << std::endl;
  initLattices = new DefaultLattice;
}


bool ConstantAnalysis::transfer(const Function& func, const DataflowNode& n, NodeState& state,
        const std::vector<Lattice*>& dfInfo)
{
  assert(0);
  return false;
}

boost::shared_ptr<IntraDFTransferVisitor>
ConstantAnalysis::getTransferVisitor(const Function& func, const DataflowNode& n,
             NodeState& state, const std::vector<Lattice*>& dfInfo)
{
  assert(false);
  return boost::shared_ptr<IntraDFTransferVisitor>(new ConstantAnalysisTransfer(func, ssa, n,
                    state, dfInfo, 0));
}

/**
 * Main process of SCC, i.e. Wegman-Zadeck algorithm
 */
void ConstantAnalysis::SCC(const Function& func, bool edgeBased)
{
  SgFunctionDefinition* funcDef = func.get_declaration()->get_definition();
  // Create a per-procedure based transfer class
  const DataflowNode dummyDFNode(funcDef->cfgForBeginning(), VirtualCFG::defaultFilter);
  NodeState dummyNodeState;
  const std::vector<Lattice*> dummyDFInfo;
  transferVisitor
  = // boost::shared_ptr<IntraDFTransferVisitor>(
  new ConstantAnalysisTransfer(func, ssa, dummyDFNode, dummyNodeState, dummyDFInfo, -1);
  funcTransferMap[funcDef] = transferVisitor;

  // 1.) Initialize worklist
  EdgeList FlowWorkList;
  SgNodeList SSAWorkList;
  EdgeList& executableFlags = executableEdges;

  FilteredCfgNode currentNode = FilteredCfgNode(funcDef->cfgForBeginning());
  addOutEdges(FlowWorkList, currentNode);

  // 2.) Perform sparse analysis on the ssa form
  while (!FlowWorkList.empty() || !SSAWorkList.empty()) {
    if (!FlowWorkList.empty()) {
      // process the item from FlowWorkList, i.e. flow-edge
      // get and remove the 1st element in the list

      // FilteredCfgEdge currentEdge = * FlowWorkList.begin();
      // FlowWorkList.erase(FlowWorkList.begin());
      EdgeList::iterator edgeIter = FlowWorkList.begin();
      FilteredCfgEdge currentEdge;
      while (edgeIter != FlowWorkList.end()) {
        currentEdge = * edgeIter;
        if (SgForStatement * forStmt = isSgForStatement(currentEdge.source().getNode())) {
          if (forStmt->get_parent() == currentEdge.target().getNode()->get_parent()) {
            edgeIter ++;
          } else
            break;
        } else
          break;
      }
      if (edgeIter == FlowWorkList.end()) {
        currentEdge = * FlowWorkList.begin();
        FlowWorkList.erase(FlowWorkList.begin());
      } else
        FlowWorkList.erase(edgeIter);

      if (!isExecutable(executableFlags, currentEdge)) {
        setExecutable(executableFlags, currentEdge);

        currentNode = currentEdge.target();

        // Visit Phi node
        visitPhi(currentNode, executableFlags);

        if (numOfExecIn(currentNode, executableFlags) == 1)
          // No need to check number of executable in edge here, if we use Cfg Node
          // as work list item
          visitExpr(currentNode, FlowWorkList, SSAWorkList);

        if (numOfOut(currentNode) == 1)
          addOutEdges(FlowWorkList, currentNode);
      }
    }

    if (!SSAWorkList.empty()) {
      // process the item from SSAWorkList, i.e. SSA-edge
      // get and remove 1st element from SSAWorkList
      SgNode * ssaNode = * SSAWorkList.begin();
      SSAWorkList.erase(SSAWorkList.begin());

      // Visit Phi node
      visitPhi(ssaNode, executableFlags);
      // If current SSA node is executable (i.e. it is a SSA use, and one of its CFG in edge has
      // been marked as executable), then visit its expression
      if (isExecutable(executableFlags, ssaNode)) {
        // std::cout << "visit ssa" << std::endl;
        visitExpr(ssaNode, FlowWorkList, SSAWorkList);
      }
    }
  }
}

EdgeList& ConstantAnalysis::UCA() {
  return executableEdges;
}

void ConstantAnalysis::dummyTrav(SgFunctionDefinition* func) {
  NodeList SWorkList;
  FilteredCfgNode currentNode = FilteredCfgNode(func->cfgForBeginning());

  SWorkList.insert(currentNode);
  NodeList visitedNodes;

  while (!SWorkList.empty()) {
    currentNode = * SWorkList.begin();
    SWorkList.erase(SWorkList.begin());

    if (visitedNodes.find(currentNode) != visitedNodes.end()) {
      std::cout << "did visited " << currentNode.toString() << std::endl;
      continue;
    } else
      visitedNodes.insert(currentNode);

    std::cout << "visited node " << currentNode.toString() << std::endl;
    reverse_foreach(const FilteredCfgEdge& edge, currentNode.outEdges())
      SWorkList.insert(edge.target());
  }
}

void ConstantAnalysis::addOutEdges(EdgeList& FlowWorkList, FilteredCfgEdge& cfgEdge) {
  reverse_foreach(const FilteredCfgEdge& edge, cfgEdge.target().outEdges()) {
    FlowWorkList.insert(edge);
  }
}

void ConstantAnalysis::addOutEdges(EdgeList& FlowWorkList, FilteredCfgNode& cfgNode) {
  // reverse_
  foreach(const FilteredCfgEdge& edge, cfgNode.outEdges()) {
    FlowWorkList.insert(edge);
  }
}

bool ConstantAnalysis::isExecutable(EdgeList& executableFlags, SgNode* sgNode) {
  reverse_foreach(const VirtualCFG::CFGEdge & edge, sgNode->cfgInEdges()) {
    if (executableFlags.find(FilteredCfgEdge(edge)) != executableFlags.end())
      return true;
  }
  return false;
}

bool ConstantAnalysis::isExecutable(EdgeList& executableFlags, FilteredCfgEdge& edge) {
  return executableFlags.find(edge) != executableFlags.end();
}

void ConstantAnalysis::setExecutable(EdgeList& executableFlags, FilteredCfgEdge& edge) {
  executableFlags.insert(edge);
}

/**
 * If the given input CFG node has corresponding PHI function, then check the PHI function
 */
void ConstantAnalysis::visitPhi(FilteredCfgNode& node, EdgeList& executableFlags)
{
  visitPhi(node.getNode(), executableFlags);
}

void ConstantAnalysis::visitPhi(SgNode* sgNode, EdgeList& executableFlags)
{
  if (isPhiNode(sgNode)) {
    StaticSingleAssignment::VarName varName;
    ReachingDefPtr reachDefPtr;
    map<VarName, ReachingDefPtr > varReachDefTable = PHINodeMap[sgNode];
    foreach(tie(varName, reachDefPtr), varReachDefTable) {
      if (ssa->heapVarManager->isHeapVar(varName)) {
  // This is the case for processing heap variable's phi function
  if (!ssa->heapVarManager->hasHeapLattice(reachDefPtr))
    ssa->heapVarManager->addHeapLattice(reachDefPtr);
  HeapLatticePtr heapLattice = ssa->heapVarManager->getHeapLattice(reachDefPtr);

  ReachingDefPtr reachDefPtr_;
  set<ReachingDef::FilteredCfgEdge> edges;
  foreach(tie(reachDefPtr_, edges), reachDefPtr->getJoinedDefs()) {
    SgNode* defNode = reachDefPtr_->getDefinitionNode();
    if (ssa->heapVarManager->hasHeapReachingDef(defNode)) {
      ReachingDefPtr heapReachDefPtr = ssa->heapVarManager->getHeapReachingDef(defNode);
      if (ssa->heapVarManager->hasHeapLattice(heapReachDefPtr)) {
        HeapLatticePtr heapLattice_ = ssa->heapVarManager->getHeapLattice(heapReachDefPtr);

        // Join the two heap lattice to the heap lattice corresponding to phi function
        ssa->heapVarManager->joinHeapSSALattice(heapLattice, heapLattice_);
      }
    }
  }
      } else {
  // This is the case for processing normal variable's phi function
  ReachingDefPtr reachDefPtr_;
  set<ReachingDef::FilteredCfgEdge> edges;

  int currentValue;
  bool hasValue = false;
  foreach(tie(reachDefPtr_, edges), reachDefPtr->getJoinedDefs()) {
    SgNode * paramNode = reachDefPtr_->getDefinitionNode();
    SgAssignOp * assignOp = isSgAssignOp(paramNode);
    if (assignOp != NULL)
      paramNode = cfgUtils::getAssignmentLHS(assignOp);
    LatticeArith* lattice = getLattice(paramNode);
    if (lattice != NULL) {
      if (lattice->is_intLatticeArith()) {
        int intVal = (dynamic_cast<LatticeArithInstance<int> * >(lattice))->getValue();
        if (hasValue) {
    if (currentValue != intVal) {
      hasValue = false;
      break;
    }
        } else {
    currentValue = intVal;
    hasValue = true;
        }
      }
    }
  }

  if (hasValue)
    setLattice(sgNode, new LatticeArithInstance<int>(currentValue));
      }
    }
  }
}

/**
 * Visit the SgNode and evaluate its expression
 */
void ConstantAnalysis::visitExpr(FilteredCfgNode& cfgNode,
                                 EdgeList& FlowWorkList, SgNodeList& SSAWorkList)
{
  // evaluate the expression and obtain the values of the operand from the LatticeCells where
  // they are defined
  bool isScopeStmt = isSgScopeStatement(cfgNode.getNode()) != NULL;
  bool changedLatticeCell = false;
  if (!isScopeStmt)
    changedLatticeCell = evaluate(cfgNode);

  if (changedLatticeCell && isAssignNode(cfgNode)) {
    SSAOut(cfgNode, SSAWorkList);
  } else if (isScopeStmt && isBranch(cfgNode)) {
    if (SgIfStmt * ifStmt = isSgIfStmt(cfgNode.getNode())) {
      SgExprStatement* condStmt = (SgExprStatement *)ifStmt->get_conditional();
      LatticeArith * lattice = getLattice(condStmt->get_expression());
      if (lattice != NULL) {
        LatticeArithInstance<bool>* boolLattice = dynamic_cast<LatticeArithInstance<bool>* >(lattice);

        if (!(boolLattice->isTop() || boolLattice->isBottom())) {
          SgStatement* targetBody;
          if (boolLattice->getValue())
            targetBody = ifStmt->get_true_body();
          else
            targetBody = ifStmt->get_false_body();
          reverse_foreach(const FilteredCfgEdge& edge, cfgNode.outEdges()) {
            if (edge.target().getNode() == targetBody) {
              FlowWorkList.insert(edge);
              break;
            }
          }
        }
      } else {
        // std::cout << "no bool lattice"<< std::endl;
        reverse_foreach(const FilteredCfgEdge edge, cfgNode.outEdges()) {
          FlowWorkList.insert(edge);
        }
      }
      // std::cout << "visit expr can't find lattice for if stmt: " << std::endl;
    } else if (SgForStatement * forStmt = isSgForStatement(cfgNode.getNode())) {
      // reverse_
      foreach(const FilteredCfgEdge edge, cfgNode.outEdges()) {
        FlowWorkList.insert(edge);
      }
      // TODO: check the initization value and termination value
    }
    // TODO: handle other branch statements
  }
}


void ConstantAnalysis::visitExpr(SgNode* node,
                                 EdgeList& FlowWorkList, SgNodeList& SSAWorkList)
{
  // evaluate the expression and obtain the values of the operand from the LatticeCells where
  // they are defined
  bool changedLatticeCell = evaluateExpr(node);
  std::cout << "XXXXXXXXXXXXXXXXXXXXX" << std::endl;
  if (changedLatticeCell) {
    // the LatticeCell of the putput of the expression was changed
    if (cfgUtils::isAssignment(node)) {
      SSAOut(node, SSAWorkList);
      std::cout << "XXXXXXXXXXXXXXXXXXXXX" << std::endl;
    } else if (isBranch(node)) {
      // For every branch edge, add dest to FlowWorkList
      // xxx reverse_foreach(const FilteredCfgEdge& edge,
      // FilteredCfgNode(node->cfgForBeginning()).outEdges()) {
      // FlowWorkList.insert(pair<SgNode*, SgNode* >(edge.source().getNode(),
      //                                               edge.target().getNode()));
      // }
    }
  }
}

/**
 * Get all SSA outs (i.e. the use nodes) and put them into SSAWorkList
 */
void ConstantAnalysis::SSAOut(FilteredCfgNode& cfgNode, SgNodeList& SSAWorkList) {
  SSAOut(cfgNode.getNode(), SSAWorkList);
}

void ConstantAnalysis::SSAOut(SgNode* sgNode, SgNodeList& SSAWorkList) {
  // Get the defined variable
  SgNode* node = cfgUtils::getAssignmentLHS(sgNode);

  if (node == NULL) return;

  // Collect all uses
  VarName usedVar;
  set<ReachingDefPtr> reachingDefs;
  foreach(tie(usedVar, reachingDefs), SSAUseTable[node]) {
    foreach(ReachingDefPtr reachingDef, reachingDefs) {
      SgNode * outNode = reachingDef->getDefinitionNode();
      // Get corresponding CFG node
      SSAWorkList.insert(outNode);
    }
  }
}

/**
 * Check if the given node is an assignment operation
 */
bool ConstantAnalysis::isAssignNode(FilteredCfgNode& node) {
  return cfgUtils::isAssignment(node.getNode());
}

/**
 * Calculate the number of executable in CFG edges
 */
int ConstantAnalysis::numOfExecIn(FilteredCfgNode& cfgNode, EdgeList& executableFlags) {
  int count = 0;
  reverse_foreach(const FilteredCfgEdge inEdge, cfgNode.inEdges()) {
    if (executableFlags.find(inEdge) != executableFlags.end())
      count ++;
  }

  return count;
}

/**
 * Calculate the number of executable out CFG edges
 */
int ConstantAnalysis::numOfExecOut(FilteredCfgNode& cfgNode, EdgeList& executableFlags) {
  int count = 0;
  reverse_foreach(const FilteredCfgEdge outEdge, cfgNode.outEdges()) {
    if (executableFlags.find(outEdge) != executableFlags.end())
      count ++;
  }

  return count;
}

/**
 * Get number of the out edges
 */
int ConstantAnalysis::numOfOut(FilteredCfgNode& cfgNode) {
  return cfgNode.outEdges().size();
}

/**
 * Get the 1st out node
 */
FilteredCfgNode ConstantAnalysis::outNode(FilteredCfgNode& node) {
  //xxx const FilteredCfgEdge edge = * node.outEdges().begin();
  return node; //xxx edge.target();
}

/**
 * Check if the given node is a branch operation, here we just simply check if it has more than
 * one CFG out edges
 */
bool ConstantAnalysis::isBranch(FilteredCfgNode& node) {
  return node.outEdges().size() > 1;
}

bool ConstantAnalysis::isBranch(SgNode* node) {
  return node->cfgForBeginning().outEdges().size() > 1;
}

bool ConstantAnalysis::isPhiNode(FilteredCfgNode& node)
{
  isPhiNode(node.getNode());
}

bool ConstantAnalysis::isPhiNode(SgNode* node) {
  return PHINodeMap.find(node) != PHINodeMap.end();
}

/**
 * Build the use table, i.e. variable def --> SgNodes that use the variable
 * Build the phi node map, i.e. SgNode --> PHI function
 */
bool ConstantAnalysis::buildUseTable(vector<FilteredCfgNode>& cfgNodes, UseSetTable& ssaUseTable,
                                     PHINodeTable& phiNodeMap) {
  // cfgNodes is the set of CFG node for a given procedure,
  // ssaUseTable is the output that maintain the edges from def node to use node
  foreach(const FilteredCfgNode& cfgNode, cfgNodes) {
    SgNode* sgNode = cfgNode.getNode();

    NodeReachingDefTable& reachDefTable = (NodeReachingDefTable&)ssa->getUsesAtNode(sgNode);

    VarName usedVar;
    ReachingDefPtr reachingDefPtr;
    for (NodeReachingDefTable::iterator it = reachDefTable.begin();
   it != reachDefTable.end(); it ++) {
      VarName usedVar = it->first;

      ReachingDefPtr reachingDefPtr = it->second;
      SgNode* defNode = reachingDefPtr->getDefinitionNode();
      // Build the map between the def and use, i.e. def --> uses
      // notice: here we use ReachingDef wrapper, but it does not mean reaching def
      if (reachingDefPtr->isPhiFunction()) {
  // Phi function node
  ssaUseTable[defNode][usedVar].
            insert(ReachingDefPtr(new ReachingDef(sgNode, ReachingDef::PHI_FUNCTION)));
  // Record the PHI node information
  /*if (phiNodeMap.find(defNode) != phiNodeMap.end()) {
    if (ssa->heapVarManager->isHeapVar(usedVar))
      std::cout << "build use: heap var" << std::endl;
    std::cout << "duplicate " << defNode << " with " << reachingDefPtr.get()
        << " for " << StaticSingleAssignment::varnameToString(usedVar) << std::endl;
  } */
  phiNodeMap[defNode][usedVar] = reachingDefPtr;
      } else {
  // Normal definition node
  ssaUseTable[defNode][usedVar].
            insert(ReachingDefPtr(new ReachingDef(sgNode, ReachingDef::ORIGINAL_DEF)));
      }
    }
  }

  return false;
}

/**
 * Get all CFG nodes in post order from the given function definition
 * This is same as SSA calculator did, just because its implementation is a private function
 */
vector<FilteredCfgNode> ConstantAnalysis::getCfgNodesInPostorder(SgFunctionDefinition* func)
{
  struct RecursiveDFS
  {
    static void depthFirstSearch(StaticSingleAssignment::FilteredCfgNode cfgNode,
         set<FilteredCfgNode>& visited,
         vector<StaticSingleAssignment::FilteredCfgNode>& result)
    {
      //First, make sure this node hasn't been visited yet
      if (visited.count(cfgNode) != 0)
  return;

      visited.insert(cfgNode);

      //Now, visit all the node's successors
      reverse_foreach(const FilteredCfgEdge outEdge, cfgNode.outEdges()) {
  depthFirstSearch(outEdge.target(), visited, result);
      }

      //Add this node to the postorder list
      result.push_back(cfgNode);
    }
  };

  ROSE_ASSERT(func != NULL);

  set<FilteredCfgNode> visited;
  vector<FilteredCfgNode> results;
  FilteredCfgNode entry = func->cfgForBeginning();

  RecursiveDFS::depthFirstSearch(entry, visited, results);

  return results;
}

LatticeArith * ConstantAnalysis::getLattice(SgNode * node) {
  // std::cout << "work on: " << node->class_name() << std::endl;
  // return (dynamic_cast<ConstantAnalysisTransfer * >(transferVisitor.get()))->getLattice_((const SgExpression*)node);
  // std::cout << "try lattice " << transferVisitor << std::endl;
  return ((ConstantAnalysisTransfer *)transferVisitor)->getLattice_((const SgExpression*)node);

  /*if (latticeMap.find(node) == latticeMap.end())
    return NULL;
  else
    return latticeMap[node];
*/
}

void ConstantAnalysis::setLattice(SgNode * node, LatticeArith * lattice) {
  // ROSE_ASSERT(latticeMap.find(node) == latticeMap.end());
  // latticeMap[node] = lattice;
  ((ConstantAnalysisTransfer*)transferVisitor)->setLattice_((const SgExpression*)node, lattice);
}

StaticSingleAssignment* ConstantAnalysis::getSSA() {
  return ssa;
}

/**
 * Evaluate the node
 */
bool ConstantAnalysis::evaluate(FilteredCfgNode& node)
{
  // Process the expression nodes
  SgNode * sgNode = node.getNode();

  // Perform SgNode and variable name (for SSA look-aside info) based evaluation
  // We use SgNode <--> Lattice map, because the expression may have lattice as well
  // TODO: this is just temproary approach, the LatticeCell should be plant into
  // SgNode's attribute

  return evaluateExpr(sgNode);
}

bool ConstantAnalysis::evaluateExpr(SgNode * node) {
  // Evaluate the input node by transfer visitor
  node->accept(* transferVisitor); // transferVisitor.visit(node);
}

void ConstantAnalysis::dumpLattices() {
  class EvaluateExpressionTraversal : public AstSimpleProcessing {
  public:
    ConstantAnalysisTransfer* transferVisitor;

    void visit(SgNode* node)
    {
      // std::cout << "visiting: " << node->class_name() << std::endl;
      SgNode* lhsOperand  = cfgUtils::getAssignmentLHS(node);
      if (lhsOperand != NULL) {
  // std::cout<< "dump operand " << lhsOperand->class_name() << " with "
  //   << lhsOperand << std::endl;
  LatticeArith* lhsLattice = transferVisitor->getLattice_((const SgExpression*)lhsOperand);
  // if (lhsLattice != NULL) std::cout << "has lattice" << std::endl;
  if (lhsLattice != NULL && lhsLattice->is_intLatticeArith()) {
    SgVarRefExp* varRef = isSgVarRefExp(lhsOperand);
    if (varRef != NULL) {
      if (lhsLattice->isBottom())
        std::cout << varRef->get_symbol()->get_name().getString() << " = bottom" << std::endl;
      else if (lhsLattice->isTop())
        std::cout << varRef->get_symbol()->get_name().getString() << " = top" << std::endl;
      else
        std::cout << varRef->get_symbol()->get_name().getString() << " = "
      << (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue() << std::endl;
    }
  }
      }
    }
  };

  EvaluateExpressionTraversal trav;

  foreach (SgFunctionDefinition* func, interestingFunctions) {
    trav.transferVisitor = (ConstantAnalysisTransfer* )funcTransferMap[func];
    trav.traverse(func, postorder);
  }
}
