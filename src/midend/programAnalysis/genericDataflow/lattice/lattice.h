#ifndef LATTICE_H
#define LATTICE_H

#include <string>
#include <map>
#include "CallGraphTraverse.h"
#include "variables.h"

class Lattice : public printable
{
        public:

        Lattice()
        : good_state(false)
        {}

        /// returns a copy of this lattice
        /// \note   derived classes can use co-variant return types to return more
        ///         specific information on the lattice type.
        ///         e.g., MyLattice* MyLattice::copy() const {}
        virtual Lattice* copy() const=0;

        /// overwrites the state of this Lattice with that of that Lattice
        virtual void copy(const Lattice* that)=0;

        /// sets lattice to initialized
        virtual void initialize()          { good_state = true;  }

        /// sets lattice to uninitialized
        virtual void uninitialize()        { good_state = false; }

        /// returns initialization state of lattice
        virtual bool isInitialized() const { return good_state; }

        /// clears the lattice (e.g., calls uninitialize)
        virtual void clear() = 0;

        // Called by analyses to create a copy of this lattice. However, if this lattice maintains any
        //    information on a per-variable basis, these per-variable mappings must be converted from
        //    the current set of variables to another set. This may be needed during function calls,
        //    when dataflow information from the caller/callee needs to be transferred to the callee/calleer.
        // We do not force child classes to define their own versions of this function since not all
        //    Lattices have per-variable information.
        // varNameMap - maps all variable names that have changed, in each mapping pair, pair->first is the
        //              old variable and pair->second is the new variable
        // func - the function that the copy Lattice will now be associated with
        virtual /*Lattice**/void remapVars(const std::map<varID, varID>& varNameMap, const Function& newFunc) {}

        // Called by analyses to copy over from the that Lattice dataflow information into this Lattice.
        // that contains data for a set of variables and incorporateVars must overwrite the state of just
        // those variables, while leaving its state for other variables alone.
        // We do not force child classes to define their own versions of this function since not all
        //    Lattices have per-variable information.
        virtual void incorporateVars(const Lattice* that) {}

        // Returns a Lattice that describes the information known within this lattice
        // about the given expression. By default this could be the entire lattice or any portion of it.
        // For example, a lattice that maintains lattices for different known variables and expression will
        // return a lattice for the given expression. Similarly, a lattice that keeps track of constraints
        // on values of variables and expressions will return the portion of the lattice that relates to
        // the given expression.
        // It it legal for this function to return NULL if no information is available.
        // The function's caller is responsible for deallocating the returned object
        // \pp \todo can we require the function to always return a legal lattice?
        virtual Lattice* project(SgExpression* expr) const { return copy(); }

        // The inverse of project(). The call is provided with an expression and a Lattice that describes
        // the dataflow state that relates to expression. This Lattice must be of the same type as the lattice
        // returned by project(). unProject() must incorporate this dataflow state into the overall state it holds.
        // Call must make an internal copy of the passed-in lattice and the caller is responsible for deallocating it.
        // Returns true if this causes this to change and false otherwise.
        virtual bool unProject(SgExpression* expr, const Lattice* exprState) { return meetUpdate(exprState); }

        // computes the meet of this and that and saves the result in this
        // returns true if this causes this to change and false otherwise
        virtual
        bool meetUpdate(const Lattice* that) = 0;

        // returns true for finite domains
        virtual bool finiteLattice() const = 0;

        static
        bool eq_init_state(const Lattice* lhs, const Lattice* rhs)
        {
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

        // Functions used to inform this lattice that a given variable is now in use (e.g. a variable has entered
        //    scope or an expression is being analyzed) or is no longer in use (e.g. a variable has exited scope or
        //    an expression or variable is dead).
        // It is assumed that a newly-added variable has not been added before and that a variable that is being
        //    removed was previously added
        /*virtual void addVar(varID var)=0;
        virtual void remVar(varID var)=0;*/

        // The string that represents this object
        // If indent!="", every line of this string must be prefixed by indent
        // The last character of the returned string should not be '\n', even if it is a multi-line string.
        //virtual string str(string indent="") /*const*/=0;

        virtual std::string str(std::string indent="") const { /* \todo */ return indent; }

        std::string str(std::string indent="")
        {
          const Lattice* l = this;

          return l->str(indent);
        }

    private:
        bool good_state;
};

class FiniteLattice : public virtual Lattice
{
        public:
        bool finiteLattice() const
        { return true;  }
};

class InfiniteLattice : public virtual Lattice
{
        public:
        bool finiteLattice() const
        { return false; }

        // widens this from that and saves the result in this
        // returns true if this causes this to change and false otherwise
        virtual bool widenUpdate(const InfiniteLattice* that)=0;
};

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

#endif
