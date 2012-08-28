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
typedef DataflowNode Part;

}; // namespace dataflow

#endif