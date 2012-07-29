/*
 * LatticeArith.h
 *
 *  Created on: Dec 6, 2011
 *      Author: vcave
 */

#ifndef LATTICEARITH_H_
#define LATTICEARITH_H_

#include "latticeFull.h"


class LatticeArith : public virtual FiniteLattice {

protected:
    bool top;
    bool bottom;

public:
    LatticeArith() : top(false), bottom(false) {
    }

    LatticeArith(bool top_, bool bottom_) : top(top_), bottom(bottom_) {
    }

    LatticeArith(const LatticeArith & that) {
        this->top = that.top;
        this->bottom = that.bottom;
    }

    virtual ~LatticeArith() {
    }

    bool isTop() const {
        return top;
    }

    bool isBottom() const {
        return bottom;
    }

    bool hasValue() const {
        return !(isTop() || isBottom());
    }

    // pure function from printable
    virtual std::string str(std::string str_) const /* override */ {
        std::stringstream ss;
        ss << str_ << " top=" << top <<  " bottom=" << bottom;
        return ss.str();
    }

    // pure function from Lattice
    virtual void initialize() = 0;

    // pure function from Lattice
    // returns a copy of this lattice
    virtual LatticeArith* copy() const = 0;
    virtual LatticeArith* copyInstance() const = 0;

    // pure function from Lattice
    // overwrites the state of "this" Lattice with "that" Lattice
    virtual void copy(const Lattice* that_) /* override */ {
        const LatticeArith * that = dynamic_cast<const LatticeArith*>(that_);
        ROSE_ASSERT(that != NULL);
        this->top = that->top;
        this->bottom = that->bottom;
    }

    // pure function from Lattice
    virtual bool operator==(const Lattice* that_) const /* override */ {
        // Implementation of equality operator.
        const LatticeArith * that = dynamic_cast<const LatticeArith*>(that_);
        ROSE_ASSERT(that != NULL);
        return ((this->top == that->top) && (this->bottom == that->bottom));
    }

    virtual LatticeArith * operator+(LatticeArith * that_) = 0;
    virtual LatticeArith * operator-(LatticeArith * that_) = 0;
    virtual LatticeArith * operator*(LatticeArith * that_) = 0;
    virtual LatticeArith * operator/(LatticeArith * that_) = 0;
    virtual LatticeArith * operator%(LatticeArith * that_) = 0;
    virtual LatticeArith * operator<<(LatticeArith * that_) = 0;
    virtual LatticeArith * operator>>(LatticeArith * that_) = 0;
    virtual LatticeArith * operator>(LatticeArith * that_) = 0;
    virtual LatticeArith * operator>=(LatticeArith * that_) = 0;
    virtual LatticeArith * operator<(LatticeArith * that_) = 0;
    virtual LatticeArith * operator<=(LatticeArith * that_) = 0;
    virtual LatticeArith * operator!=(LatticeArith * that_) = 0;
    virtual LatticeArith * operator==(LatticeArith * that_) = 0;

    virtual bool is_boolLatticeArith() = 0;
    virtual bool is_shortLatticeArith() = 0;
    virtual bool is_intLatticeArith() = 0;
    virtual bool is_longLatticeArith() = 0;
    virtual bool is_floatLatticeArith() = 0;
    virtual bool is_doubleLatticeArith() = 0;
};


#endif /* LATTICEARITH_H_ */
