#pragma once
#include "dataflow.h"
#include "compose.h"
#include <rose.h>
#include <string>
#include <map>
#include <list>
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
#include "abstract_object.h"
#include "latticeFull.h"
#include "data_structures.h"

#include <list>
#include <iostream>

namespace dataflow {
  extern int AbstractObjectMapDebugLevel;

  using namespace boost;
  using namespace std;
  //using namespace AbstractMemoryObject;

  typedef std::pair<AbstractObjectPtr, LatticePtr> MapElement;

  class AbstractObjectMap : public Lattice {

  protected:
    EqualFunctorPtr    equalFunctor;
    MustEqualFunctor   mustEqual;
    MayEqualFunctor    mayEqual;
    list<MapElement>   items;
    // Pointer to a default instance of the given lattice type.
    // AbstractObjectMap::get() can return copies of this object to indicate that
    // there is no mapping for a given AbstractObject.
    LatticePtr         defaultLat;
    // True if all the lattices inserted into this map are finite
    // and false otherwise
    bool isFinite;
    // True if this map has been set to represent the set of all possible AbstractObject->Lattice mappings.
    bool isFull;

    //ComposerExpr2ObjPtr ceo;

    // We may need to be able to call the composer's Expr2MemLoc functions
    // but I'm not sure yet
    /*const Composer& composer;
    const Part&     part;
    const Analysis& analysis;*/

  public:
    // GB: Removed the empty constructor since an object constructed this
    // way would not have a valid equalFunctor and thus would not function
    //AbstractObjectMap() : /*composer(NULL), */isFinite(true) {}
    AbstractObjectMap(const AbstractObjectMap& that) : Lattice(that.part),
                                   equalFunctor(that.equalFunctor),
                                   items       (that.items),
                                   defaultLat  (that.defaultLat),
                                   /*composer    (that.composer),
                                   part        (that.part),
                                   analysis    (that.analysis),*/
                                   isFinite    (that.isFinite),
                                   isFull      (that.isFull)/*,
                                   ceo         (that.ceo)*/
    {}
    AbstractObjectMap(EqualFunctor& ef, LatticePtr defaultLat_/*, ComposerExpr2ObjPtr ceo_*/, PartPtr part_) :
      Lattice(part_), equalFunctor(EqualFunctorPtr(&ef)), defaultLat(defaultLat_), isFinite(true), isFull(false) {}
    AbstractObjectMap(EqualFunctor* ef, LatticePtr defaultLat_/*, ComposerExpr2ObjPtr ceo_*/, PartPtr part_) :
      Lattice(part_), equalFunctor(EqualFunctorPtr(ef)), defaultLat(defaultLat_), isFinite(true), isFull(false) {}
    AbstractObjectMap(EqualFunctorPtr efPtr, LatticePtr defaultLat_/*, ComposerExpr2ObjPtr ceo_*/, PartPtr part_) :
      Lattice(part_), equalFunctor(efPtr), defaultLat(defaultLat_), isFinite(true), isFull(false) {}
    ~AbstractObjectMap() {}

  public:
    // Add a new memory object --> lattice pair to the frontier.
    // Return true if this causes the map to change and false otherwise.
    bool insert(AbstractObjectPtr abstractObjectPtr, LatticePtr lattice);

    // Removes the key matching the argument from the frontier.
    // Return true if this causes the map to change and false otherwise.
    bool remove(AbstractObjectPtr abstractObjectPtr);

    // Get all x-frontier for a given abstract memory object
    LatticePtr get(AbstractObjectPtr abstractObjectPtr);

    // Set this Lattice object to represent the set of all possible execution prefixes.
    // Return true if this causes the object to change and false otherwise.
    bool setToFull();

    // Set this Lattice object to represent the of no execution prefixes (empty set).
    // Return true if this causes the object to change and false otherwise.
    bool setToEmpty();

    std::string str(std::string indent) const;
    // Variant of the str method that can produce information specific to the current Part.
    // Useful since AbstractObjects can change from one Part to another.
    std::string strp(PartPtr part, std::string indent="") const;

    // -----------------
    // Lattice methods
    // initializes this Lattice to its default state, if it is not already initialized
    void initialize();

    void clear() {} // \pp todo

    bool finiteLattice() const { return isFinite; }

    // returns a copy of this lattice
    AbstractObjectMap* copy() const;

    // overwrites the state of this Lattice with that of that Lattice
    void copy(const Lattice* thatL);

    // Called by analyses to transfer this lattice's contents from across function scopes from a caller function
    //    to a callee's scope and vice versa. If this this lattice maintains any information on the basis of
    //    individual MemLocObjects these mappings must be converted, with MemLocObjects that are keys of the ml2ml
    //    replaced with their corresponding values. If a given key of ml2ml does not appear in the lattice, it must
    //    be added to the lattice and assigned a default initial value. In many cases (e.g. over-approximate sets
    //    of MemLocObjects) this may not require any actual insertions. If the value of a given ml2ml mapping is
    //    NULL (empty boost::shared_ptr), any information for MemLocObjects that must-equal to the key should be
    //    deleted.
    // The function takes newPart, the part within which the values of ml2ml should be interpreted. It corresponds
    //    to the code region(s) to which we are remapping.
    Lattice* remapML(const std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >& ml2ml, PartPtr newPart);

    // Adds information about the MemLocObjects in newL to this Lattice, overwriting any information previously
    //    maintained in this lattice about them.
    // Returns true if the Lattice state is modified and false otherwise.
    bool replaceML(Lattice* newL);

    // computes the meet of this and that and saves the result in this
    // returns true if this causes this to change and false otherwise
    bool meetUpdate(const Lattice* that);

    // Identify keys that are must-equal to each other and merge their lattices
    // Return true if this causes the object to change and false otherwise.
    bool compressMustEq();

    // Remove all mappings with dead keys from this map.
    // Return true if this causes the object to change and false otherwise.
    bool compressDead();

    bool finiteLattice();

    // !!! UNIMPLEMENTED
    bool operator==(const Lattice* that) const;
  };
}; // namespace dataflow;
