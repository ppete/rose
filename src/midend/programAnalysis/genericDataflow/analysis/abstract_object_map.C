#include <iostream>
#include "abstract_object_map.h"
#include "analysisCommon.h"
#include "nodeState.h"
#include "functionState.h"
//#include "LatticeArithInstance.h"
#include "analysis.h"
#include "uniqueNameTraversal.h"
#include "defsAndUsesTraversal.h"
#include "iteratedDominanceFrontier.h"
#include "controlDependence.h"
//#include "heapDefsAndUsesTraversal.h"

/**     
 * This is an implementation of the abstract memory object --> lattice map 
 *           
 * author: jisheng zhao (jz10@rice.edu)   
 */

#define foreach BOOST_FOREACH
#define reverse_foreach BOOST_REVERSE_FOREACH

using namespace std;
using namespace boost;
using namespace ssa_private;
using namespace dataflow;

namespace dataflow {
int AbstractObjectMapDebugLevel=1;

bool MayEqualFunctor::mayEqual(boost::shared_ptr<AbstractObject> objPtr1, AbstractObjectPtr objPtr2, PartPtr p) {
  ROSE_ASSERT(objPtr1); ROSE_ASSERT(objPtr2);
  
  boost::shared_ptr<Pointer> ptr1 = boost::dynamic_pointer_cast<Pointer>(objPtr1);
  boost::shared_ptr<Pointer> ptr2 = boost::dynamic_pointer_cast<Pointer>(objPtr2);

  bool needDeref = false;
  if (ptr1) {
    objPtr1 = boost::static_pointer_cast<AbstractObject>(ptr1->getDereference());
    needDeref = true;
  } 
  if (ptr2) {
    objPtr2 = boost::static_pointer_cast<AbstractObject>(ptr2->getDereference());
    needDeref = true;
  }

  if (needDeref) 
    return mayEqual(objPtr1, objPtr2, p);
  else
    return objPtr1->mayEqual(objPtr2, p) || objPtr2->mayEqual(objPtr1, p);
}

bool MustEqualFunctor::mustEqual(AbstractObjectPtr objPtr1, AbstractObjectPtr objPtr2, PartPtr p) {
  ROSE_ASSERT(objPtr1); ROSE_ASSERT(objPtr2);

  boost::shared_ptr<Pointer> ptr1 = boost::dynamic_pointer_cast<Pointer>(objPtr1);
  boost::shared_ptr<Pointer> ptr2 = boost::dynamic_pointer_cast<Pointer>(objPtr2);

  bool needDeref = false;
  if (ptr1) {
    objPtr1 = boost::static_pointer_cast<AbstractObject>(ptr1->getDereference());
    needDeref =true;
  }
  if (ptr2) {
    objPtr2 = boost::static_pointer_cast<AbstractObject>(ptr2->getDereference());
    needDeref = true;
  }

/*Dbg::dbg << "MustEqualFunctor::mustEqual\n";
Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<objPtr1->str("        ")<<"\n";
Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<objPtr2->str("        ")<<endl;*/

  if (needDeref)
    return mustEqual(objPtr1, objPtr2, p);
  else
    //return objPtr1->mustEqual(objPtr2, p) || objPtr2->mustEqual(objPtr1, p);
    return objPtr1->mustEqual(objPtr2, p);
}

// Set this Lattice object to represent the set of all possible execution prefixes.
// Return true if this causes the object to change and false otherwise.
bool AbstractObjectMap::setToFull()
{
  bool modified = !isFull;
  mapElements.clear();
  isFull = true;
  return modified;
}

// Set this Lattice object to represent the of no execution prefixes (empty set).
// Return true if this causes the object to change and false otherwise.
bool AbstractObjectMap::setToEmpty()
{
  bool modified = !mapElements.empty();
  mapElements.clear();
  return modified;
}

std::string AbstractObjectMap::str(std::string indent) {
  return strp(part, indent);
}

// Variant of the str method that can produce information specific to the current Part.
// Useful since AbstractObjects can change from one Part to another.
std::string AbstractObjectMap::strp(PartPtr part, std::string indent)
{
  ostringstream oss;
  oss << "[AbstractObjectMap: ";
  
  //printf("[AbstractObjectMap: "); fflush(stdout);
  for(list<MapElement>::iterator it = mapElements.begin();
       it != mapElements.end(); it++) {
    //printf("\n%s%p => %p\n", indent.c_str(), it->first.get(), it->second.get()); fflush(stdout);
    oss << endl<<indent<<"&nbsp;&nbsp;&nbsp;&nbsp;"<<it->first->strp(part, indent+"&nbsp;&nbsp;&nbsp;&nbsp;")<<" => "<<it->second->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;");
  }
  oss << "]";
  return oss.str();
}

// Add a new memory object --> lattice pair to the frontier.
// Return true if this causes the map to change and false otherwise.
bool AbstractObjectMap::insert(AbstractObjectPtr o, LatticePtr lattice) {
  if(AbstractObjectMapDebugLevel>=1) {
    Dbg::enterFunc("AbstractObjectMap::insert()");
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;o="<<o->strp(part, "")<<" lattice="<<lattice->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<" isFull="<<isFull<<endl;
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<<str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
  }

  isFinite = isFinite && lattice->finiteLattice();
  // If this map corresponds to all possible mappings, all insertions are redundant
  if(isFull) { return false; }
  
  bool retVal = false;
  bool insertDone = false;
  bool mustEqualSeen = false;
  
  // First, check if there is a key on the frontier that must-equals o to determine
  // if we can just combine the new lattice with the old mapping
  list<MapElement>::iterator it;
  int i=0;
  for(it = mapElements.begin(); it != mapElements.end(); i++) {
    AbstractObjectPtr keyElement = it->first;
    if(AbstractObjectMapDebugLevel>=2) Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;keyElement="<<keyElement->str("            ")<<" mustEqual(o, keyElement, part)="<<mustEqual(o, keyElement, part)<<" insertDone="<<insertDone<<" mustEqualSeen="<<mustEqualSeen<<endl;
    // If we're done inserting, don't do it again
    if(insertDone) {
      // If o is mustEqual to this element and it is not the first match, remove this element
      if(mustEqual(o, keyElement, part)) {
        if(mustEqualSeen) {
          list<MapElement>::iterator itNext = it;
          itNext++;
          mapElements.erase(it);
          it = itNext;
        } else 
          it++;
        mustEqualSeen = true;
      } else 
      it++;
      continue;
    }
  
    // If the o-frontier contains an object that must-equal to 
    if(mustEqual(o, keyElement, part)) {
      // Determine whether the old and new mappings of o are identical
      LatticePtr c(it->second->copy());
      if(AbstractObjectMapDebugLevel==1) Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;keyElement="<<keyElement->str("            ")<<" mustEqual(o, keyElement, part)="<<mustEqual(o, keyElement, part)<<" insertDone="<<insertDone<<" mustEqualSeen="<<mustEqualSeen<<endl;
      if(AbstractObjectMapDebugLevel>=1) {
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Must Equal"<<endl;
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;lattice="<<lattice->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
        Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;it="<<it->second->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
      }
      // If the lattice got modified as a result of being combined with the prior mapping,
      // they are different and thus, we remove the old mapping and add a new one
  /*!!!*/      c = LatticePtr(c->copy());
      if(c->meetUpdate(lattice.get()))
      {
        if(AbstractObjectMapDebugLevel==1) Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;keyElement="<<keyElement->str("            ")<<" mustEqual(o, keyElement, part)="<<mustEqual(o, keyElement, part)<<" insertDone="<<insertDone<<" mustEqualSeen="<<mustEqualSeen<<endl;
        if(AbstractObjectMapDebugLevel>=1) Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Removing i="<<i<<", inserting "<<o->strp(part, "        ")<<"=>"<<lattice->str("        ")<<endl;
        list<MapElement>::iterator itNext = it;
        itNext++;
        mapElements.erase(it);
        it = itNext;
        mapElements.push_front(MapElement(o, lattice));
        retVal = true;
      } else {
        //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;No Change"<<endl;
        it++;
        // Otherwise, they're identical and thus there is no need to modify the map
        retVal = false;
      }
      insertDone = true;
      mustEqualSeen = true;
    }
    // If the element on the o-frontier may-equals o then insert a new o->lattice mapping 
    // since the new lattice cannot be combined with the mapping of *it
    else if(mayEqual(o, keyElement, part)) { 
      mapElements.push_front(MapElement(o, lattice));
      it++;
      retVal = true;
      insertDone = true;
    } else
      it++;
  }
  
  if(!insertDone) {
    // There are no objects within this map on the o-frontier. As such, add an o->lattice mapping
    mapElements.push_front(MapElement(o, lattice));
    
    retVal = true;
  }

  if(AbstractObjectMapDebugLevel>=1) {
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;retVal="<<retVal<<" insertDone="<<insertDone<<" mustEqualSeen="<<mustEqualSeen<<endl;
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<<str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;

    Dbg::exitFunc("AbstractObjectMap::insert()");
  }
  return retVal;
};

// Removes the key matching the argument from the frontier.
// Return true if this causes the map to change and false otherwise.
bool AbstractObjectMap::remove(AbstractObjectPtr abstractObjectPtr) {
// If this map corresponds to all possible mappings, all removals are redundant
  if(isFull) { return false; }
  
  for (list<MapElement>::iterator it = mapElements.begin();
       it != mapElements.end(); it++) {
    AbstractObjectPtr keyElement = it->first;
    // For remove operation, we use must equal policy                                                               
    if (mustEqual(abstractObjectPtr, keyElement, part)) {
      it = mapElements.erase(it);
      return true;
    }
  }
  return false;
};

// Get all x-frontier for a given abstract memory object                                                            
LatticePtr AbstractObjectMap::get(AbstractObjectPtr abstractObjectPtr) {
  if(AbstractObjectMapDebugLevel>=1) {
    Dbg::enterFunc("AbstractObjectMap::get()");
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;o="<<abstractObjectPtr->strp(part, "&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<<str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
  }
  
  // If this map corresponds to all possible mappings, the only mapping that exists for any object is the full lattice
  if(isFull) { 
    LatticePtr fullLat(defaultLat->copy());
    fullLat->setToFull();
    if(AbstractObjectMapDebugLevel>=1) Dbg::exitFunc("AbstractObjectMap::get()");
    return fullLat;
  }
  
  LatticePtr ret;
  for (list<MapElement>::iterator it = mapElements.begin();
       it != mapElements.end(); it++) {
    AbstractObjectPtr keyElement = it->first;
    // For get operation, we can apply either must or may equal policy. This depends on the                         
    // functor
    bool eq = abstractObjectPtr->mayEqual(keyElement, part);
    if(AbstractObjectMapDebugLevel>=2 || (AbstractObjectMapDebugLevel>=1 && eq)) Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;keyElement(equal="<<eq<<")="<<keyElement->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    //if ((* equalFunctor)(abstractObjectPtr, keyElement, part)) {
    if(eq) {
      // If this is the first matching Lattice, copy this Lattice to ret
      if(!ret) ret = boost::shared_ptr<Lattice>(it->second->copy());
      // Otherwise, merge this latice into ret
      else     ret->meetUpdate(it->second.get());
      if(AbstractObjectMapDebugLevel>=1) Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;ret="<<ret->str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    }
  }
  
  if(AbstractObjectMapDebugLevel>=1) {
    Dbg::dbg << "ret="<<(ret ? ret->str("&nbsp;&nbsp;&nbsp;&nbsp;"): "NULL")<<endl;
    Dbg::exitFunc("AbstractObjectMap::get()");
  }
  if(ret) return ret;
  // If there is no match for abstractObjectPtr, return a copy of the default lattice
  return LatticePtr(defaultLat->copy());
};

// initializes this Lattice to its default state, if it is not already initialized
void AbstractObjectMap::initialize()
{
  // Nothing to do here since Peter P's fixes will eliminate the need for lattices to maintain their own initialized state
}
 
// returns a copy of this lattice
Lattice* AbstractObjectMap::copy() const
{ return new AbstractObjectMap(*this); }

// overwrites the state of this Lattice with that of that Lattice
void AbstractObjectMap::copy(Lattice* thatL) {
  try {
    AbstractObjectMap * that = dynamic_cast <AbstractObjectMap*> (thatL);
    equalFunctor = that->equalFunctor;
    mapElements = that->mapElements;
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
void AbstractObjectMap::remapVars(const std::map<varID, varID>& varNameMap, const Function& newFunc) 
{
  // Function needs to be updated to work with AbstractObjects
}

// Called by analyses to copy over from the that Lattice dataflow information into this Lattice.
// that contains data for a set of variables and incorporateVars must overwrite the state of just
// those variables, while leaving its state for other variables alone.
// We do not force child classes to define their own versions of this function since not all
//    Lattices have per-variable information.
void AbstractObjectMap::incorporateVars(Lattice* thatL)
{
// TODO
  try {
    AbstractObjectMap * that = dynamic_cast <AbstractObjectMap*> (thatL);
    ROSE_ASSERT(that); // using that to avoid warning
  } catch (bad_cast & bc) { 
    ROSE_ASSERT(false);
  }
}

// Returns a1 Lattice that describes the information known within this lattice
// about the given expression. By default this could be the entire lattice or any portion of it.
// For example, a lattice that maintains lattices for different known variables and expression will 
// return a lattice for the given expression. Similarly, a lattice that keeps track of constraints
// on values of variables and expressions will return the portion of the lattice that relates to
// the given expression. 
// It it legal for this function to return NULL if no information is available.
// The function's caller is responsible for deallocating the returned object
// !!! UNIMPLEMENTED
Lattice* AbstractObjectMap::project(SgExpression* expr) {
  // Function needs to be updated to work with AbstractObjects
  /*AbstractObjectPtr ml = (AbstractObjectPtr)composer->Expr2MemLoc(expr);
  Lattice* l = get(ml);
  AbstractObjectMap* newmap = new AbstractObjectMap(equalFunctor);
  newmap->insert(ml, l);
  return newmap;*/
  
  /* Not quite right, will need to change project API to accept abstractobjects
  AbstractObjectMap* m = new AbstractObjectMap(equalFunctor, defaultLat, ceo, part);
  if(isFull) m->setToFull();
  else {
    AbstractObjectPtr o = (AbstractObjectPtr)ceo->Expr2Obj(expr);
    LatticePtr l = AbstractObjectMap::get(o);
    m->insert(o, l);
  }
  
  return m; */
  return NULL;
}

// The inverse of project(). The call is provided with an expression and a Lattice that describes
// the dataflow state that relates to expression. This Lattice must be of the same type as the lattice
// returned by project(). unProject() must incorporate this dataflow state into the overall state it holds.
// Call must make an internal copy of the passed-in lattice and the caller is responsible for deallocating it.
// Returns true if this causes this to change and false otherwise.
// !!! UNIMPLEMENTED
bool AbstractObjectMap::unProject(SgExpression* expr, Lattice* exprState) 
{ //return meetUpdate(exprState); 
  return false;
}

// Computes the meet of this and that and saves the result in this
// returns true if this causes this to change and false otherwise
// The part of this object is to be used for AbstractObject comparisons.
bool AbstractObjectMap::meetUpdate(Lattice* thatL)
{
  /*Dbg::dbg << "AbstractObjectMap::meetUpdate()"<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;this="<<str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;thatL="<<thatL->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;*/
  
  // Both incorporateVars() and meetUpdate currently call merge. This is clearly not
  // right but we'll postpone fixing it until we have the right algorithm for merges
  try {
    bool modified = false;
    AbstractObjectMap * that = dynamic_cast <AbstractObjectMap*> (thatL);
    
    // This algorithm is based on the following insights:
    // Given two AbstractObjectMaps: A: a_0 => a_1 => ... => a_n, and
    //                     B: b_0 => b_1 => ... => b_m
    //    where x => y if x is inserted after y
    // The only non-conservative thing that a merge algorithm can do is take a_i and b_j, where
    //   mustEqual(a_i, b_j) and place one before the other in the merged list. For these cases
    //   it is necessary to insert a single entry a_i -> A[a_i] merge B[b_j].
    // All elements that do not have a mustEqual partner in the same AbstractObjectMap or the other AbstractObjectMap 
    //   can be inserted into the new map in arbitrary order. AbstractObjectMap::insert ensures that no two elements
    //   that are mustEqual to each other may be in the same map. For elements across maps the following
    //   holds. If a_p and b_q are mayEqual to each other, then keeping them in the reverse order from
    //   their correct assignment order is conservative but may lose precision. This is because if 
    //   a_p => b_q but are stored in the opposite order, mayEqual(x, b_p), mustEqual(a_p)
    //   AbstractObjectMap::get(x) will merge the lattices stored at the two keys whereas the precise result would
    //   be to return the lattice stored under a_p. If a_p and b_q are not mayEqual to each other,
    //   either order is fine with no loss of precision.
    // The algorithm below chooses a simple order that is likely to work well in practice. It connects
    //   the pairs of elements in this->mapElements(A) and that->mapElements(B) that are mustEqual and then
    //   scans over each pair <a_i, b_j> them in the order they appear A, copying all the elements between
    //   the current b_j and the last b_j' if they've not already been copied over and if they don't have a
    //   mustEquals partner in A (these are handled by merging, as described above).
    //   A: a_0 => a_1 => r => a_2 => s => a_3 => t
    //   B: b_0 => r => b_1 => t => b_2 => b_3 => s
    //   merged: a_0 => a_1 => b_0 => r => a_2 => b_1 => b_2 => b_3 => s => a_3 => t
    
    // For each element x in this->mapElements pointers that is mustEqual to an element y in
    // that->mapElements, keeps the triple
    //    - iterator that points to x in this->mapElements
    //    - iterator that points to y in that->mapElements
    //    - index of y in that->mapElements
    // Maintained in order of this->mapElements.
    list<pair<list<MapElement>::iterator, pair<list<MapElement>::iterator, int> > > thisMustEq2thatMustEq;

    // For each element in that->mapElements keeps true if this element is mustEquals to some
    // element in this->mapElements and false otherwise.
    list<bool> thatMustEq;

    // Initialize thatMustEq to all false
    for(list<MapElement>::iterator itThat=that->mapElements.begin(); itThat!=that->mapElements.end(); itThat++)
      thatMustEq.push_back(false);

    // Determine which elements in this->mapElements are mustEqual to elements in that->mapElements
    // and for these pairs merge the lattices from that->mapElements to this->mapElements.
    for(list<MapElement>::iterator itThis=mapElements.begin(); 
       itThis!=mapElements.end(); itThis++) {
      int i=0;
      list<bool>::iterator thatMEIt=thatMustEq.begin();
      for(list<MapElement>::iterator itThat=that->mapElements.begin(); 
         itThat!=that->mapElements.end(); itThat++, i++, thatMEIt++) {
       // If we've found mustEqual pair of keys in this and that 
       if(mustEqual(itThis->first, itThat->first, part)) {
        // Record this pair
        thisMustEq2thatMustEq.push_back(make_pair(itThis, make_pair(itThat, i)));
        *thatMEIt = true;
        
        // Update the lattice at *itThis to incorporate information at *itThat
        {
          // First copy the lattice since it may change. We don't deep-copy lattices when we copy
          // AbstractObjectMaps, so multiple maps may contain references to the same lattice.
          // As such, instead of updating lattices in-place (this would update the same lattice
          // in other maps) we first copy them and update into the copy.
          itThis->second = LatticePtr(itThis->second->copy());
          modified = itThis->second->meetUpdate(itThat->second.get()) || modified;
        }
       }
      }
    }
    //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;thisMustEq2thatMustEq.size()="<<thisMustEq2thatMustEq.size()<<"\n";
    
    // Copy over the mappings of all the elements in that->mapElements that were not mustEqual
    // to any elements in this->mapElements. Although any order will work for these elements,
    // keep them their order in that->mapElements.
    int thatIdx=0;
    list<MapElement>::iterator thatIt = that->mapElements.begin();
    list<bool>::iterator thatMEIt=thatMustEq.begin();
    for(list<pair<list<MapElement>::iterator, pair<list<MapElement>::iterator, int> > >::iterator meIt=thisMustEq2thatMustEq.begin();
       meIt!=thisMustEq2thatMustEq.end(); meIt++) {
      // Copy over all the mappings from that->mapElements from thatIt to meIt's partner in that->mapElements
      // if they have not already been copied because elements that are mustEqual to each other were ordered
      // differently in this->mapElements and that->mapElements
      if(meIt->second.second >= thatIdx) {
        for(; thatIt!=meIt->second.first; thatIt++, thatIdx++, thatMEIt++)
          // Copy over the current element from that->mapElements if it doesn't have a mustEqual 
          // partner in this->mapElements (i.e. its already been handled)
          if(!(*thatMEIt)) {
            // NOTE: we do not currently update the part field in the lattice thatIt->second
            //       to refer to this->part. Perhaps we should make a copy of it and update it.
            mapElements.insert(meIt->first, *thatIt);
            modified = true;
          }
        // Advance thatIt and thatIdx once more to account for the partner in that->mapElements 
        // of the current entry in this->mapElements
        thatIt++;
        thatIdx++;
      }
    }
    
    // Add all the elements from that->mapElements that remain
    for(; thatIt!=that->mapElements.end(); thatIt++) {
      // NOTE: we do not currently update the part field in the lattice thatIt->second
      //       to refer to this->part. Perhaps we should make a copy of it and update it.
      mapElements.push_back(*thatIt);
      modified = true;
    }
    //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;mapElements.size()="<<mapElements.size()<<"\n";
    
    // Compress all the elements from that which are now mustEqual to each 
    // other in this->part.
    // Note: the optimal way to do this is to compress that->mustEqual first and then
    //       merge but we're not allowed to modify that so the compression would need
    //       to be done non-destructively via some additional datastructure. We avoid
    //       this complication for now but should revisit this question if we identify
    //       this code region as a performance bottleneck.
    compressMustEq();
    
    return modified;
  } catch (bad_cast & bc) { 
    ROSE_ASSERT(false);
  }
}

// Identify keys that are must-equal to each other and merge their lattices
// Return true if this causes the object to change and false otherwise.
bool AbstractObjectMap::compressMustEq()
{
  if(isFull) { return false; }
  
  /*Dbg::dbg << "compressMustEq()"<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;*/
  
  bool modified = false;
  int xIdx=0;
  for(list<MapElement>::iterator x = mapElements.begin(); x != mapElements.end(); x++, xIdx++) {
    //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;"<<xIdx<<" : x="<<x->first->str("")<<endl;
    // y starts from the element that follows x
    list<MapElement>::iterator y = x;
    y++;
    int yIdx = xIdx+1;
    for(; y != mapElements.end(); yIdx++) {
      //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<<yIdx<<" : y="<<y->first->str("")<<endl;
      // If x and y are equal, merge their lattices and remove the later one
      if(mustEqual(x->first, y->first, part)) {
        //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;MERGING and REMOVING"<<endl;
        // First copy the lattice since it may change. We don't deep-copy lattices when we copy
        // AbstractObjectMaps, so multiple maps may contain references to the same lattice.
        // As such, instead of updating lattices in-place (this would update the same lattice
        // in other maps) we first copy them and update into the copy.
        x->second = LatticePtr(x->second->copy());
        modified = x->second->meetUpdate(y->second.get()) || modified;
        
        list<MapElement>::iterator tmp = y;
        y++;
        mapElements.erase(tmp);
        
        //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;map="<<str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
        
        modified = true;
      } else
        y++;
    }
  }

  return modified;
};

bool AbstractObjectMap::finiteLattice()
{
  return isFinite;
}

bool AbstractObjectMap::operator==(Lattice* that)
{
  ROSE_ASSERT(part == that->getPart());
  // This will be written once we have the merging algorithm to test
  // these maps' frontiers for semantic equivalence
  return false;
}
}; // namespace dataflow