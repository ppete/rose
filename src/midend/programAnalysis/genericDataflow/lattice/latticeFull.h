#ifndef LATTICE_FULL_H
#define LATTICE_FULL_H

#include <string>
#include <map>
#include <vector>

#include "nodeState.h"
#include "lattice.h"
#include "cfgUtils.h"

/******************************
 *** Commonly used lattices ***
 ******************************/
namespace dataflow {

class BoolAndLattice : public FiniteLattice
{
  // state can be:
#if OBSOLETE_CODE
  // see Lattice initialization
  // -1 : unset (default value)
#endif /* OBSOLETE_CODE */
  // 0 : false
  // 1 : true
        bool state;

  public:

  explicit
  BoolAndLattice(PartPtr p)
  : Lattice(p), FiniteLattice(p), state(0)
  {}

        BoolAndLattice(bool initstate, PartPtr p)
        : Lattice(p), FiniteLattice(p), state(initstate)
        {}

  // initializes this Lattice to its default state
  void initialize()
        { Lattice::initialize(); state = false; }

        void clear()
        { Lattice::uninitialize(); }

  // returns a copy of this lattice
        BoolAndLattice* copy() const;

  // overwrites the state of this Lattice with that of that Lattice
        void copy(const Lattice* that);

  // computes the meet of this and that and saves the result in this
  // returns true if this causes this to change and false otherwise
        bool meetUpdate(const Lattice* that);

  // computes the meet of this and that and returns the result
  //Lattice* meet(Lattice* that);

        bool operator==(const Lattice* that) const;

  // returns the current state of this object
  bool get() const;

  // sets the state of this BoolAndLattice to the given value
  // returns true if this causes the BoolAndLattice state to change, false otherwise
  bool set(bool state);

  // sets the state of this lattice to the conjunction of the BoolAndLattice's current state and the given value
  // returns true if this causes the BoolAndLattice state to change, false otherwise
  bool andUpd(bool state);

  // Functions used to inform this lattice that a given variable is now in use (e.g. a variable has entered
  //    scope or an expression is being analyzed) or is no longer in use (e.g. a variable has exited scope or
  //    an expression or variable is dead).
  // It is assumed that a newly-added variable has not been added before and that a variable that is being
  //    removed was previously added
  // These are empty in this lattice since it is now explicitly aware of variables.
  /*void addVar(varID var) {};
  void remVar(varID var) {};*/

  // Set this Lattice object to represent the set of all possible execution prefixes.
  // Return true if this causes the object to change and false otherwise.
  bool setToFull();
  // Set this Lattice object to represent the of no execution prefixes (empty set).
  // Return true if this causes the object to change and false otherwise.
  bool setToEmpty();

        std::string str(std::string indent="") const;
};

class IntMaxLattice : public InfiniteLattice
{
  int state;

  public:
  static const int infinity;// = 32768;

        IntMaxLattice(PartPtr p)
        : Lattice(p), InfiniteLattice(p), state(-1)
        {}

        IntMaxLattice(int initstate, PartPtr p)
        : Lattice(p), InfiniteLattice(p), state(initstate)
        {}

  // initializes this Lattice to its default state
        void clear()
  {
                Lattice::uninitialize();
    state = -1;
  }

  // returns a copy of this lattice
        IntMaxLattice* copy() const;

  // overwrites the state of this Lattice with that of that Lattice
        void copy(const Lattice* that);

  // computes the meet of this and that and saves the result in this
  // returns true if this causes this to change and false otherwise
        bool meetUpdate(const Lattice* that);

  // computes the meet of this and that and returns the result
  //Lattice* meet(Lattice* that);

        bool operator==(const Lattice* that) const;

  // widens this from that and saves the result in this
  // returns true if this causes this to change and false otherwise
        bool widenUpdate(const InfiniteLattice* that);

  // returns the current state of this object
  int get() const;

  // sets the state of this lattice to the given value
  // returns true if this causes the lattice's state to change, false otherwise
  bool set(int state);

  // increments the state of this lattice by the given value
  // returns true if this causes the lattice's state to change, false otherwise
  bool incr(int increment);

  // computes the maximum of the given value and the state of this lattice and saves
  //    the result in this lattice
  // returns true if this causes the lattice's state to change, false otherwise
  bool maximum(int value);

  // Set this Lattice object to represent the set of all possible execution prefixes.
  // Return true if this causes the object to change and false otherwise.
  bool setToFull();
  // Set this Lattice object to represent the of no execution prefixes (empty set).
  // Return true if this causes the object to change and false otherwise.
  bool setToEmpty();

        std::string str(std::string indent="") const;
};

/*########################
  ### Utility lattices ###
  ########################*/

// A container lattice to store other lattices
class ProductLattice : public virtual Lattice
{
  public:
#if OBSOLETE_CODE
  // The different levels of this lattice
  static const int uninitialized=0;
  static const int initialized=1;
  // This object's current level in the lattice: (uninitialized or initialized)
  short level;

  int getLevel() { return level; }
#endif /* OBSOLETE_CODE */


  bool isFinite;

  protected:
  std::vector<Lattice*> lattices;

  public:
  //ProductLattice();
  ProductLattice(PartPtr p);
  ProductLattice(const ProductLattice& that);
  ProductLattice(const std::vector<Lattice*>& lattices, PartPtr p);
  ~ProductLattice();

  void init(const std::vector<Lattice*>& lattices);

  /// initializes this Lattice to its default state
  void initialize()   /* override */;

  /// sets the lattice to uninitialize
  void unInitialize() /* override */;

  /// clears the lattice
  void clear() /* override */;

  const std::vector<Lattice*>& getLattices() const;

  /// initializes the given vector with a copy of the lattices vector
  void copy_lattices(std::vector<Lattice*>& newLattices) const;

  // Returns a copy of this lattice
  ProductLattice* copy() const;

  // Overwrites the state of this Lattice with that of that Lattice
        void copy(const Lattice* that);

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
        virtual bool meetUpdate(const Lattice* that);

  // Computes the meet of this and that and returns the result
  virtual bool finiteLattice() const;

  virtual bool operator==(const Lattice* that) const;

        // convenience function to access each lattice individually
        template <class LatticeType>
        LatticeType& at(size_t pos)
        {
          return dynamic_cast<LatticeType&>(*lattices.at(pos));
        }

        template <class LatticeType>
        const LatticeType& at(size_t pos) const
        {
          return dynamic_cast<const LatticeType&>(*lattices.at(pos));
        }

#if OBSOLETE_CODE
  int getLevel() { return level; }
#endif /* OBSOLETE_CODE */

  // Set this Lattice object to represent the set of all possible execution prefixes.
  // Return true if this causes the object to change and false otherwise.
  bool setToFull();
  // Set this Lattice object to represent the of no execution prefixes (empty set).
  // Return true if this causes the object to change and false otherwise.
  bool setToEmpty();

  // The string that represents this object
  // If indent!="", every line of this string must be prefixed by indent
  // The last character of the returned string should not be '\n', even if it is a multi-line string.
        virtual std::string str(std::string indent="") const;
};

class FiniteProductLattice : public virtual ProductLattice
{
  public:

  FiniteProductLattice(PartPtr p) : Lattice(p), ProductLattice(p)
  {}

  FiniteProductLattice(const std::vector<Lattice*>& lattices, PartPtr p) : Lattice(p), ProductLattice(lattices, p)
  {
    verifyFinite();
  }

  FiniteProductLattice(const FiniteProductLattice& that) : Lattice(that.part), ProductLattice(that.lattices, that.part)
  {
    verifyFinite();
  }

  void verifyFinite()
  {
    for(std::vector<Lattice*>::iterator it = lattices.begin(); it!=lattices.end(); it++)
        ROSE_ASSERT((*it)->finiteLattice());
  }

  bool finiteLattice() const
  { return true;  }

  // Returns a copy of this lattice
        FiniteProductLattice* copy() const
  {
    return new FiniteProductLattice(*this);
  }
};

class InfiniteProductLattice : public virtual ProductLattice
{
  public:
  InfiniteProductLattice(PartPtr p) : Lattice(p), ProductLattice(p)
  {}

  InfiniteProductLattice(const std::vector<Lattice*>& lattices, PartPtr p) : Lattice(p), ProductLattice(lattices, p)
  {}

  InfiniteProductLattice(const InfiniteProductLattice& that) : Lattice(that.part), ProductLattice(that.lattices, that.part)
  {}

  bool finiteLattice() const
  { return false; }

  // returns a copy of this lattice
        InfiniteProductLattice* copy() const
  {
    return new InfiniteProductLattice(*this);
  }

  // Widens this from that and saves the result in this.
  // Returns true if this causes this to change and false otherwise.
        bool widenUpdate(const InfiniteLattice* that);
};

}; // namespace dataflow
#endif
