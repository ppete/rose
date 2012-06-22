#pragma once

#include <map>
#include <utility>
#include "rose.h"
#include "staticSingleAssignment.h"
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
#include "heapReachingDef.h"

namespace scc_private
{
  using namespace boost;
  using namespace std;
  using namespace hssa_private;

  class ValueNode;
  class Partition;
  class ValueGraph;

  typedef boost::shared_ptr<ValueNode> ValueNodePtr;
  typedef boost::shared_ptr<Partition> PartitionPtr;
  typedef boost::shared_ptr<ValueGraph> ValueGraphPtr;

  typedef map<SgNode *, ValueNodePtr> SgNodeValueNodeMap;
  typedef map<SgFunctionDefinition*, ValueGraphPtr> FuncValueGraphMap;

  // The nodes of value graph
  class ValueNode {
  protected:
    // Current variable node
    SgNode* varNode;
    // Operator node or constant node
    SgBinaryOp* operNode;
    // Reaching def for phi function
    ReachingDef* phiFunc;

    bool isOperator;

    // The label Id for current value node
    int nodeLabel;

  public:
    // The two value nodes that construct the function
    ValueNodePtr leftNode;
    ValueNodePtr rightNode;
    PartitionPtr partition;

  public:
  ValueNode(SgNode* var, SgBinaryOp* oper, bool isOper, int labelId)
    : varNode(var), operNode(oper), phiFunc(NULL), isOperator(isOper), nodeLabel(labelId) {};

    bool isOperNode() { return isOperator; };
    bool isPhiNode() { return phiFunc != NULL; }
    bool isConstVal() { return (NULL != isSgValueExp(varNode)); };
    // This part is tricky, since the reaching def can not just be a Var node
    void setVarNode(SgNode* sgn) { varNode = sgn; };
    void setOper(SgBinaryOp* oper) { operNode = oper; };
    // Set the node's corresponding phi function
    void setPhiFunc(ReachingDef* phiFunction) { phiFunc = phiFunction; };
    // Get the node's phi function
    ReachingDef* getPhiFunc() { return phiFunc; };
    // Get current value node's label
    int getLabel() { return nodeLabel; };
    // Get the SgNode
    SgNode* getVarNode() { return varNode; };
    // Get the operator node
    SgBinaryOp* getOperNode() { return operNode; };

    bool operator==(ValueNode);

    static ValueNode emptyNode;
  };

  // Value partition
  class Partition {
  protected:
    vector<ValueNodePtr> valNodes;
    int partitionId;

  public:
  Partition(int partId) : partitionId(partId) {};

    void addValueNode(ValueNodePtr valNode) {
      valNodes.push_back(valNode);
    };

    int getId() { return partitionId; };
    int setId(int partId) { return partitionId = partId; };

    int size() { return valNodes.size(); };
    ValueNodePtr operator[](int i) const { return valNodes[i]; };
    // Remove the ith element in current partitiion
    void remove(int i) { valNodes.erase(valNodes.begin() + i - 1); };

    bool operator==(Partition that) { return partitionId == that.getId(); };
  };

  // Value graph
  class ValueGraph : public AstBottomUpProcessing<ValueNodePtr> {
  public:
  ValueGraph(const ::Function& func, HeapSSA* ssaInstance) : ssa(ssaInstance), function(func),
      labelId(0) {};

    /**
     * Called to evaluate the synthesized attribute on every node. This is the process of
     * constructing the value graph
     *
     * This function will handle passing all variables that are defined and used by a given
     * operation.
     *
     * @param node The node being evaluated.
     * @param attr The attributes from the child nodes.
     * @return The attribute at this node.
     */
    virtual ValueNodePtr evaluateSynthesizedAttribute(SgNode* node,
                  SynthesizedAttributesList attrs);

    /**
     * Invoke traversal to build value graph
     */
    void build();

    /**
     * Using Hopcroft approach to perform partitioning and identify the congruences
     * in value graph
     */
    void partitioning();

    /**
     * Query support: Check if the two given SgNodes have same value number or not
     */
    bool haveSameVN(SgNode* sgn1, SgNode* sgn2);

  protected:
    HeapSSA* ssa;
    const ::Function& function;
    SgNodeValueNodeMap sgnValueNodeMap;

    int labelId;

  protected:
    void initializePartitions(vector<PartitionPtr>& partitions);
    void processPartition(PartitionPtr partition, vector<PartitionPtr>& newPartitions);
    bool equalyPartitioned(ValueNodePtr valNode1, ValueNodePtr valNode2);

    int incrLabelId() { return ++ labelId; };

  public:
    ValueNode valueNode(SgNodeValueNodeMap::key_type key) const
    {
      SgNodeValueNodeMap::const_iterator pos = sgnValueNodeMap.find(key);

      if (pos == sgnValueNodeMap.end()) return ValueNode::emptyNode;
      return *pos->second;
    }
  };

  class ValueNumbering : public IntraProceduralDataflow
  {
  private:
    // The project to perform Value Numbering on.
    SgProject* project;
    HeapSSA* ssa;

  public:
    ValueNumbering(SgProject* proj, HeapSSA* ssaInstance);
    ~ValueNumbering();

    // Run the analysis
    void run(bool hierarchical);

    // Run the intra-procedural analysis
    virtual bool runAnalysis(const ::Function& func, NodeState* state, bool analyzeDueToCallers,
         std::set< ::Function > calleesUpdated);

    // \pp changed interface
    virtual void genInitState(const ::Function& func, const DataflowNode& n, const NodeState& state,
                              Lattice*& initLattices, std::vector<NodeFact*>& initFacts);


    bool transfer(const ::Function& func, const DataflowNode& n, NodeState& state,
      const std::vector<Lattice*>& dfInfo);

    boost::shared_ptr<IntraDFTransferVisitor>
      getTransferVisitor(const ::Function& func, const DataflowNode& n, NodeState& state,
       const std::vector<Lattice*>& dfInfo);

    void dumpLattices();

  protected:
    // Main framework of alpern-zadeck Value Numbering
    void VN(const ::Function& func);

  protected:
    // map<SgNode *, int > nodeVNMap; \pp seems not used
    unordered_set<SgFunctionDefinition*> interestingFunctions;
    FuncValueGraphMap funcValueGraphMap;

  public:
    // Query interface for checking if two SgNodes have same value number
    bool haveSameValueNumber(SgFunctionDefinition* func, SgNode* sgn1, SgNode* sgn2);

    ValueGraphPtr valueGraph(FuncValueGraphMap::key_type key);
  };
};
