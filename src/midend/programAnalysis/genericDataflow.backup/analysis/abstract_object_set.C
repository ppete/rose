#include "abstract_object_set.h"
#include <ostream>
#include <typeinfo>

using namespace std;
namespace dataflow
{
  
  int AbstractObjectSetDebugLevel=1;
// returns true only if the list grows
// false implies element is already present
bool AbstractObjectSet::insert(const AbstractObjectPtr _that) 
{
    ROSE_ASSERT(_that);
    bool retval = false;
    if(!containsMust(_that)) {
        items.push_back(_that);
        retval = true;
    }
    return retval;
}

// return true on successfull removal
// throws exception if element not found
bool AbstractObjectSet::remove(const AbstractObjectPtr _that) 
{
    bool retval = false;
    bool found = false;
    ROSE_ASSERT(_that);
    std::list<AbstractObjectPtr>::iterator it = items.begin();
    for(; it != items.end(); it++) {
        if((*it)->mustEqual(_that)) {
            items.erase(it);  // NOTE: destroys the shared_ptr object
            found = true;
            break;    // only one object that mustEqual(_that) should be present
        }
    }

    // if element not found issue a notice
    if(!found) {
        //try {
        if(AbstractObjectSetDebugLevel>=1) {
          Dbg::dbg << "<b>AbstractObjectSet::remove()"<<endl;
          Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Cannot find "<<_that->str("")<<endl;
          Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<str("&nbsp;&nbsp;&nbsp;&nbsp;")<<"</b>"<<endl;
        }
        // throw "element not found";
    }
    // end for
    return retval;
}

// returns true if a mustEqual is present; false otherwise
bool AbstractObjectSet::containsMust(const AbstractObjectPtr _that) 
{
    ROSE_ASSERT(_that);
    bool retval = false;
    std::list<AbstractObjectPtr>::iterator it = items.begin();
    for( ; it != items.end(); it++) {
        if((*it)->mustEqual(_that)) {
            retval = true;
            break;
        } // end if

    } // end for

    return retval;
}

bool AbstractObjectSet::containsMay(const AbstractObjectPtr _that)
{
    ROSE_ASSERT(_that);
    bool retval = false;
    Dbg::dbg << "AbstractObjectSet::containsMay("<<_that->str("")<<")"<<endl;
    std::list<AbstractObjectPtr>::iterator it = items.begin();
    for( ; it != items.end(); it++) {
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;it="<<(*it)->str("")<<")"<<endl;
        if((*it)->mayEqual(_that)) {
            retval = true;
            break;
        } // end if
    } // end for
    return retval;
}

// Set this Lattice object to represent the set of all possible execution prefixes.
// Return true if this causes the object to change and false otherwise.
bool AbstractObjectSet::setToFull()
{
bool modified = !isFull;
items.clear();
isFull = true;
return modified;
}

// Set this Lattice object to represent the of no execution prefixes (empty set).
// Return true if this causes the object to change and false otherwise.
bool AbstractObjectSet::setToEmpty()
{
bool modified = !items.empty();
items.clear();
return modified;
}

// debug: prints the elements of set as string
std::string AbstractObjectSet::str(std::string indent)
{
  ostringstream oss;
  
    std::list<AbstractObjectPtr>::iterator it = items.begin();
    while(it != items.end()) {
        if(it != items.begin()) oss << indent;
        oss << (*it)->str("    ");
        
        it++;
        if(it!=items.end())
        oss << std::endl;
    }
    
    return oss.str();
}

// -----------------
// Lattice methods
// initializes this Lattice to its default state, if it is not already initialized
void AbstractObjectSet::initialize()
{
  // Nothing to do here since Peter P's fixes will eliminate the need for lattices to maintain their own initialized state
}

// returns a copy of this lattice
Lattice* AbstractObjectSet::copy() const
{
  AbstractObjectSet *n = new AbstractObjectSet(*this);
  ROSE_ASSERT(n);
  return n;
}

// overwrites the state of this Lattice with that of that Lattice
void AbstractObjectSet::copy(Lattice* thatL)
{
  try {
    AbstractObjectSet *that = dynamic_cast <AbstractObjectSet*> (thatL);
    isFull = that->isFull;
    items = that->items;
  } catch (bad_cast & bc) { 
    ROSE_ASSERT(false);
  }
}

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
void AbstractObjectSet::remapVars(const std::map<varID, varID>& varNameMap, const Function& newFunc)
{
// !!! GB: TODO
/*    // Iterate over all the remapped variables
    for(map<ObjSetPtr, ObjSetPtr>::const_iterator mem=memNameMap.begin(); mem!=memNameMap.end(); mem++) {
        // If the current remapped variable is live, replace its old name with its new one
        if(liveMem.find(mem->first) != liveMem.end()) {
            liveMem.erase(mem->first);
            liveMem.insert(mem->second);
        }
    }*/
}

// Called by analyses to copy over from the that Lattice dataflow information into this Lattice.
// that contains data for a set of variables and incorporateVars must overwrite the state of just
// those variables, while leaving its state for other variables alone.
// We do not force child classes to define their own versions of this function since not all
//    Lattices have per-variable information.
void AbstractObjectSet::incorporateVars(Lattice* thatL)
{
  try {
    AbstractObjectSet *that = dynamic_cast <AbstractObjectSet*> (thatL);
  for(list<AbstractObjectPtr>::iterator it=that->items.begin(); it!=that->items.end(); it++)
      items.push_back(*it);
  } catch (bad_cast & bc) { 
    ROSE_ASSERT(false);
  }
}

// Returns a Lattice that describes the information known within this lattice
// about the given expression. By default this could be the entire lattice or any portion of it.
// For example, a lattice that maintains lattices for different known variables and expression will 
// return a lattice for the given expression. Similarly, a lattice that keeps track of constraints
// on values of variables and expressions will return the portion of the lattice that relates to
// the given expression. 
// It it legal for this function to return NULL if no information is available.
// The function's caller is responsible for deallocating the returned object
// !!! UNIMPLEMENTED
Lattice* AbstractObjectSet::project(SgExpression* expr)
{
AbstractObjectSet* newS = new AbstractObjectSet(ceo);
ROSE_ASSERT(newS);
MemLocObjectPtr o = boost::dynamic_pointer_cast<MemLocObject>(ceo->Expr2Obj(expr));
ROSE_ASSERT(o);
if(containsMust(o))
newS->insert(o);
return newS;
}

// The inverse of project(). The call is provided with an expression and a Lattice that describes
// the dataflow state that relates to expression. This Lattice must be of the same type as the lattice
// returned by project(). unProject() must incorporate this dataflow state into the overall state it holds.
// Call must make an internal copy of the passed-in lattice and the caller is responsible for deallocating it.
// Returns true if this causes this to change and false otherwise.
bool AbstractObjectSet::unProject(SgExpression* expr, Lattice* exprState)
{
try {
    AbstractObjectSet *that = dynamic_cast <AbstractObjectSet*> (exprState);
    if(that->isFull) return false;
    bool modified = false;
    if(isFull) {
    modified = true;
    setToEmpty();
    }
    
  MemLocObjectPtr o = boost::dynamic_pointer_cast<MemLocObject>(ceo->Expr2Obj(expr));
  ROSE_ASSERT(o);
  // If the given object exists in that set, include it in this set
    if(that->containsMust(o)) {
      modified = insert(o) || modified;
    }
    return modified;
  } catch (bad_cast & bc) { 
    ROSE_ASSERT(false);
  }
}

// computes the meet of this and that and saves the result in this
// returns true if this causes this to change and false otherwise
bool AbstractObjectSet::meetUpdate(Lattice* thatL)
{
try {
    AbstractObjectSet *that = dynamic_cast <AbstractObjectSet*> (thatL);
    if(isFull) return false;
    if(that->isFull) {
    setToFull();
    return true;
    }
    
    // Copy over from that all the elements that don't already exist in this
    bool modified = false;
    for(std::list<AbstractObjectPtr>::iterator it=that->items.begin(); it!=that->items.end(); it++) {
modified = insert(*it) || modified;
}
  } catch (bad_cast & bc) { 
    ROSE_ASSERT(false);
  }
}

bool AbstractObjectSet::operator==(Lattice* thatL)
{
try {
    AbstractObjectSet *that = dynamic_cast <AbstractObjectSet*> (thatL);
    
    // GB: This is a quadratic time comparison. Can make it linear if we sort the objects somehow.
    
    // Iterate through this->items and confirm that all its elements are in that->items
    for(std::list<AbstractObjectPtr>::iterator it=items.begin(); it!=items.end(); it++)
    if(!that->containsMust(*it)) return false;
    
    // Iterate through that->items and confirm that all its elements are in this->items
    for(std::list<AbstractObjectPtr>::iterator it=that->items.begin(); it!=that->items.end(); it++)
if(!that->containsMust(*it)) return false;

// Everything aligns perfectly
return true;
  } catch (bad_cast & bc) { 
    ROSE_ASSERT(false);
  }
}

}; // end namespace
