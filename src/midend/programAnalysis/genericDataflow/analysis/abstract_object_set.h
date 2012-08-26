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
#include "data_structures.h"
#include <list>
#include <boost/shared_ptr.hpp>
#include <iostream>

namespace dataflow 
{
  extern int AbstractObjectSetDebugLevel;
  
// Set container for AbstractMemoryObject pointers
// use: for storing sets of AbstractMemoryObject pointers
// elements are not ordered -- inefficient implementation
  
// AbstractObjectSets operate in one of two conservativeness modes: may and must.
// In may mode the set maintains an over-approximation of the true set of values inside it and in must mode it
// maintains an under-approximation. This means that:
// insert(o) : In both modes we insert o unless o is must-equal to another AbstractObject already inside the set.
//             This ensures that we account for the entire sets of concrete objects that are in the set, only 
//             saving space when two AbstractObjects definitely correspond to the same concrete object (it would also 
//             be ok if the newly added AbstractObject was a subset of a previously added one). In may mode insert 
//             would also be conservative if we replaced multiple AbstractObject with a single AbstractObject that 
//             over-approximates their union. In must mode insert would also be conservative if we removed any 
//             AbstractObject from the set.
// remove(o) : In may mode removes any AbstractObject in the set that is mustEqual to o to ensure that we still keep an 
//             over-approximation of the set of concrete objects in the AbstractObjectSet. In must mode uses mayEqual 
//             to ensure that all concrete objects that may equal to o are removed to keep the AbstractObjectSet an 
//             under-approximation.
// meet(s1, s2) : In may mode uses insert() to add AbstractObjects from both s1 and s2 to the meet. In must mode only
//             inserts objects into the meet that must exist in both AbstractObjectSets.
// remapCaller2Callee() : It is assumed that all entries in the mapping are expression objects, meaning that full mustEqual
//             information will be available for them. Thus, in both modes we empty the set and for each MemLocObject 
//             o that was originally in the set if there exists a pair <old, new> in memNameMap such that o mustEquals 
//             old, then new will be included in the final set.
// remapCallee2Caller(r2eML, calleAOS) : It is assumed that all entries in the mapping are expression objects, meaning 
//             that full mustEqual information will be available for them. Thus, in both modes looks at all the keys in 
//             considers all the values of r2eML and for each, if celleeAOS contains the corresponding MemLocObject,
//             the corresponding key MemLocObject is inserted into the set. Otherwise, the corresponding key 
//             MemLocObject is removed.
/*// project(o) : In may mode return the AbstractObject set that contains all the AbstractObjects that mayEqual o. 
//             In must mode, use mustEquals.
// unProject(s) : This is effectively an assignment of the AbstractObjects in the AbstractObjectSet s, so just 
//             insert them into this object.*/
class AbstractObjectSet : public FiniteLattice
{
public:

private:
    bool isFull;
    
public:
    typedef enum {may=0, must=1} conserv;
private:
    conserv mode;
    
    // NOTE: container only stores boost::shared_ptr pointer
    // NOTE: shared_ptr is assumed to be used by all analysis
    std::list<AbstractObjectPtr> items;
    
    //ComposerExpr2ObjPtr ceo;
public:
    // constructor
    AbstractObjectSet(PartPtr part, conserv mode): 
      isFull(false), mode(mode), Lattice(part), FiniteLattice(part)
    {}
    
    AbstractObjectSet(const AbstractObjectSet* that) : 
      isFull(that->isFull), items(that->items), mode(that->mode), Lattice(that->part), FiniteLattice(that->part)
    {}
    
    AbstractObjectSet(const AbstractObjectSet& that) :
      items(that.items), isFull(that.isFull), mode(that.mode), Lattice(that.part), FiniteLattice(that.part)
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
    // Since mustEqual information is always available, in both modes for each MemLocObject o in the set, if there 
    //    exists a pair <old, new> in m such that o mustEquals old, then new will be included in the final set.
    Lattice* remapML(const std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >& ml2ml);

    // Adds information about the MemLocObjects in newL to this Lattice, overwriting any information previously 
    //    maintained in this lattice about them.
    // Returns true if the Lattice state is modified and false otherwise.
    bool replaceML(Lattice* newL);
    
    /*// Returns a Lattice that describes the information known within this lattice
    // about the given expression. By default this could be the entire lattice or any portion of it.
    // For example, a lattice that maintains lattices for different known variables and expression will 
    // return a lattice for the given expression. Similarly, a lattice that keeps track of constraints
    // on values of variables and expressions will return the portion of the lattice that relates to
    // the given expression. 
    // It it legal for this function to return NULL if no information is available.
    // The function's caller is responsible for deallocating the returned object
    // !!! UNIMPLEMENTED
    Lattice* project(AbstractObjectPtr o);
    
    // The inverse of project(). The call is provided with an expression and a Lattice that describes
    // the dataflow state that relates to expression. This Lattice must be of the same type as the lattice
    // returned by project(). unProject() must incorporate this dataflow state into the overall state it holds.
    // Call must make an internal copy of the passed-in lattice and the caller is responsible for deallocating it.
    // Returns true if this causes this to change and false otherwise.
    // !!! UNIMPLEMENTED
    bool unProject(AbstractObjectPtr o, Lattice* exprState);*/
    
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
