
#include <iostream>

#include "sagePredicate.h"

SimplePredicate SimplePredicate::operator!() const
{
  return SimplePredicate(negate(expression()));
}

SimplePredicate SimplePredicate::condition(const SgConditionalExp& n)
{
  return SimplePredicate(::condition(n));
}

SimplePredicate SimplePredicate::create(const SgExpression& n)
{
  return SimplePredicate(*SageInterface::deepCopy(&n));
}

SimplePredicate SimplePredicate::create(const SgInitializedName& n)
{
  SgInitializedName* init_noconst = const_cast<SgInitializedName*>(&n);

  return SimplePredicate(*SageBuilder::buildVarRefExp(init_noconst));
}



std::ostream& operator<<(std::ostream& o, const SimplePredicate& obj)
{
  return o << obj.expression().unparseToString();
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

  const SgExpression& expr_clone = sg::deref(SageInterface::deepCopy(&expr));
  Relation::Kind      res = relation(SimplePredicate::create(expr_clone), rhs);

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
