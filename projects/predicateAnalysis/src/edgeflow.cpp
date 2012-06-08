#include <iostream>
#include <cassert>
#include <typeinfo>
#include <set>
#include <numeric>
#include <memory>

#include "rose.h"
#include "sageGeneric.h"

#include "variables.h"
#include "cfgUtils.h"
#include "analysisCommon.h"
#include "functionState.h"
#include "latticeFull.h"
#include "analysis.h"
#include "dataflow.h"

#include "sageplus.h"
#include "predflow.h"

namespace
{
  //
  // functions helping negate an expression

  const SgExpression& skip_negation(const SgExpression& n)
  {
    const SgNotOp* child = dynamic_cast<const SgNotOp*>(&n);
    if (!child) return n;

    return sg::deref(child->get_operand());
  }

  const SgExpression& negate(const SgExpression& exp)
  {
    namespace si = SageInterface;
    namespace sb = SageBuilder;

    const SgExpression& base  = skip_negation(exp);
    SgExpression*       clone = si::deepCopy(&base);

    if (&base == &exp) clone = sb::buildNotOp(clone);

    return sg::deref(clone);
  }

  //
  // accessory function

  inline
  const SgExpression& lhs_operand(const SgBinaryOp& binop)
  {
    return sg::deref(binop.get_lhs_operand());
  }

  inline
  const SgExpression& rhs_operand(const SgBinaryOp& binop)
  {
    return sg::deref(binop.get_rhs_operand());
  }

  inline
  const SgExpression& operand(const SgUnaryOp& op)
  {
    return sg::deref(op.get_operand());
  }

  inline
  const SgExpression* expression(const SgUpcLocalsizeofExpression& n)
  {
    return n.get_expression();
  }

  inline
  const SgExpression* expression(const SgUpcElemsizeofExpression& n)
  {
    return n.get_expression();
  }

  inline
  const SgExpression* expression(const SgUpcBlocksizeofExpression& n)
  {
    return n.get_expression();
  }

  inline
  const SgExpression* expression(const SgSizeOfOp& n)
  {
    return n.get_operand_expr();
  }

  inline
  const SgExpression* expression(const SgTypeIdOp& n)
  {
    return n.get_operand_expr();
  }

  template <class AstNode>
  inline
  const SgType* get_type(const AstNode& typeOp)
  {
    const SgExpression* exp = expression(typeOp);
    if (exp) return exp->get_type();

    return typeOp.get_operand_type();
  }

  //
  // other auxiliary functions

  std::string to_string(EdgeConditionKind eck)
  {
    std::string res;

    switch (eck)
    {
      case eckTrue:           res = "t"; break;
      case eckFalse:          res = "f"; break;
      case eckUnconditional:  res = "*"; break;
      default:                res = "?";
    }

    return res;
  }

  EdgeConditionKind negateEdgeConditionKind(EdgeConditionKind eck)
  {
    if (eck == eckTrue) return eckFalse;

    ROSE_ASSERT(eck == eckFalse);
    return eckTrue;
  }

  //
  // implements retrieval of branch controlling expressions.

  // \todo contains a declaration
  struct ExpressionGuard : sg::DispatchHandler<SgExpression*>
  {
    ExpressionGuard()
    : Base(0)
    {}

    template <class AstNode>
    static
    AstNode* clone(const AstNode* n) { return SageInterface::deepCopy(n); }

    static
    SgNullExpression* nullref(const SgVariableDeclaration&)
    {
      return SageBuilder::buildNullExpression(); /* varref(vardecl.get_variables()); */
    }

    void handle(const SgNode& n)                { sg::unexpected_node(n); }
    void handle(const SgVariableDeclaration& n) { res = nullref(n); }
    void handle(const SgExprStatement& n)       { res = clone(n.get_expression()); }
  };

  const SgStatement* test_statement(const SgIfStmt& n)       { return n.get_conditional(); }
  const SgStatement* test_statement(const SgForStatement& n) { return n.get_test(); }
  const SgStatement* test_statement(const SgUpcForAllStatement& n) { return n.get_test(); }
  const SgStatement* test_statement(const SgWhileStmt& n)    { return n.get_condition(); }
  const SgStatement* test_statement(const SgDoWhileStmt& n)  { return n.get_condition(); }

  template <class AstScopeStmt>
  inline
  std::auto_ptr<SgExpression>
  condition(const AstScopeStmt& s)
  {
    // \note since the returned value is not in the AST proper (all AST nodes are cloned
    //   and for some an SgNullExpression is created), we manage the lifetime
    //   with an auto_ptr.
    // \todo replace with unique_ptr in C++1X

    SgExpression* res = sg::dispatch(ExpressionGuard(), test_statement(s));

    return std::auto_ptr<SgExpression>(res);
  }

  std::auto_ptr<SgExpression>
  condition(const SgConditionalExp& n)
  {
    // see note in previous condition
    return std::auto_ptr<SgExpression>(n.get_conditional_exp());
  }
}




/// \brief encapsulates a predicate expression
/// \todo  currently predicates are not represented in
///        a canonical form, thus (a == b), (b == a) and (a > b), (b < a)
///        are not considered to be the same.
class SimplePredicate
{
    const SgExpression* expr;

    SimplePredicate(const SgExpression& exp)
    : expr(&exp)
    {
      ROSE_ASSERT(expr && !expr->get_parent());
    }

  public:
    SimplePredicate(const SimplePredicate& orig)
    : expr(SageInterface::deepCopy(orig.expr))
    {
      ROSE_ASSERT(expr && !expr->get_parent());
    }

#if CXX1X
    SimplePredicate(SimplePredicate&& orig)
    : expr(nullptr)
    {
      std::swap(this->expr, orig.expr);
    }
#endif /* CXX1X */

    ~SimplePredicate()
    {
      delete expr;
    }

    const SgExpression& expression() const
    {
      return sg::deref(expr);
    }

    friend
    std::ostream& operator<<(std::ostream& o, const SimplePredicate& obj);

    friend
    bool operator==(const SimplePredicate& lhs, const SimplePredicate& rhs)
    {
      return sg::tree_compare(lhs.expr, rhs.expr) == 0;
    }

    friend
    bool operator<(const SimplePredicate& lhs, const SimplePredicate& rhs)
    {
      return sg::tree_compare(lhs.expr, rhs.expr) < 0;
    }

    friend
    Relation::Kind
    relation(const SimplePredicate& lhs, const SimplePredicate& rhs);

    /// external constructor, ensures that the expression is copied
    friend
    SimplePredicate positive_clone(const SgExpression&);

    /// external constructor, ensures that the expression is copied
    friend
    SimplePredicate negative_clone(const SgExpression&);
};

SimplePredicate positive_clone(const SgExpression& exp)
{
  const SgExpression* clone = SageInterface::deepCopy(&exp);

  return SimplePredicate(sg::deref(clone));
}

SimplePredicate negative_clone(const SgExpression& exp)
{
  return SimplePredicate(negate(exp));
}

std::ostream& operator<<(std::ostream& o, const SimplePredicate& obj)
{
  return o << obj.expr->unparseToString();
}


std::ostream& operator<<(std::ostream& o, const Relation::Kind kind)
{
  switch (kind)
  {
    case Relation::unknown:      o << "?"; break;
    case Relation::dominate:     o << "dom"; break;
    case Relation::same:         o << "=="; break;
    case Relation::incomparable: o << "#"; break;
    case Relation::negate:       o << "!"; break;
    default: assert(false);
  }

  return o;
}

static
Relation::Kind
check_negation(const SimplePredicate& lhs, const SimplePredicate& rhs)
{
  const SgExpression& expr = skip_negation(lhs.expression());

  // nothing skipped
  if (&expr == &lhs.expression()) return Relation::unknown;

  Relation::Kind res = relation(positive_clone(expr), rhs);

  if (res == Relation::same || res == Relation::negate)
  {
    return res;
  }

  return Relation::unknown;
}

static
Relation::Kind
relation_negation(const SimplePredicate& lhs, const SimplePredicate& rhs)
{
  Relation::Kind res = check_negation(rhs, lhs);

  if (res != Relation::unknown) return res;

  return check_negation(lhs, rhs);
}


/// \brief   returns an approximation of the relationship between
///          lhs and rhs.
/// \details implemented are equality and negation
///          not implemented are dominating relationships
///          such as (x < 5) dominates (x < 8) etc.
Relation::Kind
relation(const SimplePredicate& lhs, const SimplePredicate& rhs)
{
  if (lhs == rhs) { return Relation::same; }

  // check the relationship by negating the two arguments
  Relation::Kind rk = relation_negation(lhs, rhs);

  if (rk == Relation::negate) return Relation::same;
  if (rk == Relation::same)   return Relation::negate;

  // \todo check for less and greater
  return Relation::incomparable;
}


int main( int argc, char * argv[] )
{
        printf("========== S T A R T ==========\n");

        // Build the AST used by ROSE
        SgProject* project = frontend(argc,argv);

        initAnalysis(project);

        Dbg::init("Some Test", ".", "index.html");

        PredicateAnalysis<SimplePredicate> pa;
        // LazyAnalysis<ValueDataAnalysis> lazy_vda;

        UnstructuredPassInterDataflow analyzer(&pa);
        analyzer.runAnalysis();

        printf("==========  E  N  D  ==========\n");

        // Unparse and compile the project (so this can be used for testing)
        return 0;
}
