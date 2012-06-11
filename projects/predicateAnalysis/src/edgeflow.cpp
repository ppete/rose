#include <iostream>
#include <cassert>
#include <typeinfo>
#include <set>
#include <numeric>
#include <memory>

// ROSE headers
#include "rose.h"
#include "sageGeneric.h"

// dataflow headers
#include "variables.h"
#include "cfgUtils.h"
#include "analysisCommon.h"
#include "functionState.h"
#include "latticeFull.h"
#include "analysis.h"
#include "dataflow.h"

// SSA headers
#include "heapSSA.h"

// predicate analysis headers
#include "sageplus.h"
#include "predflow.h"
#include "sagePredicate.h"


int main( int argc, char * argv[] )
{
        printf("========== S T A R T ==========\n");

        // Build the AST used by ROSE
        SgProject* project = frontend(argc,argv);

        initAnalysis(project);

        Dbg::init("Some Test", ".", "index.html");

        // running with sage-expressions
        {
          dfpred::PredicateAnalysis<SimplePredicate> pa;
          UnstructuredPassInterDataflow              analyzer(&pa);

          analyzer.runAnalysis();
        }

#if 0
        // running with SSA representation
        {
          hssa_private::HeapSSA hssa(project);

          hssa.build(false, true);
          SSAPredicate::myssa = &hssa;

          dfpred::PredicateAnalysis<SSAPredicate> pa;
          UnstructuredPassInterDataflow           analyzer(&pa);

          analyzer.runAnalysis();
        }
#endif

        printf("==========  E  N  D  ==========\n");

        // Unparse and compile the project (so this can be used for testing)
        return 0;
}
