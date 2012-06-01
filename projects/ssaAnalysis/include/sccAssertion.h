/*
 * sccAssertion.h
 *
 *  Created on: Dec 12, 2011
 *      Author: vcave
 */

#ifndef SCCASSERTION_H_
#define SCCASSERTION_H_

// These are compile time assertion we use to check scc lattices values.
// They need to have a valid declaration and definition because we
// do not erase them from the input program
void assert_constant(bool a, bool b) { }
void assert_constant(short a, short b) { }
void assert_constant(int a, int b) { }
void assert_constant(long a, long b) { }
void assert_constant(float a, float b) { }
void assert_constant(double a, double b) { }

#endif /* SCCASSERTION_H_ */
