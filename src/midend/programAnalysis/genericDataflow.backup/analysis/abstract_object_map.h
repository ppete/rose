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

#include <list>
#include <iostream>

namespace dataflow {
  using namespace boost;
  using namespace std;
  //using namespace AbstractMemoryObject;
  
  typedef boost::shared_ptr<Lattice> LatticePtr;
  typedef std::pair<AbstractObjectPtr, LatticePtr> MapElement;

  class EqualFunctor {
  public: 
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2)=0;// { return * obj1 == * obj2; };
  };

  class MayEqualFunctor : public EqualFunctor {
  protected:
    bool mayEqual(AbstractObjectPtr objPtr1, AbstractObjectPtr objPtr2);

  public:
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2) { 
      // Using may equal
      return mayEqual(obj1, obj2); 
    };
  };

  class MustEqualFunctor : public EqualFunctor {
  protected:
    bool mustEqual(AbstractObjectPtr objPtr1, AbstractObjectPtr objPtr2);
  
  public:
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2) { 
      // Using must equal
      return mustEqual(obj1, obj2); 
    };
  };

  typedef boost::shared_ptr<EqualFunctor> EqualFunctorPtr;

  class AbstractObjectMap : public Lattice {
    
  protected: 
    EqualFunctorPtr    equalFunctor;
    MustEqualFunctor   mustEqual;
    MayEqualFunctor    mayEqual;
    list<MapElement>   mapElements;
    // Pointer to a default instance of the given lattice type.
    // AbstractObjectMap::get() can return copies of this object to indicate that
    // there is no mapping for a given AbstractObject.
    LatticePtr         defaultLat;
    // True if all the lattices inserted into this map are finite
    // and false otherwise
    bool isFinite;
    // True if this map has been set to represent the set of all possible AbstractObject->Lattice mappings.
    bool isFull;

// Handle to make it possible to invoke Expr2* methods from the composer
ComposerExpr2ObjPtr ceo;

    // We may need to be able to call the composer's Expr2MemLoc functions
    // but I'm not sure yet
    /*const Composer& composer;
    const Part&     part;
    const Analysis& analysis;*/

  public:
    // GB: Removed the empty constructor since an object constructed this 
    // way would not have a valid equalFunctor and thus would not function
    //AbstractObjectMap() : /*composer(NULL), */isFinite(true) {}
    AbstractObjectMap(const AbstractObjectMap& that) : equalFunctor(that.equalFunctor),
                                   mapElements (that.mapElements),
                                   defaultLat  (that.defaultLat),
                                   /*composer    (that.composer),
                                   part        (that.part),
                                   analysis    (that.analysis),*/
                                   isFinite    (that.isFinite),
                                   isFull      (that.isFull),
                                   ceo         (that.ceo)
    {}
    AbstractObjectMap(EqualFunctor& ef, LatticePtr defaultLat_, ComposerExpr2ObjPtr ceo_) : 
      equalFunctor(EqualFunctorPtr(&ef)), defaultLat(defaultLat_), isFinite(true), isFull(false), ceo(ceo_) {}
    AbstractObjectMap(EqualFunctor* ef, LatticePtr defaultLat_, ComposerExpr2ObjPtr ceo_) : 
      equalFunctor(EqualFunctorPtr(ef)), defaultLat(defaultLat_), isFinite(true), isFull(false), ceo(ceo_) {}
    AbstractObjectMap(EqualFunctorPtr efPtr, LatticePtr defaultLat_, ComposerExpr2ObjPtr ceo_) : 
      equalFunctor(efPtr), defaultLat(defaultLat_), isFinite(true), isFull(false), ceo(ceo_) {}
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
    
    // -----------------
    // Lattice methods
    // initializes this Lattice to its default state, if it is not already initialized
    void initialize();
    
    // returns a copy of this lattice
    Lattice* copy() const;
    
    // overwrites the state of this Lattice with that of that Lattice
    void copy(Lattice* thatL);
    
    // Called by analyses to create a copy of this lattice. However, if this lattice maintains any 
    //    information on a per-variable basis, these per-variable mappings must be converted from 
    //    the current set of variables to another set. This may be needed during function calls, 
    //    when dataflow information from the caller/callee needs to be transferred to the callee/calleer.
    // We do not force child classes to define their own versions of this function since not all
    //    Lattices have per-variable information.
    // varNameMap - maps all variable names that have changed, in each mapping pair, pair->first is the 
    //              old variable and pair->second is the new variable
    // func - the function that the copy Lattice will now be associated with
    // !!! UNIMPLEMENTED
    void remapVars(const std::map<varID, varID>& varNameMap, const Function& newFunc);
    
    // Called by analyses to copy over from the that Lattice dataflow information into this Lattice.
    // that contains data for a set of variables and incorporateVars must overwrite the state of just
    // those variables, while leaving its state for other variables alone.
    // We do not force child classes to define their own versions of this function since not all
    //    Lattices have per-variable information.
    // !!! UNIMPLEMENTED
    void incorporateVars(Lattice* thatL);
    
    // Returns a Lattice that describes the information known within this lattice
    // about the given expression. By default this could be the entire lattice or any portion of it.
    // For example, a lattice that maintains lattices for different known variables and expression will 
    // return a lattice for the given expression. Similarly, a lattice that keeps track of constraints
    // on values of variables and expressions will return the portion of the lattice that relates to
    // the given expression. 
    // It it legal for this function to return NULL if no information is available.
    // The function's caller is responsible for deallocating the returned object
    // !!! UNIMPLEMENTED
    Lattice* project(SgExpression* expr);
    
    // The inverse of project(). The call is provided with an expression and a Lattice that describes
    // the dataflow state that relates to expression. This Lattice must be of the same type as the lattice
    // returned by project(). unProject() must incorporate this dataflow state into the overall state it holds.
    // Call must make an internal copy of the passed-in lattice and the caller is responsible for deallocating it.
    // Returns true if this causes this to change and false otherwise.
    bool unProject(SgExpression* expr, Lattice* exprState);
    
    // computes the meet of this and that and saves the result in this
    // returns true if this causes this to change and false otherwise
    bool meetUpdate(Lattice* that);
    
    bool finiteLattice();
    
    // !!! UNIMPLEMENTED
    bool operator==(Lattice* that);
  };
}; // namespace dataflow;
