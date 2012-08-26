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
  
  typedef boost::shared_ptr<Lattice> LatticePtr;
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
      equalFunctor(EqualFunctorPtr(&ef)), defaultLat(defaultLat_), isFinite(true), isFull(false)/*, ceo(ceo_)*/, Lattice(part_) {}
    AbstractObjectMap(EqualFunctor* ef, LatticePtr defaultLat_/*, ComposerExpr2ObjPtr ceo_*/, PartPtr part_) : 
      equalFunctor(EqualFunctorPtr(ef)), defaultLat(defaultLat_), isFinite(true), isFull(false)/*, ceo(ceo_)*/, Lattice(part_) {}
    AbstractObjectMap(EqualFunctorPtr efPtr, LatticePtr defaultLat_/*, ComposerExpr2ObjPtr ceo_*/, PartPtr part_) : 
      equalFunctor(efPtr), defaultLat(defaultLat_), isFinite(true), isFull(false)/*, ceo(ceo_)*/, Lattice(part_) {}
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

    std::string str(std::string indent);
    // Variant of the str method that can produce information specific to the current Part.
    // Useful since AbstractObjects can change from one Part to another.
    std::string strp(PartPtr part, std::string indent="");
    
    // -----------------
    // Lattice methods
    // initializes this Lattice to its default state, if it is not already initialized
    void initialize();
    
    // returns a copy of this lattice
    Lattice* copy() const;
    
    // overwrites the state of this Lattice with that of that Lattice
    void copy(Lattice* thatL);
    
    /*// Called by analyses to transfer this lattice's contents from a caller function's scope to the scope of the 
    //    callee function. If this this lattice maintains any information on the basis of individual MemLocObjects 
    //    these mappings must be converted from the caller's context to the callee's through a mapping from the
    //    call arguments to the callee's parameters. Implementations of this function are expected to return a 
    //    newly-allocated lattice that only contains information about MemLocObjects that are in the values of the r2eML 
    //    map. Information about the other MemLocObjects maintained by this Lattice may be excluded but only as
    //    long as this does not lose information about the objects in the values of r2eML.
    // r2eML - maps MemLocObjects that identify the arguments of a given function call to the corresponding 
    //    parameters of the callee function.
    //    ASSUMED: full mustEquals information is available for the keys and values of this map. They must be
    //       variable references or expressions.
    // Returns true if this causes the Lattice object to change and false otherwise.
    Lattice* remapCaller2Callee(const std::map<MemLocObjectPtr, MemLocObjectPtr>& r2eML);

    // Called by analyses to transfer this lattice's contents from a callee function's scope back to the scope of 
    //    the caller function, in a mirror image of what remapCaller2Callee to callee does. remapCaller2Callee 
    //     only keeps the portion of the original lattice callerL that has a corresponding mapping in the callee to 
    //     produce lattice caleeL. Thus, remapCallee2Caller is called on callerL and is given calleeL as an 
    //     argument and must take all the information about all the MemLocObjects that are the values of the r2eML
    //     map and and bring it back to callerL.
    // Returns true if this causes the Lattice object to change and false otherwise.
    bool remapCallee2Caller(const std::map<MemLocObjectPtr, MemLocObjectPtr>& r2eML, Lattice* calleeL);*/
    
    // Called by analyses to transfer this lattice's contents from across function scopes from a caller function 
    //    to a callee's scope and vice versa. If this this lattice maintains any information on the basis of 
    //    individual MemLocObjects these mappings must be converted, with MemLocObjects that are keys of the ml2ml 
    //    replaced with their corresponding values. If a given key of ml2ml does not appear in the lattice, it must
    //    be added to the lattice and assigned a default initial value. In many cases (e.g. over-approximate sets 
    //    of MemLocObjects) this may not require any actual insertions.
    // It is assumed that the keys and values of ml2ml correspond to MemLocObjects that are syntactically explicit 
    //    in the code (e.g. lexical variables or expressions), meaning that must-equal information is available 
    //    for them with respect to each other and other syntactically explicit variables. Implementations of this 
    //    function are expected to return a newly-allocated lattice that only contains information about 
    //    MemLocObjects that are in the values of the ml2ml map or those reachable from these objects via 
    //    operations such as LabeledAggregate::getElements() or Pointer::getDereference(). Information about the 
    //    other MemLocObjects maintained by this Lattice may be excluded if it does not contribute to this goal.
    //    ASSUMED: full mustEquals information is available for the keys and values of this map. They must be
    //       variable references or expressions.
    Lattice* remapML(const std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >& ml2ml);

    // Adds information about the MemLocObjects in newL to this Lattice, overwriting any information previously 
    //    maintained in this lattice about them.
    // Returns true if the Lattice state is modified and false otherwise.
    bool replaceML(Lattice* newL);
    
    // computes the meet of this and that and saves the result in this
    // returns true if this causes this to change and false otherwise
    bool meetUpdate(Lattice* that);
    
    // Identify keys that are must-equal to each other and merge their lattices
    // Return true if this causes the object to change and false otherwise.
    bool compressMustEq();

    
    bool finiteLattice();
    
    // !!! UNIMPLEMENTED
    bool operator==(Lattice* that);
  };
}; // namespace dataflow;
