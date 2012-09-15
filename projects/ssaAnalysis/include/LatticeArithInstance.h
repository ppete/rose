/*
 * LatticeArithInstance.h
 *
 *  Created on: Dec 6, 2011
 *      Author: vcave
 */

#ifndef LATTICEARITHINSTANCE_H_
#define LATTICEARITHINSTANCE_H_

#include "LatticeArith.h"

#define APPLY_OPERATOR(OP, TYPE, TYPE_RES) \
        if (that_->is_ ## TYPE ## LatticeArith()) { \
            LatticeArithInstance<TYPE> * that = \
            dynamic_cast<LatticeArithInstance<TYPE>*>(that_); \
            TYPE_RES resArith = getValue() OP that->getValue(); \
            LatticeArith * res = new LatticeArithInstance<TYPE_RES>(resArith); \
            return res; \
        } \

#define CHECK_LATTICE_ARITH_INSTANCE_TYPE(TYPE) (dynamic_cast<LatticeArithInstance<TYPE>*>(this) != NULL);

template<typename T>
class LatticeArithInstance : virtual public LatticeArith {

protected:
    T value;

public:
    LatticeArithInstance(T value_) : value(value_) {
    }

    LatticeArithInstance(bool top_, bool bottom_) : LatticeArith(top_, bottom_) {
    }

    LatticeArithInstance (const LatticeArithInstance<T> & that) : LatticeArith(that) {
        this->value = that.value;
    }

    virtual ~LatticeArithInstance() {
    }

    // pure function from Lattice
    virtual void initialize() {
        // constructor does the initialization
    }

    // pure function from Lattice
    // returns a copy of this lattice
    virtual LatticeArithInstance* copy() const {
        // Rely on the copy constructor
        return new LatticeArithInstance<T>(*this);
    }

    virtual LatticeArith* copyInstance() const {
      // Rely on the copy constructor
      return new LatticeArithInstance<T>(*this);
    }

    // pure function from Lattice
    void clear() {}

    // pure function from Lattice
    // overwrites the state of "this" Lattice with "that" Lattice
    virtual void copy(const Lattice* that_) {
        const LatticeArithInstance<T>* that = dynamic_cast<const LatticeArithInstance<T>*>(that_);
        ROSE_ASSERT((that != NULL) && "Cannot copy a LatticeArith to a LatticeArith of a different type");
        LatticeArith::copy(that);
        this->value = that->value;
    }

    // pure function from Lattice
    virtual bool operator==(const Lattice* that_) const {
        // Implementation of equality operator.
        const LatticeArithInstance<T>* that = dynamic_cast<const LatticeArithInstance<T>*>(that_);
        ROSE_ASSERT((that != NULL) && "Cannot compare two LatticeArith having different type");
        return ((this->value == that->value) && LatticeArith::operator==(that_));
    }

    virtual LatticeArith * operator+(LatticeArith * that_) {
        APPLY_OPERATOR(+, int, int)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator+");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator-(LatticeArith * that_) {
        APPLY_OPERATOR(-, int, int)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator*(LatticeArith * that_) {
        APPLY_OPERATOR(*, int, int)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator*");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator/(LatticeArith * that_) {
        APPLY_OPERATOR(/, int, int)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator/");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator%(LatticeArith * that_) {
        APPLY_OPERATOR(%, int, int)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator%");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator<<(LatticeArith * that_) {
        APPLY_OPERATOR(<<, int, int)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator<<");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator>>(LatticeArith * that_) {
        APPLY_OPERATOR(>>, int, int)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator>>");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator>(LatticeArith * that_) {
        APPLY_OPERATOR(>, int, bool)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator>");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator>=(LatticeArith * that_) {
        APPLY_OPERATOR(>=, int, bool)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator>=");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator<(LatticeArith * that_) {
        APPLY_OPERATOR(<, int, bool)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator<");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator<=(LatticeArith * that_) {
        APPLY_OPERATOR(<=, int, bool)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator<=");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator!=(LatticeArith * that_) {
        APPLY_OPERATOR(!=, int, bool)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator!=");
        // For the compiler not to complain
        return NULL;
    }

    virtual LatticeArith * operator==(LatticeArith * that_) {
        APPLY_OPERATOR(==, int, bool)
        ROSE_ASSERT(false && "Reached default in LatticeArithInstance::operator==");
        // For the compiler not to complain
        return NULL;
    }

    // pure function from Lattice
    virtual bool meetUpdate(const Lattice* that_) {
        const LatticeArithInstance<T>* that = dynamic_cast<const LatticeArithInstance<T>*>(that_);
        if (isTop() != that->isTop()) {
    bottom = true;
    return true;
  } else if (isBottom() || that->isBottom()) {
    bottom = true;
    return true;
  } else if (this->value == that->value) {
            return false;
        } else if (this->value != that->value) {
    bottom = true;
    this->value = -1;
    return true;
        }
    }

    T getValue() {
        return value;
    }

    virtual std::string str(std::string str_) {
        std::stringstream ss;
        ss << LatticeArith::str(str_) << " value=" << value;
        return ss.str();
    }

    // expanding only the checking code for clarity
    virtual bool is_boolLatticeArith() {
        return CHECK_LATTICE_ARITH_INSTANCE_TYPE(bool);
    }

    virtual bool is_shortLatticeArith() {
        return CHECK_LATTICE_ARITH_INSTANCE_TYPE(short);
    }

    virtual bool is_intLatticeArith() {
        return CHECK_LATTICE_ARITH_INSTANCE_TYPE(int);
    }

    virtual bool is_longLatticeArith() {
        return CHECK_LATTICE_ARITH_INSTANCE_TYPE(long);
    }

    virtual bool is_floatLatticeArith() {
        return CHECK_LATTICE_ARITH_INSTANCE_TYPE(float);
    }

    virtual bool is_doubleLatticeArith() {
        return CHECK_LATTICE_ARITH_INSTANCE_TYPE(double);
    }

};

typedef LatticeArithInstance<bool> BoolLatticeArith;
typedef LatticeArithInstance<char> CharLatticeArith;
typedef LatticeArithInstance<short> ShortLatticeArith;
typedef LatticeArithInstance<int> IntLatticeArith;
typedef LatticeArithInstance<long> LongLatticeArith;
typedef LatticeArithInstance<float> FloatLatticeArith;
typedef LatticeArithInstance<double> DoubleLatticeArith;


#endif /* LATTICEARITHINSTANCE_H_ */
