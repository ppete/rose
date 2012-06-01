#pragma once
#include "dataflow.h"
#include <rose.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <ostream>
#include <fstream>
#include <sstream>
#include <boost/foreach.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/operators.hpp>
#include <filteredCFG.h>
#include "staticSingleAssignment.h"
#include <boost/unordered_map.hpp>
#include "dataflowCfgFilter.h"
#include "CallGraph.h"
#include "uniqueNameTraversal.h"
#include "memory_object_impl.h"
#include "LatticeArith.h"

#include <vector>
#include <iostream>

namespace hssa_private
{
  using namespace boost;
  using namespace std;
  using namespace AbstractMemoryObject;
  
  typedef boost::shared_ptr<ObjSet> ObjSetPtr;
  
class HeapSSALattice {

 public:
  HeapSSALattice() {}

 protected:
  bool modified;
  void updateModified(bool latModified) { modified = latModified || modified; }
  
  map<ObjSetPtr, LatticeArith* > amoLatticeMap;
    
 public:
    LatticeArith * getLattice(ObjSetPtr objSetPtr) {
      return amoLatticeMap.find(objSetPtr) != amoLatticeMap.end() ? amoLatticeMap[objSetPtr] : NULL;
    }

    void setLattice(ObjSetPtr objSetPtr, LatticeArith * lattice) {
      if (amoLatticeMap.find(objSetPtr) != amoLatticeMap.end() && lattice == NULL)
	amoLatticeMap.erase(objSetPtr);

      ROSE_ASSERT(lattice != NULL);
      amoLatticeMap[objSetPtr] = lattice;
    }

 public:
    /**                
     * Add new lattice into current lattice set    
     */
    void meetUpdate(ObjSetPtr objSetPtr, ObjSetPtr objSetPtr_, LatticeArith* lattice); 

    void meetUpdate(ObjSetPtr objSetPtr, LatticeArith* lattice);

    /**
     * Update the lattices, if it is already in table, update to the new lattice
     */
    void update(ObjSetPtr objSetPtr, ObjSetPtr objSetPtr_, LatticeArith* lattice);
    /**
     * Walk through all latices, for "must be same" amo, just do strong update, 
     * for "may be same" amo, do meet update
     */
    void update(ObjSetPtr objSetPtr, LatticeArith* lattice, void* helper);

    map<ObjSetPtr, LatticeArith* >& getAMOLatticeMap() {
      return amoLatticeMap;
    }

    void copy(HeapSSALattice* hssaLattice); 
    
    std::string toString();
};
};
