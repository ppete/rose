
#include "sageplus.h"

namespace sg
{

  /// \brief compares the address of unified objects
  /// \pre   @l and @r are not null have the same dynamic type
  static
  int _unified_object_compare(const void* l, const void* r)
  {
    // \todo can we return l - r?

    if (l == r) return 0;
    if (l < r) return -1;
    return 1;
  }

  int TreeComparator::compare(const SgNode& lhs, const SgNode&)
  {
    sg::unexpected_node(lhs);
    return false;
  }

  int TreeComparator::compare(const SgExpression& lhs, const SgExpression& rhs)
  {
    return compare_children<TreeComparator>(lhs, rhs);
  }

  int TreeComparator::compare(const SgValueExp& lhs, const SgValueExp& rhs)
  {
    return lhs.get_constant_folded_value_as_string().compare(rhs.get_constant_folded_value_as_string());
  }


  template <class AstNode>
  static
  int unified_object_compare(const AstNode* l, const AstNode* r)
  {
    ROSE_ASSERT(l && r && (typeid(*l) == typeid(*r)));

    return _unified_object_compare(l, r);
  }

  template <class AstNode>
  static inline
  int sym_compare(const AstNode& lhs, const AstNode& rhs)
  {
    return unified_object_compare(lhs.get_symbol(), rhs.get_symbol());
  }

  int TreeComparator::compare(const SgVarRefExp& lhs, const SgVarRefExp& rhs)
  {
    return sym_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgFunctionRefExp& lhs, const SgFunctionRefExp& rhs)
  {
    return sym_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgMemberFunctionRefExp& lhs, const SgMemberFunctionRefExp& rhs)
  {
    return sym_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgLabelRefExp& lhs, const SgLabelRefExp& rhs)
  {
    return sym_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgThisExp& lhs, const SgThisExp& rhs)
  {
    return unified_object_compare(lhs.get_class_symbol(), rhs.get_class_symbol());
  }

  int TreeComparator::compare(const SgNullExpression&, const SgNullExpression&)
  {
    return true;
  }

  int TreeComparator::compare(const SgNewExp& lhs, const SgNewExp& rhs)
  {
    // compare types first
    int res = unified_object_compare(lhs.get_specified_type(), rhs.get_specified_type());

    if (res) return res;

    // then treat the new-nodes as expressions and compare their children
    return TreeComparator::compare(static_cast<const SgExpression&>(lhs), rhs);
  }

  int TreeComparator::compare(const SgLambdaRefExp& lhs, const SgLambdaRefExp& rhs)
  {
    // this assumes that function declarations for lambda functions are unified
    return unified_object_compare(lhs.get_functionDeclaration(), rhs.get_functionDeclaration());
  }

  template <class AstNode>
  static inline
  bool type_oper_compare(const AstNode& lhs, const AstNode& rhs)
  {
    return get_type(lhs) == get_type(rhs);
  }

  int TreeComparator::compare(const SgSizeOfOp& lhs, const SgSizeOfOp& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgUpcLocalsizeofExpression& lhs, const SgUpcLocalsizeofExpression& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgUpcBlocksizeofExpression& lhs, const SgUpcBlocksizeofExpression& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgUpcElemsizeofExpression& lhs,  const SgUpcElemsizeofExpression& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  int TreeComparator::compare(const SgTypeIdOp& lhs, const SgTypeIdOp& rhs)
  {
    return type_oper_compare(lhs, rhs);
  }

  struct ConditionRetriever : sg::DispatchHandler<const SgLocatedNode*>
  {
    ConditionRetriever()
    : Base(0)
    {}

    void handle(const SgNode& n) { sg::unexpected_node(n); }

    // not a branch
    void handle(const SgNode&, cat::Node) {}

    // conditional branch
    void handle(const SgConditionalExp& n)
    {
      res = n.get_conditional_exp();
    }

    // branches
    template <class AstNode>
    void handle(const AstNode& n, cat::Branch)
    {
      res = test_statement(n);
    }

    template <class AstNode>
    void handle(const AstNode& n)
    {
      handle(n, cat::tag(n));
    }
  };

  const SgLocatedNode*
  retrieve_condition(const SgNode& n)
  {
    return sg::dispatch(ConditionRetriever(), &n);
  }
}
