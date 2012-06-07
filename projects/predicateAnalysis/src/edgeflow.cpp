#include <iostream>
#include <cassert>
#include <typeinfo>
#include <set>
#include <numeric>
#include <memory>

#include "boost/tuple/tuple.hpp"

#include "rose.h"
#include "sageGeneric.h"

#include "variables.h"
#include "cfgUtils.h"
#include "analysisCommon.h"
#include "functionState.h"
#include "latticeFull.h"
#include "analysis.h"
#include "dataflow.h"

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


namespace sg
{
  template <class Iterator, class PrinterCreator>
  struct ForeachPrinter
  {
    Iterator       aa;
    Iterator       zz;
    PrinterCreator create_printer;

    ForeachPrinter(const Iterator& first, const Iterator& last, PrinterCreator prn_maker)
    : aa(first), zz(last), create_printer(prn_maker)
    {}

    void print_each(std::ostream&) const;
  };

  template <class Iterator, class PrinterCreator>
  void ForeachPrinter<Iterator, PrinterCreator>::print_each(std::ostream& s) const
  {
    std::for_each(aa, zz, create_printer(s));
  }

  template <class InputIterator, class PrinterCreator>
  ForeachPrinter<InputIterator, PrinterCreator>
  foreach(InputIterator first, InputIterator last, PrinterCreator prn)
  {
    typedef ForeachPrinter<InputIterator, PrinterCreator> Result;

    return Result(first, last, prn);
  }

  template <class Container, class PrinterCreator>
  ForeachPrinter<typename Container::const_iterator, PrinterCreator>
  foreach(const Container& cont, PrinterCreator prn)
  {
    return foreach(cont.begin(), cont.end(), prn);
  }

  template <class Iterator, class PrinterCreator>
  std::ostream& operator<<(std::ostream& s, const ForeachPrinter<Iterator, PrinterCreator>& fp)
  {
    fp.print_each(s);

    return s;
  }

  struct SequencePrinter
  {
    std::ostream& os;

    explicit
    SequencePrinter(std::ostream& ostream)
    : os(ostream)
    {}

    template<class Element>
    void operator()(const Element& elem)
    {
      os << elem << " ";
    }
  };

  SequencePrinter prn(std::ostream& os)
  {
    return SequencePrinter(os);
  }

  /// \brief Encapsulates the compare_equal function family for tree based
  ///        comparisons of (some) expression nodes.
  /// \details invoked through the tree_compare function.
  /// \note  any operation that relies on same type requirements compares
  ///        raw types. i.e., type modifiers/typedefs/references are not skipped!
  /// \note  Only some compare_equal functions are implemented at this time.
  ///        Notably NOT IMPLEMENTED are:
  ///        SgStatementExpression -- how to compare two statements
  ///        SgPseudoDestructorRefExp -- ???
  ///        Vararg - operations
  ///        all Java, Fortran, Python, CUDA, ASM node types.
  /// \note  missing comparison functions can be implemented by providing
  ///        the missing overloads for the compare functions (see below).
  /// \todo  instead of relying on static member functions, it might be more
  ///        flexible to use a comparator object.
  struct TreeComparator
  {
    /// error branch, currently only expression-comparison is implemented
    static int compare(const SgNode&,           const SgNode&);

    /// \brief uses traversal successors to compare all children
    /// \pre   typeid(lhs) == typeid(rhs)
    static int compare(const SgExpression& lhs, const SgExpression& rhs);

    /// \return compares unified variable symbol
    static int compare(const SgVarRefExp&,      const SgVarRefExp&);

    /// \return compares unified function symbol
    static int compare(const SgFunctionRefExp&, const SgFunctionRefExp&);

    /// \return compares unified member function symbol
    static int compare(const SgMemberFunctionRefExp&, const SgMemberFunctionRefExp&);

    /// \return compares unified label symbol
    static int compare(const SgLabelRefExp&,    const SgLabelRefExp&);

    /// \return compares unified class symbol
    static int compare(const SgThisExp&,        const SgThisExp&);

    /// \return compares the stringified representation of constant folded values
    /// \note   can return true, even though the types of the expression may differ
    static int compare(const SgValueExp&,       const SgValueExp&);

    /// \return true
    static int compare(const SgNullExpression&, const SgNullExpression&);

    /// \return compares the types of the new object and children expressions
    static int compare(const SgNewExp&,         const SgNewExp&);

    /// \return compares the declaration (pointer comparison)
    static int compare(const SgLambdaRefExp&,   const SgLambdaRefExp&);

    /// \return  compare the type (of the expressions)
    /// \note    size(0) and size(int) compare equal.
    ///          But size(int) and size(const int) do not!
    static int compare(const SgSizeOfOp&,                 const SgSizeOfOp&);

    /// \return  compare the type (of the expressions)
    /// \details see compare for SgSizeOfOp
    static int compare(const SgUpcLocalsizeofExpression&, const SgUpcLocalsizeofExpression&);

    /// \return  compare the type (of the expressions)
    /// \details see compare for SgSizeOfOp
    static int compare(const SgUpcElemsizeofExpression&,  const SgUpcElemsizeofExpression&);

    /// \return  compare the type (of the expressions)
    /// \details see compare for SgSizeOfOp
    static int compare(const SgUpcBlocksizeofExpression&, const SgUpcBlocksizeofExpression&);

    /// \return  compare the type (of the expressions)
    /// \details see compare for SgSizeOfOp
    static int compare(const SgTypeIdOp&,                 const SgTypeIdOp&);
  };

  /// \brief   handles the dual type recovery of two AstNodes for equality comparison
  ///          i.e., two nodes can only be equal if their dynamic type is the same.
  /// \details invoke through sg::compare function
  /// \tparam  a class offering one or more compare functions (see TreeComparator
  ///          for an example.
  template <class NodeComparator>
  struct NodeComparisonHandler : sg::DispatchHandler<int>
  {
    const SgNode&         right_node;

    explicit
    NodeComparisonHandler(const SgNode& rhs_node)
    : Base(0), right_node(rhs_node)
    {}

    void handle(const SgNode& n) { sg::unexpected_node(n); }

    template <class AstExpr>
    void handle(const AstExpr& lhs)
    {
      res = NodeComparator::compare(lhs, dynamic_cast<const AstExpr&>(right_node));
    }
  };

  //
  // compare_equal is an internal function family;

  template <class NodeComparator>
  bool compare(const SgExpression* lhs, const SgExpression* rhs);

  /// invokes equal using the TreeComparator class
  int tree_compare(const SgExpression* lhs, const SgExpression* rhs);

  int TreeComparator::compare(const SgNode& lhs, const SgNode&)
  {
    sg::unexpected_node(lhs);
    return false;
  }

  template <class NodeComparator>
  int compare_children(const SgExpression& lhs, const SgExpression& rhs)
  {
    // get_numberOfTraversalSuccessors and get_traversalSuccessorByIndex are not
    // defined over const-nodes :(
    SgExpression& ll = const_cast<SgExpression&>(lhs);
    SgExpression& rr = const_cast<SgExpression&>(rhs);

    const size_t  sz_lhs = ll.get_numberOfTraversalSuccessors();
    ROSE_ASSERT(sz_lhs == rr.get_numberOfTraversalSuccessors());

    // loop condition variables
    int           comp = 0;
    size_t        i = 0;

    while ((comp == 0) && (i < sz_lhs))
    {
      const SgExpression* llnext = isSgExpression(ll.get_traversalSuccessorByIndex(i));
      const SgExpression* rrnext = isSgExpression(rr.get_traversalSuccessorByIndex(i));
      ROSE_ASSERT(llnext && rrnext);

      comp = sg::dispatch(NodeComparisonHandler<NodeComparator>(*rrnext), llnext);
      ++i;
    }

    return comp;
  }

  int TreeComparator::compare(const SgExpression& lhs, const SgExpression& rhs)
  {
    return compare_children<TreeComparator>(lhs, rhs);
  }

  int TreeComparator::compare(const SgValueExp& lhs, const SgValueExp& rhs)
  {
    return lhs.get_constant_folded_value_as_string().compare(rhs.get_constant_folded_value_as_string());
  }


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


  template <class NodeComparator>
  int compare(const SgExpression& lhs, const SgExpression& rhs)
  {
    const int res = lhs.variantT() - rhs.variantT();

    // if same type, compare the children
    if (res) return res;

    return sg::dispatch(NodeComparisonHandler<NodeComparator>(rhs), &lhs);
  }

  template <class NodeComparator>
  int compare(const SgExpression* lhs, const SgExpression* rhs)
  {
    ROSE_ASSERT(lhs && rhs);
    return compare<NodeComparator>(*lhs, *rhs);
  }

  int tree_compare(const SgExpression* lhs, const SgExpression* rhs)
  {
    ROSE_ASSERT(lhs && rhs);
    return compare<TreeComparator>(*lhs, *rhs);
  }
}

//
// Data structures for the predicate analysis

struct Relation
{
    /// \brief describes the relationship between two SimplePredicate
    /// \todo  this could be extended for conjuncted predicates
    ///        (and arbitrary predicate sets), but these extensions
    ///        will get increasingly complex.
    enum Kind
    {
      unknown      = 0,
      dominate     = 1,  ///< iff, a < b
                         ///       { x | a(x) } subset-of { x | b(x) }
                         ///  \note NOT IMPLEMENTED
      same         = 2,  ///< iff, a == b
                         ///       { x | a(x) } == { x | b(x) }
      incomparable = 4,  ///< iff, ! (a<b && a==b)
      negate       = 8   ///< iff, ! (a<b, a==b) && (!a == b)
                         ///       { x | a(x) } intersect { x | b(x) } => {}
                         ///  \note currently only detected when
                         ///        a and b contain a negated predicate
                         ///        i.e., (y == 0) and (!(y == 0))
    };
};

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

/// \brief represents conjunction of SimplePredicates
///        along specific CFG edges
template <class BasePredicate>
struct ConjunctedPredicate : private std::set<BasePredicate>
{
    typedef std::set<BasePredicate> base;

    ConjunctedPredicate()
    : base(), last_edge(eckUnconditional)
    {}

    explicit
    ConjunctedPredicate(EdgeConditionKind eckind)
    : base(), last_edge(eckind)
    {}

    using base::iterator;
    using base::const_iterator;
    using base::reference;
    using base::const_reference;
    using base::begin;
    using base::end;
    using base::empty;
    using base::size;

    /// \brief conjuncts a new SimplePredicate @elem
    /// \note  wraps the insert operation to allow for efficient switching
    ///        of the underlyind data structure
    void store(const BasePredicate& elem)
    {
      const bool res = insert(elem).second;

      ROSE_ASSERT(res);
    }

    template <class InputIterator>
    void store_range(InputIterator aa, InputIterator zz)
    {
      insert(aa, zz);
    }

    std::insert_iterator<base>
    inserter()
    {
      return std::inserter(static_cast<base&>(*this), this->begin());
    }

    friend
    bool operator<(const ConjunctedPredicate& lhs, const ConjunctedPredicate& rhs)
    {
      if (lhs.last_edge < rhs.last_edge) return true;

      const ConjunctedPredicate::base& l = lhs;
      const ConjunctedPredicate::base& r = rhs;

      return (lhs.last_edge == rhs.last_edge) && (l < r);
    }

    friend
    bool operator==(const ConjunctedPredicate& lhs, const ConjunctedPredicate& rhs)
    {
      const ConjunctedPredicate::base& l = lhs;
      const ConjunctedPredicate::base& r = rhs;

      return (lhs.last_edge == rhs.last_edge) && (l == r);
    }

    void edge_condition(EdgeConditionKind edgekind) { last_edge = edgekind; }
    EdgeConditionKind edge_condition() const        { return last_edge; }

  private:
    EdgeConditionKind last_edge;
};

/// computes the intersection of lhs and rhs
template <class BasePredicate>
ConjunctedPredicate<BasePredicate>
cjp_intersect(const ConjunctedPredicate<BasePredicate>& lhs, const ConjunctedPredicate<BasePredicate>& rhs)
{
  ConjunctedPredicate<BasePredicate> res;

  std::set_intersection(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), res.inserter());
  return res;
}

template <class BasePredicate>
std::ostream& operator<<(std::ostream& os, const ConjunctedPredicate<BasePredicate>& cp)
{
  os << "{ " << to_string(cp.edge_condition()) << ": "
     << foreach(cp, sg::prn)
     << "}" << std::endl;

  return os;
}


//
// checks for conflicts between a ConjunctedPredicate and
//   a SimplePredicate

template <class BasePredicate>
struct ConflictChecker
{
  const BasePredicate& rhs;

  explicit
  ConflictChecker(const BasePredicate& c)
  : rhs(c)
  {}

  bool operator()(const BasePredicate& lhs) const
  {
    Relation::Kind rel = relation(lhs, rhs);

    return (  rel == Relation::negate
           || rel == Relation::same
           );
  }
};

template <class BasePredicate>
static
ConflictChecker<BasePredicate>
conflictChecker(const BasePredicate& e)
{
  return ConflictChecker<BasePredicate>(e);
}


/// \brief  tests whether cand or its negation is in cp
/// \return
template <class BasePredicate>
static
Relation::Kind
conflicts(const ConjunctedPredicate<BasePredicate>& cp, const BasePredicate& cand)
{
  typedef typename ConjunctedPredicate<BasePredicate>::const_iterator ConstIterator;

  // if the new expression is a null-expression, it does not
  //   contribute any new information to the predicate set.
  //   ==> return same;
  //
  // \Q should this be better done in relation?
  // \A probably not, as the conflicts function is invoked in
  //    any case before the new predicate gets added to cp
  if (isSgNullExpression(&cand.expression())) return Relation::same;

  ConstIterator aa = cp.begin();
  ConstIterator zz = cp.end();
  ConstIterator pos = std::find_if(aa, zz, conflictChecker(cand));

  if (zz == pos) return Relation::incomparable;

  return relation(*pos, cand);
}


/// \brief   disjunctive normal form of predicates
/// \details an unconstrained path is represented by a set containing a single
///             empty conjunctive predicate.
///          an infeasible path is represented by an empty set.
template <class BasePredicate>
struct PredicateSet : private std::set<ConjunctedPredicate<BasePredicate> >
{
    typedef std::set<ConjunctedPredicate<BasePredicate> > base;

    using base::insert;
    using base::size;
    using base::begin;
    using base::end;
    using base::const_iterator;

  private:
    // convenience constructor for internal use
    explicit
    PredicateSet(const ConjunctedPredicate<BasePredicate>& cp)
    : base()
    {
      base::insert(cp);
    }

  public:
    PredicateSet()
    : base()
    {}

    template <class _BasePredicate>
    friend
    void swap(PredicateSet<_BasePredicate>& lhs, PredicateSet<_BasePredicate>& rhs);

    /// \brief   update predicate over a control flow join
    /// \details generates the conditions after a control-flow join.
    ///          the union of two predicate sets is a precise representation
    ///          of the preceding disjoint control
    /// \todo    what to do with no longer available expressions?
    bool join(const PredicateSet& other)
    {
      // the current implementation just concatenates the two sets
      //   do we need to calculate the over-approximation
      const size_t oldsize = this->size();

      this->insert(other.begin(), other.end());
      return (this->size() != oldsize);
    }

    /// \brief true, iff the corresponding CFG node is unconstrained
    bool unconstrained() const
    {
      const bool res = base::find(ConjunctedPredicate<BasePredicate>()) != this->end();

      // currently does not hold
      //   look into PredicateSet::join ROSE_ASSERT(!res || base::size() == 1);
      return res;
    }

    /// \brief true, iff the corresponding CFG node cannot be reached
    bool infeasible() const
    {
      return base::empty();
    }

    /// \brief constructs a PredicateSet containing a single conjunction
    static
    PredicateSet single(const ConjunctedPredicate<BasePredicate>& cp)
    {
      return PredicateSet(cp);
    }

    friend
    bool operator<(const PredicateSet& lhs, const PredicateSet& rhs)
    {
      // forward implementation to operator defined over private base class
      const PredicateSet::base& left = lhs;
      const PredicateSet::base& right = rhs;

      return left < right;
    }

    friend
    bool operator==(const PredicateSet& lhs, const PredicateSet& rhs)
    {
      // forward implementation to operator defined over private base class
      const PredicateSet::base& left = lhs;
      const PredicateSet::base& right = rhs;

      return left == right;
    }
};

template <class BasePredicate>
void swap(PredicateSet<BasePredicate>& lhs, PredicateSet<BasePredicate>& rhs)
{
  lhs.swap(rhs);
}

/// generates a reduction of predicate set
/// currently takes the intersection of all conjuncted predicates
template <class BasePredicate>
static
PredicateSet<BasePredicate>
reduce(const PredicateSet<BasePredicate>& s)
{
  typedef typename PredicateSet<BasePredicate>::const_iterator ConstIterator;

  if (s.infeasible()) return s;

  ConstIterator first  = s.begin();
  ConstIterator second = first;
  ++second;

  return PredicateSet<BasePredicate>::single(std::accumulate(second, s.end(), *first, cjp_intersect<BasePredicate>));
}


/// \brief takes the predicates stored for simple and mixes them into s.
template <class BasePredicate>
static inline
PredicateSet<BasePredicate>
expand(const PredicateSet<BasePredicate>& s, const BasePredicate& simple)
{
  // \todo
  ROSE_ASSERT(false);
  return s;
}


//
// dataflow lattice
template <class BasePredicate>
struct PredicatedLattice : FiniteLattice
{
    typedef BasePredicate predicate_type;

    //
    // members
    // \todo make members private

    PredicateSet<BasePredicate> predset;      ///< initialized to contain an unconstrained lattice
    SgLocatedNode*              current_node; ///< for debugging

    PredicatedLattice()
    : predset(), current_node(0)
    {}

    Lattice* copy() const { return new PredicatedLattice(*this); }

    void copy(const Lattice* arg)
    {
      const PredicatedLattice* that = dynamic_cast<const PredicatedLattice*>(arg);
      PredicatedLattice        tmp(*that);

      swap(*this, tmp);
    }

    void clear() {}

    std::string nodeStr() const
    {
      if (current_node)
      {
        return current_node->unparseToString();
      }

      return "<0>";
    }

    std::string familyStr() const
    {
      std::stringstream out;

      out << nodeStr() << "/" << current_node->get_parent()->unparseToString();
      return out.str();
    }

    bool join_predicates(const PredicateSet<BasePredicate>& other)
    {
      // we take the union of all available predicate sets
      return predset.join(other);
    }

    bool meetUpdate(const Lattice* arg)
    {
      const PredicatedLattice* that = dynamic_cast<const PredicatedLattice*>(arg);

      return join_predicates(that->predset);
    }

    bool operator==(const Lattice* arg) const
    {
      const PredicatedLattice* that = dynamic_cast<const PredicatedLattice*>(arg);

      return this->predset == that->predset;
    }

    friend
    void swap(PredicatedLattice& lhs, PredicatedLattice& rhs)
    {
      using std::swap;

      swap(lhs.predset,      rhs.predset);
      swap(lhs.current_node, rhs.current_node);
    }

    template <class _BasePredicate>
    friend
    std::ostream& operator<<(std::ostream& os, const PredicatedLattice<_BasePredicate>& lat);
};

template <class BasePredicate>
static inline
void reduce(PredicatedLattice<BasePredicate>& predlat)
{
  PredicateSet<BasePredicate> res = reduce(predlat.predset);

  swap(predlat.predset, res);
}

template <class BasePredicate>
static inline
void expand(PredicatedLattice<BasePredicate>& predlat, const BasePredicate& simple)
{
  PredicateSet<BasePredicate> res = expand(predlat.predset, simple);

  swap(predlat.predset, res);
}

template <class BasePredicate>
static
void constrain_edge( const ConjunctedPredicate<BasePredicate>& cp,
                     const BasePredicate&                      constraint,
                     EdgeConditionKind                         eckind,
                     PredicateSet<BasePredicate>&              res
                   )
{
  // check if the combined predicate cp + pred has a solution (== conflict free)
  Relation::Kind relkind = (conflicts(cp, constraint));

  // do not do anything, if the constraint negates an existing predicate
  if (relkind == Relation::negate) return;

  ConjunctedPredicate<BasePredicate> new_pred(cp);

  // set edge condition
  new_pred.edge_condition(eckind);

  // add the new constraint unless it already exists
  //   \todo the same test is superfluous when ConjunctedPredicate uses a set
  if (relkind != Relation::same)
  {
    new_pred.store(constraint);
  }

  res.insert(new_pred);
}


template <class BasePredicate>
static
void unconstrained_boolean_edge( PredicateSet<BasePredicate>&              res,
                                 const ConjunctedPredicate<BasePredicate>& cp,
                                 const SgExpression&                       guard,
                                 EdgeConditionKind                         eck,
                                 BasePredicate (*cloner) (const SgExpression&),
                                 BasePredicate (*negater) (const SgExpression&)
                               )
{
  // \note eck can be true/false/unconditional

  if (eck != eckFalse)
  {
    constrain_edge(cp, cloner(guard), eckTrue, res);
  }

  if (eck != eckTrue)
  {
    constrain_edge(cp, negater(guard), eckFalse, res);
  }
}

template <class BasePredicate>
static
void constrain_twinedge( PredicateSet<BasePredicate>&              res,
                         const ConjunctedPredicate<BasePredicate>& cp,
                         const SgExpression&                       lhs_guard,
                         const SgExpression&                       rhs_guard,
                         BasePredicate (*cloner) (const SgExpression&),
                         EdgeConditionKind                         edge_constraint
                       )
{
  BasePredicate  rhs_constraint = cloner(rhs_guard);
  Relation::Kind rhs_relkind = conflicts(cp, rhs_constraint);

  if (rhs_relkind != Relation::negate)
  {
    ConjunctedPredicate<BasePredicate> newcp(cp);

    newcp.edge_condition(edge_constraint);
    if (rhs_relkind != Relation::same)
    {
      newcp.store(rhs_constraint);
    }

    BasePredicate  lhs_constraint = cloner(lhs_guard);
    Relation::Kind lhs_relkind = conflicts(cp, lhs_constraint);
    ROSE_ASSERT(lhs_relkind != Relation::negate);

    if (lhs_relkind != Relation::same)
    {
      newcp.store(lhs_constraint);
    }

    res.insert(newcp);
  }
}

template <class BasePredicate>
static
void unconstrained_boolean_edge_twin( PredicateSet<BasePredicate>&              res,
                                      const ConjunctedPredicate<BasePredicate>& cp,
                                      const SgExpression&                       lhs_guard,
                                      const SgExpression&                       rhs_guard
                                    )
{
  // \note twin refers to the fact that lhs_guard and rhs_guard are in sync
  //       either (lhs_guard && rhs_guard) or (!lhs_guard && !rhs_guard)
  constrain_twinedge(res, cp, lhs_guard, rhs_guard, positive_clone, eckTrue);
  constrain_twinedge(res, cp, lhs_guard, rhs_guard, negative_clone, eckFalse);
}



//
// predicator classes

/// \brief auxiliary base class, holding the result object / convertible to result type
template <class BasePredicate>
struct Predicator
{
  typedef BasePredicate               predicate_type;
  typedef PredicateSet<BasePredicate> predicate_set;

  predicate_set res;

  operator predicate_set() { return res; }
};


/// \brief   predicates based on the inflow edge.
///          e.g., x = (a && b)
/// \details uses the condition as stored in the conjuncted predicate
template <class BasePredicate, class Client>
struct ExprPredicator : Predicator<BasePredicate>
{
  Client& self() { return static_cast< Client& >(*this); }

  void operator()(const ConjunctedPredicate<BasePredicate>& cp)
  {
    EdgeConditionKind eckind = cp.edge_condition();

    switch (eckind)
    {
      case eckUnconditional:
          self().unconstrained(cp);
          break;

      case eckTrue:
      case eckFalse:
          self().constrained(cp, eckind);
          break;

      default: assert(false);
    }
  }
};

template <class BasePredicate>
struct AssignPredicator : ExprPredicator<BasePredicate, AssignPredicator<BasePredicate> >
{
  typedef ExprPredicator<BasePredicate, AssignPredicator> Base;

  using Base::res;

  const SgExpression& assignee;
  const SgExpression& value;

  AssignPredicator(const SgExpression& lhs, const SgExpression& rhs)
  : Base(), assignee(lhs), value(rhs)
  {}

  // convenience ctor for SgAssignOp
  explicit
  AssignPredicator(const SgAssignOp& assign)
  : Base(), assignee(lhs_operand(assign)), value(rhs_operand(assign))
  {}

  void unconstrained(const ConjunctedPredicate<BasePredicate>& cp)
  {
    unconstrained_boolean_edge_twin(res, cp, assignee, value);
  }

  void constrained(const ConjunctedPredicate<BasePredicate>& cpred, EdgeConditionKind eckind)
  {
    BasePredicate (*spgen) (const SgExpression&) = (eckind == eckTrue? positive_clone : negative_clone);

    constrain_edge(cpred, spgen(assignee), eckind, res);
  }
};

template <class BasePredicate>
struct NotPredicator : ExprPredicator<BasePredicate, NotPredicator<BasePredicate> >
{
  typedef ExprPredicator<BasePredicate, NotPredicator> Base;

  using Base::res;

  const SgExpression& exp;

  explicit
  NotPredicator(const SgNotOp& op)
  : Base(), exp(operand(op))
  {}

  void unconstrained(const ConjunctedPredicate<BasePredicate>& cp)
  {
    unconstrained_boolean_edge(res, cp, exp, eckUnconditional, negative_clone, positive_clone);
  }

  void constrained(ConjunctedPredicate<BasePredicate> cpred, EdgeConditionKind eckind)
  {
    // negate along false edges
    const EdgeConditionKind negkind = negateEdgeConditionKind(eckind);

    cpred.edge_condition(negkind);
    res.insert(cpred);
  }
};

static
unsigned node_eval_index(const DataflowEdge& e)
{
  // \todo here we assume forward flow ...
  unsigned res = e.source().getIndex();

  return res;
}

template <class BasePredicate>
struct ShortCircuitPredicator : ExprPredicator<BasePredicate, ShortCircuitPredicator<BasePredicate> >
{
  typedef ExprPredicator<BasePredicate, ShortCircuitPredicator> Base;

  using Base::res;

  static const unsigned left_expr  = 1;
  static const unsigned right_expr = 2;

  const unsigned      evalside; ///< added for invariant checking
  const SgExpression& exp;
  const DataflowEdge& edge;

  ShortCircuitPredicator(const SgBinaryOp& binop, const DataflowEdge& e)
  : Base(), evalside(node_eval_index(e)),
    exp(evalside == left_expr? lhs_operand(binop) : rhs_operand(binop)), edge(e)
  {}

  void unconstrained(const ConjunctedPredicate<BasePredicate>& cp)
  {
    unconstrained_boolean_edge(res, cp, exp, edge.condition(), positive_clone, negative_clone);
  }

  void constrained(const ConjunctedPredicate<BasePredicate>& cpred, EdgeConditionKind eckind)
  {
    // if the edge is unconditional, the second eval of the short-circuit
    //   operator is performed (thus we just copy through the already
    //   result-constrained predicates).
    // if the edge is conditional, the lhs side is evaluated, thus we check that
    //   the result-constrained predicates are propagated along the correct edge.
    if (edge.condition() != eckUnconditional && edge.condition() != eckind) return;

    res.insert(cpred);
  }
};

template <class BasePredicate>
struct BranchPredicator : ExprPredicator<BasePredicate, BranchPredicator<BasePredicate> >
{
  // \note the logic allows merging this class with the ShortCircuitPredicator.
  //       for now we keep the two classes separate for clarity.

  typedef ExprPredicator<BasePredicate, BranchPredicator> Base;

  using Base::res;

  const SgExpression& exp;
  const DataflowEdge& edge; // \todo consider converting edge into a value

  BranchPredicator(const SgExpression& guard, const DataflowEdge& e)
  : Base(), exp(guard), edge(e)
  {}

  void unconstrained(const ConjunctedPredicate<BasePredicate>& cp)
  {
    unconstrained_boolean_edge(res, cp, exp, edge.condition(), positive_clone, negative_clone);
  }

  void constrained(const ConjunctedPredicate<BasePredicate>& cpred, EdgeConditionKind eckind)
  {
    ROSE_ASSERT(edge.condition() != eckUnconditional);

    if (eckind != edge.condition()) return;

    res.insert(cpred);
  }
};

template <class BasePredicate>
struct EdgePredicateClearer : Predicator<BasePredicate>
{
  typedef Predicator<BasePredicate> Base;

  using Base::res;

  void operator()(ConjunctedPredicate<BasePredicate> cpred)
  {
    cpred.edge_condition(eckUnconditional);
    res.insert(cpred);
  }
};

template <class BasePredicate>
struct BoolEvalPredicator : Predicator<BasePredicate>
{
  typedef Predicator<BasePredicate> Base;

  using Base::res;

  const SgExpression&     exp;
  const EdgeConditionKind edegecond; // \todo consider converting edge into a value

  BoolEvalPredicator(const SgExpression& cond, const DataflowEdge& e)
  : exp(cond), edegecond(e.condition())
  {}

  BoolEvalPredicator(const SgExpression& cond, EdgeConditionKind eck)
  : exp(cond), edegecond(eck)
  {}

  void operator()(const ConjunctedPredicate<BasePredicate>& cp)
  {
    unconstrained_boolean_edge(res, cp, exp, edegecond, positive_clone, negative_clone);
  }
};

//
// Transfer Function

template <class APredicator>
static
void apply_predicator(typename APredicator::predicate_set& predset, const APredicator& predicator)
{
  typedef typename APredicator::predicate_set predicate_set;

  // calculate the result over the input set
  predicate_set result = std::for_each(predset.begin(), predset.end(), predicator);

  // store new set in the parameter (return the result)
  swap(result, predset);
}

/// convenience function
template <class APredicator>
static
void apply_predicator(PredicatedLattice<typename APredicator::predicate_type>& predlat, const APredicator& predicator)
{
  apply_predicator(predlat.predset, predicator);
}

static
void trace(char c)
{
  std::cout << c << " - ";
}

namespace cat
{
  // tag classes
  struct Node {};
  struct Stmt : Node {};
  struct Branch /* NO BASE CLASS */ {};  // covers both statements and expressions

  struct Expr : Node {};
  struct Binary : Expr {};
  struct ShortCircuit : Binary {};
  struct Comparison : Binary {};

  struct Unary : Expr {};

  // tag mappings
  template <class T> struct PredicateKind;

  template <> struct PredicateKind<SgNode>               { typedef Node kind; };

  template <> struct PredicateKind<SgStatement>          { typedef Stmt kind; };
  template <> struct PredicateKind<SgIfStmt>             { typedef Branch kind; };
  template <> struct PredicateKind<SgForStatement>       { typedef Branch kind; };
  template <> struct PredicateKind<SgWhileStmt>          { typedef Branch kind; };
  template <> struct PredicateKind<SgDoWhileStmt>        { typedef Branch kind; };
  template <> struct PredicateKind<SgUpcForAllStatement> { typedef Branch kind; };

  template <> struct PredicateKind<SgExpression>         { typedef Expr kind; };
  template <> struct PredicateKind<SgUnaryOp>            { typedef Unary kind; };
  template <> struct PredicateKind<SgBinaryOp>           { typedef Binary kind; };

  // not really an expression but currently handled as such
  template <> struct PredicateKind<SgInitializedName>    { typedef Expr kind; };

  template <> struct PredicateKind<SgAndOp>              { typedef ShortCircuit kind; };
  template <> struct PredicateKind<SgOrOp>               { typedef ShortCircuit kind; };

  template <> struct PredicateKind<SgEqualityOp>         { typedef Comparison kind; };
  template <> struct PredicateKind<SgNotEqualOp>         { typedef Comparison kind; };
  template <> struct PredicateKind<SgLessOrEqualOp>      { typedef Comparison kind; };
  template <> struct PredicateKind<SgLessThanOp>         { typedef Comparison kind; };
  template <> struct PredicateKind<SgGreaterOrEqualOp>   { typedef Comparison kind; };
  template <> struct PredicateKind<SgGreaterThanOp>      { typedef Comparison kind; };

  template <> struct PredicateKind<SgConditionalExp>     { typedef Branch kind; };

  template <class T>
  struct PredicateKind
  {
    typedef typename PredicateKind<typename T::base_node_type>::kind kind;
  };

  template <class AstNode>
  typename PredicateKind<AstNode>::kind
  tag(const AstNode&)
  {
    typedef typename PredicateKind<AstNode>::kind TagType;

    return TagType();
  }
}


namespace
{
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

  bool isCondition_aux(const SgLocatedNode& n)
  {
    // true, iff this is the condition of its parent
    return &n == retrieve_condition(sg::deref(n.get_parent()));
  }

  bool isCondition(const SgVariableDeclaration& n) { return isCondition_aux(n); }
  bool isCondition(const SgExpression& n)          { return isCondition_aux(n); }

  bool isCondition(const SgInitializedName& n)
  {
    return false; // \todo isCondition_aux(n.get_parent());
  }
}


template <class APredicateLattice>
static
void store_predicates(const SgExpression& key, const APredicateLattice& l)
{
  // \todo complete function
  std::cout << "(todo)  STORE[ " << key.unparseToString() << " ] = " << l << std::endl;
}

static inline
bool isBoolType(const SgType* n)
{
  // \todo use sage type query interface to skip references, typedefs, etc.
  return isSgTypeBool(n);
}


template <class APredicateLattice>
struct PredicateTransfer
{
  typedef typename APredicateLattice::predicate_type predicate_type;

  const DataflowEdge  edge;                // \note direction is lost here
  APredicateLattice&  predlat;

  PredicateTransfer(const DataflowEdge& e, APredicateLattice& pl)
  : edge(e), predlat(pl)
  {}

  // handles assignments (in some ctor's and expressions)
  void handle_assign(const SgExpression& lhs, const SgExpression& rhs);

  // generically handles statements
  void handle_stmt(const SgStatement& n);

  // \brief generic node eval function (invoked for expression and
  //        and like expression nodes that are not handled otherwise).
  void handle_expr(const SgNode&);

  //
  // dispatch functions

  void handle(const SgNode& n,                cat::Node) { sg::unexpected_node(n); }
  void handle(const SgStatement& n,           cat::Stmt) { handle_stmt(n); }
  void handle(const SgVariableDeclaration& n, cat::Stmt) {} // pass through initName -> do nothing

  void handle(const SgInitializedName& n, cat::Expr)
  {
    // the following distinction is not necessary but helpful to keep
    // the number of predicates low
    // \Q shall we also restrict to bool and pointer type (pointer for
    //    including null tests)?
    if (!isCondition(n))
    {
      handle_expr(n);
      return;
    }

    // we need the non-const version for calling buildVarRefExp
          SgInitializedName&   var = const_cast<SgInitializedName&>(n);
    const SgAssignInitializer* init = isSgAssignInitializer(var.get_initializer());

    // we only consider assignment initializer
    //   (also see handle implementation for SgAssignInitializer)
    if (!init)
    {
      handle_expr(n);
      return;
    }

    trace('d');

    // temporarily create an expression for the initialized name
    std::auto_ptr<SgVarRefExp>      lhs(SageBuilder::buildVarRefExp(&var));
    const SgExpression&             rhs = sg::deref(init->get_operand());

    handle_assign(*lhs, rhs);
  }

  void handle(const SgExpression& n,      cat::Expr) { handle_expr(n); }
  void handle(const SgAssignInitializer&, cat::Expr) {} // pass through rhs -> do nothing

  void handle(const SgNotOp& n, cat::Unary)
  {
    trace('!');

    apply_predicator(predlat, NotPredicator<predicate_type>(n));
  }

  void handle(const SgAssignOp& n, cat::Binary)
  {
    // we assume the out-flowing edge to be unconditional
    assert(edge.condition() == eckUnconditional);

    const SgExpression& lhs = lhs_operand(n);

    // \todo also check whether the lhs can be made into a memory location
    if (!isBoolType(n.get_type()))
    {
      // handle non-bool types assignments as normal expression
      handle_expr(n);
      return;
    }

    handle_assign(lhs, rhs_operand(n));
  }

  template <class AstExpr>
  void handle(const AstExpr& n, cat::ShortCircuit)
  {
    trace('s');

    apply_predicator(predlat, ShortCircuitPredicator<predicate_type>(n, edge));
  }

  template <class AstExpr>
  void handle(const AstExpr& n, cat::Comparison)
  {
    trace('/');

    apply_predicator(predlat, BoolEvalPredicator<predicate_type>(n, edge));
  }

  template <class AstExpr>
  void handle(const AstExpr& n, cat::Branch)
  {
    trace('?');

    std::auto_ptr<SgExpression> condition_exp = condition(n);

    apply_predicator(predlat, BranchPredicator<predicate_type>(sg::deref(condition_exp.get()), edge));
  }

  template <class AstNode>
  void handle(const AstNode& n)
  {
    handle(n, cat::tag(n));
  }
};

template <class APredicateLattice>
PredicateTransfer<APredicateLattice>
predicateTransfer(const DataflowEdge& e, APredicateLattice& pl)
{
  return PredicateTransfer<APredicateLattice>(e, pl);
}

template <class APredicateLattice>
void PredicateTransfer<APredicateLattice>::handle_stmt(const SgStatement& n)
{
  trace('#');
  // \Q shall we clear the edge condition of conjuncted predicates?
  // \A probably not, as they will anyways be cleared by the next
  //    simple expression evaluation (the expression evaluated after
  //    a statement has to be simple ... constants, variables, ...)

  // \Q shall we reduce the predicate lattice?
  //    if we do not, we may keep the last boolean evaluation
  //    in the common path (which may or not be useful)
  //    note: in case the predicate lattice is reduced, we need a special
  //    case for SgExprStatement where the reduction is skipped
}

template <class APredicateLattice>
void PredicateTransfer<APredicateLattice>::handle_expr(const SgNode&)
{
  trace('e');

  // \note shall we invoke reduction here?
  reduce(predlat);

  apply_predicator(predlat, EdgePredicateClearer<predicate_type>());
}

template <class APredicateLattice>
void PredicateTransfer<APredicateLattice>::handle_assign(const SgExpression& lhs, const SgExpression& rhs)
{
  trace('=');

  // (1) we apply the assign-predicator to generate all possible
  //     combinations of path-predicates
  apply_predicator(predlat, AssignPredicator<predicate_type>(lhs, rhs));

  // (2) store the resulting predicate set away in a sparse data structure
  //     so it can be retrieved later
  store_predicates(lhs, predlat);

  // (3) generate a reduced predicate lattice that we will continue to use
  //     as path-predicate (i.e., common path predicates)
  reduce(predlat);

  // (4) mixin: lhs and !lhs
  apply_predicator(predlat, BoolEvalPredicator<predicate_type>(lhs, eckUnconditional));
}




struct DFEdgePrinter
{
  const DataflowEdge& edge;

  explicit
  DFEdgePrinter(const DataflowEdge& e)
  : edge(e)
  {}
};

std::ostream& operator<<(std::ostream& os, const DFEdgePrinter& dfe)
{
  DataflowNode  dfnode = dfe.edge.source();
  const SgNode& n = *dfnode.getNode();

  os << n.unparseToString() << " / " << dfnode.getIndex();
  return os;
}

template <class BasePredicate>
std::ostream& operator<<(std::ostream& os, const PredicatedLattice<BasePredicate>& lat)
{
  os << foreach(lat.predset, sg::prn);
  return os;
}

template <class BasePredicate>
struct PredicateAnalysis : IntraFWDataflow
{
    typedef BasePredicate                    predicate_type;
    typedef std::vector<NodeFact*>           FactContainer;
    typedef PredicatedLattice<BasePredicate> lattice_type;

    template <class LatticeType>
    static
    LatticeType& getLattice(Lattice& orig)
    {
      return dynamic_cast<LatticeType&>(orig);
    }

    // Generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
    void genInitState(const Function& f, const DataflowNode& n, const NodeState& nstate, Lattice*& initLattice, FactContainer& fc)
    {
      lattice_type* mylat = new lattice_type;

      mylat->initialize();
      mylat->current_node = isSgLocatedNode(n.getNode());

      initLattice = mylat;
    }

    bool transfer(const Function& func, const DataflowEdge& e, NodeState& state, Lattice& dfInfo)
    {
      static bool first = true;

      lattice_type& l = getLattice<lattice_type>(dfInfo);

      // only handle nodes where the lattice has been properly propagated
      if (!first && l.predset.infeasible())
      {
        return false;
      }

      if (first)
      {
        first = false;
        l.predset.insert(ConjunctedPredicate<BasePredicate>());
      }

      l.current_node = isSgLocatedNode(flowSource(e).getNode());
      sg::dispatch(predicateTransfer(e, l), flowSource(e).getNode());

      std::cout << DFEdgePrinter(e) << ": [" << l.predset.size() << "]" << std::endl
                << l;

      return !l.predset.infeasible();
    }

    bool transfer(const Function& func, const DataflowNode& n, NodeState& state, Lattice& dfInfo)
    {
      // no longer needed as we calculate the transfer for each edge specifically
      ROSE_ASSERT(false);
    }
};


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
