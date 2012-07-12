
#ifndef _PREDICATE_CONCEPT_H

#define _PREDICATE_CONCEPT_H

#include "predflow.h"

namespace concept
{
  /// This class defines the signatures the predicate analysis expects from
  ///   client types.
  struct Predicate
  {
      /// returns a negated representation of the current predicate
      Predicate operator!() const;

      /// returns true, iff the predicate contains a meaningful restrictions
      /// invalid predicates will not get added to conjuncted predicates
      /// \note a free standing function implementation is permissable: bool valid(const Predicate&);
      bool valid() const;

      /// total order equality used for equality comparison of STL containers
      friend
      bool operator==(const Predicate& lhs, const Predicate& rhs);

      /// total order operator to support STL associative containers
      friend
      bool operator<(const Predicate& lhs, const Predicate& rhs);

      /// condition generates a predicate from C/C++ statements and
      ///   conditional operator (x?a:b).
      /// condition is always invoked with a most derived type (SgWhile, SgIfStmt, ...)
      ///   thus a template function does not have to perform type recovery.
      template <class SageStatement>
      static
      Predicate condition(const SageStatement& n);

      /// \overload
      static
      Predicate condition(const SgConditionalExp& n);

      /// generates a predicate from an expression
      ///   if exp cannot be converted into a valid predicate
      ///   (because a specific analysis chooses not to interpret a given
      ///   expression), create can return an invalid predicate (see valid function)
      /// create operates on SgExpression nodes and SgInitializedName. (note
      ///   SgExpressions are NOT passed as most dervied types).
      static
      Predicate create(const SgExpression& exp);

      /// \overload
      static
      Predicate create(const SgInitializedName& init);

      /// \optional
      /// \brief    invoked to store away right hand side predicates that appear
      ///           at assignment nodes. e.g.,
      /// \code
      ///   bool b = (x > y) && p;
      /// \endcode
      ///           could store the following conjunctions for b:
      ///                  - b  && (x > y) && p
      ///                  - !b && !(x > y)
      ///                  - !b && (x > y) && !p
      /// \todo the current interface stores the data for located nodes (i.e., expression or initialized names);
      ///       maybe we want to store on names/symbols/predicates ...
      static
      void store_predicates(const SgLocatedNode&, const dfpred::PredicateAnalysis<Predicate>::predicate_set&);

      /// \optional
      /// A default implementation based on operator! exists in predflow.h
      /// A predicate specific implementation can be provided
      friend
      dfpred::Relation::Kind
      relation(const Predicate& lhs, const Predicate& rhs);

      /// used to print predicate sets and conjuncted predicates (e.g., for debugging)
      friend
      std::ostream& operator<<(std::ostream& o, const Predicate&);
  };

  void instantiationTest()
  {
    dfpred::PredicateAnalysis<Predicate> pa;
  }
}
#endif /* _PREDICATE_CONCEPT_H */
