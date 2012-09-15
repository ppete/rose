/*
 * Utility
 *
 *  Created on: Dec 12, 2011
 *      Author: vcave
 */

#ifndef UTILITY_H_
#define UTILITY_H_

#include<stdio.h>
#include "rose.h"
#include "LatticeArithInstance.h"

#define SG_TYPE_TO_LATTICE(SGTYPE, SGVAL, PRIMTYPE) \
    if (dynamic_cast<SGTYPE*>(type)) { \
        PRIMTYPE t = ((SGVAL*)node)->get_value(); \
        return new LatticeArithInstance<PRIMTYPE>(minus ? t*-1 : t); \
    }

// Retrieve the type of the node and build a lattice
// initialized with the value of the constant
LatticeArith * buildConstantLattice(SgExpression * node) {
    bool minus = false;
    if (SgMinusOp * minusNode = isSgMinusOp(node)) {
        node = minusNode->get_operand();
        minus = true;
    }
    ROSE_ASSERT(isSgValueExp(node));

    SgType * type = node->get_type();
    SG_TYPE_TO_LATTICE(SgTypeInt, SgIntVal, int)
    printf("ERROR: unsupported type %s\n", node->get_type()->unparseToString().c_str());
    ROSE_ASSERT(false);
}

#endif /* UTILITY_H_ */
