/*
 * sccCompileTimeAssertion.h
 *
 *  Created on: Dec 12, 2011
 *      Author: vcave
 */

#ifndef SCCCOMPILETIMEASSERTION_H_
#define SCCCOMPILETIMEASSERTION_H_

#include "rose.h"
#include "constantAnalysis.h"

void scc_check_ct_assertion(SgProject * project, scc_private::ConstantAnalysis * scc);

#endif /* SCCCOMPILETIMEASSERTION_H_ */
