#ifndef LATTICE_H
#define LATTICE_H

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>
#include "CallGraphTraverse.h"

//#include "variables.h"
#include "partitions.h"
#include "abstract_object.h"


namespace dataflow {

class Lattice : public printable
{
  public:
        explicit
        Lattice(PartEdgePtr latPEdge) 
        : good_state(false), latPEdge(latPEdge)
        {
          //~ std::cerr << this << "created" << std::endl;
        }
  
        /// Sets the PartEdge that this Lattice's information corresponds to. 
        /// Returns true if this causes the edge to change and false otherwise
  bool setPartEdge(PartEdgePtr latPEdge);
  
        /// Returns the PartEdge that this Lattice's information corresponds to
  PartEdgePtr getPartEdge();
  
        /// returns a copy of this lattice
        /// \note   derived classes can use co-variant return types to return more
        ///         specific information on the lattice type.
        ///         e.g., MyLattice* MyLattice::copy() const {}
  virtual Lattice* copy() const=0;

        /// overwrites the state of this Lattice with that of that Lattice
        /// \note implementation is responsible to also copy the good_state
        ///       and latPEdge.
        ///       A standard implementation could use the copy constructor
        ///       and swap as in exception safe assign operators.
        virtual void copy(const Lattice* that)=0;
  
  // Called by analyses to transfer this lattice's contents from across function scopes from a caller function 
  //    to a callee's scope and vice versa. If this this lattice maintains any information on the basis of 
  //    individual MemLocObjects these mappings must be converted, with MemLocObjects that are keys of the ml2ml 
  //    replaced with their corresponding values. If a given key of ml2ml does not appear in the lattice, it must
  //    be added to the lattice and assigned a default initial value. In many cases (e.g. over-approximate sets 
  //    of MemLocObjects) this may not require any actual insertions. If the value of a given ml2ml mapping is 
  //    NULL (empty boost::shared_ptr), any information for MemLocObjects that must-equal to the key should be 
  //    deleted.
  // The function takes newPEdge, the edge that points to the part within which the values of ml2ml should be 
  //    interpreted. It corresponds to the code region(s) to which we are remapping.
  // remapML must return a freshly-allocated object.
  virtual Lattice* remapML(const std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >& ml2ml, PartEdgePtr newPEdge) {
    return NULL;
  }
  
  // Adds information about the MemLocObjects in newL to this Lattice, overwriting any information previously 
  //    maintained in this lattice about them.
  // Returns true if the Lattice state is modified and false otherwise.
  virtual bool replaceML(Lattice* newL)
  {
    return false;
  }

        /// sets lattice to initialized
        virtual void initialize()          { good_state = true;  }

        /// sets lattice to uninitialized
        virtual void uninitialize()        { good_state = false; }

        /// returns initialization state of lattice
        virtual bool isInitialized() const { return good_state; }

        /// clears the lattice (e.g., calls uninitialize)
        virtual void clear() = 0;

  
  // Computes the meet of this and that and saves the result in this
  // returns true if this causes this to change and false otherwise
  // The part of this object is to be used for AbstractObject comparisons.
        virtual
        bool meetUpdate(const Lattice* that) = 0;
  
  // Returns true if this Lattice implies that lattice (its constraints are equal to or tighter than those of 
  // that Lattice) and false otherwise.
        virtual bool implies(Lattice* that) const {
          typedef boost::shared_ptr<Lattice>       LatticePtr;

    // this is tighter than that if meeting that into this causes this to change (that contains possibilities 
    // not already in this) but not vice versa (all the possibilities in this already exist in that)
          LatticePtr thisCopy(copy());
    if(!thisCopy->meetUpdate(that)) { 
      return false;
    }
    
          LatticePtr thatCopy(that->copy());
    if(thatCopy->meetUpdate(this)) {
      return false;
    }
    return true;
  }
  
  // Returns true if this Lattice is semantically equivalent to that lattice (both correspond to the same set
  // of application executions).
  virtual bool equiv(Lattice* that) {
          typedef boost::shared_ptr<Lattice>       LatticePtr;

    // this and that are equivalent if meeting either one with the other causes no changes
          LatticePtr thisCopy(copy());
    if(thisCopy->meetUpdate(that)) { 
      return false;
    }
    
          LatticePtr thatCopy(that->copy());
    if(thatCopy->meetUpdate(this)) {
      return false;
    }
    return true;
  }
  
  
        // returns true for finite domains
        virtual bool finiteLattice() const = 0;

        static
        bool eq_init_state(const Lattice* lhs, const Lattice* rhs)
        {
          // \todo \pp cmp. pedge 
          return lhs->good_state == rhs->good_state;
        }

        virtual
        bool operator==(const Lattice* that) const = 0;

        bool operator!=(const Lattice* that) const {
    return !(*this == that);
  }

        bool operator==(const Lattice& that) const {
                return this->operator==(&that);
  }

        bool operator!=(const Lattice& that) const {
                return this->operator!=(&that);
  }
  
  // Set this Lattice object to represent the set of all possible execution prefixes.
  // Return true if this causes the object to change and false otherwise.
  virtual bool setToFull()=0;
  // Set this Lattice object to represent the of no execution prefixes (empty set).
  // Return true if this causes the object to change and false otherwise.
  virtual bool setToEmpty()=0;
  
  // Functions used to inform this lattice that a given variable is now in use (e.g. a variable has entered 
  //    scope or an expression is being analyzed) or is no longer in use (e.g. a variable has exited scope or
  //    an expression or variable is dead).
  // It is assumed that a newly-added variable has not been added before and that a variable that is being
  //    removed was previously added
  /*virtual void addVar(varID var)=0;
  virtual void remVar(varID var)=0;*/
      
  // The string that represents ths object
  // If indent!="", every line of this string must be prefixed by indent
  // The last character of the returned string should not be '\n', even if it is a multi-line string.
  //virtual string str(string indent="") /*const*/=0;

        virtual std::string str(std::string indent="") const { /* \todo */ return indent; }

        std::string str(std::string indent="")
        {
          const Lattice* l = this;

          return l->str(indent);
        }

        friend
        void swap(Lattice& lhs, Lattice& rhs);

    private:
        bool good_state;

    public:
       PartEdgePtr latPEdge;;

    private:
        // disable default C'tor
        Lattice() /* = delete */;

};

inline
void swap(Lattice& lhs, Lattice& rhs)
{
  using std::swap;

  swap(lhs.good_state, rhs.good_state);
}


typedef boost::shared_ptr<Lattice>       LatticePtr;
typedef boost::shared_ptr<const Lattice> ConstLatticePtr;

/// prints the lattice string representation, iff the lattice is not null
inline
std::string as_str(ConstLatticePtr lat, const std::string& indent)
{
  if (!lat.get()) return indent;

  return lat->str(indent);
}

inline
LatticePtr clone(ConstLatticePtr orig)
{
  if (!orig.get()) return LatticePtr(static_cast<Lattice*>(0));

  LatticePtr res(orig->copy());

  // std::cerr << res.get() << "  <-cloned- " << orig.get() << std::endl;
  // ROSE_ASSERT(res.get()->isInitialized() == orig.get()->isInitialized());
  return res;
}


class FiniteLattice : public virtual Lattice
{
  public:
        explicit
  FiniteLattice(PartEdgePtr latPEdge) : Lattice(latPEdge) {}
  
        bool finiteLattice() const
  { return true;  }

        virtual FiniteLattice* copy() const=0; // \pp can be removed
};

class InfiniteLattice : public virtual Lattice
{
  public:
  explicit
  InfiniteLattice(PartEdgePtr latPEdge) : Lattice(latPEdge) {}
  
        bool finiteLattice() const
  { return false; }

        virtual InfiniteLattice* copy() const=0; // \pp can be removed
  
  // widens this from that and saves the result in this
  // returns true if this causes this to change and false otherwise
        virtual bool widenUpdate(const InfiniteLattice* that)=0;
};

typedef boost::shared_ptr<InfiniteLattice>       InfiniteLatticePtr;
typedef boost::shared_ptr<const InfiniteLattice> ConstInfiniteLatticePtr;

template <class LatticeType>
LatticeType& ref(LatticePtr);

template <class LatticeType>
const LatticeType& ref(ConstLatticePtr);

} // namespace dataflow


#if OBSOLETE_CODE

/// The AnyLattice owns a lattice object and manages its life-time
struct AnyLattice
{
    enum LatticeState { lsUninitialized, lsInitialized };

    AnyLattice()
    : initialized(lsUninitialized), lattice(0)
    {}

    /// constructs a wrapper around the lattice
    /// and assumes ownership of the passed argument
    explicit
    AnyLattice(Lattice* lat, LatticeState state = lsUninitialized)
    : initialized(state), lattice(lat)
    {
      ROSE_ASSERT(!initialized || lattice);
    }

    AnyLattice(const AnyLattice& orig)
    : initialized(orig.initialized), lattice(clone(orig))
    {
      ROSE_ASSERT(!orig.lattice || lattice);
    }

    ~AnyLattice()
    {
      delete lattice;
    }

    AnyLattice& operator=(const AnyLattice& other)
    {
      AnyLattice tmp(other);

      swap(*this, tmp);
      return *this;
    }

    /// \brief returns a reference to the owned lattice
    /// \tparam LatticeType clients specify the expected type of the lattice
    template<class LatticeType>
    const LatticeType& ref() const
    {
      return dynamic_cast<LatticeType&>(*lattice);
    }

    //! overload
    template<class LatticeType>
    LatticeType& ref()
    {
      return dynamic_cast<LatticeType&>(*lattice);
    }

    /// \brief returns a pointer to the owned lattice
    const Lattice* ptr() const { ROSE_ASSERT(lattice); return lattice; }
    Lattice*       ptr()       { ROSE_ASSERT(lattice); return lattice; }

    /// \brief assumes that the underlying produce lattice and returns
    ///        the lattice at position @pos.
    template<class LatticeType>
    const LatticeType& at(size_t pos) const
    {
      return dynamic_cast<LatticeType&>(product_lattice_at(pos));
    }

    //! overload
    template<class LatticeType>
    LatticeType& at(size_t pos)
    {
      return dynamic_cast<LatticeType&>(product_lattice_at(pos));
    }

    // general lattice functions
    bool isInitialized() const { return lattice && initialized == lsInitialized; }
    void initialize()          { ROSE_ASSERT(lattice); initialized = lsInitialized; }
    void uninitialize()        { initialized = lsUninitialized; }

    // lattice specific functions (forward calls to implementation in Lattice hierarchy)
    void unProject(SgFunctionCallExp*, const Lattice&);

    void unProject(SgFunctionCallExp* fce, const AnyLattice& lat)
    {
      return unProject(fce, *lat.ptr());
    }

    AnyLattice project(SgExpression*) const;
    void remapVars(const std::map<varID, varID>& varNameMap, const Function& newFunc);
    void incorporateVars(const AnyLattice& other);
    bool finiteLattice() const { return ptr()->finiteLattice(); }
    void clear();

    bool meetUpdate(const AnyLattice& rhs);
    bool widenUpdate(const AnyLattice& rhs);

    std::string str(std::string prefix = "") const;

    //
    // binary operators implemented as friends

    friend
    void swap(AnyLattice& lhs, AnyLattice& rhs);

    friend
    bool operator==(const AnyLattice& lhs, const AnyLattice& rhs);

    friend
    bool operator!=(const AnyLattice& lhs, const AnyLattice& rhs) { return !(lhs == rhs); }

  private:
    /// assumes underlying Lattice is a ProductLattice and returns
    /// the element at position @pos
    Lattice&       product_lattice_at(size_t pos) ;
    const Lattice& product_lattice_at(size_t pos) const;

    static
    Lattice* clone(const AnyLattice& l)
    {
      return l.lattice ? l.lattice->copy()
                       : static_cast<Lattice*>(0);
    }

    LatticeState initialized;
    Lattice*     lattice;
};

/// prints @lat on @os
std::ostream& operator<<(std::ostream& os, const AnyLattice& lat);

#endif /* OBSOLETE_CODE */

#endif
