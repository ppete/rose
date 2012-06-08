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
    dfpred::Relation::Kind
    relation(const SimplePredicate& lhs, const SimplePredicate& rhs);

    /// external constructor, ensures that the expression is copied
    /// \note function needs to be static b/c SimplePredicate is not part of
    ///       the argument list (needed for argument dependent lookup)
    static
    SimplePredicate positive_clone(const SgExpression&);

    /// external constructor, ensures that the expression is copied
    static
    SimplePredicate negative_clone(const SgExpression&);
};

SimplePredicate SimplePredicate::positive_clone(const SgExpression& exp)
{
  const SgExpression* clone = SageInterface::deepCopy(&exp);

  return SimplePredicate(sg::deref(clone));
}

SimplePredicate SimplePredicate::negative_clone(const SgExpression& exp)
{
  return SimplePredicate(negate(exp));
}

std::ostream& operator<<(std::ostream& o, const SimplePredicate& obj)
{
  return o << obj.expr->unparseToString();
}


std::ostream& operator<<(std::ostream& o, const dfpred::Relation::Kind kind)
{
  using dfpred::Relation;

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
dfpred::Relation::Kind
check_negation(const SimplePredicate& lhs, const SimplePredicate& rhs)
{
  using dfpred::Relation;

  const SgExpression& expr = skip_negation(lhs.expression());

  // nothing skipped
  if (&expr == &lhs.expression()) return Relation::unknown;

  Relation::Kind res = relation(SimplePredicate::positive_clone(expr), rhs);

  if (res == Relation::same || res == Relation::negate)
  {
    return res;
  }

  return Relation::unknown;
}

static
dfpred::Relation::Kind
relation_negation(const SimplePredicate& lhs, const SimplePredicate& rhs)
{
  using dfpred::Relation;

  Relation::Kind res = check_negation(rhs, lhs);

  if (res != Relation::unknown) return res;
  return check_negation(lhs, rhs);
}


/// \brief   returns an approximation of the relationship between
///          lhs and rhs.
/// \details implemented are equality and negation
///          not implemented are dominating relationships
///          such as (x < 5) dominates (x < 8) etc.
dfpred::Relation::Kind
relation(const SimplePredicate& lhs, const SimplePredicate& rhs)
{
  using dfpred::Relation;

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

        dfpred::PredicateAnalysis<SimplePredicate> pa;
        // LazyAnalysis<ValueDataAnalysis> lazy_vda;

        UnstructuredPassInterDataflow analyzer(&pa);
        analyzer.runAnalysis();

        printf("==========  E  N  D  ==========\n");

        // Unparse and compile the project (so this can be used for testing)
        return 0;
}
