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
#include "valueNumbering.h"

// predicate analysis headers
#include "sageplus.h"
#include "predflow.h"
#include "sagePredicate.h"
#include "ssaPredicate.h"
#include "vnPredicate.h"

#include "predicateConcept.h"


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

struct SSAVariableAnalyzer
{
  enum ReachingDefKind
  {
    rdkVisiting = 0,
    rdkVisited  = 1,
    rdkLoop     = 2
  };

  typedef std::map<ReachingDefPtr, ReachingDefKind> LoopDataMap;
  typedef std::pair<LoopDataMap::iterator, bool>    insert_result_type;

  LoopDataMap loopdata;

  ReachingDefKind cycle_detector(ReachingDefPtr rdef);

  void analzye(ReachingDefPtr rdef)
  {
    if (loopdata.find(rdef) != loopdata.end()) return;

    cycle_detector(rdef);
  }
};


template <class Iterator>
static
typename std::iterator_traits<Iterator>::value_type::first_type
select_first(typename Iterator::iterator it)
{
  return it->first;
}

typedef std::vector<ReachingDefPtr> ReachingDefList;

struct AncestorDefFinder : sg::DispatchHandler< ReachingDefList >
{

  void handle(const SgExpression&)      {} // cannot handle

  void handle(const SgInitializedName&) {}

  void handle(const SgPlusPlus&) {}        // continue with use
  void handle(const SgMinusMinus&) {}      // cannot
  void handle(const Sg

};

static
std::vector<ReachingDefPtr>
find_reaching_defs(rdef)
{
  return sg::dispatch(ReachingDefFinder(), rdef.getDefinitionNode());
}

static
std::vector<ReachingDefPtr>
get_preceding_defs(ReachingDefPtr rdef)
{
  typedef const std::map<ReachingDefPtr, std::set<FilteredCfgEdge> > PhiNodeExpansion;

  std::vector<ReachingDefPtr> res;

  // if this is the first visit, go through all reaching definitions
  if (rdef->isPhiFunction())
  {
    PhiNodeExpansion& originialdefs = rdef->getJoinedDefs();

    std::transform( originialdefs.begin(), originialdefs.end(), select_first, std::back_inserter(res) );
  }
  else
  {
    // what are the requirements that we want to enforce?
    res = find_reaching_defs(rdef);
  }

  return res;
}



ReachingDefKind SSAVariableAnalyzer::cycle_detector(ReachingDefPtr rdef);
{
  insert_result_type          ins = loopdata.insert( LoopDataMap::value_type(rdef, rdkVisiting) );
  LoopDataMap::iterator       pos = ins.first;

  // if the entry was already inside the map, we are done and can return
  if (ins.second)
  {
    // if we already know the status
    if (pos.second == rdkVisiting) { pos.second = rdkLoop; }

    return pos.second;
  }

  std::vector<ReachingDefPtr> worklist = get_preceding_defs(rdef);
  ReachingDefKind             tmpres = pos.second;

  // first time visiting the node
  while (!worklist.empty())
  {
    // do not yet update the entry as it can be modified during recursion
    tmpres = max(tmpres, cycle_detector(worklist.back()));

    worklist.pop_back();
  }

  // store back the result
  pos.second = tmpres;
  return tmpres;
}



struct PredicateAnalyzer
{
  typedef SSAPredicate::SSARep                    SSARep;
  typedef dfpred::PredicateAnalysis<SSAPredicate> predicate_analysis;
  typedef predicate_analysis::lattice_type        lattice_type;
  typedef predicate_analysis::predicate_set       predicate_set;

  SSAVariableAnalyzer&   ssaanalyzer;
  hssa_private::HeapSSA& hssa;
  predicate_analysis*    analysisKey;

  PredicateAnalyzer(predicate_analysis* ansyskey, SSAVariableAnalyzer& analyzer)
  : analysisKey(ansyskey), ssaanalyzer(analzyer)
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

  void handle(const SgNode&) {}

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

    SSARep               defset = SSAPredicate::varsUsed(n);

    std::cout << "|" << defset.size() << "|" << std::endl;

    ROSE_ASSERT(defset.size() == 1); // we deal only with a single variable
    ssaanalyzer.analzye(*defset.begin());
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


static inline
void sage_predicates()
{
  std::cout << "----------  S a g e  ----------\n";

  dfpred::PredicateAnalysis<SimplePredicate> pa;
  UnstructuredPassInterDataflow              analyzer(&pa);

  analyzer.runAnalysis();
}

static inline
void ssa_predicates(hssa_private::HeapSSA& hssa, SgProject* proj)
{
  std::cout << "----------  S  S  A  ----------\n";

  SSAPredicate::myssa = &hssa;

  dfpred::PredicateAnalysis<SSAPredicate> pa;
  UnstructuredPassInterDataflow           analyzer(&pa);

  analyzer.runAnalysis();

  // perform SSA/predicate based induction variable analysis
  PredicateAnalysisTraversal analysis(&pa);

  std::cout << std::endl;
  analysis.traverseInputFiles(proj, preorder);
}

static inline
void vn_predicates(hssa_private::HeapSSA& hssa, SgProject* proj)
{
  std::cout << "--- V a l u e n u m b e r s ---\n";

  scc_private::ValueNumbering               vn(proj, &hssa);
  ContextInsensitiveInterProceduralDataflow ciIPD1(&vn, getCallGraph());

  // Invoke VN based on call graph traversal
  ciIPD1.runAnalysis();

  VNPredicate::myvn = &vn;

  dfpred::PredicateAnalysis<VNPredicate>    pa;
  UnstructuredPassInterDataflow             analyzer(&pa);

  analyzer.runAnalysis();
}


int main( int argc, char * argv[] )
{
        std::cout << "========== S T A R T ==========\n";

        // Build the AST used by ROSE
        SgProject* project = frontend(argc,argv);

        initAnalysis(project);

        Dbg::init("Some Test", ".", "index.html");

        hssa_private::HeapSSA hssa(project);

        hssa.build(false, true);
        // hssa.toDOT("ssa.dot");

        sage_predicates();
        ssa_predicates(hssa, project);
        // vn_predicates(hssa, project);

        std::cout << "==========  E  N  D  ==========\n";

        // Unparse and compile the project (so this can be used for testing)
        return 0;
}
