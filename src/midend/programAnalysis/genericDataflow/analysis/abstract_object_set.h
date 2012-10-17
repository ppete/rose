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
    // NOTE: container only stores boost::shared_ptr pointer
    // NOTE: shared_ptr is assumed to be used by all analysis
    std::list<AbstractObjectPtr> items;

    bool isFull;

public:
    typedef enum {may=0, must=1} conserv;
private:
    conserv mode;

    //ComposerExpr2ObjPtr ceo;
public:
    // constructor
    AbstractObjectSet(PartPtr part, conserv mode):
      Lattice(part), FiniteLattice(part), isFull(false), mode(mode)
    {}

    AbstractObjectSet(const AbstractObjectSet* that) :
      Lattice(that->part), FiniteLattice(that->part), items(that->items), isFull(that->isFull), mode(that->mode)
    {}

    AbstractObjectSet(const AbstractObjectSet& that) :
      Lattice(that.part), FiniteLattice(that.part), items(that.items), isFull(that.isFull), mode(that.mode)
    {}

    ~AbstractObjectSet() { }

    int size() const
    { return items.size(); }

    // insert ObjSet into the list only if not mustEqual
    // O(n) time -- inefficient due to lack of any strcuture in data
    bool insert(AbstractObjectPtr);

    // remove all ObjSet* that are mustEqual with this
    // worst case O(n)
    bool remove(const AbstractObjectPtr);

    // if mustEqual(ObjSet) ? true ; false
    bool containsMust(const AbstractObjectPtr) const;

    bool containsMay(const AbstractObjectPtr) const;

    // -----------------
    // Lattice methods

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

    // initializes this Lattice to its default state, if it is not already initialized
    void initialize();

    // returns a copy of this lattice
    AbstractObjectSet* copy() const;

    // overwrites the state of this Lattice with that of that Lattice
    void copy(const Lattice* thatL);

    // Called by analyses to transfer this lattice's contents from across function scopes from a caller function
    //    to a callee's scope and vice versa. If this this lattice maintains any information on the basis of
    //    individual MemLocObjects these mappings must be converted, with MemLocObjects that are keys of the ml2ml
    //    replaced with their corresponding values. If a given key of ml2ml does not appear in the lattice, it must
    //    be added to the lattice and assigned a default initial value. In many cases (e.g. over-approximate sets
    //    of MemLocObjects) this may not require any actual insertions.
    // The function takes newPart, the part within which the values of ml2ml should be interpreted. It corresponds
    //    to the code region(s) to which we are remapping.
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

    bool operator==(const Lattice* that) const;

    void clear() {} // \pp \todo

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
