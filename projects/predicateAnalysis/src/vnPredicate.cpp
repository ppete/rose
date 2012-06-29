#include "vnPredicate.h"

scc_private::ValueNumbering* VNPredicate::myvn = 0;
SgFunctionDefinition*        VNPredicate::key = 0;


namespace {
  struct VNGuard : sg::DispatchHandler<VNPredicate>
  {
      void handle(const SgNode& n) { sg::unexpected_node(n); }

      void handle(const SgVariableDeclaration& n)
      {
        SgVariableDeclaration& noconst = const_cast<SgVariableDeclaration&>(n);

        res = VNPredicate::create(SageInterface::getFirstVariable(noconst));
      }

      void handle(const SgExprStatement& n)
      {
        res = VNPredicate::create(sg::deref(n.get_expression()));
      }
  };
}

VNPredicate VNPredicate::condition_aux(const SgStatement* s)
{
  return sg::dispatch(VNGuard(), s);
}

static
bool emptyNode(const scc_private::ValueNode& vnode)
{
  return scc_private::ValueNode::emptyNode == vnode;
}


VNPredicate VNPredicate::make(bool negated, const SgLocatedNode& n)
{
  typedef scc_private::SgNodeValueNodeMap SgNodeValueNodeMap;

  SgNode*   key = const_cast<SgLocatedNode*>(&n);
  ValueNode nodeval = valueGraph().valueNode(key);

  if (emptyNode(nodeval)) return VNPredicate();
  return VNPredicate(negated, nodeval.getLabel());
}
