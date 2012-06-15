
#ifndef _SSA_PREDICATE_H

#define _SSA_PREDICATE_H

#include <utility>
#include <ios>

#include "rose.h"
#include "heapSSA.h"
#include "predflow.h"

struct SSAPredicate
{
    typedef StaticSingleAssignment::NodeReachingDefTable NodeReachingDefTable;
    typedef StaticSingleAssignment::VarName              VarName;
    typedef ReachingDef::ReachingDefPtr                  ReachingDefPtr;

    typedef std::set<VarName>                            SSAData;
    typedef std::set<ReachingDefPtr>                     SSARep;

  private:

    //
    // convenience functions

    static
    SSARep invalidRep() { return SSARep(); }

    static
    SSARep validRep(const SSAData& data, const NodeReachingDefTable& defs);

    //
    // data members

    bool                negated;
    const SgExpression* expr;
    SSARep              rep;

    // main constructor (invoke through create)
    SSAPredicate(bool neg, const SgExpression& exp, const SSARep& ssarep)
    : negated(neg), expr(&exp), rep(ssarep)
    {}

  public:
    // default ctor, results in empty state (needed for SSARepCreator)
    SSAPredicate()
    : negated(false), expr(0), rep(invalidRep())
    {}

    SSAPredicate(const SSAPredicate& orig)
    : negated(orig.negated), expr(SageInterface::deepCopy(orig.expr)), rep(orig.rep)
    {
      //~ ROSE_ASSERT(rep.empty() || expr);
    }

    ~SSAPredicate()
    {
      //~ ROSE_ASSERT(rep.empty() || expr);
      delete expr;
    }

    SSAPredicate& operator=(const SSAPredicate& rhs)
    {
      SSAPredicate tmp(rhs);

      swap(*this, tmp);
      return *this;
    }

    SSAPredicate operator!() const
    {
      SSAPredicate res(*this);

      res.negated = !res.negated;
      return res;
    }

    bool isEmpty() const
    {
      return !expr || isSgNullExpression(expr) || rep.empty();
    }

    friend
    void swap(SSAPredicate& lhs, SSAPredicate& rhs)
    {
      using std::swap;

      swap(lhs.negated, rhs.negated);
      swap(lhs.expr,    rhs.expr);

      // swap(lhs.rep,     rhs.rep);
      lhs.rep.swap(rhs.rep);
    }

    friend
    bool operator==(const SSAPredicate& lhs, const SSAPredicate& rhs);

    friend
    bool operator<(const SSAPredicate& lhs, const SSAPredicate& rhs);

    friend
    dfpred::Relation::Kind
    relation(const SSAPredicate& lhs, const SSAPredicate& rhs);

    //

    static
    SSARep varsDefined(const SgNode& n)
    {
      SgNode* constless = const_cast<SgNode*>(&n);

      return validRep(ssa().getVarsDefinedInSubtree(constless), ssa().getReachingDefsAtNode_(constless));
    }

    static
    SSARep varsUsed(const SgNode& n)
    {
      SgNode* constless = const_cast<SgNode*>(&n);

      return validRep(ssa().getVarsUsedInSubtree(constless), ssa().getOutgoingDefsAtNode(constless));
    }

    static
    SSARep getSSANames(const SgInitializedName& n)
    {
      return varsDefined(n);
    }

    static
    SSARep getSSANames(const SgExpression& n)
    {
      if (n.isUsedAsLValue()) return varsDefined(n);

      return varsUsed(n);
    }

    /// generates a predicate from a branch-condition
    static
    SSAPredicate condition_aux(const SgStatement& n);

    template <class SageStatement>
    static
    SSAPredicate condition(const SageStatement& n)
    {
      return condition_aux(sg::deref(test_statement(n)));
    }

    /// generates a predicate from a branch-condition
    static
    SSAPredicate condition(const SgConditionalExp& n)
    {
      return create(*n.get_conditional_exp());
    }

    /// generates a predicate from an expression
    static
    SSAPredicate create(const SgExpression& exp);

    static
    SSAPredicate create(const SgInitializedName& init);

    friend
    std::ostream& operator<<(std::ostream& o, const SSAPredicate& obj);

    //
    // SSA analysis state

    static
    hssa_private::HeapSSA& ssa();

    static hssa_private::HeapSSA* myssa;
};

#endif /* _SSA_PREDICATE_H */
