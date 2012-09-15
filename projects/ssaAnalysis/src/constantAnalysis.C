#include "constantAnalysis.h"
#include "rose.h"
#include <boost/foreach.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/operators.hpp>
#include <new>
#include "CallGraph.h"
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

bool scc_private::scc_debug = false;

ConstantAnalysis::ConstantAnalysis(SgProject* proj, StaticSingleAssignment* ssaInstance)
: project(proj), ssa(ssaInstance) {
    NULL_Node = new SgNode();

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

/**
 * This is the main procedure that perform intra-procedural SCC, based on call-graph traversal
 */
bool ConstantAnalysis::runAnalysis(const Function& func, NodeState* state,
        bool analyzeDueToCallers, std::set<Function> calleesUpdated) {
    // TODO: move the intro-procedural process here
    if (interestingFunctions.find(func.get_declaration()->get_definition())
            != interestingFunctions.end()) {
        // VirtualCFG::cfgToDotForDebugging(func.get_declaration()->get_definition(), "test.dot");
        // Invoke SCC
        SCC(func.get_declaration()->get_definition(), false);
    }

    return false;
}

#if OBSOLETE_CODE
void ConstantAnalysis::genInitState(const Function& func, const DataflowNode& n,
        const NodeState& state, std::vector<Lattice*>& initLattices,
        std::vector<NodeFact*>& initFacts) {
    // TODO: implement this
    // std::cout << "generate init state" << std::endl;
}
#endif /* OBSOLETE_CODE */

Lattice*
ConstantAnalysis::genLattice(const Function& func, const DataflowNode& n, const NodeState& state)
{
  // TODO: implement this
  // std::cout << "generate init state" << std::endl;
  return 0;
}

std::vector<NodeFact*>
ConstantAnalysis::genFacts(const Function& func, const DataflowNode& n, const NodeState& state)
{
  // TODO: implement this
  // std::cout << "generate init state" << std::endl;
  return std::vector<NodeFact*>();
}



/**
 * Main process of SSC, i.e. Wegman-Zadeck algorithm
 */
void ConstantAnalysis::SCC(SgFunctionDefinition* func, bool edgeBased)
{
    // 1.) Initialize worklist
    EdgeList FlowWorkList;
    SgNodeList SSAWorkList;
    EdgeList& executableFlags = executableEdges;

    FilteredCfgNode currentNode = FilteredCfgNode(func->cfgForBeginning());
    addOutEdges(FlowWorkList, currentNode);

    // 2.) Perform sparse analysis on the ssa form
    while (!FlowWorkList.empty() || !SSAWorkList.empty()) {
        if (!FlowWorkList.empty()) {
            // process the item from FlowWorkList, i.e. flow-edge
            // get and remove the 1st element in the list
            FilteredCfgEdge currentEdge = * FlowWorkList.begin();
            FlowWorkList.erase(FlowWorkList.begin());

            if (!isExecutable(executableFlags, currentEdge)) {
                setExecutable(executableFlags, currentEdge);;

                currentNode = currentEdge.target();

                // Visit Phi node
                visitPhi(currentNode, executableFlags);

                if (numOfExecIn(currentNode, executableFlags) == 1)
                    // No need to check number of executable in edge here, if we use Cfg Node
                    // as work list item
                    visitExpr(currentNode, FlowWorkList, SSAWorkList);

                if (numOfOut(currentNode) == 1)
                    addOutEdges(FlowWorkList, currentNode);
                // else
                //   std::cout << " more than one?? " << currentEdge.target().toString() << std::endl;
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
    reverse_foreach(const FilteredCfgEdge& edge, cfgNode.outEdges()) {
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
        // std::cout << "check phi node " << sgNode->class_name() << std::endl;
        ReachingDef::ReachingDefPtr reachDefPtr;
        set<ReachingDef::FilteredCfgEdge> edges;

        int currentValue;
        bool hasValue = false;
        foreach(tie(reachDefPtr, edges), PHINodeMap[sgNode]->getJoinedDefs()) {
            SgNode * paramNode = reachDefPtr->getDefinitionNode();
            SgAssignOp * assignOp = isSgAssignOp(paramNode);
            if (assignOp != NULL)
                paramNode = cfgUtils::getAssignmentLHS(assignOp); // getLHS(assignOp);
            LatticeArith * lattice = dynamic_cast<LatticeArith*>(getLattice(paramNode));
            // std::cout << "reach def: " << paramNode->class_name()
            // 	<< " with " << (lattice != NULL) << std::endl;
            if (lattice != NULL) {
                if (lattice->is_intLatticeArith()) {
                    int intVal = (dynamic_cast<IntLatticeArith*>(lattice))->getValue();
                    // std::cout << "phi value: " << intVal << std::endl;
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
            /*if (isExecutable(executableFlags, paramNode, sgNode)) {
        // Here we don't need to do anything, because the ReachingDef maintains the pointer of
        // def SgNode, so if the def SgNode has been visited, it must have lattice, otherwise
	// the lattice pointer is NULL
      }*/
        }
        if (hasValue) {
            setLattice(sgNode, new IntLatticeArith(currentValue));
        }
    }
}

/**
 * Visit the SgNode and evaluate its expression
 */
void ConstantAnalysis::visitExpr(FilteredCfgNode& cfgNode,
        EdgeList& FlowWorkList, SgNodeList& SSAWorkList)
{
    // evaluate the expression and obtain the values of the operand from the Lattice where
    // they are defined
    bool isScopeStmt = isSgScopeStatement(cfgNode.getNode()) != NULL;
    bool changedLatticeCell = false;
    if (!isScopeStmt)
        changedLatticeCell = evaluate(cfgNode);

    // std::cout << "VISIT " << cfgNode.getNode()->class_name()
    // << " outs: " << cfgNode.getNode()->cfgOutEdges().size() << std::endl;
    // the LatticeCell of the putput of the expression was changed
    if (changedLatticeCell && isAssignNode(cfgNode)) {
        SSAOut(cfgNode, SSAWorkList);
    } else if (isScopeStmt && isBranch(cfgNode)) {
        if (SgIfStmt * ifStmt = isSgIfStmt(cfgNode.getNode())) {
            SgStatement* condStmt = ifStmt->get_conditional();
            LatticeArith * lattice = dynamic_cast<LatticeArith*>(getLattice(condStmt));
            if (lattice != NULL) {
                if (lattice->hasValue()) {
                    BoolLatticeArith * boolLattice =
                            dynamic_cast<BoolLatticeArith *>(lattice);
                    ROSE_ASSERT(boolLattice != NULL);
                    SgStatement* targetBody = boolLattice->getValue() ?
                            ifStmt->get_true_body() : ifStmt->get_false_body();
                    reverse_foreach(const FilteredCfgEdge& edge, cfgNode.outEdges()) {
                        if (edge.target().getNode() == targetBody) {
                            FlowWorkList.insert(edge);
                            break;
                        }
                    }
                }
            } else {
                reverse_foreach(const FilteredCfgEdge edge, cfgNode.outEdges()) {
                    FlowWorkList.insert(edge);
                }
            }
            // std::cout << "visit expr can't find lattice for if stmt: " << std::endl;
        } else if (SgForStatement * forStmt = isSgForStatement(cfgNode.getNode())) {
            reverse_foreach(const FilteredCfgEdge edge, cfgNode.outEdges()) {
                FlowWorkList.insert(edge);
            }
            // TODO: check the initization value and termination value
        }
        // TODO: handle other branch statements
    } // else
    // std::cout << "nothing??" << std::endl;
}

void ConstantAnalysis::visitExpr(SgNode* node,
        EdgeList& FlowWorkList, SgNodeList& SSAWorkList)
{
    // evaluate the expression and obtain the values of the operand from the Lattice where
    // they are defined
    bool changedLatticeCell = evaluateExpr(node);
    std::cout << "XXXXXXXXXXXXXXXXXXXXX" << std::endl;
    if (changedLatticeCell) {
        // the Lattice of the putput of the expression was changed
        if (cfgUtils::isAssignment(node)) {
            SSAOut(node, SSAWorkList);
            std::cout << "XXXXXXXXXXXXXXXXXXXXX" << std::endl;
        } else if (isBranch(node)) {
            // For every branch edge, add dest to FlowWorkList
            /*xxx reverse_foreach(const FilteredCfgEdge& edge,
		      FilteredCfgNode(node->cfgForBeginning()).outEdges()) {
	FlowWorkList.insert(pair<SgNode*, SgNode* >(edge.source().getNode(),
                                                    edge.target().getNode()));
      }*/
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
    return isPhiNode(node.getNode());
}

bool ConstantAnalysis::isPhiNode(SgNode* node) {
    return PHINodeMap.find(node) != PHINodeMap.end();
}

/**
 * Build the use table, i.e. variable def --> SgNodes that use the variable
 * Build the phi node map, i.e. SgNode --> PHI function
 */
bool ConstantAnalysis::buildUseTable(vector<FilteredCfgNode>& cfgNodes,
        UseTable& useTable, UseSetTable& ssaUseTable,
        map<SgNode *, ReachingDefPtr>& phiNodeMap) {
    // cfgNodes is the set of CFG node for a given procedure,
    // useTable is an internal table maintained within SSA calculator
    // ssaUseTable is the output that maintain the edges from def node to use node
    foreach(const FilteredCfgNode& cfgNode, cfgNodes) {
        SgNode* node = cfgNode.getNode();
        if (useTable.count(node) == 0)
            continue;

        VarName usedVar;
        ReachingDefPtr reachingDefPtr;
        foreach(tie(usedVar, reachingDefPtr), useTable[node]) {
            if (useTable[node].count(usedVar) > 0) {
                SgNode* sgNode = useTable[node][usedVar]->getDefinitionNode();
                // std::cout << "create use chain " << sgNode->class_name() << " with "
                // 	  << node->class_name() << std::endl;
                // SgInitializedName* initName = isSgInitializedName(sgNode);
                // if (initName != NULL)
                // std::cout << "  " << initName->get_qualified_name().getString() << std::endl;
                // Build the map between the def and use, i.e. def --> uses
                // notice: here we use ReachingDef wrapper, but it does not mean reaching def
                if (useTable[node][usedVar]->isPhiFunction()) {
                    // Phi function node
                    ssaUseTable[sgNode][usedVar].
                    insert(ReachingDefPtr(new ReachingDef(node, ReachingDef::PHI_FUNCTION)));
                    // Record the PHI node information
                    phiNodeMap[sgNode] = useTable[node][usedVar];
                    // std::cout << "phi func" << std::endl;
                } else {
                    // Normal definition node
                    ssaUseTable[sgNode][usedVar].
                    insert(ReachingDefPtr(new ReachingDef(node, ReachingDef::ORIGINAL_DEF)));
                }
            }
        }
    }

    return false;
}

bool ConstantAnalysis::buildUseTable(vector<FilteredCfgNode>& cfgNodes, UseSetTable& ssaUseTable,
        map<SgNode *, ReachingDefPtr>& phiNodeMap) {
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
            // std::cout << "create use chain " << defNode->class_name() << " with "
            //        << sgNode->class_name() << std::endl;
            // SgInitializedName* initName = isSgInitializedName(defNode);
            // if (initName != NULL)
            // std::cout << "  " << initName->get_qualified_name().getString() << std::endl;
            // Build the map between the def and use, i.e. def --> uses
            // notice: here we use ReachingDef wrapper, but it does not mean reaching def
            if (reachingDefPtr->isPhiFunction()) {
                // Phi function node
                ssaUseTable[defNode][usedVar].
                insert(ReachingDefPtr(new ReachingDef(sgNode, ReachingDef::PHI_FUNCTION)));
                // Record the PHI node information
                phiNodeMap[defNode] = reachingDefPtr;
                // std::cout << "phi func" << std::endl;
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

Lattice * ConstantAnalysis::getLattice(SgNode * node) {
    if (latticeMap.find(node) == latticeMap.end())
        return NULL;
    else
        return latticeMap[node];
}

void ConstantAnalysis::setLattice(SgNode * node, Lattice * lattice) {
    // ROSE_ASSERT(latticeMap.find(node) == latticeMap.end());
    // latticeMap.insert(pair<SgNode *, Lattice * >(node, lattice));
    latticeMap[node] = lattice;
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
    // TODO: this is just temproary approach, the Lattice should be plant into
    // SgNode's attribute

    if(scc_debug) printf("evaluate %s\n", sgNode->unparseToString().c_str());
    return evaluateExpr(sgNode);
}

bool ConstantAnalysis::evaluateExpr(SgNode * node) {
    // Should call the tool functions in symbolic dataflow analysis
    // std::cout << "EVALUATE expr " << std::endl;
    // std::cout << "    " << node->class_name() << std::endl;

    class EvaluateExpressionTraversal : public AstSimpleProcessing {
    public:
        ConstantAnalysis* scc;

        void visit(SgNode* node)
        {
            long val;
            if(scc_debug) printf("visit %s\n", node->unparseToString().c_str());

            // std::cout << "evaluate node " << node->class_name() << std::endl;
            if (SgBinaryOp * binaryOp = isSgBinaryOp(node)) {
                // std::cout << "evaluate type: binary op " << binaryOp->class_name() << std::endl;
                SgExpression * lhsOperand = binaryOp->get_lhs_operand();
                SgExpression * rhsOperand = binaryOp->get_rhs_operand();
                LatticeArith * lhsLattice = dynamic_cast<LatticeArith*>(scc->getLattice(lhsOperand));
                LatticeArith * rhsLattice = dynamic_cast<LatticeArith*>(scc->getLattice(rhsOperand));
                if (lhsLattice != NULL && rhsLattice != NULL) {
                    switch (binaryOp->variantT()) {
                    case V_SgAddOp:
                        scc->setLattice(binaryOp, *lhsLattice + rhsLattice);
                        break;
                    case V_SgSubtractOp:
                        scc->setLattice(binaryOp, *lhsLattice - rhsLattice);
                        break;
                    case V_SgMultiplyOp:
                        scc->setLattice(binaryOp, *lhsLattice * rhsLattice);
                        break;
                    case V_SgDivideOp:
                        scc->setLattice(binaryOp, *lhsLattice / rhsLattice);
                        break;
                    case V_SgModOp:
                        scc->setLattice(binaryOp, *lhsLattice % rhsLattice);
                        break;
                    case V_SgLshiftOp:
                        scc->setLattice(binaryOp, *lhsLattice << rhsLattice);
                        break;
                    case V_SgRshiftOp:
                        scc->setLattice(binaryOp, *lhsLattice >> rhsLattice);
                        break;
                    case V_SgGreaterThanOp:
                        scc->setLattice(binaryOp, *lhsLattice > rhsLattice);
                        break;
                    case V_SgGreaterOrEqualOp:
                        scc->setLattice(binaryOp, *lhsLattice >= rhsLattice);
                        break;
                    case V_SgLessThanOp:
                        scc->setLattice(binaryOp, *lhsLattice < rhsLattice);
                        break;
                    case V_SgLessOrEqualOp:
                        scc->setLattice(binaryOp, *lhsLattice <= rhsLattice);
                        break;
                    case V_SgNotEqualOp:
                        scc->setLattice(binaryOp, *lhsLattice != rhsLattice);
                        break;
                    case V_SgEqualityOp:
                        scc->setLattice(binaryOp, *lhsLattice == rhsLattice);
                        break;
                        // These are special cases, for the LHS operand, we have to propergate the RHS lattice
                        // since the SSA reaching def is based on VarExpr
                    case V_SgAssignOp:
                        if (scc_debug) printf("assignment %p %s\n", binaryOp, binaryOp->unparseToString().c_str());
                        scc->setLattice(lhsOperand, rhsLattice->copy());
                        // propagate lhs to the binaryOp
                        scc->setLattice(binaryOp, rhsLattice->copy());
                        break;
                    case V_SgPlusAssignOp:
                        scc->setLattice(lhsOperand, *lhsLattice + rhsLattice);
                        break;
                    case V_SgMinusAssignOp:
                        scc->setLattice(lhsOperand, *lhsLattice - rhsLattice);
                        break;
                    default:
                        printf("ERROR Unhandled binary operation: '%s'\n", binaryOp->unparseToString().c_str());
                        ROSE_ASSERT(false);
                        break;
                    }
                }
            } else if (SgUnaryOp* unOp = isSgUnaryOp(node)) {
                SgExpression * unOperand = unOp->get_operand();
                Lattice * unLattice = scc->getLattice(unOperand);
                if (unLattice != NULL && scc->getLattice(unOp) == NULL) {
                    int unVal;
                    switch (unOp->variantT()) {
                    case V_SgPlusPlusOp:
                        unVal = dynamic_cast<IntLatticeArith*>(unLattice)->getValue();
                        // std::cout << "++ " << unVal << std::endl;
                        scc->setLattice(unOp, new IntLatticeArith(unVal + 1));
                        break;
                    case V_SgMinusMinusOp:
                        unVal = dynamic_cast<IntLatticeArith*>(unLattice)->getValue();
                        scc->setLattice(unOp, new IntLatticeArith(unVal - 1));
                        break;
                        // TODO: handle more unary operations
                    default:
                        break;
                    }
                }
            } else if (cfgUtils::isAssignment(node)) {
                // Process RHS
                set<SgNode*> rhs;
                // scc->getRHS(node, rhs);
                cfgUtils::getAssignmentRHS(node, rhs);
                Lattice * rhsLattice = NULL;
                foreach(SgNode * node, rhs) {
                    // if (isSgExpression(node))
                    //   evaluateExpr((SgExpression *)node, true);
                    // std::cout << "evaluate RHS: " << node->class_name() << std::endl;
                    rhsLattice = scc->getLattice(node);
                }

                // Process LHS
                // SgNode * lhs = scc->getLHS(node);
                SgNode* lhs = cfgUtils::getAssignmentLHS(node);
                Lattice * lhsLattice = scc->getLattice(lhs);
                if (lhs != NULL && rhsLattice != NULL) {
                    scc->setLattice(lhs, rhsLattice->copy());
                    // TODO: handle plusassign, minusassign operations
                }
            } else if (SgVarRefExp * varRef = isSgVarRefExp(node)){
                if (scc_debug) printf("SgVarRefExp %s\n", varRef->unparseToString().c_str());
                const VarName& varName = StaticSingleAssignment::getVarName(node);
                const NodeReachingDefTable& reachingDefs = scc->getSSA()->getReachingDefsAtNode_(node);
                // Get SSA look-aside info
                if (reachingDefs.find(varName) != reachingDefs.end()) {
                    ReachingDefPtr reachingDef = (* reachingDefs.find(varName)).second;
                    // Get reaching def node, and corresponding lattice
                    SgNode * defNode = reachingDef->getDefinitionNode();
                    Lattice * lattice = scc->getLattice(defNode);
                    if (lattice != NULL) {
                        scc->setLattice(varRef, lattice->copy());
                    } else {
                        if (scc_debug) {
                            printf("Didn't find any lattice information for %s\n", varRef->unparseToString().c_str());
                            printf("Definition node was %p %s\n", defNode, defNode->unparseToString().c_str());
                        }
                    }
                } else {
                    if (scc_debug) printf("Didn't find any ssa information for %s\n", varRef->unparseToString().c_str());
                }
            } else if (cfgUtils::IsConstInt((const SgExpression* )node, val)) {
                scc->setLattice(node, new IntLatticeArith(val));
            } else if (SgExprStatement* exprStmt = isSgExprStatement(node)) {
                // Propagate the expression's lattice to expression stmt
                Lattice * lattice = scc->getLattice(exprStmt->get_expression());
                if (lattice != NULL)
                    scc->setLattice(exprStmt, lattice->copy());
            } else if (SgIfStmt * ifStmt = isSgIfStmt(node)) {
                // Propagate the condition's lattice to if stmt
                SgStatement* condStmt = ifStmt->get_conditional();
                Lattice * lattice = scc->getLattice(condStmt);
                if (lattice != NULL)
                    scc->setLattice(varRef, lattice->copy());
            } else {
                // TODO: handle more SgNodes
                if (scc_debug) std::cout << "unhandled SgNode type: " << node->class_name() << std::endl;
            }
            if (scc_debug && (scc->getLattice(node) != NULL)) {
                printf("hasLattice %p %s \n", node, node->unparseToString().c_str());
            }
            return;
        }
    };

    EvaluateExpressionTraversal trav;
    trav.scc = this;
    trav.traverse(node, postorder);

    return true;
}

void ConstantAnalysis::dumpLattices() {
    class EvaluateExpressionTraversal : public AstSimpleProcessing {
    public:
        ConstantAnalysis* scc;
        void visit(SgNode* node) {
            Lattice* lattice = scc->getLattice(node);
            if (lattice != NULL) {
                std::cout << "'" << node->unparseToString() << "'";
                SgVarRefExp* varRef = isSgVarRefExp(node);
                if (varRef != NULL) {
                    std::cout << " : " << varRef->get_symbol()->get_name().getString();
                }
                std::cout << " => " << lattice->str() << std::endl;
            }
        }
    };

    EvaluateExpressionTraversal trav;
    trav.scc = this;

    foreach (SgFunctionDefinition* func, interestingFunctions) {
        trav.traverse(func, postorder);
    }
}


ConstantAnalysis * runScc(SgProject * project) {
    // Initialize the analysis
    initAnalysis(project);
    analysisDebugLevel = 0;
    // Init the debug environment
    Dbg::init("SSA Analysis Test", ".", "index.html");

    // Invoke SSA constructor with inter-procedural configure
    StaticSingleAssignment * ssa = new StaticSingleAssignment(project);
    // No inter-procedural analysis for SSA and treat pointer as structure, i.e. p->x as p.x
    ssa->run(false, true);

    // Create SCC by using SSA as input
    ConstantAnalysis * scc = new ConstantAnalysis(project, ssa);
    // scc.run(false);
    ContextInsensitiveInterProceduralDataflow * ciIPD = new ContextInsensitiveInterProceduralDataflow(scc, getCallGraph());
    // Invoke SCC based on call graph traversal
    ciIPD->runAnalysis();

    return scc;
}
