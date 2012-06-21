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


namespace {

  struct AstNodeFinder : AstSimpleProcessing
  {
    const SgExpression& astnode;
    bool  res;

    explicit
    AstNodeFinder(const SgExpression& sagenode)
    : astnode(sagenode), res(false)
    {}

    void visit(SgNode* n);
    void atTraversalEnd() {}

    bool found() { return res; }
  };

  void AstNodeFinder::visit(SgNode* n)
  {
    const SgExpression* exp = isSgExpression(n);
    res = (exp) && sg::tree_compare(exp, &astnode);
  }

  template <class APredicateSet>
  struct PredicateFinder
  {
    typedef typename APredicateSet::value_type        conjuncted_predicate;
    typedef typename conjuncted_predicate::value_type ssa_predicate;

    const SgExpression& n;

    explicit
    PredicateFinder(const SgExpression& sagenode)
    : n(sagenode)
    {}

    bool operator()(const ssa_predicate& simplepred) const
    {
      AstNodeFinder astNodeFinder(n);
      SgExpression* exprnode = const_cast<SgExpression*>(simplepred.expression());

      astNodeFinder.traverse(exprnode, preorder);
      return astNodeFinder.found();
    }

    bool operator()(const conjuncted_predicate& cjpred) const
    {
      typename conjuncted_predicate::const_iterator zz = cjpred.end();

      return std::find_if(cjpred.begin(), zz, *this) != zz;
    }
  };
}

struct PredicateAnalyzer
{
  typedef SSAPredicate::SSARep                    SSARep;
  typedef dfpred::PredicateAnalysis<SSAPredicate> predicate_analysis;
  typedef predicate_analysis::lattice_type        lattice_type;
  typedef predicate_analysis::predicate_set       predicate_set;

  predicate_analysis* analysisKey;

  explicit
  PredicateAnalyzer(predicate_analysis* ansyskey)
  : analysisKey(ansyskey)
  {}

  const predicate_set* lookup_predicate_set(const SgVarRefExp& n)
  {
    SgVarRefExp&        n_noconst = const_cast<SgVarRefExp&>(n);
    DataflowNode        dfnkey(n_noconst.cfgForBeginning(), defaultFilter);
    NodeState&          state = sg::deref(NodeState::getNodeState(dfnkey));
    const AnyLattice&   latwrap = state.getLatticeAbove(analysisKey);
    const lattice_type* lat = dynamic_cast<const lattice_type*>(latwrap.ptr());

    if (!lat) return 0;
    return &lat->predset;
  }

  static
  bool constrainedBy(const SgVarRefExp& n, const predicate_set& predset)
  {
    // right now the implementation finds any constraint (MAY constrain)
    // \todo shall we simply use MUST or shall use MAY based + runtime guards?
    predicate_set::const_iterator zz = predset.end();

    return zz != std::find_if(predset.begin(), zz, PredicateFinder<predicate_set>(n));
  }

  void handle(const SgNode& n) {}

  void handle(const SgVarRefExp& n)
  {
    typedef ReachingDef::ReachingDefPtr ReachingDefPtr;

    // only interested in reads
    if (n.isUsedAsLValue()) return;

    //
    const predicate_set* predset = lookup_predicate_set(n);
    if (!predset || (!constrainedBy(n, *predset))) return;

    std::cout << "found interesting predicate-set for: " << n.unparseToString()
              << " in " << sg::ancestor<SgStatement>(n).unparseToString()
              << ": " << *predset;

    // \todo we get the parent, because the uses of SSA nodes on SgVarRefExp are
    // not always defined.
    const SgNode&        parentnode = sg::deref(n.get_parent());
    SSARep               defset = SSAPredicate::varsUsed(parentnode);

    std::cout << "|" << defset.size() << "|" << std::endl;

    //ROSE_ASSERT(defset.size() == 1); // we deal only with a single variable
    //ReachingDefPtr       def = *defset.begin();
  }
};

struct PredicateAnalysisTraversal : public AstSimpleProcessing
{
    typedef dfpred::PredicateAnalysis<SSAPredicate> predicate_analysis;

    predicate_analysis* analysisKey;

    explicit
    PredicateAnalysisTraversal(predicate_analysis* ansyskey)
    : analysisKey(ansyskey)
    {}

    void visit(SgNode* n);
    void atTraversalEnd() {}
};

void PredicateAnalysisTraversal::visit(SgNode* n)
{
  sg::dispatch(PredicateAnalyzer(analysisKey), n);
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

          // perform SSA/predicate based induction variable analysis
          PredicateAnalysisTraversal analysis(&pa);

          std::cout << std::endl;
          analysis.traverseInputFiles(project, preorder);
        }

        printf("==========  E  N  D  ==========\n");

        // Unparse and compile the project (so this can be used for testing)
        return 0;
}
