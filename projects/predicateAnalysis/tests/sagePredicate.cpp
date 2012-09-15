
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
