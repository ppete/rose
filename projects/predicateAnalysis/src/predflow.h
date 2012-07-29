#ifndef _PREDFLOW_H

#define _PREDFLOW_H

#include <numeric>

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

namespace dfpred
{

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

  /// \brief   returns an approximation of the relationship between
  ///          lhs and rhs.
  /// \details this is the default implementation for determining
  ///          whether two predicates conflict. Implemented is equality and
  ///          negation. NOT IMPLEMENTED is dominating relationships
  ///          such as (x < 5) dominates (x < 8) etc.
  /// \note    any specific implementation can choose to make a better
  ///          version available that is defined on concrete predicate-types.
  template <class BasePredicate>
  Relation::Kind
  relation(const BasePredicate& lhs, const BasePredicate& rhs)
  {
    if (lhs == rhs)  return Relation::same;
    if (lhs == !rhs) return Relation::negate;

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
      using base::value_type;

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
       << "}";

    return os;
  }

  //
  // checks for conflicts between a ConjunctedPredicate and
  //   a BasePredicate

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

  template <class BasePredicate>
  bool valid(const BasePredicate& bp)
  {
    return bp.valid();
  }

  /// \brief  tests whether cand or its negation is in cp
  /// \return
  template <class BasePredicate>
  static
  Relation::Kind
  conflicts(const ConjunctedPredicate<BasePredicate>& cp, const BasePredicate& cand)
  {
    typedef typename ConjunctedPredicate<BasePredicate>::const_iterator ConstIterator;

    // if the new expression does not
    //   contribute any new information to the predicate set.
    //   e.g., representing a null-Expression
    //   ==> return same;
    // \Q should this be better done in relation?
    // \A probably not, as the conflicts function is invoked in
    //    any case before the new predicate gets added to cp
    if (valid(cand)) return Relation::same;

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
      using base::value_type;

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
      bool meet(const PredicateSet& other)
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

  template <class BasePredicate>
  std::ostream& operator<<(std::ostream& os, const PredicateSet<BasePredicate>& predset)
  {
    return os << "< " << foreach(predset, sg::prn) << ">" << std::endl;
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

  template <class TLattice>
  bool meetUpdate(TLattice& tgt, const TLattice& src)
  {
    ROSE_ASSERT(src.isInitialized());

    if (!tgt.isInitialized())
    {
      tgt.copy(&src);
    }

    tgt.meet(src);
  }


  //
  // dataflow lattice
  template <class BasePredicate>
  struct PredicatedLattice : FiniteLattice
  {
      typedef BasePredicate               predicate_type;
      typedef PredicateSet<BasePredicate> predicate_set;

      //
      // members
      // \todo make members private

      predicate_set  predset;      ///< initialized to contain an unconstrained lattice
      SgLocatedNode* current_node; ///< for debugging

      PredicatedLattice()
      : predset(), current_node(0)
      {}

      PredicatedLattice* copy() const { return new PredicatedLattice(*this); }

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

      bool meet(const PredicatedLattice& that)
      {
        return predset.meet(that.predset);
      }

      bool meetUpdate(const Lattice* arg)
      {
        const PredicatedLattice* that = dynamic_cast<const PredicatedLattice*>(arg);
        ROSE_ASSERT(that);

        ::dfpred::meetUpdate(*this, *that);
      }

      bool operator==(const Lattice* arg) const
      {
        const PredicatedLattice* that = dynamic_cast<const PredicatedLattice*>(arg);

        return this->predset == that->predset;
      }

      void initialize() /* override */
      {
        if (!isInitialized())
        {
          predset.insert(ConjunctedPredicate<BasePredicate>());
          FiniteLattice::initialize();
        }
      }

      friend
      void swap(PredicatedLattice& lhs, PredicatedLattice& rhs)
      {
        using std::swap;

        swap(lhs.predset,      rhs.predset);
        swap(lhs.current_node, rhs.current_node);
      }

      std::string str() const
      {
        std::stringstream out;

        out << *this;
        return out.str();
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
                                   const BasePredicate&                      guard,
                                   EdgeConditionKind                         eck,
                                   BasePredicate (*cloneTrueBranch) (const BasePredicate&),
                                   BasePredicate (*cloneFalseBranch) (const BasePredicate&)
                                 )
  {
    // \note eck can be true/false/unconditional

    if (eck != eckFalse)
    {
      constrain_edge(cp, cloneTrueBranch(guard), eckTrue, res);
    }

    if (eck != eckTrue)
    {
      constrain_edge(cp, cloneFalseBranch(guard), eckFalse, res);
    }
  }

  template <class BasePredicate>
  static
  void constrain_twinedge( PredicateSet<BasePredicate>&              res,
                           const ConjunctedPredicate<BasePredicate>& cp,
                           const BasePredicate&                      lhs_guard,
                           const BasePredicate&                      rhs_guard,
                           BasePredicate (*cloner) (const BasePredicate&),
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
  BasePredicate positive_clone(const BasePredicate& pred)
  {
    return pred;
  }

  template <class BasePredicate>
  BasePredicate negative_clone(const BasePredicate& pred)
  {
    return !pred;
  }

  template <class BasePredicate>
  static
  void unconstrained_boolean_edge_twin( PredicateSet<BasePredicate>&              res,
                                        const ConjunctedPredicate<BasePredicate>& cp,
                                        const BasePredicate&                      lhs_guard,
                                        const BasePredicate&                      rhs_guard
                                      )
  {
    // \note twin refers to the fact that lhs_guard and rhs_guard are in sync
    //       either (lhs_guard && rhs_guard) or (!lhs_guard && !rhs_guard)
    constrain_twinedge(res, cp, lhs_guard, rhs_guard, positive_clone<BasePredicate>, eckTrue);
    constrain_twinedge(res, cp, lhs_guard, rhs_guard, negative_clone<BasePredicate>, eckFalse);
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

    const BasePredicate& assignee;
    const BasePredicate& value;

    AssignPredicator(const BasePredicate& lhs, const BasePredicate& rhs)
    : Base(), assignee(lhs), value(rhs)
    {}

    void unconstrained(const ConjunctedPredicate<BasePredicate>& cp)
    {
      unconstrained_boolean_edge_twin(res, cp, assignee, value);
    }

    void constrained(const ConjunctedPredicate<BasePredicate>& cpred, EdgeConditionKind eckind)
    {
      BasePredicate (*spgen) (const BasePredicate&) = positive_clone<BasePredicate>;

      if (eckind == eckFalse) spgen = negative_clone<BasePredicate>;

      constrain_edge(cpred, spgen(assignee), eckind, res);
    }
  };

  template <class BasePredicate>
  AssignPredicator<BasePredicate>
  assignPredicator(const BasePredicate& lhs, const BasePredicate& rhs)
  {
    return AssignPredicator<BasePredicate>(lhs, rhs);
  }

  template <class BasePredicate>
  struct NotPredicator : ExprPredicator<BasePredicate, NotPredicator<BasePredicate> >
  {
    typedef ExprPredicator<BasePredicate, NotPredicator> Base;

    using Base::res;

    const BasePredicate& exp;

    explicit
    NotPredicator(const BasePredicate& pred)
    : Base(), exp(pred)
    {}

    void unconstrained(const ConjunctedPredicate<BasePredicate>& cp)
    {
      unconstrained_boolean_edge(res, cp, exp, eckUnconditional, negative_clone<BasePredicate>, positive_clone<BasePredicate>);
    }

    void constrained(ConjunctedPredicate<BasePredicate> cpred, EdgeConditionKind eckind)
    {
      // negate along false edges
      const EdgeConditionKind negkind = negateEdgeConditionKind(eckind);

      cpred.edge_condition(negkind);
      res.insert(cpred);
    }
  };

  template <class BasePredicate>
  NotPredicator<BasePredicate>
  notPredicator(const BasePredicate& op)
  {
    return NotPredicator<BasePredicate>(op);
  }


  template <class BasePredicate>
  struct ShortCircuitPredicator : ExprPredicator<BasePredicate, ShortCircuitPredicator<BasePredicate> >
  {
    typedef ExprPredicator<BasePredicate, ShortCircuitPredicator> Base;

    using Base::res;

    const BasePredicate& exp;
    const DataflowEdge&  edge;

    ShortCircuitPredicator(const BasePredicate& pred, const DataflowEdge& e)
    : Base(), exp(pred), edge(e)
    {}

    void unconstrained(const ConjunctedPredicate<BasePredicate>& cp)
    {
      unconstrained_boolean_edge(res, cp, exp, edge.condition(), positive_clone<BasePredicate>, negative_clone<BasePredicate>);
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
  ShortCircuitPredicator<BasePredicate>
  shortCircuitPredicator(const BasePredicate& guard, const DataflowEdge& e)
  {
    return ShortCircuitPredicator<BasePredicate>(guard, e);
  }

  template <class BasePredicate>
  struct BranchPredicator : ExprPredicator<BasePredicate, BranchPredicator<BasePredicate> >
  {
    // \note the logic allows merging this class with the ShortCircuitPredicator.
    //       for now we keep the two classes separate for clarity.

    typedef ExprPredicator<BasePredicate, BranchPredicator> Base;

    using Base::res;

    const BasePredicate& exp;
    const DataflowEdge&  edge; // \todo consider converting edge into a value

    BranchPredicator(const BasePredicate& guard, const DataflowEdge& e)
    : Base(), exp(guard), edge(e)
    {}

    void unconstrained(const ConjunctedPredicate<BasePredicate>& cp)
    {
      unconstrained_boolean_edge(res, cp, exp, edge.condition(), positive_clone<BasePredicate>, negative_clone<BasePredicate>);
    }

    void constrained(const ConjunctedPredicate<BasePredicate>& cpred, EdgeConditionKind eckind)
    {
      ROSE_ASSERT(edge.condition() != eckUnconditional);

      if (eckind != edge.condition()) return;

      res.insert(cpred);
    }
  };

  template <class BasePredicate>
  BranchPredicator<BasePredicate>
  branchPredicator(const BasePredicate& guard, const DataflowEdge& e)
  {
    return BranchPredicator<BasePredicate>(guard, e);
  }

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

    const BasePredicate&    exp;
    const EdgeConditionKind edegecond; // \todo consider converting edge into a value

    BoolEvalPredicator(const BasePredicate& cond, EdgeConditionKind eckind)
    : exp(cond), edegecond(eckind)
    {}

    void operator()(const ConjunctedPredicate<BasePredicate>& cp)
    {
      unconstrained_boolean_edge(res, cp, exp, edegecond, positive_clone<BasePredicate>, negative_clone<BasePredicate>);
    }
  };

  template <class BasePredicate>
  BoolEvalPredicator<BasePredicate>
  boolEvalPredicator(const BasePredicate& guard, EdgeConditionKind eckind)
  {
    return BoolEvalPredicator<BasePredicate>(guard, eckind);
  }

  template <class BasePredicate>
  BoolEvalPredicator<BasePredicate>
  boolEvalPredicator(const BasePredicate& guard, const DataflowEdge& edge)
  {
    return boolEvalPredicator(guard, edge.condition());
  }

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
    std::cout << '\n' << c << " - ";
  }

  // default implementation, chosen when the BasePredicate does not
  // implement store/load functions
  //~ template <class AnyPredicateSet>
  //~ static
  //~ void store_predicates(const SgLocatedNode&, const AnyPredicateSet&)
  //~ {}

  template <typename T>
  class has_store_predicates
  {
      typedef char one;
      typedef long two;

      template <typename C> static one test( typeof(&C::store_predicates) ) ;
      template <typename C> static two test(...);


  public:
      enum { value = sizeof(test<T>(0)) == sizeof(char) };
  };


  template <int x, class BasePredicate>
  struct StorageAux
  {
    template <class AnyPredicateSet>
    static
    void store_predicates(const SgLocatedNode& key, const AnyPredicateSet& l)
    {
      BasePredicate::store_predicates(key, l);
    }
  };

  template <class BasePredicate>
  struct StorageAux<0, BasePredicate>
  {
    template <class AnyPredicateSet>
    static
    void store_predicates(const SgLocatedNode&, const AnyPredicateSet&)
    {}
  };


  template <class BasePredicate>
  static
  void store_predicates(const SgLocatedNode& key, const PredicatedLattice<BasePredicate>& l)
  {
    StorageAux<has_store_predicates<BasePredicate>::value, BasePredicate>::store_predicates(key, l.predset);
  }

  template <class BasePredicate>
  struct PredicateTransfer
  {
    typedef PredicatedLattice<BasePredicate> predicate_lattice;
    typedef BasePredicate                    predicate_type;

    const DataflowEdge  edge;                // \note direction is lost here
    predicate_lattice&  predlat;

    PredicateTransfer(const DataflowEdge& e, predicate_lattice& pl)
    : edge(e), predlat(pl)
    {}

    // handles assignments (in some ctor's and expressions)
    void handle_assign(const predicate_type& lhs, const SgExpression& rhs, const SgLocatedNode& key);

    // generically handles statements
    void handle_stmt(const SgStatement& n);

    // \brief generic node eval function (invoked for expression and
    //        and like expression nodes that are not handled otherwise).
    void handle_expr(const SgNode&);

    //
    // dispatch functions

    void handle(const SgNode& n,                cat::Node) { sg::unexpected_node(n); }
    void handle(const SgStatement& n,           cat::Stmt) { handle_stmt(n); }
    void handle(const SgVariableDeclaration&,   cat::Stmt) {} // pass through initName -> do nothing

    void handle(const SgInitializedName& n, cat::Expr)
    {
      // the following distinction is not necessary but helpful to keep
      // the number of predicates low
      // \Q shall we also restrict to bool and pointer type (pointer for
      //    including null tests)?
      if (!sg::isCondition(n) && !sg::isBoolType(n.get_type()))
      {
        handle_expr(n);
        return;
      }

      const SgAssignInitializer* init = isSgAssignInitializer(n.get_initializer());

      // we only consider assignment initializer
      //   (also see handle implementation for SgAssignInitializer)
      if (!init)
      {
        handle_expr(n);
        return;
      }

      trace('d');

      // temporarily create an expression for the initialized name
      const SgExpression&        rhs = sg::deref(init->get_operand());

      handle_assign(predicate_type::create(*init), rhs, *init);
    }

    void handle(const SgExpression& n,      cat::Expr) { handle_expr(n); }
    void handle(const SgAssignInitializer&, cat::Expr) {} // pass through rhs -> do nothing

    void handle(const SgNotOp& n, cat::Unary)
    {
      trace('!');

      apply_predicator(predlat, notPredicator(predicate_type::create(operand(n))));
    }

    void handle(const SgAssignOp& n, cat::Binary)
    {
      // we assume the out-flowing edge to be unconditional
      assert(edge.condition() == eckUnconditional);

      const SgExpression& lhs = lhs_operand(n);

      // \todo also check whether the lhs can be made into a memory location
      if (!sg::isBoolType(lhs.get_type()))
      {
        // handle non-bool types assignments as normal expression
        handle_expr(n);
        return;
      }

      handle_assign(predicate_type::create(lhs), rhs_operand(n), n);
    }

    static inline
    unsigned node_eval_index(const DataflowEdge& e)
    {
      // \todo here we assume forward flow ...
      unsigned res = e.source().getIndex();

      return res;
    }

    template <class AstExpr>
    void handle(const AstExpr& n, cat::ShortCircuit)
    {
      static const unsigned left_expr = 1;

      trace('s');

      const SgExpression& guard = (node_eval_index(edge) == left_expr ? lhs_operand(n) : rhs_operand(n));

      apply_predicator(predlat, shortCircuitPredicator(predicate_type::create(guard), edge));
    }

    template <class AstExpr>
    void handle(const AstExpr& n, cat::Comparison)
    {
      trace('/');

      apply_predicator(predlat, boolEvalPredicator(predicate_type::create(n), edge));
    }

    template <class AstExpr>
    void handle(const AstExpr& n, cat::Branch)
    {
      trace('?');

      apply_predicator(predlat, branchPredicator(predicate_type::condition(n), edge));
    }

    template <class AstNode>
    void handle(const AstNode& n)
    {
      handle(n, cat::tag(n));
    }
  };

  template <class BasePredicate>
  PredicateTransfer<BasePredicate>
  predicateTransfer(const DataflowEdge& e, PredicatedLattice<BasePredicate>& pl)
  {
    return PredicateTransfer<BasePredicate>(e, pl);
  }

  template <class BasePredicate>
  void PredicateTransfer<BasePredicate>::handle_stmt(const SgStatement&)
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

  template <class BasePredicate>
  void PredicateTransfer<BasePredicate>::handle_expr(const SgNode&)
  {
    trace('e');

    // \note shall we invoke reduction here?
    reduce(predlat);

    apply_predicator(predlat, EdgePredicateClearer<predicate_type>());
  }

  template <class BasePredicate>
  void PredicateTransfer<BasePredicate>::handle_assign(const predicate_type& assignee, const SgExpression& rhs, const SgLocatedNode& key)
  {
    trace('=');

    // (1) we apply the assign-predicator to generate all possible
    //     combinations of path-predicates
    apply_predicator(predlat, assignPredicator(assignee, predicate_type::create(rhs)));

    // (2) store the resulting predicate set away in a sparse data structure
    //     so it can be retrieved later
    store_predicates(key, predlat);

    // (3) generate a reduced predicate lattice that we will continue to use
    //     as path-predicate (i.e., common path predicates)
    reduce(predlat);

    // (4) mixin: lhs and !lhs
    apply_predicator(predlat, boolEvalPredicator(assignee, eckUnconditional));
  }


  // wrapper class for which we can provide an operator<< without clashing
  //   with similar operators on DataflowEdge elsewhere
  struct DFEdgePrinter
  {
    const DataflowEdge& edge;

    explicit
    DFEdgePrinter(const DataflowEdge& e)
    : edge(e)
    {}
  };

  static inline
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
      typedef BasePredicate                        predicate_type;
      typedef std::vector<NodeFact*>               FactContainer;
      typedef PredicatedLattice<BasePredicate>     lattice_type;

      typedef typename lattice_type::predicate_set predicate_set;

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

      // Generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
      lattice_type* genLattice(const Function&, const DataflowNode& n, const NodeState&)
      {
        lattice_type* mylat = new lattice_type;

        mylat->initialize(); // \todo what to do here?
        mylat->current_node = isSgLocatedNode(n.getNode());

        return mylat;
      }

      FactContainer genFacts(const Function&, const DataflowNode&, const NodeState&)
      {
        return FactContainer();
      }

      virtual bool transfer(const Function&, const DataflowEdge& e, NodeState&, LatticePtr dfInfo)
      {
        lattice_type& l = getLattice<lattice_type>(sg::deref(dfInfo.get()));

        // only handle nodes where the lattice has been properly propagated
        if (!l.isInitialized()) { }

        l.current_node = isSgLocatedNode(flowSource(e).getNode());
        sg::dispatch(predicateTransfer(e, l), flowSource(e).getNode());

        std::cout << DFEdgePrinter(e) << ": [" << l.predset.size() << "]" << std::endl
                  << l;

        return !l.predset.infeasible();
      }

      bool transfer(const Function&, const DataflowNode&, NodeState&, LatticePtr)
      {
        // no longer needed as we calculate the transfer for each edge specifically
        ROSE_ASSERT(false);
      }

      bool edgeSensitiveAnalysis() const { return true; }
  };

  static inline
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
}

#endif /* _PREDFLOW_H */
