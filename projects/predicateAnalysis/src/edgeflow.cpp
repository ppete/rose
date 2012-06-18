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
#include "ssaPredicate.h"


struct PredicateAnalyzer
{
  typedef SSAPredicate::SSARep                                  SSARep;
  typedef dfpred::PredicateAnalysis<SSAPredicate>::predicate_set predicate_set;

  void handle(const SgNode& n) {}

  void handle(const SgVarRefExp& n)
  {
    // only interested in reads
    if (n.isUsedAsLValue()) return;

    //
    const predicate_set* predset = lookup_predicate_set(n);
    if (!predset || (!constrains(*predset, n))) return;

    SSARep defset = SSAPredicate::varsUsed(n);
    if (defset.empty()) return;

    std::cout << "found interesting predicate-set for: " << n.unparseToString()
              << " in " << sg::ancestor<SgStatement>(n).unparseToString()
              << std::endl;

    ROSE_ASSERT(defset.size() == 1); // we deal only with a single variable
    ReachingDefPtr def = defset.front();
  }
};

struct PredicateAnalysisTraversal : public AstSimpleProcessing
{
    void visit(SgNode* n);
    void atTraversalEnd() {}
};

void PredicateAnalysisTraversal::visit(SgNode* n)
{
  sg::dispatch(PredicateAnalyzer(), n);
}


int main( int argc, char * argv[] )
{
        printf("========== S T A R T ==========\n");

        // Build the AST used by ROSE
        SgProject* project = frontend(argc,argv);

        initAnalysis(project);

        Dbg::init("Some Test", ".", "index.html");
/*
        // running with sage-expressions
        {
          dfpred::PredicateAnalysis<SimplePredicate> pa;
          UnstructuredPassInterDataflow              analyzer(&pa);

          analyzer.runAnalysis();
        }

        // running with SSA representation
        printf("----------  S  S  A  ----------\n");
*/
        {
          hssa_private::HeapSSA hssa(project);

          hssa.build(false, true);
          // hssa.toDOT("ssa.dot");

          SSAPredicate::myssa = &hssa;

          dfpred::PredicateAnalysis<SSAPredicate> pa;
          UnstructuredPassInterDataflow           analyzer(&pa);

          analyzer.runAnalysis();
        }

        // predicate analysis
        {
          PredicateAnalysisTraversal analysis;

          analysis.traverseInputFiles(project, preorder);
        }

        printf("==========  E  N  D  ==========\n");

        // Unparse and compile the project (so this can be used for testing)
        return 0;
}
