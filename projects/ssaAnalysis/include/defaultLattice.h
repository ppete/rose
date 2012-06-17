
#ifndef _DEFAULT_LATTICE_H
#define _DEFAULT_LATTICE_H

#include "rose.h"
#include "analysis.h"
#include "dataflow.h"
#include "latticeFull.h"

struct DefaultLattice : Lattice
{
  Lattice* copy() const { return new DefaultLattice(*this); }

  const DefaultLattice& that(const Lattice* l) { return dynamic_cast<const DefaultLattice&>(*l); }

  void copy(const Lattice* l) { *this = that(l); }

  void clear()  { }

  bool meetUpdate(const Lattice* l) {}

  bool finiteLattice() const { return true; }

  bool operator==(const Lattice* l) const { return true; }
};


#endif /* _DEFAULT_LATTICE_H */
