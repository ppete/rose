#include "ssaPredicate.h"

dfpred::Relation::Kind
relation(const SSAPredicate& lhs, const SSAPredicate& rhs)
{
  using dfpred::Relation;

  if (lhs.rep != rhs.rep)                        return Relation::incomparable;
  if (sg::tree_compare(lhs.expr, rhs.expr) != 0) return Relation::incomparable;
  if (lhs.negated  == rhs.negated)               return Relation::same;

  return Relation::negate;
}

bool operator<(const SSAPredicate& lhs, const SSAPredicate& rhs)
{
  return (  lhs.negated < rhs.negated
         || (  lhs.negated == rhs.negated
            && (  lhs.rep < rhs.rep
               || (  lhs.rep == rhs.rep
                  && sg::tree_compare(lhs.expr, rhs.expr) < 0
                  ))));
}

bool operator==(const SSAPredicate& lhs, const SSAPredicate& rhs)
{
  return (  lhs.negated == rhs.negated
         && lhs.rep  == rhs.rep
         && sg::tree_compare(lhs.expr, rhs.expr) == 0
         );
}


namespace {
  struct SSAGuard : sg::DispatchHandler<SSAPredicate>
  {
      void handle(const SgNode& n) { sg::unexpected_node(n); }

      void handle(const SgVariableDeclaration& n)
      {
        SgVariableDeclaration& noconst = const_cast<SgVariableDeclaration&>(n);

        res = SSAPredicate::create(SageInterface::getFirstVariable(noconst));
      }

      void handle(const SgExprStatement& n)
      {
        res = SSAPredicate::create(sg::deref(n.get_expression()));
      }
  };
}

SSAPredicate SSAPredicate::condition_aux(const SgStatement& s)
{
  return sg::dispatch(SSAGuard(), &s);
}

/*
static
std::ostream& operator<<(std::ostream& os, const SgInitializedName* init)
{
  return os << init->unparseToString() << " ";
}

static
std::ostream& operator<<(std::ostream& os, const StaticSingleAssignment::VarName& obj)
{
  return os << "<" << foreach(obj, sg::prn) << ">";
}


static inline
std::ostream& operator<<(std::ostream& os, const SSAPredicate::SSARep& rep)
{
  return os << "<" << rep.size() << ">";
}
*/

static inline
std::ostream& operator<<(std::ostream& os, ReachingDef::ReachingDefPtr ptr)
{
  return os << ptr->getDefinitionNode()->unparseToString() << "@" << ptr->getRenamingNumber()
            << (ptr->isPhiFunction() ? "(p)" : "");
}

std::ostream& operator<<(std::ostream& os, const SSAPredicate& obj)
{
  return (obj.negated ? os << "!" : os)
          << (obj.expr ? obj.expr->unparseToString() : "<null>")
          << "  [ " << sg::foreach(obj.rep, sg::prn) << "]";
//          << "  " << obj.rep;
}

hssa_private::HeapSSA* SSAPredicate::myssa = 0;

struct SSARepCreator
{
  typedef StaticSingleAssignment::NodeReachingDefTable NodeReachingDefTable;

  const NodeReachingDefTable& defs;
  SSAPredicate::SSARep        res;

  explicit
  SSARepCreator(const NodeReachingDefTable& ssadefs)
  : defs(ssadefs), res()
  {}

  void operator()(const SSAPredicate::VarName& e)
  {
    NodeReachingDefTable::const_iterator pos = defs.find(e);
    if (pos == defs.end()) return;

    res.insert(pos->second);
  }

  operator SSAPredicate::SSARep() const { return res; }
};

SSAPredicate::SSARep SSAPredicate::validRep(const SSAData& data, const NodeReachingDefTable& defs)
{
  return std::for_each(data.begin(), data.end(), SSARepCreator(defs));
}

hssa_private::HeapSSA& SSAPredicate::ssa()
{
  return sg::deref(myssa);
}

SSAPredicate SSAPredicate::create(const SgExpression& exp)
{
  const SgExpression& postneg = skip_negation(exp);
  const SgExpression* expclone = SageInterface::deepCopy(&postneg);

  ROSE_ASSERT(!exp.isUsedAsLValue() || (&exp == &postneg) );

  return SSAPredicate(&postneg != &exp, sg::deref(expclone), getSSANames(postneg));
}

SSAPredicate SSAPredicate::create(const SgInitializedName& init)
{
  SgInitializedName*  init_noconst = const_cast<SgInitializedName*>(&init);
  const SgExpression* expclone = SageBuilder::buildVarRefExp(init_noconst);

  return SSAPredicate(false, sg::deref(expclone), getSSANames(init));
}
