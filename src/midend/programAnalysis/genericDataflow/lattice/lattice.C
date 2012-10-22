#include "latticeFull.h"

#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;
#include <map>

namespace dataflow {
  
/*****************************
 ********** Lattice **********
 *****************************/
  
// Sets the PartEdge that this Lattice's information corresponds to. 
// Returns true if this causes the edge to change and false otherwise
bool Lattice::setPartEdge(PartEdgePtr latPEdge) { 
  bool modified = this->latPEdge != latPEdge;
  this->latPEdge = latPEdge;
  return modified;
}

// Returns the PartEdge that this Lattice's information corresponds to
PartEdgePtr Lattice::getPartEdge()
{ return this->latPEdge; }
  
/********************************************
 ************** BoolAndLattice **************
 ********************************************/

// returns a copy of this lattice
BoolAndLattice* BoolAndLattice::copy() const
{
  return new BoolAndLattice(state, latPEdge);
}

// overwrites the state of this Lattice with that of that Lattice
void BoolAndLattice::copy(const Lattice* that)
{
        *this = dynamic_cast<const BoolAndLattice&>(*that);
        // was: state = dynamic_cast<BoolAndLattice*>(that)->state;
}

// computes the meet of this and that and saves the result in this
// returns true if this causes this to change and false otherwise
bool BoolAndLattice::meetUpdate(const Lattice* that)
{
        if (!that->isInitialized()) return false;

        if (!this->isInitialized())
        {
          *this = dynamic_cast<const BoolAndLattice&>(*that);
          return true;
        }

        int newState = (state > dynamic_cast<const BoolAndLattice*>(that)->state
                                          ? state
                                          : dynamic_cast<const BoolAndLattice*>(that)->state);
  bool ret = newState != state;
  state = newState;
  return ret;
}

// computes the meet of this and that and returns the result
/*Lattice* BoolAndLattice::meet(Lattice* that)
{
  int newState = (state > (dynamic_cast<BoolAndLattice*>(that)->state ? state : (dynamic_cast<BoolAndLattice*>(that)->state);
  return new BoolAndLattice(newState);
}*/

bool BoolAndLattice::operator==(const Lattice* that) const
{
        if (!eq_init_state(this, that)) return false;

        if (!isInitialized()) return true;

        return state == dynamic_cast<const BoolAndLattice*>(that)->state;
}

// returns the current state of this object
bool BoolAndLattice::get() const
{
    if (!isInitialized()) return false;
    return state;
}

// sets the state of this BoolAndLattice to the given value
// returns true if this causes the BoolAndLattice state to change, false otherwise
bool BoolAndLattice::set(bool state)
{
        if (!isInitialized())
        {
                this->state = state;
                return true;
        }
        else
        {
                bool oldState = state;
                this->state = state;
                return oldState != this->state;
        }
}

// sets the state of this lattice to the conjunction of the BoolAndLattice's current state and the given value
// returns true if this causes the BoolAndLattice state to change, false otherwise
bool BoolAndLattice::andUpd(bool state)
{
  //printf("BoolAndLattice::andUpd(%d) this->state=%d\n", state, this->state);
        if (!isInitialized())
  {
    this->state = state;
    return true;
  }
  else
  {
    bool oldState = state;
    this->state = this->state && state;
    return oldState != this->state;
  }
}

// Set this Lattice object to represent the set of all possible execution prefixes.
// Return true if this causes the object to change and false otherwise.
bool BoolAndLattice::setToFull()
{
bool modified = (state!=1);
state = 1;
return modified;
}

// Set this Lattice object to represent the of no execution prefixes (empty set).
// Return true if this causes the object to change and false otherwise.
bool BoolAndLattice::setToEmpty()
{
  bool modified = isInitialized();
  clear();
return modified;
}

string BoolAndLattice::str(string indent) const
{
  ostringstream outs;
        if(!isInitialized())
    outs << indent << "?";
  else
    outs << indent << (state ? "true" : "false");
  return outs.str();
}

/*******************************************
 ************** IntMaxLattice **************
 *******************************************/
const int IntMaxLattice::infinity = 32768;

// returns a copy of this lattice
IntMaxLattice* IntMaxLattice::copy() const
{
  return new IntMaxLattice(state, latPEdge);
}

// overwrites the state of this Lattice with that of that Lattice
void IntMaxLattice::copy(const Lattice* that)
{
        *this = dynamic_cast<const IntMaxLattice&>(*that);
        // \pp was: state = dynamic_cast<IntMaxLattice*>(that)->state;
}

// computes the meet of this and that and saves the result in this
// returns true if this causes this to change and false otherwise
bool IntMaxLattice::meetUpdate(const Lattice* that)
{
        if (!that->isInitialized()) return false;

        int newState = (state > dynamic_cast<const IntMaxLattice*>(that)->state ? state : dynamic_cast<const IntMaxLattice*>(that)->state);
  bool ret = newState != state;
  state = newState;
  return ret;
}

/*// computes the meet of this and that and returns the result
Lattice* IntMaxLattice::meetUpdate(Lattice* that)
{
  int newState = (state > (dynamic_cast<IntMaxLattice*>(that)->state ? state : (dynamic_cast<IntMaxLattice*>(that)->state);
  return new IntMaxLattice(newState);
}*/

bool IntMaxLattice::operator==(const Lattice* that) const
{
        if (!eq_init_state(this, that)) return false;

        if (!isInitialized()) return true;

        return state == dynamic_cast<const IntMaxLattice*>(that)->state;
}

// widens this from that and saves the result in this
// returns true if this causes this to change and false otherwise
bool IntMaxLattice::widenUpdate(const InfiniteLattice* that)
{
        if (!that->isInitialized()) return false;

        int that_state = dynamic_cast<const IntMaxLattice*>(that)->state;

        if (!isInitialized())
  {
    //printf("IntMaxLattice::widenUpdate() widening from %d to %d\n", state, dynamic_cast<IntMaxLattice*>(that)->state);
                state = that_state;
    return true;
  }
        int newState = (state == that_state? state : infinity);
    //printf("IntMaxLattice::widenUpdate() widening from %d to %d ==> \n", state, dynamic_cast<IntMaxLattice*>(that)->state, newState);
    bool ret = newState != state;
    state = newState;
    return ret;
}

// returns the current state of this object
int IntMaxLattice::get() const
{
  return state;
}

// sets the state of this lattice to the given value
// returns true if this causes the lattice's state to change, false otherwise
bool IntMaxLattice::set(int state)
{
  // don't set above infinity
  if(state>infinity)
    state = infinity;

  int oldState = state;
  this->state = state;
  return oldState != this->state;
}

// increments the state of this lattice by the given value
// returns true if this causes the lattice's state to change, false otherwise
bool IntMaxLattice::incr(int increment)
{
  int oldState = this->state;
  this->state+=increment;

  // don't increment past infinity
  if(this->state>infinity)
  {
    //printf("IntMaxLattice::incr(%d) incrementing from %d to infinity\n", increment, oldState);
    this->state = infinity;
  }
  // don't decrement below 0
  else if(this->state<0)
  {
    //printf("IntMaxLattice::incr(%d) incrementing from %d to 0\n", increment, oldState);
    this->state = 0;
  }
  /*else
    printf("IntMaxLattice::incr(%d) incrementing from %d to 0\n", increment, oldState, this->state);*/

  return oldState != this->state;
}

// computes the maximum of the given value and the state of this lattice and saves
//    the result in this lattice
// returns true if this causes the lattice's state to change, false otherwise
bool IntMaxLattice::maximum(int value)
{
  // don't set above infinity
  if(state>infinity)
    state = infinity;

  int oldState = state;
  state = (state < value? value: state);
  //printf("maximum: oldState=%d state=%d\n", oldState, state);
  return oldState!=state;
}

// Set this Lattice object to represent the set of all possible execution prefixes.
// Return true if this causes the object to change and false otherwise.
bool IntMaxLattice::setToFull()
{
bool modified = (state!=infinity);
state = infinity;
return modified;
}

// Set this Lattice object to represent the of no execution prefixes (empty set).
// Return true if this causes the object to change and false otherwise.
bool IntMaxLattice::setToEmpty()
{
  bool modified = isInitialized();
  clear();
return modified;
}

string IntMaxLattice::str(string indent) const
{
  ostringstream outsNum;
  outsNum << state;
  string stateStr = outsNum.str();

  ostringstream outs;
  outs << indent << (state==infinity? "infinity" : stateStr);
  return outs.str();
}


/*########################
  ### Utility lattices ###
  ########################*/

/**********************
 *** ProductLattice ***
 **********************/

ProductLattice::ProductLattice(const ProductLattice& that) : Lattice(that.latPEdge)
{
  isFinite = true;
  // level = that.level;
  init(that.lattices);
}

ProductLattice::ProductLattice(PartEdgePtr pedge) : Lattice(pedge) {
  isFinite = true;
  // level = uninitialized;
}

ProductLattice::ProductLattice(const vector<Lattice*>& lattices, PartEdgePtr pedge) : Lattice(pedge) {
  isFinite = true;
  // level = uninitialized;
  init(lattices);
}

static
void invoke_initialize(Lattice* l) { l->initialize(); }

static
void invoke_uninitialize(Lattice* l) { l->uninitialize(); }

ProductLattice::~ProductLattice()
{
  // Deallocate all the lattices
  for(vector<Lattice*>::iterator lat=lattices.begin(); lat!=lattices.end(); lat++)
    delete *lat;
}

void ProductLattice::init(const vector<Lattice*>& lattices)
{
  this->lattices = lattices;
  for(std::vector<Lattice*>::const_iterator l=lattices.begin(); l!=lattices.end(); l++)
    if(!((*l)->finiteLattice())) isFinite = false;
}

// initializes this Lattice to its default state
void ProductLattice::initialize()
{
        if (isInitialized()) return;

        Lattice::initialize();
        std::for_each(lattices.begin(), lattices.end(), invoke_initialize);
}

void ProductLattice::unInitialize()
{
        if (!isInitialized()) return;

        Lattice::uninitialize();
        std::for_each(lattices.begin(), lattices.end(), invoke_uninitialize);
}

void ProductLattice::clear() { unInitialize(); }

const vector<Lattice*>& ProductLattice::getLattices() const
{
  return lattices;
}

// initializes the given vector with a copy of the lattices vector
void ProductLattice::copy_lattices(vector<Lattice*>& newLattices) const
{
  for(vector<Lattice*>::const_iterator it = lattices.begin(); it!=lattices.end(); it++)
    newLattices.push_back((*it)->copy());
}

// returns a copy of this lattice
ProductLattice* ProductLattice::copy() const
{
  return new ProductLattice(*this);
}

// overwrites the state of this Lattice with that of that Lattice
void ProductLattice::copy(const Lattice* that_arg)
{
        const ProductLattice* that = dynamic_cast<const ProductLattice*>(that_arg);
  ROSE_ASSERT(that);
  // level = that->level;
  // Deallocate all the Lattices
        for(vector<Lattice*>::iterator lat=lattices.begin(); lat!=lattices.end(); ++lat)
    delete *lat;
  lattices.clear();
  that->copy_lattices(lattices);
}

// Called by analyses to transfer this lattice's contents from across function scopes from a caller function
//    to a callee's scope and vice versa. If this this lattice maintains any information on the basis of
//    individual MemLocObjects these mappings must be converted, with MemLocObjects that are keys of the ml2ml
//    replaced with their corresponding values. If a given key of ml2ml does not appear in the lattice, it must
//    be added to the lattice and assigned a default initial value. In many cases (e.g. over-approximate sets
//    of MemLocObjects) this may not require any actual insertions.
// The function takes newPEdge, the edge that points to the part within which the values of ml2ml should be 
//    interpreted. It corresponds to the code region(s) to which we are remapping.
// remapML must return a freshly-allocated object.
Lattice* ProductLattice::remapML(const std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >& ml2ml, PartEdgePtr newPEdge) {
  ProductLattice* pl = new ProductLattice(latPEdge);
  for(std::vector<Lattice*>::iterator l=lattices.begin(); l!=lattices.end(); l++)
    pl->lattices.push_back((*l)->remapML(ml2ml, newPEdge));
  return pl;
}

// Adds information about the MemLocObjects in newL to this Lattice, overwriting any information previously
//    maintained in this lattice about them.
// Returns true if the Lattice state is modified and false otherwise.
bool ProductLattice::replaceML(Lattice* newL)
{
  ProductLattice* nl = dynamic_cast<ProductLattice*>(newL);
  ROSE_ASSERT(nl);
  ROSE_ASSERT(lattices.size() == nl->lattices.size());

  bool modified = false;
  for(std::vector<Lattice*>::iterator t=lattices.begin(), n=nl->lattices.begin();
      t!=lattices.end(); t++, n++)
    modified = (*t)->replaceML(*n) || modified;

  return modified;
}

// computes the meet of this and that and saves the result in this
// returns true if this causes this to change and false otherwise
bool ProductLattice::meetUpdate(const Lattice* that_arg)
{
        // \pp \todo discuss impl with Greg
        if (!that_arg->isInitialized()) return false;

        bool                  modified = false;
        const ProductLattice* that = dynamic_cast<const ProductLattice*>(that_arg);

#if OBSOLETE_CODE
  bool modified=false;
  int newLevel = max(level, that->level);
  modified = (newLevel != level) || modified;
  level = newLevel;
#endif /* OBSOLETE_CODE */

        vector<Lattice*>::iterator       it;
        vector<Lattice*>::const_iterator itThat;
  for(it = lattices.begin(), itThat = that->lattices.begin();
      it!=lattices.end() && itThat!=that->lattices.end();
      it++, itThat++)
    modified = (*it)->meetUpdate(*itThat) || modified;

  return modified;
}

// Computes the meet of this and that and returns the result
bool ProductLattice::finiteLattice() const
{
  return isFinite;
}


bool ProductLattice::operator==(const Lattice* that_arg) const
{
        // \pp \todo discuss impl with Greg
        // compare initialization state
        if (!eq_init_state(this, that_arg)) return false;

        if (!isInitialized()) return true;


        const ProductLattice* that = dynamic_cast<const ProductLattice*>(that_arg);

#if OBSOLETE_CODE
  if(level != that->level) return false;
#endif /* OBSOLETE_CODE */

  vector<Lattice*>::const_iterator it, itThat;
  for(it = lattices.begin(), itThat = that->lattices.begin();
      it!=lattices.end() && itThat!=that->lattices.end();
      it++, itThat++)
    if((**it) != (**itThat)) return false;
  return true;
}

// Set this Lattice object to represent the set of all possible execution prefixes.
// Return true if this causes the object to change and false otherwise.
bool ProductLattice::setToFull()
{
bool modified = false;
  for(vector<Lattice*>::const_iterator it = lattices.begin(); it!=lattices.end(); it++)
      modified = (*it)->setToFull() || modified;
  return modified;
}

// Set this Lattice object to represent the of no execution prefixes (empty set).
// Return true if this causes the object to change and false otherwise.
bool ProductLattice::setToEmpty()
{
bool modified = false;
  for(vector<Lattice*>::const_iterator it = lattices.begin(); it!=lattices.end(); it++)
      modified = (*it)->setToEmpty() || modified;
  return modified;
}

// The string that represents this object
// If indent!="", every line of this string must be prefixed by indent
// The last character of the returned string should not be '\n', even if it is a multi-line string.
std::string ProductLattice::str(string indent) const
{
  ostringstream outs;
  outs << indent << "[ProductLattice: level="<<(isInitialized() ? "initialized" : "uninitialized")<<"\n";
  for(vector<Lattice*>::const_iterator it = lattices.begin(); it!=lattices.end(); it++)
    outs << (*it)->str(indent+"    ") << "\n";
  outs << indent << "]\n";
  return outs.str();
}

/******************************
 *** InfiniteProductLattice ***
 ******************************/

// Widens this from that and saves the result in this.
// Returns true if this causes this to change and false otherwise.
bool InfiniteProductLattice::widenUpdate(const InfiniteLattice* that)
{
  bool modified=false;
  vector<Lattice*>::iterator it;
  vector<Lattice*>::const_iterator itThat;

  for(it = lattices.begin(), itThat = (dynamic_cast<const InfiniteProductLattice*>(that))->lattices.begin();
      it!=lattices.end() && itThat!=(dynamic_cast<const InfiniteProductLattice*>(that))->lattices.end();
      it++, itThat++) {
    /*Lattice* thisLat = *it;
    Lattice* thatLat = *itThat;*/
    modified = (dynamic_cast<InfiniteLattice*>(*it))->widenUpdate(dynamic_cast<InfiniteLattice*>(*itThat)) || modified;
  }
       return modified;
}

}; // using namespace
#if WHERE_DID_THIS_CODE_GO

/*******************************
 *** VariablesProductLattice ***
 *******************************/





// maps variables to the index of their respective Lattice objects in a given function
map<Function, map<varID, int> > VariablesProductLattice::varLatticeIndex;

// creates a new VariablesProductLattice
// includeScalars - if =true, a lattice is created for each scalar variable
// includeArrays - if =true, a lattice is created for each array variable
// perVarLattice - sample lattice that will be associated with every variable in scope at node n
//     it should be assumed that the object pointed to by perVarLattice will be either
//     used internally by this VariablesProductLattice object or deallocated
// constVarLattices - map of additional variables and their associated lattices, that will be
//     incorporated into this VariablesProductLattice in addition to any other lattices for
//     currently live variables (these correspond to various useful constant variables like zeroVar)
// allVarLattice - the lattice associated with allVar (the variable that represents all of memory)
//     if allVarLattice==NULL, no support is provided for allVar
// func - the current function
// n - the dataflow node that this lattice will be associated with
// state - the NodeState at this dataflow node
VariablesProductLattice::VariablesProductLattice(
          bool includeScalars, bool includeArrays, Lattice* perVarLattice,
          const map<varID, Lattice*>& constVarLattices, Lattice* allVarLattice,
          const Function& func, const DataflowNode& n, const NodeState& state) : func(func)
{
        this->includeScalars   = includeScalars;
        this->includeArrays    = includeArrays;
        this->constVarLattices = constVarLattices;
        this->allVarLattice    = allVarLattice;
        this->perVarLattice    = perVarLattice;

        setUpVarLatticeIndex();

        varIDSet refVars = getVisibleVars(func);
/*printf("VariablesProductLattice: in %s(), refVars=\n", func.get_name().str());
for(varIDSet::iterator it = refVars.begin(); it!= refVars.end(); it++)
{ printf("    %s\n", (*it).str().c_str()); }*/

        // iterate over all the variables (arrays and/or scalars) referenced in this function
        // adding their initial lattices to initState
        for(varIDSet::iterator it = refVars.begin(); it!=refVars.end(); it++) {
                Lattice* l = perVarLattice->copy();
                lattices.push_back(l);
        }

        /*// add constVarLattices to lattices
        for(map<varID, Lattice*>::iterator it = constVarLattices.begin(); it!=constVarLattices.end(); it++)
                lattices.push_back(it->second);*/
        // We don't add constVarLattices because they never change and thus, we don't need to
        // perform standard dataflow operations on them, such as meets and widenings

        //printf("VariablesProductLattice() 2\n");
        //cout << str("") << "\n";

        // allVarLattice to lattices, if we're supporting allVar
        if(allVarLattice)
                lattices.push_back(allVarLattice);
}

// copy constructor
VariablesProductLattice::VariablesProductLattice(const VariablesProductLattice& that) : func(that.func)
{
        this->includeScalars   = that.includeScalars;
        this->includeArrays    = that.includeArrays;
        this->constVarLattices = that.constVarLattices;
        this->allVarLattice    = that.allVarLattice;
        this->perVarLattice    = that.perVarLattice;

        that.copy_lattices(lattices);

        //printf("VariablesProductLattice() 2 this->allVarLattice=%p\n", this->allVarLattice);
        //printf("VariablesProductLattice() 2 that=%p, that.allVarLattice=%p\n", &that, that.allVarLattice);
}

// returns the set of global variables(scalars and/or arrays)
varIDSet& VariablesProductLattice::getGlobalVars() const
{
        if(includeScalars)
        {
                if(includeArrays)
                        return varSets::getGlobalVars(cfgUtils::getProject());
                else
                        return varSets::getGlobalScalars(cfgUtils::getProject());
        }
        else
                return varSets::getGlobalArrays(cfgUtils::getProject());
}

// returns the set of global variables(scalars and/or arrays)
varIDSet& VariablesProductLattice::getGlobalVars(bool includeScalars, bool includeArrays)
{
        if(includeScalars)
        {
                if(includeArrays)
                        return varSets::getGlobalVars(cfgUtils::getProject());
                else
                        return varSets::getGlobalScalars(cfgUtils::getProject());
        }
        else
                return varSets::getGlobalArrays(cfgUtils::getProject());
}

// returns the set of variables(scalars and/or arrays) declared in this function
varIDSet& VariablesProductLattice::getLocalVars(Function func) const
{
        if(includeScalars)
        {
                if(includeArrays)
                        return varSets::getLocalVars(func);
                else
                        return varSets::getLocalScalars(func);
        }
        else
                return varSets::getLocalArrays(func);
}

// returns the set of variables(scalars and/or arrays) referenced in this function
varIDSet& VariablesProductLattice::getRefVars(Function func) const
{
        if(includeScalars)
        {
                if(includeArrays)
                        return varSets::getFuncRefVars(func);
                else
                        return varSets::getFuncRefScalars(func);
        }
        else
                return varSets::getFuncRefArrays(func);
}

// returns the set of variables(scalars and/or arrays) visible in this function
varIDSet VariablesProductLattice::getVisibleVars(Function func) const
{
        varIDSet& locals = getLocalVars(func);
        varIDSet& globals = getGlobalVars();

        varIDSet lgUnion;
        for(varIDSet::iterator it = locals.begin(); it!=locals.end(); it++)
                lgUnion.insert(*it);

        for(varIDSet::iterator it = globals.begin(); it!=globals.end(); it++)
                lgUnion.insert(*it);

        return lgUnion;
}

// sets up the varLatticeIndex map, if necessary
void VariablesProductLattice::setUpVarLatticeIndex()
{
        //printf("setUpVarLatticeIndex() func not found = %d\n", varLatticeIndex.find(func) == varLatticeIndex.end());
        // if varLatticeIndex has not yet been set up for this function, set it up
        if(varLatticeIndex.find(func) == varLatticeIndex.end())
        {
//              printf("setUpVarLatticeIndex() working on %s()\n", func.get_name().str());
                varIDSet refVars = getVisibleVars(func);
                map<varID, int> varIndex;
                int varLatticeCntr=0;
                for(varIDSet::iterator it = refVars.begin(); it!=refVars.end(); it++, varLatticeCntr++)
                {
                        varIndex[*it] = varLatticeCntr;
                        //printf("setUpVarLatticeIndex() var %s gets index %d\n", (*it).str().c_str(), varLatticeCntr);
                }
                varLatticeIndex[func] = varIndex;
        }
}

Lattice* VariablesProductLattice::getVarLattice(const Function& func, const varID& var)
{
        map<varID, Lattice*>::iterator constIt;
        // if this is allVar
        if(var == allVar)
                return allVarLattice;
        // else, if this is a constant variable
        else if((constIt = constVarLattices.find(var)) != constVarLattices.end())
        {
/*printf("getVarLattice() var=%s -> const lattice %p, var==constIt->first = %d   < =%d, > = %d\n", var.str().c_str(), constIt->second, var==constIt->first, var<constIt->first, var>constIt->first);
for(map<varID, Lattice*>::iterator it = constVarLattices.begin(); it!=constVarLattices.end(); it++)
{ cout << "   constant "<<it->first.str()<<" -> "<<it->second->str("")<<"\n"; } */

                // return its lattice
                return constIt->second;
        }
        // else, if this is a regular variable
        else
        {
                // sets up the varLatticeIndex map, if necessary
                setUpVarLatticeIndex();

                map<varID, int>::iterator it = (varLatticeIndex.find(func)->second).find(var);
//printf("getVarLattice() it != (varLatticeIndex.find(func)->second).end() = %d\n", it != (varLatticeIndex.find(func)->second).end());
                // if the given variable is mapped by this product lattice
                if(it != (varLatticeIndex.find(func)->second).end())
                {
                        // return the variable's lattice
                        int varIndex = it->second;
                        return lattices[varIndex];
                }
                // otherwise, return NULL, since there is no lattice
                else
                {
                        /*printf("getVarLattice(%s(), %s) returning NULL\n", func.get_name().str(), var.str().c_str());
                        for(map<varID, int>::iterator it = (varLatticeIndex.find(func)->second).begin();
                            it!=(varLatticeIndex.find(func)->second).end(); it++)
                        {
                                printf("getVarLattice() pair <%s, %d>\n", it->first.str().c_str(), it->second);
                        }*/
                        return NULL;
                }
        }
}

// returns the index of var among the variables associated with func
// or -1 otherwise
int VariablesProductLattice::getVarIndex(const Function& func, const varID& var)
{
        map<varID, Lattice*>::iterator constIt;
        // if this is allVar
        if(var == allVar)
        {
                // sets up the varLatticeIndex map, if necessary
                setUpVarLatticeIndex();

                // allVar is the last index
                return varLatticeIndex.find(func)->second.size();
        }
        // else, if this is a constant variable
        else if((constIt = constVarLattices.find(var)) != constVarLattices.end())
                // constant variables are not placed into the lattice
                return -1;
        // else, if this is a regular variable
        else
        {
                // sets up the varLatticeIndex map, if necessary
                setUpVarLatticeIndex();

                return (varLatticeIndex.find(func)->second).find(var)->second;
        }
}

// Overwrites the state of this Lattice with that of that Lattice
void VariablesProductLattice::copy(Lattice* that_arg)
{
        VariablesProductLattice* that = dynamic_cast<VariablesProductLattice*>(that_arg);

        this->includeScalars = that->includeScalars;
        this->includeArrays = that->includeArrays;
        this->constVarLattices = that->constVarLattices;
        this->allVarLattice = that->allVarLattice;

        //lattices.clear();
        //that->copy_lattices(lattices);
        ProductLattice::copy(that_arg);
}


// Called by analyses to create a copy of this lattice. However, if this lattice maintains any
//    information on a per-variable basis, these per-variable mappings must be converted from
//    the current set of variables to another set. This may be needed during function calls,
//    when dataflow information from the caller/callee needs to be transferred to the callee/calleer.
// varNameMap - maps all variable names that have changed, in each mapping pair, pair->first is the
//              old variable and pair->second is the new variable
// func - the function that the copy Lattice will now be associated with
/*Lattice**/void VariablesProductLattice::remapVars(const map<varID, varID>& varNameMap, const Function& newFunc)
{
//      printf("remapVars(%s()), func=%s\n", newFunc.get_name().str(), func.get_name().str());

        //VariablesProductLattice* newVPL = dynamic_cast<VariablesProductLattice*>(Lattice::copy());
        vector<Lattice*> newLattices;

        // fill newLattices with lattices associated with variables in the new function
        varIDSet newRefVars = getVisibleVars(newFunc);
        for(varIDSet::iterator it = newRefVars.begin(); it!=newRefVars.end(); it++)
        {
                varID newVar = *it;
//              printf("remapVars() newVar = %s\n", newVar.str().c_str());
                bool found = false;

                // if this variable is a copy of some variable currently in lattices
                for(map<varID, varID>::const_iterator itR = varNameMap.begin(); itR != varNameMap.end(); itR++)
                {
//                      printf("remapVars() varNameMap[%s] = %s, newVar=%s, match=%d\n", itR->first.str().c_str(), itR->second.str().c_str(), newVar.str().c_str(), itR->second == newVar);
                        // if this mapping corresponds to newVar
                        if(itR->second == newVar)
                        {
                                // the original variable that got mapped to newVar
                                varID oldVar = itR->first;
//                              printf("   oldVar = %s\n", oldVar.str().c_str());

                                Lattice* l = /*newVPL->*/getVarLattice(func, oldVar);
//                              printf("   l=%p\n", l);
                                ROSE_ASSERT(l);
                                //newLattices[getVarIndex(newFunc, newVar)] = l;
                                newLattices.push_back(l->copy());

                                found = true;
                        }
                }

                // if this new variable is not a remapped old variable
                if(!found)
                {
                        // check if this new variable is in fact an old variable
                        Lattice* l = /*newVPL->*/getVarLattice(func, newVar);

                        /*cout << "VariablesProductLattice::remapVars() l = "<<l->str("") << "\n";
                        cout << "      getVarIndex(newFunc, newVar)=" << getVarIndex(newFunc, newVar) << "\n";*/
                        // if it does, add it at its new index
                        if(l)
                                //newLattices[getVarIndex(newFunc, newVar)] = l;
                                newLattices.push_back(l);
                        // if not, add a fresh lattice for this variable
                        else
                                //newLattices[getVarIndex(newFunc, newVar)] = perVarLattice->copy();
                                newLattices.push_back(/*perVarLattice->copy()*/NULL);
                }
        }

        // replace newVPL information with the remapped information
        /*newVPL->*/func = newFunc;
        /*newVPL->*/lattices.clear();
//      !!! What about old Lattices in lattices ???
        /*newVPL->*/lattices = newLattices;
}

// Called by analyses to copy over from the that Lattice dataflow information into this Lattice.
// that contains data for a set of variables and incorporateVars must overwrite the state of just
// those variables, while leaving its state for other variables alone.
// We do not force child classes to define their own versions of this function since not all
//    Lattices have per-variable information.
void VariablesProductLattice::incorporateVars(const Lattice* that_arg)
{
        initialize();

        const VariablesProductLattice* that = dynamic_cast<const VariablesProductLattice*>(that_arg);
        // both lattices need to be talking about variables in the same function
        ROSE_ASSERT(func == that->func);
        ROSE_ASSERT(this->includeScalars == that->includeScalars);
        ROSE_ASSERT(this->includeArrays == that->includeArrays);
        ROSE_ASSERT(this->constVarLattices == that->constVarLattices);
        this->allVarLattice = that->allVarLattice;

        // iterate through all the variables mapped by this lattice
        for(map<varID, int>::iterator it = varLatticeIndex[func].begin(); it!=varLatticeIndex[func].end(); it++)
        {
                // if the current variable is also mapped by the given lattice
                if(that->lattices[varLatticeIndex[func][it->first]] != NULL)
                {
                        // copy it over from that to this
                        //delete lattices[varLatticeIndex[func][it->first]];
                        lattices[varLatticeIndex[func][it->first]] = that->lattices[varLatticeIndex[func][it->first]]->copy();
                }
                // otherwise, leave the original alone
        }
}

// Functions used to inform this lattice that a given variable is now in use (e.g. a variable has entered
//    scope or an expression is being analyzed) or is no longer in use (e.g. a variable has exited scope or
//    an expression or variable is dead).
// It is assumed that a newly-added variable has not been added before and that a variable that is being
//    removed was previously added
/*void VariablesProductLattice::addVar(varID var)
{
}
void VariablesProductLattice::remVar(varID var)
{

}*/

// The string that represents this object
// If indent!="", every line of this string must be prefixed by indent
// The last character of the returned string should not be '\n', even if it is a multi-line string.
string VariablesProductLattice::str(string indent) const
{
        //printf("VariablesProductLattice::str() this->allVarLattice=%p\n", this->allVarLattice);

        ostringstream outs;
        outs << indent << "[VariablesProductLattice: level=" << Lattice::str() <<"\n";
        varIDSet refVars = getVisibleVars(func);
        for(varIDSet::iterator it = refVars.begin(); it!=refVars.end(); it++)
        {
                int varIndex = (varLatticeIndex.find(func)->second).find(*it)->second;
                outs  << indent;                      //fflush(stdout);
                outs   << "    ";                     //fflush(stdout);
                outs  << (*it).str();                 //fflush(stdout);
                outs  << ": ";                        //fflush(stdout);
                outs  << lattices[varIndex]->str(""); //fflush(stdout);
                outs  << "\n";                         //fflush(stdout);
        }

/*      vector<Lattice*>::const_iterator it = lattices.begin();
        while(it!=lattices.end())
        {
                vector<Lattice*>::const_iterator curIt = it;
                it++;
                // print the current variable, but skip the allVarLattice if we're doing it
                if(!allVarLattice || it!=lattices.end())
                        outs << indent << "    " << it->first.str() << ": " << (*curIt)->str("") << "\n";
        }*/
        if(allVarLattice)
                outs << indent << "allVarLattice: \n"<<allVarLattice->str(indent)<<"\n";

        if(constVarLattices.size()>0)
        {
                outs << indent << "constVarLattices: \n";fflush(stdout);
                for(map<varID, Lattice*>::const_iterator itC = constVarLattices.begin(); itC!=constVarLattices.end(); itC++)
                {
                        outs << indent << "    " << itC->first.str() << ": " << itC->second->str("")<<"\n";fflush(stdout);
                }
        }
        outs << indent << "]\n"; // fflush(stdout);
        return outs.str();
}

#endif /* WHERE_DID_THIS_CODE_GO */


//
// AnyLattice implementation

#if OBSOLETE_CODE

Lattice& AnyLattice::product_lattice_at(size_t pos)
{
  ProductLattice& plat = this->ref<ProductLattice>();
  Lattice*        lat  = plat.getLattices().at(pos);

  ROSE_ASSERT(lat);
  return *lat;
}

const Lattice& AnyLattice::product_lattice_at(size_t pos) const
{
  const ProductLattice& plat = this->ref<ProductLattice>();
  const Lattice*        lat  = plat.getLattices().at(pos);

  ROSE_ASSERT(lat);
  return *lat;
}


std::string AnyLattice::str(std::string prefix) const
{
  std::ostringstream os;

  os << prefix << *this;
  return os.str();
}

void AnyLattice::unProject(SgFunctionCallExp* exp, const Lattice& that)
{
  ptr()->unProject(exp, &that);
}

AnyLattice AnyLattice::project(SgExpression* exp) const
{
  if (!isInitialized()) return *this;

  return AnyLattice(ptr()->project(exp), initialized);
}

void AnyLattice::remapVars(const std::map<varID, varID>& varNameMap, const Function& newFunc)
{
  ptr()->remapVars(varNameMap, newFunc);
}

void AnyLattice::incorporateVars(const AnyLattice& other)
{
  ptr()->incorporateVars(other.ptr());
}

void AnyLattice::clear()
{
  if (!isInitialized()) return;

  ptr()->clear();
}

static
bool lattice_equality(const Lattice* lhs, Lattice* rhs)
{
  return (  (lhs == rhs)  // handles nullptr case
         || (lhs && rhs && (*lhs == rhs))
         );
}

bool operator==(const AnyLattice& lhs, const AnyLattice& rhs)
{
  // two lattices are equal, if they have the same initialization status
  // and if they are initialized, both lattice pointers are NULL or the
  // lattices compare equal.

  return (  lhs.initialized == rhs.initialized
         && (  !lhs.initialized
            || lattice_equality(lhs.lattice, rhs.lattice)
            )
          );
}


std::ostream& operator<<(std::ostream& os, const AnyLattice& anylattice)
{
  os << "initialized: " << std::boolalpha << anylattice.isInitialized();

  if (anylattice.isInitialized())
  {
    const Lattice* lat = anylattice.ptr();

    os << lat->str();
  }

  return os;
}

void swap(AnyLattice& lhs, AnyLattice& rhs)
{
  std::swap(lhs.initialized, rhs.initialized);
  std::swap(lhs.lattice,     rhs.lattice);
}

bool AnyLattice::meetUpdate(const AnyLattice& rhs)
{
  // same type constraint
  Lattice* lhs_ptr = this->ptr();

  ROSE_ASSERT(lhs_ptr && typeid(*lhs_ptr) == typeid(*rhs.ptr()));
  return lhs_ptr->meetUpdate(rhs.ptr());
}

bool AnyLattice::widenUpdate(const AnyLattice& rhs)
{
  InfiniteLattice&       llat = this->ref<InfiniteLattice>();
  const InfiniteLattice& rlat = rhs.ref<InfiniteLattice>();

  // same type constraint
  ROSE_ASSERT(typeid(llat) == typeid(rlat));
  return llat.widenUpdate(&rlat);
}

#endif /* OBSOLETE_CODE */
