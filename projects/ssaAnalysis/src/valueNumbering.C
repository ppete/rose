#include "valueNumbering.h"

/**
 * This is an implementation of Alpern, Wegman & Zadeck value numbering
 *
 * author: jisheng zhao (jz10@rice.edu)
 */
#define foreach BOOST_FOREACH

using namespace boost;
using namespace std;
using namespace hssa_private;
using namespace scc_private;

ValueNode ValueNode::emptyNode(NULL, NULL, false, -1);

ValueNumbering::ValueNumbering(SgProject* proj, HeapSSA* ssaInstance)
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
}

ValueNumbering::~ValueNumbering() {
}

// Run the analysis
void ValueNumbering::run(bool hierarchical) {
}

// Run the intra-procedural analysis
bool ValueNumbering::runAnalysis(const ::Function& func, NodeState* state, bool analyzeDueToCallers,
         std::set< ::Function > calleesUpdated) {
  // TODO: move the intro-procedural process here
  if (interestingFunctions.find(func.get_declaration()->get_definition())
      != interestingFunctions.end()) {
    // Invoke value numbering
    VN(func);
  } else
    std::cout << "not for analysis" << std::endl;

  return false;
}

// \pp changed interface
void ValueNumbering::genInitState( const ::Function& func,
                                   const DataflowNode& n,
                                   const NodeState& state,
                                   Lattice*& initLattices,
                                   std::vector<NodeFact*>& initFacts
                                 )
{
}

bool ValueNumbering::transfer(const ::Function& func, const DataflowNode& n, NodeState& state,
            const std::vector<Lattice*>& dfInfo) {
  return false;
}

boost::shared_ptr<IntraDFTransferVisitor>
getTransferVisitor(const ::Function& func, const DataflowNode& n, NodeState& state,
       const std::vector<Lattice*>& dfInfo) {
}

// Main framework of Alpern-Wegman-Zadeck'88 Value Numbering
void ValueNumbering::VN(const ::Function& func) {
  // Build the value graph
  ValueGraph vg(func, ssa);
  vg.build();

  // Evaluate the congruence and number the values for the Sage variables
  vg.partitioning();
}

// Query interface for checking if two SgNodes have same value number
bool ValueNumbering::haveSameValueNumber(SgFunctionDefinition* func, SgNode* sgn1, SgNode* sgn2) {
  if (funcValueGraphMap.find(func) == funcValueGraphMap.end())
    return false;

  ValueGraphPtr valueGraph = funcValueGraphMap[func];

  return valueGraph->haveSameVN(sgn1, sgn2);
}

void ValueNumbering::dumpLattices() {
}

// Construct the value graph by invoking the traversal
void ValueGraph::build() {
  traverse(function.get_declaration());
}

/**
 * Construct the per-function value graph
 */
ValueNodePtr ValueGraph::evaluateSynthesizedAttribute(SgNode* node,
                  SynthesizedAttributesList attrs) {
  if (SgInitializedName* initName = isSgInitializedName(node)) {
    // TODO:
  }
  // Variable ref, we need to find its reaching def's value node
  else if (SgVarRefExp* varRef = isSgVarRefExp(node)) {
    // The variable node need to be identified by its reaching def
    const StaticSingleAssignment::VarName& varName = StaticSingleAssignment::getVarName(varRef);
    const StaticSingleAssignment::NodeReachingDefTable& reachingDefs
      = ssa->getReachingDefsAtNode_(varRef);
    SgNode* varNode;
    // Get SSA look-aside info
    if (reachingDefs.find(varName) != reachingDefs.end()) {
      StaticSingleAssignment::ReachingDefPtr reachingDef = (* reachingDefs.find(varName)).second;
      // Get reaching def node
      varNode = reachingDef->getDefinitionNode();

      // If the value node has been created for current variable ref's reaching def, then reuse it
      if (sgnValueNodeMap.find(varNode) != sgnValueNodeMap.end())
  return sgnValueNodeMap[varNode];

      ValueNodePtr valNode = ValueNodePtr(new ValueNode(varNode, NULL, false, labelId));
      // Check if this is a phi function, we need to store that
      if (reachingDef->isPhiFunction())
    valNode->setPhiFunc(reachingDef.get());

      sgnValueNodeMap[varNode] = valNode;
      return valNode;
    } else {
      varNode = varRef;
      ValueNodePtr valNode = ValueNodePtr(new ValueNode(varNode, NULL, false, labelId));
      sgnValueNodeMap[varNode] = valNode;
      return valNode;
    }
  }
  // Constant value
  else if (SgValueExp* valExp = isSgValueExp(node)) {
    // We don't support such two types of value, UPC thread and UPC mythreadhread
    // The constant value is a leaf node in value graph
    ValueNodePtr valNode =  ValueNodePtr(new ValueNode(valExp, NULL, false, labelId));
    sgnValueNodeMap[valExp] = valNode;
    return valNode;
  }
  // Catch all binary operations here.
  else if (SgBinaryOp * binaryOp = isSgBinaryOp(node)) {
      ROSE_ASSERT(attrs.size() == 2 && "Error: BinaryOp without exactly 2 children.");
      ValueNodePtr lhs = attrs[0];
      ValueNodePtr rhs = attrs[1];

      switch (binaryOp->variantT())
        {
          // All the binary ops that define the LHS
        case V_SgAndAssignOp:
        case V_SgDivAssignOp:
        case V_SgIorAssignOp:
        case V_SgLshiftAssignOp:
        case V_SgMinusAssignOp:
        case V_SgModAssignOp:
        case V_SgMultAssignOp:
        case V_SgPlusAssignOp:
        case V_SgPointerAssignOp:
        case V_SgRshiftAssignOp:
        case V_SgXorAssignOp:
    {
      ValueNodePtr valNode = ValueNodePtr(new ValueNode(binaryOp, binaryOp, true, labelId));
            valNode->leftNode = lhs;
            valNode->rightNode = rhs;
            sgnValueNodeMap[binaryOp] = valNode;
            return valNode;
    }
        case V_SgAssignOp:
          {
      // No need to create the new value node, just reuse rhs, and lhs is wasted (rhs may
      // be mathmatic operation or just a variable)
      // Reset the var node as current binary op, since this has assignment
      rhs->setVarNode(binaryOp);
      sgnValueNodeMap[binaryOp] = rhs;
      return rhs;
    }
    // All the binary ops that does not define anything
  case V_SgAddOp:
  case V_SgSubtractOp:
  case V_SgMultiplyOp:
  case V_SgDivideOp:
  case V_SgModOp:
  case V_SgPlusPlusOp:
  case V_SgMinusMinusOp:
    {
      ValueNodePtr valNode = ValueNodePtr(new ValueNode(NULL, binaryOp, true, labelId));
      valNode->leftNode = lhs;
      valNode->rightNode = rhs;
      sgnValueNodeMap[binaryOp] = valNode;
      return valNode;
    }
  default:
    {
      return ValueNodePtr(new ValueNode(NULL, NULL, false, -1));
    }
  }
  }
  // Catch all unary operations here.
  else if (SgUnaryOp* unaryOp = isSgUnaryOp(node)) {
    // Only handle the case that there is attr
    if (attrs.size() > 0) {
      ValueNodePtr valNode = attrs[0];
      valNode->setVarNode(unaryOp);
      sgnValueNodeMap[unaryOp] = valNode;
      return valNode;
    }

    return ValueNodePtr(new ValueNode(NULL, NULL, false, -1));
  } else if (SgBasicBlock* basicBlock = isSgBasicBlock(node)) {
    // Here we increase the label Id, since the initial partition is basic block based
    incrLabelId();
  }

  return ValueNodePtr(new ValueNode(NULL, NULL, false, -1));
}

// Initialize the partitions
void ValueGraph::initializePartitions(vector<PartitionPtr>& partitions) {
  map<int, PartitionPtr> labelToPartitions;

  SgNode* sgn = NULL;
  ValueNodePtr valNode;
  // Collect the nodes that belong to same partitions, i.e. based on node's label Id
  foreach(tie(sgn, valNode), sgnValueNodeMap) {
    int label = valNode->getLabel();

    PartitionPtr partition;
    if (labelToPartitions.find(label) != labelToPartitions.end())
      partition = labelToPartitions[label];
    partition = PartitionPtr(new Partition(label));

    partition->addValueNode(valNode);
    valNode->partition = partition;
  }
}

// Iterative process the partitions
void ValueGraph::processPartition(PartitionPtr partition, vector<PartitionPtr>& newPartitions) {
  if (partition->size() == 0)
    return;

  ValueNodePtr firstNode = (* partition)[0];
  bool hasNewPartition = false;
  PartitionPtr newPartition = PartitionPtr(new Partition(incrLabelId()));

  int size = partition->size();
  for (int i = 0; i < size; i ++) {
    ValueNodePtr valNode = (* partition)[i];

    if (equalyPartitioned(firstNode, valNode)) {
      partition->remove(i);
      size --;
      newPartition->addValueNode(valNode);
      newPartitions.push_back(newPartition);
      valNode->partition = newPartition;
      hasNewPartition = true;
    }
  }

  // If there's new partition created (new value node added into new partition), then process it
  if (hasNewPartition = true)
    processPartition(newPartition, newPartitions);
}

// Check if the two given value nodes are in same partition, i.e. including their sub nodes
bool ValueGraph::equalyPartitioned(ValueNodePtr valNode1, ValueNodePtr valNode2) {
  // The empty node means unclear value
  if (* valNode1 == ValueNode::emptyNode || * valNode2 == ValueNode::emptyNode)
    return false;

  // Check the equality of the two given value node, i.e. point to same SgNode or have same
  // constant value
  if (* valNode1 == * valNode2)
    return true;
  // Check if the given value nodes are in same partition
  else if (* valNode1->partition == * valNode2->partition)
    return true;
  // Check the two operator nodes, i.e. lhs oper rhs
  else if (valNode1->isOperNode() && valNode2->isOperNode()) {
    if (valNode1->getOperNode()->variantT() != valNode2->getOperNode()->variantT())
      return false;

    return equalyPartitioned(valNode1->leftNode, valNode2->leftNode)
      && equalyPartitioned(valNode1->rightNode, valNode2->rightNode);
  }
  // Check the two Phi function nodes
  else if (valNode1->isPhiNode() && valNode2->isPhiNode()) {
    // Check the partitions for the phi parameters
    ReachingDef* phiFunc1 = valNode1->getPhiFunc();
    ReachingDef* phiFunc2 = valNode2->getPhiFunc();
    if (phiFunc1->getJoinedDefs().size() !=  phiFunc2->getJoinedDefs().size())
      return false;

    map<ReachingDef::ReachingDefPtr, set<ReachingDef::FilteredCfgEdge> > map1 =
      phiFunc1->getJoinedDefs();
    map<ReachingDef::ReachingDefPtr, set<ReachingDef::FilteredCfgEdge> > map2 =
      phiFunc2->getJoinedDefs();
    map<ReachingDef::ReachingDefPtr, set<ReachingDef::FilteredCfgEdge> >::iterator iter1
      = map1.begin();
    map<ReachingDef::ReachingDefPtr, set<ReachingDef::FilteredCfgEdge> >::iterator iter2
      = map2.begin();
    for (; iter1 != map1.end(); ++ iter1, ++ iter2) {
      ReachingDef::ReachingDefPtr reachingDef1 = (* iter1).first;
      ReachingDef::ReachingDefPtr reachingDef2 = (* iter2).first;
      if (sgnValueNodeMap.find(reachingDef1->getDefinitionNode()) == sgnValueNodeMap.end()
    || sgnValueNodeMap.find(reachingDef2->getDefinitionNode()) == sgnValueNodeMap.end())
  return false;

      ValueNodePtr phiValNode1 = sgnValueNodeMap[reachingDef1->getDefinitionNode()];
      ValueNodePtr phiValNode2 = sgnValueNodeMap[reachingDef2->getDefinitionNode()];
      if (!equalyPartitioned(phiValNode1, phiValNode2))
  return false;
    }

    return true;
  }

  return false;
}

// Check if two value nodes point to same SgNode or have same constant value
bool ValueNode::operator==(ValueNode that) {
  // Point to same SgNode
  if (getVarNode() == that.getVarNode())
    return true;

  // Constant value
  if (isConstVal() && that.isConstVal()) {
    // Check integer constant
    if (SgIntVal* intVal1 = isSgIntVal(getVarNode()))
      if (SgIntVal* intVal2 = isSgIntVal(that.getVarNode()))
  return intVal1->get_value() == intVal2->get_value();

    // Check boolean constant
    if (SgBoolValExp* boolVal1 = isSgBoolValExp(getVarNode()))
      if (SgBoolValExp* boolVal2 = isSgBoolValExp(that.getVarNode()))
  return boolVal1->get_value() == boolVal2->get_value();

    // Check short constant
    if (SgShortVal* shortVal1 = isSgShortVal(getVarNode()))
      if (SgShortVal* shortVal2 = isSgShortVal(that.getVarNode()))
  return shortVal1->get_value() == shortVal2->get_value();

    // Check char constant
    if (SgCharVal* charVal1 = isSgCharVal(getVarNode()))
      if (SgCharVal* charVal2 = isSgCharVal(that.getVarNode()))
  return charVal1->get_value() == charVal2->get_value();
  }

  return false;
}

// Using Hopcroft approach to perform partitioning
void ValueGraph::partitioning() {
  vector<PartitionPtr> partitions;
  // Initialize partitions
  initializePartitions(partitions);

  // Partition and identify congurence
  vector<PartitionPtr> newPartitions;
  PartitionPtr partition;
  foreach(partition, partitions) {
    processPartition(partition, newPartitions);
  }
  foreach(partition, newPartitions)
    partitions.push_back(partition);

  // Build the SgNode to value Id table
  // We can just use the partition object as the value number for all SgNodes
}

// Check if the two given SgNodes have same value number or not
bool ValueGraph::haveSameVN(SgNode* sgn1, SgNode* sgn2) {
  if (sgnValueNodeMap.find(sgn1) == sgnValueNodeMap.end()
      || sgnValueNodeMap.find(sgn2) == sgnValueNodeMap.end())
    return false;

  ValueNodePtr valNode1 = sgnValueNodeMap[sgn1];
  ValueNodePtr valNode2 = sgnValueNodeMap[sgn2];

  return (* valNode1->partition) == (* valNode2->partition);
}
