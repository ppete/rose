
#ifndef _SAGE_PREDICATE_H

#define _SAGE_PREDICATE_H

#include <utility>
#include <iosfwd>

#include "rose.h"
#include "predflow.h"
#include "sageplus.h"

/// \brief encapsulates a predicate expression
/// \todo  currently predicates are not represented in
///        a canonical form, thus (a == b), (b == a) and (a > b), (b < a)
///        are not considered to be the same.
/// \note  This is a WEAK PROTOTYPE implementation, that will not work on
///        real code. To make it work with real code this analysis needs
///        to be integrated with some liveness analysis in order to
///        eliminate killed expressions from the lattice set!!
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

    //
    // implementation of BasePredicate concept requirements

    /// negates the current predicate
    SimplePredicate operator!() const;

    /// \brief    checks whether a predicate does not carry information
    ///           (i.e. is an empty constraint)
    /// \details  if a specific analysis cannot extract a predicate from
    ///           an AST node it can choose to return an "empty" predicate.
    ///           Empty predicates will not be added to predicate sets
    bool valid() const
    {
      return isSgNullExpression(expr);
    }

    //
    // free standing functions required to support
    //   - std::set membership
    //   - finding the relationship between two SimplePredicate's
    //   - conversion of AST nodes to predicates

    // this are strict oprators to allow SimplePredicate be used in std::sets
    friend
    bool operator==(const SimplePredicate& lhs, const SimplePredicate& rhs)
    {
      return sg::tree_compare(lhs.expr, rhs.expr) == 0;
    }

    // this are strict operators to allow SimplePredicate be used in std::sets
    friend
    bool operator<(const SimplePredicate& lhs, const SimplePredicate& rhs)
    {
      return sg::tree_compare(lhs.expr, rhs.expr) < 0;
    }

    friend
    dfpred::Relation::Kind
    relation(const SimplePredicate& lhs, const SimplePredicate& rhs);

    /// generates a predicate from a branch-condition
    template <class SageStatement>
    static
    SimplePredicate condition(const SageStatement& n)
    {
      return SimplePredicate(::condition(n));
    }

    /// generates a predicate from a branch-condition
    static
    SimplePredicate condition(const SgConditionalExp&);

    /// generates a predicate from an expression
    static
    SimplePredicate create(const SgExpression&);

    static
    SimplePredicate create(const SgInitializedName& n);
};


std::ostream& operator<<(std::ostream& o, const SimplePredicate& obj);

/// \brief   returns an approximation of the relationship between
///          lhs and rhs.
/// \details implemented are equality and negation
///          not implemented are dominating relationships
///          such as (x < 5) dominates (x < 8) etc.
dfpred::Relation::Kind
relation(const SimplePredicate& lhs, const SimplePredicate& rhs);

#endif /* _SAGE_PREDICATE_H */
