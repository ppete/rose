#include "abstract_object_set.h"
#include <ostream>
#include <typeinfo>

using namespace std;
namespace dataflow
{  
int AbstractObjectSetDebugLevel=1;
// returns true only if the list grows
// false implies element is already present
// insert(o) : In both modes we insert o unless o is must-equal to another AbstractObject already inside the set.
//             This ensures that we account for the entire sets of concrete objects that are in the set, only 
//             saving space when two AbstractObjects definitely correspond to the same concrete object (it would also 
//             be ok if the newly added AbstractObject was a subset of a previously added one). In may mode insert 
//             would also be conservative if we replaced multiple AbstractObject with a single AbstractObject that 
//             over-approximates their union. In must mode insert would also be conservative if we removed any 
//             AbstractObject from the set.
bool AbstractObjectSet::insert(const AbstractObjectPtr that) 
{
    ROSE_ASSERT(that);
    bool retval = false;
    if(!containsMust(that)) {
        items.push_back(that);
        retval = true;
    }
    return retval;
}

// return true on successfull removal
// throws exception if element not found
// remove(o) : In may mode removes any AbstractObject in the set that is mustEqual to o to ensure that we still keep an 
//             over-approximation of the set of concrete objects in the AbstractObjectSet. In must mode uses mayEqual 
//             to ensure that all concrete objects that may equal to o are removed to keep the AbstractObjectSet an 
//             under-approximation.
bool AbstractObjectSet::remove(const AbstractObjectPtr that) 
{
    Dbg::indent ind(AbstractObjectSetDebugLevel, 1);
    bool retval = false;
    bool found = false;
    ROSE_ASSERT(that);
    std::list<AbstractObjectPtr>::iterator it = items.begin();
    Dbg::dbg << "AbstractObjectSet::remove("<<that->str("")<<")"<<endl;
    for(; it != items.end(); it++) {
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;it="<<(*it)->str("")<<endl;
        if((mode==may  && (*it)->mustEqual(that, part)) ||
           (mode==must && (*it)->mayEqual(that, part))) {
            items.erase(it);
            found = true;
            break; // only one object that mustEqual(that) should be present
        }
    }

    // if element not found issue a notice
    if(!found) {
        //try {
        if(AbstractObjectSetDebugLevel>=1) {
          Dbg::dbg << "<b>AbstractObjectSet::remove()"<<endl;
          Dbg::indent ind(AbstractObjectSetDebugLevel, 1);
          Dbg::dbg << "Cannot find "<<that->str("")<<endl;
          Dbg::dbg << str("&nbsp;&nbsp;&nbsp;&nbsp;")<<"</b>"<<endl;
        }
        // throw "element not found";
    }
    // end for
    return retval;
}

// returns true if a mustEqual is present; false otherwise
bool AbstractObjectSet::containsMust(const AbstractObjectPtr that) 
{
    ROSE_ASSERT(that);
    bool retval = false;
    std::list<AbstractObjectPtr>::iterator it = items.begin();
    for( ; it != items.end(); it++) {
        if((*it)->mustEqual(that, part)) {
            retval = true;
            break;
        } // end if
    } // end for

    return retval;
}

bool AbstractObjectSet::containsMay(const AbstractObjectPtr that)
{
    ROSE_ASSERT(that);
    bool retval = false;
    //Dbg::dbg << "AbstractObjectSet::containsMay("<<that->str("")<<")"<<endl;
    std::list<AbstractObjectPtr>::iterator it = items.begin();
    for( ; it != items.end(); it++) {
        //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;it="<<(*it)->str("")<<")"<<endl;
        if((*it)->mayEqual(that, part)) {
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
    return strp(part, indent);
}

// Variant of the str method that can produce information specific to the current Part.
// Useful since AbstractObjects can change from one Part to another.
std::string AbstractObjectSet::strp(PartPtr part, std::string indent)
{
    ostringstream oss;
  
    std::list<AbstractObjectPtr>::iterator it = items.begin();
    while(it != items.end()) {
        if(it != items.begin()) oss << indent;
        oss << (*it)->strp(part, "    ");
        
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
// remapCaller2Callee() : It is assumed that all entries in the mapping are expression objects, meaning that full mustEqual
//             information will be available for them. Thus, in both modes we empty the set and for each MemLocObject 
//             o that was originally in the set if there exists a pair <old, new> in memNameMap such that o mustEquals 
//             old, then new will be included in the final set.
Lattice* AbstractObjectSet::remapCaller2Callee(const std::map<MemLocObjectPtr, MemLocObjectPtr>& r2eML)
{
  AbstractObjectSet* newS = new AbstractObjectSet(part, mode);
  
  for(std::list<AbstractObjectPtr>::iterator i=items.begin(); i!=items.end(); i++)
  {
    MemLocObjectPtr ml = boost::dynamic_pointer_cast<MemLocObject>(*i);
    ROSE_ASSERT(ml);
    
    // If the current item is to be transferred from the caller to the callee scopes
    for(std::map<MemLocObjectPtr, MemLocObjectPtr>::const_iterator r2e=r2eML.begin(); r2e!=r2eML.end(); r2e++) {
      if(ml->mustEqual(r2e->first, part)) {
        // Add the corresponding value to the new set
        newS->items.push_back(r2e->second);
        break;
      }
    }
  }
  
  return newS;
}

// Called by analyses to transfer this lattice's contents from a callee function's scope back to the scope of 
//    the caller function, in a mirror image of what remapCaller2Callee to callee does. remapCaller2Callee 
//     only keeps the portion of the original lattice callerL that has a corresponding mapping in the callee to 
//     produce lattice caleeL. Thus, remapCallee2Caller is called on callerL and is given calleeL as an 
//     argument and must take all the information about all the MemLocObjects that are the values of the r2eML
//     map and and bring it back to callerL.
// Returns true if this causes the Lattice object to change and false otherwise.
// remapCallee2Caller(r2eML, calleAOS) : It is assumed that all entries in the mapping are expression objects, meaning 
//             that full mustEqual information will be available for them. Thus, in both modes looks at all the keys in 
//             considers all the values of r2eML and for each, if celleeAOS contains the corresponding MemLocObject,
//             the corresponding key MemLocObject is inserted into the set. Otherwise, the corresponding key 
//             MemLocObject is removed.
bool AbstractObjectSet::remapCallee2Caller(const std::map<MemLocObjectPtr, MemLocObjectPtr>& r2eML, Lattice* calleeL)
{
  AbstractObjectSet* calleeAOS = dynamic_cast<AbstractObjectSet*>(calleeL);
  ROSE_ASSERT(calleeAOS);
  
  bool modified = false;
  
  for(std::map<MemLocObjectPtr, MemLocObjectPtr>::const_iterator r2e=r2eML.begin(); r2e!=r2eML.end(); r2e++) {
    // Determine if the value of the current caller->callee mapping exists in the callee's set
    bool existsInCallee=false;
    for(std::list<AbstractObjectPtr>::iterator i=calleeAOS->items.begin(); i!=calleeAOS->items.end(); i++) {
      MemLocObjectPtr ml = boost::dynamic_pointer_cast<MemLocObject>(*i);
      ROSE_ASSERT(ml);
      
      if(ml->mustEqual(r2e->second, part)) {
        existsInCallee = true;
        break;
      }
    }
    
    // Determine if the key of the current caller->callee mapping exists in this set
    bool existsInCaller = false;
    for(std::list<AbstractObjectPtr>::iterator i=items.begin(); i!=items.end(); i++) {
      MemLocObjectPtr ml = boost::dynamic_pointer_cast<MemLocObject>(*i);
      ROSE_ASSERT(ml);
      
      if(ml->mustEqual(r2e->first, part)) {
        existsInCaller = true;
        
        // If it does exist in the caller but not in the callee, remove it from the caller
        if(!existsInCallee) {
          std::list<AbstractObjectPtr>::iterator cur = i;
          i++;
          items.erase(cur);
          modified = true;
        }
        // If it exists in both, there is nothing to be done
        
        break;
      }
    }
    
    // If the item exists in the callee but not the caller, add the corresponding key to the caller
    if(existsInCallee && !existsInCaller) {
      items.push_back(r2e->first);
      modified = true;
    }
    // If it exists in neither, there is nothing to be done
  }
}*/

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
/* // Since mustEqual information is always available, in both modes for each MemLocObject o in the set, if there 
//    exists a pair <old, new> in m such that o mustEquals old, then new will be included in the final set. */
// In must mode for each MemLocObject o in the set, if there exist any pairs <old, new> in ml2ml such that 
//    o mustEquals old, then new will be included in the final set.
// May mode is the same, except if for some pair <old, new> old mayEquals o but not mustEquals o then new is 
//    included in the final set but o is not removed.
Lattice* AbstractObjectSet::remapML(const std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >& ml2ml)
{
  AbstractObjectSet* newS = new AbstractObjectSet(part, mode);
  // Set of ml2ml values that need to be added to newS because they match (may-equal or must-equal)
  // MemLocObjects currently in items
  set<MemLocObjectPtr> vals2add;
  for(std::list<AbstractObjectPtr>::iterator i=items.begin(); i!=items.end(); i++) {
    // Flags that indicate whether the current item is mayEqual or mustEqual any keys in ml2ml
    bool existsMustEqual=false;
    bool existsMayEqual=false;

    for(std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >::const_iterator m=ml2ml.begin(); m!=ml2ml.end(); m++) {
      // If the current item in this set may- or must-equals a key in ml2ml, record this and add the corresponding
      // value in ml2ml to be added to newS
      if((*i)->mustEqual(m->first, part)) {
        existsMustEqual = true;
        vals2add.insert(m->second);
      } else if(mode == may && (*i)->mayEqual(m->first, part)) {
        existsMayEqual = true;
        vals2add.insert(m->second);
      }
    }
    
    // If this item is not must-equal to some key(s) in ml2ml, copy it over to newS
    if(!existsMustEqual) newS->items.push_back(*i);
    // Otherwise, we skip this item since it will be replaced by the value(s) of the key(s) it was must-equal to
  }
  
  // Now add the values of all the keys in ml2ml that got matched to this set's items
  for(set<MemLocObjectPtr>::iterator v=vals2add.begin(); v!=vals2add.end(); v++) {
    newS->items.push_back(*v);
  }
  
  /*AbstractObjectSet* newS = new AbstractObjectSet(part, mode);
  Dbg::dbg << "AbstractObjectSet::remapML(#items="<<items.size()<<" #ml2ml="<<ml2ml.size()<<endl;
  Dbg::indent ind(AbstractObjectSetDebugLevel, 1);
  
  for(std::list<AbstractObjectPtr>::iterator i=items.begin(); i!=items.end(); i++)
  {
    Dbg::indent ind(AbstractObjectSetDebugLevel, 1);
    MemLocObjectPtr ml = boost::dynamic_pointer_cast<MemLocObject>(*i);
    ROSE_ASSERT(ml);
    Dbg::dbg << "ml="<<ml.get()->str("")<<endl;
    
    // If the current item is to be transferred from the caller to the callee scopes
    bool remapped = false;
    for(std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >::const_iterator m=ml2ml.begin(); m!=ml2ml.end(); m++) {
      Dbg::indent ind(AbstractObjectSetDebugLevel, 1);
      Dbg::dbg << "Observed ("<<ml->mustEqual(m->first, part)<<") "<<m->first.get()->str("")<<" => "<<m->second.get()->str("")<<endl;
      if(ml->mustEqual(m->first, part)) {
        // Add the corresponding value to the new set
        newS->items.push_back(m->second);
        remapped = true; // Record that the current item has been remapped
        break;
      }
    }
    // If the current item was not remapped, add it under its current name
    if(!remapped)
      newS->items.push_back(ml);
  }
  Dbg::dbg<<"newS->items.size()="<<newS->items.size()<<endl;*/
  
  return newS;
}

// Adds information about the MemLocObjects in newL to this Lattice, overwriting any information previously 
//    maintained in this lattice about them.
// Returns true if the Lattice state is modified and false otherwise.
bool AbstractObjectSet::replaceML(Lattice* newL)
{
  AbstractObjectSet* calleeAOS = dynamic_cast<AbstractObjectSet*>(newL);
  ROSE_ASSERT(calleeAOS);
  
  bool modified = false;
  
  for(std::list<AbstractObjectPtr>::iterator i=calleeAOS->items.begin(); i!=calleeAOS->items.end(); i++) {
    MemLocObjectPtr ml = boost::dynamic_pointer_cast<MemLocObject>(*i);
    ROSE_ASSERT(ml);
    modified = insert(ml) || modified;
  }
  
  return modified;
}

// computes the meet of this and that and saves the result in this
// returns true if this causes this to change and false otherwise
// The part of this object is to be used for AbstractObject comparisons.
// meet(s1, s2) : In may mode uses insert() to add AbstractObjects from both s1 and s2 to the meet. In must mode only
//             inserts objects into the meet that must exist in both AbstractObjectSets.
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
    if(mode == may) {
      //Dbg::dbg << "that->items="<<endl;
      Dbg::indent ind(AbstractObjectSetDebugLevel, 1);
      for(std::list<AbstractObjectPtr>::iterator it=that->items.begin(); it!=that->items.end(); it++) {
        //Dbg::dbg << "it="<<it->get()->str()<<endl;
        modified = insert(*it) || modified;
      }
    } else if(mode==must) {
      // Remove all the AbstractObjects in this that do not also appear in that
      for(std::list<AbstractObjectPtr>::iterator it=that->items.begin(); it!=that->items.end(); it++) {
        if(!containsMust(*it))
          modified = remove(*it) || modified;
      }
    }
  } catch (bad_cast & bc) { 
    ROSE_ASSERT(false);
  }
}

bool AbstractObjectSet::operator==(Lattice* thatL)
{
  ROSE_ASSERT(part == thatL->getPart());
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
