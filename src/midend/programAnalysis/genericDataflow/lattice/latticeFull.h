#ifndef LATTICE_FULL_H
#define LATTICE_FULL_H

#include "cfgUtils.h"
#include "variables.h"
#include "nodeState.h"
#include "lattice.h"
#include <string>
#include <map>
#include <vector>

/******************************
 *** Commonly used lattices ***
 ******************************/

class BoolAndLattice : public FiniteLattice
{
        // state can be:
        // 0 : false
        // 1 : true
        bool state;

        public:
        BoolAndLattice()
        : state(0)
        {}

        public:
        BoolAndLattice(bool initstate)
        : state(initstate)
        {}

        // initializes this Lattice to its default state
        void initialize()
        { Lattice::initialize(); state = false; }

        void clear()
        { Lattice::uninitialize(); }

        // returns a copy of this lattice
        Lattice* copy() const;

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

        std::string str(std::string indent="");
};

class IntMaxLattice : public InfiniteLattice
{
        int state;

        public:
        static const int infinity;// = 32768;

        IntMaxLattice()
        : state(-1)
        {}

        IntMaxLattice(int initstate)
        : state(initstate)
        {}

        // initializes this Lattice to its default state
        void clear()
        {
                Lattice::initialize();
                state = -1;
        }

        // returns a copy of this lattice
        Lattice* copy() const;

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

        // Functions used to inform this lattice that a given variable is now in use (e.g. a variable has entered
        //    scope or an expression is being analyzed) or is no longer in use (e.g. a variable has exited scope or
        //    an expression or variable is dead).
        // It is assumed that a newly-added variable has not been added before and that a variable that is being
        //    removed was previously added
        // These are empty in this lattice since it is now explicitly aware of variables.
        /*void addVar(varID var) {};
        void remVar(varID var) {};*/

        std::string str(std::string indent="");
};

/*########################
  ### Utility lattices ###
  ########################*/

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

        protected:
        std::vector<Lattice*> lattices;

        public:
        ProductLattice()
        : lattices()
        {}

        ProductLattice(const std::vector<Lattice*>& initlattices)
        : lattices(initlattices)
        {}

        ~ProductLattice();

        /// initializes this Lattice to its default state
        void initialize()   /* override */;

        /// sets the lattice to uninitialize
        void unInitialize() /* override */;

        /// clears the lattice
        void clear() /* override */;

        const std::vector<Lattice*>& getLattices() const;

        // initializes the given vector with a copy of the lattices vector
        void copy_lattices(std::vector<Lattice*>& newLattices) const;

        // overwrites the state of this Lattice with that of that Lattice
        virtual void copy(const Lattice* that);

        // computes the meet of this and that and saves the result in this
        // returns true if this causes this to change and false otherwise
        virtual bool meetUpdate(const Lattice* that);

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

        // Functions used to inform this lattice that a given variable is now in use (e.g. a variable has entered
        //    scope or an expression is being analyzed) or is no longer in use (e.g. a variable has exited scope or
        //    an expression or variable is dead).
        // It is assumed that a newly-added variable has not been added before and that a variable that is being
        //    removed was previously added
        // These are empty in this lattice since it is now explicitly aware of variables.
        /*void addVar(varID var) {};
        void remVar(varID var) {};*/

        // The string that represents this object
        // If indent!="", every line of this string must be prefixed by indent
        // The last character of the returned string should not be '\n', even if it is a multi-line string.
        virtual std::string str(std::string indent="");
};

class FiniteProductLattice : public virtual ProductLattice, public virtual FiniteLattice
{
        public:
        FiniteProductLattice() : ProductLattice(), FiniteLattice()
        {}

        FiniteProductLattice(const std::vector<Lattice*>& lattices) : ProductLattice(lattices), FiniteLattice()
        {
                verifyFinite();
        }

        FiniteProductLattice(const FiniteProductLattice& that) : ProductLattice(that.lattices), FiniteLattice()
        {
                verifyFinite();
        }

        void verifyFinite()
        {
                for(std::vector<Lattice*>::iterator it = lattices.begin(); it!=lattices.end(); it++)
                                ROSE_ASSERT((*it)->finiteLattice());
        }

        // Returns a copy of this lattice
        FiniteProductLattice* copy() const
        {
                return new FiniteProductLattice(*this);
        }
};

class InfiniteProductLattice : public virtual ProductLattice, public virtual InfiniteLattice
{
        public:
        InfiniteProductLattice() : ProductLattice(), InfiniteLattice()
        {}

        InfiniteProductLattice(const std::vector<Lattice*>& lattices) : ProductLattice(lattices), InfiniteLattice()
        {}

        InfiniteProductLattice(const InfiniteProductLattice& that) : ProductLattice(that.lattices), InfiniteLattice()
        {}

        // returns a copy of this lattice
        InfiniteProductLattice* copy() const
        {
                return new InfiniteProductLattice(*this);
        }

        // Widens this from that and saves the result in this.
        // Returns true if this causes this to change and false otherwise.
        bool widenUpdate(const InfiniteLattice* that);
};


class VariablesProductLattice : public virtual ProductLattice
{
        protected:
        // if =true, a lattice is created for each scalar variable
        bool includeScalars;
        // if =true, a lattice is created for each array variable
        bool includeArrays;
        // the function that this lattice is associated with
        Function func;
        // map of lattices that correspond to constant variables
        std::map<varID, Lattice*> constVarLattices;
        // lattice that corresponds to allVar;
        Lattice* allVarLattice;

        // sample lattice that will be initially associated with every variable (before the analysis)
        Lattice* perVarLattice;

        // maps variables in a given function to the index of their respective Lattice objects in
        // the ProductLattice::lattice[] array
        static std::map<Function, std::map<varID, int> > varLatticeIndex;

        public:
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
        VariablesProductLattice(bool includeScalars, bool includeArrays, Lattice* perVarLattice,
                                const std::map<varID, Lattice*>& constVarLattices, Lattice* allVarLattice,
                                const Function& func, const DataflowNode& n, const NodeState& state);

        // copy constructor
        VariablesProductLattice(const VariablesProductLattice& that);

        public:

              Lattice* getVarLattice(const Function& func, const varID& var);
        const Lattice* getVarLattice(const Function& func, const varID& var) const;

        protected:
        // sets up the varLatticeIndex map, if necessary
        void setUpVarLatticeIndex();

        // returns the index of var among the variables associated with func
        // or -1 otherwise
        int getVarIndex(const Function& func, const varID& var);

        public:

        // returns the set of global variables(scalars and/or arrays)
        varIDSet& getGlobalVars() const;
        static varIDSet& getGlobalVars(bool includeScalars, bool includeArrays);

        // returns the set of variables(scalars and/or arrays) declared in this function
        varIDSet& getLocalVars(Function func) const;

        // returns the set of variables(scalars and/or arrays) referenced in this function
        varIDSet& getRefVars(Function func) const;

        // returns the set of variables(scalars and/or arrays) visible in this function
        varIDSet getVisibleVars(Function func) const;

        // returns a copy of this lattice
        //Lattice* copy() const;

        // overwrites the state of this Lattice with that of that Lattice
        void copy(Lattice* that);

        // Called by analyses to create a copy of this lattice. However, if this lattice maintains any
        //    information on a per-variable basis, these per-variable mappings must be converted from
        //    the current set of variables to another set. This may be needed during function calls,
        //    when dataflow information from the caller/callee needs to be transferred to the callee/calleer.
        // We do not force child classes to define their own versions of this function since not all
        //    Lattices have per-variable information.
        // varNameMap - maps all variable names that have changed, in each mapping pair, pair->first is the
        //              old variable and pair->second is the new variable
        // func - the function that the copy Lattice will now be associated with
        /*Lattice**/void remapVars(const std::map<varID, varID>& varNameMap, const Function& newFunc);

        // Called by analyses to copy over from the that Lattice dataflow information into this Lattice.
        // that contains data for a set of variables and incorporateVars must overwrite the state of just
        // those variables, while leaving its state for other variables alone.
        // We do not force child classes to define their own versions of this function since not all
        //    Lattices have per-variable information.
        void incorporateVars(const Lattice* that);

        // Functions used to inform this lattice that a given variable is now in use (e.g. a variable has entered
        //    scope or an expression is being analyzed) or is no longer in use (e.g. a variable has exited scope or
        //    an expression or variable is dead).
        // It is assumed that a newly-added variable has not been added before and that a variable that is being
        //    removed was previously added
        /*void addVar(varID var);
        void remVar(varID var);*/

        // The string that represents this object
        // If indent!="", every line of this string must be prefixed by indent
        // The last character of the returned string should not be '\n', even if it is a multi-line string.
        std::string str(std::string indent="");
};

class FiniteVariablesProductLattice : public virtual VariablesProductLattice, public virtual FiniteProductLattice
{
        public:
        // creates a new VariablesProductLattice
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
        FiniteVariablesProductLattice(bool includeScalars, bool includeArrays,
                                      Lattice* perVarLattice, const std::map<varID, Lattice*>& constVarLattices, Lattice* allVarLattice,
                                                const Function& func, const DataflowNode& n, const NodeState& state) :
            VariablesProductLattice(includeScalars, includeArrays, perVarLattice, constVarLattices, allVarLattice, func, n, state),
            FiniteProductLattice()
        {
                verifyFinite();
        }

        FiniteVariablesProductLattice(const FiniteVariablesProductLattice& that) :
                VariablesProductLattice(that), FiniteProductLattice()
        {
                verifyFinite();
        }

        // returns a copy of this lattice
        FiniteVariablesProductLattice* copy() const
        {
                return new FiniteVariablesProductLattice(*this);
        }
};

class InfiniteVariablesProductLattice : public virtual VariablesProductLattice, public virtual InfiniteProductLattice
{
        public:
        // creates a new VariablesProductLattice
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
        InfiniteVariablesProductLattice(bool includeScalars, bool includeArrays,
                                        Lattice* perVarLattice, std::map<varID, Lattice*> constVarLattices, Lattice* allVarLattice,
                                                  const Function& func, const DataflowNode& n, const NodeState& state) :
            VariablesProductLattice(includeScalars, includeArrays, perVarLattice, constVarLattices, allVarLattice, func, n, state),
            InfiniteProductLattice()
        {
        }

        InfiniteVariablesProductLattice(const FiniteVariablesProductLattice& that) :
                VariablesProductLattice(that), InfiniteProductLattice()
        {
        }

        // returns a copy of this lattice
        InfiniteVariablesProductLattice* copy() const
        {
                return new InfiniteVariablesProductLattice(*this);
        }
};


/// default lattice for analysis that use their own storage
struct DefaultLattice : Lattice
{
  Lattice* copy() const { return new DefaultLattice(*this); }

  const DefaultLattice& that(const Lattice* l) { return dynamic_cast<const DefaultLattice&>(*l); }

  void copy(const Lattice* l) { *this = that(l); }

  void clear()  { }

  bool meetUpdate(const Lattice* l) {}

  bool finiteLattice() const { return true; }

  bool operator==(const Lattice* l) const { return true; }
};


#endif
