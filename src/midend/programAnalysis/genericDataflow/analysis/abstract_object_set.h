/*!
 * A storage collection for abstract memory objects
 * ObjSet is a memory abstraction for a set of locations
 * ObjSet '<' is not sufficient to be used in std containers
 * ObjSet implements mayEqual(), mustEqual()
 * Containers for ObjSet should use mayEqual()/mustEqual()
 * 
 * Sriram 06/20/2012
 * */

#ifndef _MEMORYOBJECTCONTAINER_H
#define _MEMORYOBJECTCONTAINER_H

#include "dataflow.h"
#include "compose.h"
#include "abstract_object.h"
#include <list>
#include <boost/shared_ptr.hpp>
#include <iostream>

namespace dataflow 
{
  extern int AbstractObjectSetDebugLevel;
  
// Set container for AbstractMemoryObject pointers
// use: for storing sets of AbstractMemoryObject pointers
// elements are not ordered -- inefficient implementation
class AbstractObjectSet : public FiniteLattice
{
public:

private:
    // NOTE: container only stores boost::shared_ptr pointer
    // NOTE: shared_ptr is assumed to be used by all analysis
    std::list<AbstractObjectPtr> items;
   
    bool isFull;
    
    //ComposerExpr2ObjPtr ceo;
public:
    // constructor
    AbstractObjectSet(PartPtr part_): Lattice(part_), FiniteLattice(part_), isFull(false)
    {}
    
    /*AbstractObjectSet(ComposerExpr2ObjPtr ceo_, PartPtr part_) : Lattice(part_), FiniteLattice(part_), isFull(false), ceo(ceo_)
    {}*/
    
    AbstractObjectSet(const AbstractObjectSet* that) : Lattice(that->part), FiniteLattice(that->part),
      items(that->items), isFull(that->isFull)/*, ceo(that->ceo)*/
    {}
    
    AbstractObjectSet(const AbstractObjectSet& that) :
      items(that.items), isFull(that.isFull)/*, ceo(that.ceo)*/, Lattice(that.part), FiniteLattice(that.part)
    {}

    ~AbstractObjectSet() { }
    
    int size() const 
    { return items.size(); }

    // insert ObjSet into the list only if not mustEqual
    // O(n) time -- inefficient due to lack of any strcuture in data
    bool insert(const AbstractObjectPtr);

    // remove all ObjSet* that are mustEqual with this
    // worst case O(n)
    bool remove(const AbstractObjectPtr);

    // if mustEqual(ObjSet) ? true ; false
    bool containsMust(const AbstractObjectPtr);

    bool containsMay(const AbstractObjectPtr);

    // -----------------
    // Lattice methods
    
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
    // !!! UNIMPLEMENTED
    bool unProject(SgExpression* expr, Lattice* exprState);
    
    // computes the meet of this and that and saves the result in this
    // returns true if this causes this to change and false otherwise
    bool meetUpdate(Lattice* that);
    
    bool operator==(Lattice* that);
    
    // Iterator Functions
public:
    typedef std::list<AbstractObjectPtr>::iterator iterator;
    typedef std::list<AbstractObjectPtr>::const_iterator const_iterator;

    const_iterator begin() const { return items.begin(); }
    const_iterator end() const { return items.end(); }

/*protected:
    iterator begin() { return items.begin(); }
    iterator end() { return items.end(); }*/
};
} // end namespace

#endif // end _MEMORYOBJECTCONTAINER_H
