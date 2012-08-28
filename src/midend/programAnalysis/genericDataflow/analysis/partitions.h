#ifndef PARTITIONS_H
#define PARTITIONS_H

#include "rose.h"
#include "DataflowCFG.h"

namespace dataflow {
// ----------------
// ----- Part -----
// ----------------

// Since version 1 does not support repartitioning, Parts are just trivial wrappers for 
// CFGNodes
/*class Part : public CFGNode
{
  // In the document these functions are in Part but to keep this implementation simpler,
  // they've been moved to Analysis so that all analysis-specific code can go into a 
  // single place
  / *
  virtual ValueObject  Expr2Val   (SgExpression* e) { throw NotImplementedException; };
  virtual MemLocObject  Expr2Memloc (SgExpression* e) { throw NotImplementedException; };
  virtual CodeLocObject Expr2CodeLoc(SgExpression* e) { throw NotImplementedException; };
  * /
};*/
/*class Part : public printable
{
  public:
  std::set<pair<SgNode*, int>> getNodes() const;
  std::vector<PartEdge> outEdges() const;
  std::vector<PartEdge> inEdges() const;
  bool operator==(const Part& o) const;
  bool operator!=(const Part& o) const;
  bool operator<(const Part& o) const;
  
  std::string str(std::string indent="") const;
};

typedef std::map<SgNode*, DataflowNode> m_AST2CFG;

class PartEdge {
  public:
  PartNode source() const;
  PartNode target() const;
  EdgeConditionKind condition() const {return p.condition();}
  SgExpression* caseLabel() const {return p.caseLabel();}
  SgExpression* conditionBasedOn() const {return p.conditionBasedOn();}
  std::vector<SgInitializedName*> scopesBeingExited() const {return p.scopesBeingExited();}
  std::vector<SgInitializedName*> scopesBeingEntered() const {return p.scopesBeingEntered();}
  bool operator==(const PaerEdge& o);
  bool operator!=(const PaerEdge& o);
  //bool operator<(const DataflowEdge& o) const {return p < o.p;}
};*/

typedef DataflowNode Part;
typedef DataflowNode PartPtr;
//typedef boost::shared_ptr<Part> PartPtr;
//typedef boost::shared_ptr<Part> ConstPartPtr;

}; // namespace dataflow

#endif