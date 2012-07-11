// standard headers
#include <iostream>
#include <cassert>
#include <typeinfo>
#include <set>
#include <numeric>
#include <algorithm>
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

// documentation
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

struct HasSecondaryPhiNode
{
  ReachingDefPtr masterphi;

  explicit
  HasSecondaryPhiNode(ReachingDefPtr phi)
  : masterphi(phi)
  {}

  bool operator()(ReachingDefPtr ssanode) const
  {
    return ssanode->isPhiFunction && (masterphi != ssanode);
  }
};

struct InductionEquation
{
  SgNode* init;
  int     increment;
};

struct InductionVariableAnalyzer
{
  enum Status
  {
    rdkVisiting = 0,
    rdkVisited  = 1,
    rdkLoop     = 2
  };

  typedef ReachingDef::ReachingDefPtr            ReachingDefPtr;
  typedef std::map<ReachingDefPtr, Status>       LoopDataMap;
  typedef std::pair<LoopDataMap::iterator, bool> insert_result_type;

  typedef std::set<ReachingDefPtr>               VertexSet;
  typedef std::pair<VertexSet, Status>           DetectionResult;

  LoopDataMap               loopdata;

  DetectionResult
  detectCycles(ReachingDefPtr rdef, ReachingDefPtr startpoint);

  void analzye(ReachingDefPtr rdef)
  {
    // already handled
    if (loopdata.find(rdef) != loopdata.end()) return;

    // we are interested to find induction variables, thus
    //   we start only from phis
    if (!rdef->isPhiFunction()) return;

    VertexSet res = detectCycles(rdef, rdef).first;

    if (!validateLoopModel(res, startpoint)) return;

    InductionEquation ivar = getInductionDefinition(res, startpoint);
  }

  static
  InductionEquation getInductionEquation(const VertexSet& vs, ReachingDefPtr startpoint);

  static
  bool validateLoopModel(const VertexSet& vs, ReachingDefPtr startpoint)
  {
    VertexSet::const_iterator zz  = vs.end();

    return std::find_if(vs.begin(), zz, hasSecondaryPhiNode(startpoint)) == zz;
  }
};



template <class X, class Y>
static
typename std::pair<X, Y>::first_type
select_first(const std::pair<X, Y>& pairval)
{
  return pairval.first;
}

typedef std::vector<ReachingDef::ReachingDefPtr> ReachingDefList;

struct InductionVariableUpdate
{
  typedef ReachingDef::ReachingDefPtr ReachingDefPtr;

  InductionVariableUpdate ()
  : valid(false), yintercept(0), prevdef()
  {}

  // int            slope;
  bool           valid;
  int            yintercept;
  ReachingDefPtr prevdef;
};

#if NEXTGEN_CODE

struct AncestorDefFinder : sg::DispatchHandler< InductionVariableUpdate >
{
  void handle_ReachingDefs(const SgNode& n)
  {

  }

  void handle_Value(const SgNode& n);

  void handle_linearExpression(const SgExpression& n, int ydelta);
  void handle_linearCompoundOp(const SgExpression& n, int sign);
  void handle_linearCombination(const SgExpression& n, int sign);

  void handle(const SgNode& n)          { sg::unexpected_node(n); }
  void handle(const SgCommaOpExp& n)    { sg::unexpected_node(n); }

  void handle(const SgExpression&)      { /* keep result invalid */ }


  void handle(const SgInitializedName& n)
  {
    const SgInitializer* init = n.get_initializer();

    if (init) handleReachingDefs(*init);
  }

  void handle(const SgPlusPlusOp& n)
  {
    handle_linearExpression(n, 1);
  }

  void handle(const SgMinusMinusOp& n)
  {
    handle_linearExpression(n, -1);
  }

  void handle(const SgPlusAssignOp& n)
  {
    handle_linearCompoundOp(n, 1);
  }

  void handle(const SgMinusAssignOp&)
  {
    handle_linearCompoundOp(n, -1);
  }

  void handle(const SgAssignOp& n);
  {
    res = sg::dispatch(AncestorDefFinder(), n.get_rhs_operand());
  }

  void handle(const SgPlusOp& n);
  {
    handle_linearCombination(n, 1);
  }

  void handle(const SgMinusOp& n);
  {
    handle_linearCombination(n, -1);
  }

  void handle(const SgVarRefExp& n)
  {
    // only called for rhs of assignment expressions
    ROSE_ASSERT(!n.isLValue());
    handle_ReachingDefs(n);
  }

  template <class VarType, class ValType>
  void handle_constant_value(VarType& val, ValType n)
  {
    ROSE_ASSERT(res.valid);

    if (std::numeric_limits<VarType>::min() > n) { res.valid = false; return; }
    if (std::numeric_limits<VarType>::max() < n) { res.valid = false; return; }

    val = n;
  }

  template <class AstNode>
  void handle_constant(const AstNode& n)
  {
    handle_constant_value(res.yintercept, n.get_value());
  }

  void handle(const SgCharVal& n)                { handle_constant(n); }
  void handle(const SgUnsignedLongLongIntVal& n) { handle_constant(n); }
  void handle(const SgIntVal& n)                 { handle_constant(n); }
  void handle(const SgLongIntVal& n)             { handle_constant(n); }
  void handle(const SgLongLongVal& n)            { handle_constant(n); }
  void handle(const SgShortVal& n)               { handle_constant(n); }
  void handle(const SgUnsignedCharVal& n)        { handle_constant(n); }
  void handle(const SgUnsignedIntVal& n)         { handle_constant(n); }
  void handle(const SgUnsignedLongVal& n)        { handle_constant(n); }
  void handle(const SgUnsignedShortVal& n)       { handle_constant(n); }


      InductionVariableUpdate lres = sg::dispatch(AncestorDefFinder(), n.get_lhs_operand());
    InductionVariableUpdate rres = sg::dispatch(AncestorDefFinder(), n.get_lhs_operand());

};
#endif

struct DefinitionBase : sg::DispatchHandler<const SgExpression*>
{
  void handle(const SgNode& n)            { sg::unexpected_node(n); }
  void handle(const SgExpression& n)      { res = &n; }
  void handle(const SgInitializedName& n) { res = n.get_initializer(); }
};

static
ReachingDefList
find_reaching_defs(ReachingDef::ReachingDefPtr rdef)
{
  const SgNode*        defnode = rdef->getDefinitionNode();
  // return sg::dispatch(ReachingDefFinder(), rdef.getDefinitionNode());
  const SgExpression*  expbase = sg::dispatch(DefinitionBase(), defnode);
  SSAPredicate::SSARep defset;
  ReachingDefList      res;

  if (expbase)
  {
    defset = SSAPredicate::varsUsed(*expbase);
  }

  std::copy(defset.begin(), defset.end(), std::back_inserter(res));
  return res;
}

static
ReachingDefList
get_preceding_defs(ReachingDef::ReachingDefPtr rdef)
{
  typedef ReachingDef::ReachingDefPtr                                ReachingDefPtr;
  typedef ReachingDef::FilteredCfgEdge                               FilteredCfgEdge;
  typedef const std::map<ReachingDefPtr, std::set<FilteredCfgEdge> > PhiNodeExpansion;

  ReachingDefList        res;

  // if this is the first visit, go through all reaching definitions
  if (rdef->isPhiFunction())
  {
    PhiNodeExpansion&    originialdefs = rdef->getJoinedDefs();

    std::transform( originialdefs.begin(),
                    originialdefs.end(),
                    std::back_inserter(res),
                    select_first<PhiNodeExpansion::key_type, PhiNodeExpansion::mapped_type>
                  );
  }
  else
  {
    // expbase = NULL, iff defexp is an SgInitializedName without initializer
    // \todo check that this can occur
    res = find_reaching_defs(rdef);
  }

  return res;
}


InductionEquation
InductionVariableAnalyzer::getInductionEquation(const VertexSet& vs, ReachingDefPtr def)
{
  ReachingDefList worklist = get_preceding_defs(def);

  while (!worklist.empty())
  {

  }
}



InductionVariableAnalyzer::DetectionResult
InductionVariableAnalyzer::detectCycles(ReachingDefPtr rdef, ReachingDefPtr startnode)
{
  VertexSet             res;
  insert_result_type    ins = loopdata.insert(LoopDataMap::value_type(rdef, rdkVisiting));
  LoopDataMap::iterator pos = ins.first;

  // if the entry was already discovered, we are done and can return
  if (!ins.second)
  {
    // if this is the loop
    if (rdef == startnode)
    {
      pos->second = rdkLoop;
      res.insert(rdef);
    }

    return DetectionResult(res, pos->second);
  }

  ReachingDefList       worklist = get_preceding_defs(rdef);
  Status                tmpstt = pos->second;

  // first time visiting the node
  while (!worklist.empty())
  {
    // do not yet update the entry as it can be modified during recursion
    DetectionResult sub = detectCycles(worklist.back(), startnode);

    res.insert(sub.first.begin(), sub.first.end());
    tmpstt = std::max(tmpstt, sub.second);

    worklist.pop_back();
  }

  // store back the result
  pos->second = tmpstt;

  // return the new vertices in the loop
  if (tmpstt == rdkLoop) res.insert(rdef);

  return DetectionResult(res, pos->second);
}



struct PredicateAnalyzer
{
  typedef SSAPredicate::SSARep                    SSARep;
  typedef dfpred::PredicateAnalysis<SSAPredicate> predicate_analysis;
  typedef predicate_analysis::lattice_type        lattice_type;
  typedef predicate_analysis::predicate_set       predicate_set;

  predicate_analysis*        analysisKey;
  hssa_private::HeapSSA&     hssa;
  InductionVariableAnalyzer& ssaanalyzer;

  PredicateAnalyzer(predicate_analysis* ansyskey, hssa_private::HeapSSA& ssacomp, InductionVariableAnalyzer& loopmem)
  : analysisKey(ansyskey), hssa(ssacomp), ssaanalyzer(loopmem)
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

    predicate_analysis*       analysisKey;
    hssa_private::HeapSSA&    hssa;
    InductionVariableAnalyzer ssaanalyzer;

    explicit
    PredicateAnalysisTraversal(predicate_analysis* ansyskey, hssa_private::HeapSSA& ssacomp)
    : analysisKey(ansyskey), hssa(ssacomp), ssaanalyzer()
    {}

    void visit(SgNode* n);
    void atTraversalEnd() {}
};

void PredicateAnalysisTraversal::visit(SgNode* n)
{
  sg::dispatch(PredicateAnalyzer(analysisKey, hssa, ssaanalyzer), n);
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
  PredicateAnalysisTraversal analysis(&pa, hssa);

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
