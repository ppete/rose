
#ifndef _PREDICATE_CONCEPT_H

#define _PREDICATE_CONCEPT_H

#include <limits>

#include "predflow.h"
#include "valueNumbering.h"

/// This class defines the signatures the predicate analysis expects from
///   client types.
struct VNPredicate
{
    typedef scc_private::ValueGraph     ValueGraph;
    typedef scc_private::ValueNode      ValueNode;
    typedef scc_private::ValueNumbering ValueNumbering;

    typedef int value_number_type; ///< note we could also use the ValueNodePtr
                                   ///  which should be unified and in fact
                                   ///  provides all information we care about

  private:
    bool              negated;
    value_number_type valuenumber;

    VNPredicate(bool negation, value_number_type nr)
    : negated(negation), valuenumber(nr)
    {}

    static
    value_number_type max()
    {
      return std::numeric_limits<value_number_type>::max();
    }

  public:

    // creates invalid node
    VNPredicate()
    : negated(false), valuenumber(max())
    {}

    /// returns a negated representation of the current predicate
    VNPredicate operator!() const
    {
      return VNPredicate(!negated, valuenumber);
    }

    /// returns true, iff the predicate contains a meaningful restrictions
    /// invalid predicates will not get added to conjuncted predicates
    bool valid() const
    {
      return valuenumber != max();
    }

    /// total order equality used for equality comparison of STL containers
    friend
    bool operator==(const VNPredicate& lhs, const VNPredicate& rhs)
    {
      return lhs.negated == rhs.negated && lhs.valuenumber == rhs.valuenumber;
    }

    /// total order operator to support STL associative containers
    friend
    bool operator<(const VNPredicate& lhs, const VNPredicate& rhs)
    {
      return (  lhs.negated < rhs.negated
             || (  (lhs.negated == rhs.negated)
                && (lhs.valuenumber == rhs.valuenumber)
                ));
    }

    /// for internal use
    static
    VNPredicate condition_aux(const SgStatement* s);

    /// condition generates a predicate from C/C++ statements and
    ///   conditional operator (x?a:b).
    /// condition always invokes with a most derived type (SgWhile, SgIfStmt, ...)
    ///   thus a template function does not have to perform type recovery.
    template <class SageStatement>
    static
    VNPredicate condition(const SageStatement& n)
    {
      return condition_aux(test_statement(n));
    }

    /// \overload
    static
    VNPredicate condition(const SgConditionalExp& n)
    {
      return create(*n.get_conditional_exp());
    }

    /// for internal use
    static
    VNPredicate make(bool negated, const SgLocatedNode& n);

    /// generates a predicate from an expression
    ///   if exp cannot be converted into a valid predicate
    ///   (because a specific analysis chooses not to interpret a given
    ///   expression), create can return an invalid predicate (see valid function)
    /// create operates on SgExpression nodes and SgInitializedName. (note
    ///   SgExpressions are NOT passed as most dervied types).
    static
    VNPredicate create(const SgExpression& exp)
    {
      const SgExpression& postneg = skip_negation(exp);

      return make(&exp != &postneg, postneg);
    }

    /// \overload
    static
    VNPredicate create(const SgInitializedName& init)
    {
      return make(false, init);
    }

    /// used to print predicate sets and conjuncted predicates (e.g., for debugging)
    friend
    std::ostream& operator<<(std::ostream& o, const VNPredicate& p)
    {
      return (p.negated ? o << "!" : o) << " " << p.valuenumber;
    }

    /// factors out deriving the value-graph component
    static
    ValueGraph& valueGraph()
    {
      ValueGraph* vg = sg::deref(myvn).valueGraph(key).get();

      return sg::deref(vg);
    }

    static ValueNumbering*       myvn;
    static SgFunctionDefinition* key; // consider moving the code to rely on a context/factory
};

#endif /* _PREDICATE_CONCEPT_H */
