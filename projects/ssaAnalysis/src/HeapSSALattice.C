#include "HeapSSALattice.h"
#include "heapSSA.h"
#include <boost/foreach.hpp>
#include <iostream>
 
using namespace std;
using namespace hssa_private;

#define foreach BOOST_FOREACH

/**    
 * Update the lattices, if it is already in table, update to the new lattice   
 */
void HeapSSALattice::update(ObjSetPtr objSetPtr, ObjSetPtr objSetPtr_, LatticeArith* lattice) {
  ROSE_ASSERT(lattice != NULL);
  if (objSetPtr_.get() != NULL) {
    setLattice(objSetPtr_, lattice);
  } else {
    setLattice(objSetPtr, lattice); 
  }
}

void HeapSSALattice::copy(HeapSSALattice* hssaLattice) {
  // This is shallow copy, just copy the pointers from previous HSSA lattice map to current map
  amoLatticeMap.insert(hssaLattice->getAMOLatticeMap().begin(),
		       hssaLattice->getAMOLatticeMap().end());
}

/**    
 * Walk through all latices, for "must be same" amo, just do strong update,    
 * for "may be same" amo, do meet update    
 */
void HeapSSALattice::update(ObjSetPtr objSetPtr, LatticeArith* lattice, void * helper) {
  ROSE_ASSERT(lattice != NULL && helper != NULL);
  HeapSSA* hssa = (HeapSSA* )helper;
  map<ObjSetPtr, LatticeArith* >& amoLatticeMap = getAMOLatticeMap();
  
  bool hasMustSame = false;
  for (map<ObjSetPtr, LatticeArith* >::iterator it = amoLatticeMap.begin();
       it != amoLatticeMap.end(); it ++) {
    ObjSetPtr currObjSetPtr = (* it).first;
    LatticeArith* currLattice = (* it).second;
    // foreach(tie(currObjSetPtr, currLattice), amoLatticeMap) {
    bool mayBeSame = false;
    
    bool mustBeSame = hssa->mustBeSame(currObjSetPtr.get(), objSetPtr.get(), mayBeSame); 
    // Do meet update for "may be same" obj set
    if (mayBeSame) {
      meetUpdate(currObjSetPtr, lattice);
    }
    // Do strong update for "must be same" obj set 
    else if (mustBeSame) {
      hasMustSame = true;
      setLattice(currObjSetPtr, lattice);
    }
  }

  if (!hasMustSame)
    // Set the input AMO's lattice
    setLattice(objSetPtr, lattice);
}

// Add new lattice into current lattice set
void HeapSSALattice::meetUpdate(ObjSetPtr objSetPtr, ObjSetPtr objSetPtr_, 
				LatticeArith* lattice) {
  ROSE_ASSERT(lattice != NULL);
  if (objSetPtr_.get() != NULL) {
    // Create a new lattice                                                                    
    LatticeArith* origLattice = getLattice(objSetPtr_);
    LatticeArith* newLattice = origLattice->copyInstance();
    newLattice->meetUpdate(lattice);
    setLattice(objSetPtr_, newLattice);
  } else {
    setLattice(objSetPtr, lattice);
  }
}

// Perform meet update on the given objSet
void HeapSSALattice::meetUpdate(ObjSetPtr objSetPtr, LatticeArith* lattice) {
  if (amoLatticeMap.find(objSetPtr) != amoLatticeMap.end() && lattice != NULL)
    amoLatticeMap[objSetPtr]->meetUpdate(lattice);
}

std::string HeapSSALattice::toString() {
  std::stringstream ss;
  ss << " heap ssa lattice: ";
  for (map<ObjSetPtr, LatticeArith* >::iterator it = amoLatticeMap.begin();
       it != amoLatticeMap.end(); it ++) {
    if ((* it).second == NULL) std::cout << "strange " << (* it).first->toString() << std::endl;
    ss << (* it).first->toString() << " = " << (* it).second->str(" ") << " ; ";
  }
  return ss.str();
}
