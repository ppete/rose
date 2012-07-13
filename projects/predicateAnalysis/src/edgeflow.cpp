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
  typedef ReachingDef::ReachingDefPtr ReachingDefPtr;

  ReachingDefPtr masterphi;

  explicit
  HasSecondaryPhiNode(ReachingDefPtr phi)
  : masterphi(phi)
  {}

  bool operator()(ReachingDefPtr ssanode) const
  {
    return ssanode->isPhiFunction() && (masterphi != ssanode);
  }
};

struct IncrementType
{
  typedef int                              constant_type;
  typedef std::vector<const SgExpression*> variable_increment;

  IncrementType()
  : valid(false), base(0), summands()
  {}

  IncrementType operator-() const
  {
    IncrementType tmp;

    tmp.valid = this->valid;
    tmp.base  = -this->base;

    // cannot handle yet negation of SgExpression nodes
    assert(this->summands.empty());
    return tmp;
  }

  IncrementType& operator+=(const IncrementType& rhs)
  {
    valid = valid && rhs.valid;
    base += rhs.base;

    std::copy(rhs.summands.begin(), rhs.summands.end(), std::back_inserter(summands));
    return *this;
  }

  IncrementType& operator-=(const IncrementType& rhs)
  {
    return *this += -rhs;
  }

  friend
  IncrementType operator+(const IncrementType& lhs, const IncrementType& rhs)
  {
    IncrementType tmp(lhs);

    tmp += rhs;
    return tmp;
  }

  friend
  IncrementType operator-(const IncrementType& lhs, const IncrementType& rhs)
  {
    return lhs + (-rhs);
  }

  friend
  bool operator==(const IncrementType& lhs, const IncrementType& rhs)
  {
    return lhs.valid == rhs.valid && lhs.base == rhs.base && lhs.summands == rhs.summands;
  }

  bool                valid;
  constant_type       base;
  variable_increment  summands;
};

struct InductionEquation
{
  typedef ReachingDef::ReachingDefPtr ReachingDefPtr;
  typedef IncrementType               increment_type;

  ReachingDefPtr init;
  increment_type increment;
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

    if (!validateLoopModel(res, rdef)) return;

    InductionEquation ivar = getInductionEquation(res, rdef);
  }

  static
  InductionEquation getInductionEquation(const VertexSet& vs, ReachingDefPtr startpoint);

  static
  bool validateLoopModel(const VertexSet& vs, ReachingDefPtr startpoint)
  {
    VertexSet::const_iterator zz  = vs.end();

    return std::find_if(vs.begin(), zz, HasSecondaryPhiNode(startpoint)) == zz;
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

static
ReachingDefList find_reaching_defs(const SgNode* defnode);

static
bool contains(const InductionVariableAnalyzer::VertexSet& vs, const InductionVariableAnalyzer::VertexSet::value_type& elem)
{
  return vs.find(elem) != vs.end();
}

struct IsVertexSetMember
{
  typedef InductionVariableAnalyzer::VertexSet VertexSet;

  const VertexSet& vs;

  explicit
  IsVertexSetMember(const VertexSet& vertexset)
  : vs(vertexset)
  {}

  bool operator()(const VertexSet::value_type& elem)
  {
    return contains(vs, elem);
  }
};

struct SymbolicEvalHandler : sg::DispatchHandler< InductionEquation::increment_type >
{
  typedef InductionVariableAnalyzer::VertexSet VertexSet;

  const VertexSet& vs;

  explicit
  SymbolicEvalHandler(const VertexSet& vertexset)
  : Base(), vs(vertexset)
  {}

  ReturnType invalid()
  {
    return ReturnType();
  }

  ReturnType eval(const SgExpression&)
  {
    return invalid();
  }

  template <class VarType, class ValType>
  void eval_constant_value(VarType& val, bool& valid, ValType n)
  {
    ROSE_ASSERT(!valid);

    // test whether the used constant representation can hold the
    //   constant value
    //   \todo raise/report error if not?
    if (std::numeric_limits<VarType>::min() > n) return;
    if (std::numeric_limits<VarType>::max() < n) return;

    valid = true;
    val = n;
  }

  template <class SageValueNode>
  ReturnType eval_constant(const SageValueNode& n)
  {
    ReturnType res;

    eval_constant_value(res.base, res.valid, n.get_value());

    return res;
  }

  ReturnType eval(const SgCharVal& n)                { return eval_constant(n); }
  ReturnType eval(const SgUnsignedLongLongIntVal& n) { return eval_constant(n); }
  ReturnType eval(const SgIntVal& n)                 { return eval_constant(n); }
  ReturnType eval(const SgLongIntVal& n)             { return eval_constant(n); }
  ReturnType eval(const SgLongLongIntVal& n)         { return eval_constant(n); }
  ReturnType eval(const SgShortVal& n)               { return eval_constant(n); }
  ReturnType eval(const SgUnsignedCharVal& n)        { return eval_constant(n); }
  ReturnType eval(const SgUnsignedIntVal& n)         { return eval_constant(n); }
  ReturnType eval(const SgUnsignedLongVal& n)        { return eval_constant(n); }
  ReturnType eval(const SgUnsignedShortVal& n)       { return eval_constant(n); }

  ReturnType recurse(const SgNode* n)
  {
     return sg::dispatch(*this, n);
  }

  // other terms are not interpreted
  ReturnType term(const SgExpression& n, const SgExpression&)
  {
    ReturnType res;

    res.valid = true;
    res.summands.push_back(&n);
    return res;
  }

  // value nodes are handled as constants
  template <class SageValueNode>
  ReturnType term(const SageValueNode& n, const SgValueExp&)
  {
    return eval(n);
  }


  ReturnType increment(ReturnType::constant_type val)
  {
    ReturnType res;

    res.valid = true;
    res.base = val;
    return res;
  }

  ReturnType eval(const SgAssignOp& n)
  {
    return recurse(n.get_rhs_operand());
  }

  ReturnType eval(const SgMinusAssignOp& n)
  {
    ReturnType tmp;

    tmp -= recurse(n.get_rhs_operand());
    return tmp;
  }

  ReturnType eval(const SgPlusAssignOp& n)
  {
    ReturnType tmp;

    tmp += recurse(n.get_rhs_operand());
    return tmp;
  }

  ReturnType eval(const SgAddOp& n)
  {
    return recurse(n.get_lhs_operand()) + recurse(n.get_rhs_operand());
  }

  ReturnType eval(const SgSubtractOp& n)
  {
    return recurse(n.get_lhs_operand()) + recurse(n.get_rhs_operand());
  }

  ReturnType eval(const SgPlusPlusOp&)
  {
    // the underlying expression has to be a reaching definition

    // \todo check post-increment in the loop header
    return increment(1);
  }

  ReturnType eval(const SgMinusMinusOp&)
  {
    // the underlying expression has to be a reaching definition

    // \todo check post-decrement in the loop header
    return increment(-1);
  }

  ReturnType eval(const SgMinusOp& n)
  {
    return -recurse(n.get_operand());
  }

  ReturnType eval(const SgVarRefExp&)
  {
    // we can only get here if this is a relevant definition
    //   since those are handled outside, we can just return 0.
    return increment(0);
  }

  void handle(const SgNode&, const SgNode&) {} // base case \todo do not think we can get here


  bool hasRelevantDefs(const SgNode& n)
  {
    ReachingDefList           deflist = find_reaching_defs(&n);
    ReachingDefList::iterator zz = deflist.end();

    return std::find_if(deflist.begin(), zz, IsVertexSetMember(vs)) != zz;
  }

  template <class SageNode>
  void handle(const SageNode& n, const SgExpression&)
  {
    res = hasRelevantDefs(n) ? eval(n)     // evaluate the node
                             : term(n, n)  // if there is no relevant definition, we store the whole term
                             ;
  }

  template <class SageNode>
  void handle(const SageNode& n)
  {
    handle(n, n);
  }
};


struct DefinitionBase : sg::DispatchHandler<const SgExpression*>
{
  void handle(const SgNode& n)            { sg::unexpected_node(n); }
  void handle(const SgExpression& n)      { res = &n; }
  void handle(const SgInitializedName& n) { res = n.get_initializer(); }
};


// declared static by preceding definition
ReachingDefList
find_reaching_defs(const SgNode* defnode)
{
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
find_reaching_defs(ReachingDef::ReachingDefPtr rdef)
{
  return find_reaching_defs(rdef->getDefinitionNode());
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


static
InductionEquation::increment_type
symbolic_eval(ReachingDef::ReachingDefPtr def, const SymbolicEvalHandler::VertexSet& vs)
{
  if (def->isPhiFunction()) return InductionEquation::increment_type();

  return sg::dispatch( SymbolicEvalHandler(vs), def->getDefinitionNode() );
}

InductionEquation
InductionVariableAnalyzer::getInductionEquation(const VertexSet& vs, ReachingDefPtr def)
{
  ReachingDefList   worklist = get_preceding_defs(def);
  InductionEquation res;

  res.increment = symbolic_eval(def, vs);

  while (!worklist.empty())
  {
    ReachingDefPtr cand = worklist.back();
    const bool     cycleMember = contains(vs, cand);

    worklist.pop_back();

    if (cycleMember)
    {
      if (!cand->isPhiFunction())
      {
        res.increment += getInductionEquation(vs, cand).increment;
      }
      else
      {
        // if cand is a phi-node, then we completed processing the circle
        //   return the default case (do nothing)
      }
    }
    else if (def->isPhiFunction())
    {
      // if def is a phi-node
      //   then we get two ancestors, one being the initializer
      //   (which is not part of the cycle-vertex-list).
      //   the second is the definition in the loop body (which
      //   will be handled above).
      res.init = cand;
    }
    else
    {
      // all other definitions are handled by symbolic_eval
    }
  }

  return res;
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
