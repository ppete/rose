#include "dead_path_elim_analysis.h"

using namespace std;

namespace dataflow {

int deadPathElimAnalysisDebugLevel=1;
  
/****************************
 ***** DeadPathElimPart *****
 ****************************/

DeadPathElimPart::DeadPathElimPart(PartPtr base, DeadPathElimAnalysis* analysis) :
  Lattice(base), FiniteLattice(base), level(bottom), base(base), analysis(analysis)
{
}

DeadPathElimPart::DeadPathElimPart(const DeadPathElimPart& that) :
  Lattice(that.base), 
  FiniteLattice(that.base), 
  level(that.level),
  base(that.base),
  analysis(that.analysis)
{
}

// ----------------------------------------------
// Functions that need to be defined for Lattices
// ----------------------------------------------

void DeadPathElimPart::initialize() { }

// Returns a copy of this lattice
Lattice* DeadPathElimPart::copy() const
{ return new DeadPathElimPart(*this); }

// Overwrites the state of "this" Lattice with "that" Lattice
void DeadPathElimPart::copy(Lattice* that_arg)
{
  DeadPathElimPart* that = dynamic_cast<DeadPathElimPart*>(that_arg);
  ROSE_ASSERT(that);
  
  level    = that->level;
  base     = that->base;
  analysis = that->analysis;
}

bool DeadPathElimPart::operator==(Lattice* that_arg) /*const*/
{
  DeadPathElimPart* that = dynamic_cast<DeadPathElimPart*>(that_arg);
  ROSE_ASSERT(that);
  ROSE_ASSERT(level == that->level);
  ROSE_ASSERT(analysis == that->analysis);
  
  return base == that->base;
}

// Called by analyses to transfer this lattice's contents from across function scopes from a caller function 
//    to a callee's scope and vice versa. If this this lattice maintains any information on the basis of 
//    individual MemLocObjects these mappings must be converted, with MemLocObjects that are keys of the ml2ml 
//    replaced with their corresponding values. If a given key of ml2ml does not appear in the lattice, it must
//    be added to the lattice and assigned a default initial value. In many cases (e.g. over-approximate sets 
//    of MemLocObjects) this may not require any actual insertions. If the value of a given ml2ml mapping is 
//    NULL (empty boost::shared_ptr), any information for MemLocObjects that must-equal to the key should be 
//    deleted.
// The function takes newPart, the part within which the values of ml2ml should be interpreted. It corresponds
//    to the code region(s) to which we are remapping.
// remapML must return a freshly-allocated object.
Lattice* DeadPathElimPart::remapML(const std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >& ml2ml, PartPtr newPart) {
  return copy();
}
  
// Adds information about the MemLocObjects in newL to this Lattice, overwriting any information previously 
//    maintained in this lattice about them.
// Returns true if the Lattice state is modified and false otherwise.
bool DeadPathElimPart::replaceML(Lattice* newL)
{
  return false;
}

// Computes the meet of this and that and saves the result in this
// Returns true if this causes this to change and false otherwise
bool DeadPathElimPart::meetUpdate(Lattice* that_arg)
{
  DeadPathElimPart* that = dynamic_cast<DeadPathElimPart*>(that_arg);
  ROSE_ASSERT(that);
  // Don't require that the bases be the same since we commonly union outgoing information from 
  // one part with incoming information on another part
  // ROSE_ASSERT(base==that->base); 
  ROSE_ASSERT(analysis==that->analysis);
  
  // The result of the meet if the max of the lattice points of the two arguments
  bool modified = (level<that->level);
  level = (level<that->level? that->level: level);
  return modified;
}

// Set this Lattice object to represent the set of all possible execution prefixes.
// Return true if this causes the object to change and false otherwise.
bool DeadPathElimPart::setToFull()
{
  bool modified = level!=live;
  level = live;
  return modified;
}

// Set this Lattice object to represent the of no execution prefixes (empty set)
// Return true if this causes the object to change and false otherwise.
bool DeadPathElimPart::setToEmpty()
{
  bool modified = level!=bottom;
  level = bottom;
  return modified;
}

// Set this Lattice object to represent a dead part
// Return true if this causes the object to change and false otherwise.
bool DeadPathElimPart::setToDead()
{
  bool modified = level!=bottom;
  level = dead;
  return modified;
}

// Pretty print for the object
std::string DeadPathElimPart::str(std::string indent)
{
  ostringstream oss;
  oss << "[DeadPathElimPart: level="<<(level==dead? "dead": (level==live? "live": (level==bottom? "bottom": "???")))<<", "<<
                            "base="<<base.str()<<", "<<
                            "analysis="<<analysis->str()<<"]";
  return oss.str();
}

// -------------------------------------------
// Functions that need to be defined for Parts
// -------------------------------------------

vector<PartEdgePtr> DeadPathElimPart::outEdges()
{
  vector<PartEdgePtr> baseEdges = base->outEdges();
  vector<PartEdgePtr> edges;
  
  // The NodeState at the current part
  NodeState* outState = NodeState::getNodeState(analysis, base);
  // Consider all the DeadPathElimParts along all of this part's outgoing edges. Since this is a forward
  // analysis, they are maintained separately
  for(vector<PartEdgePtr>::iterator be=baseEdges.begin(); be!=baseEdges.end(); be++) {
    DeadPathElimPart* outPart = dynamic_cast<DeadPathElimPart*>(outState->getLatticeBelow(analysis, *be, 0));
    ROSE_ASSERT(outPart);
    
    edges.push_back(makePart<DeadPathElimPartEdge>(
                      make_part_from_this(shared_from_this()),
                      // Create a shared pointer from a copy of the raw pointer to make sure that the original 
                      // object is not deleted when the reference count drops to 0.
                      init_part(dynamic_cast<DeadPathElimPart*>(outPart->copy()))));
  }
  return edges;
}

vector<PartEdgePtr> DeadPathElimPart::inEdges()
{
  vector<PartEdgePtr> baseEdges = base->inEdges();
  vector<PartEdgePtr> edges;
  
  // Since this is a forward analysis, information from preceding parts is aggregated under the NULL edge
  // of this part. As such, to get the parts that lead to this part we need to iterate over the incoming edges
  // and then look at the parts they arrive from.
  for(vector<PartEdgePtr>::iterator be=baseEdges.begin(); be!=baseEdges.end(); be++) {
    NodeState* inState = NodeState::getNodeState(analysis, (*be)->source());
    DeadPathElimPart* inPart = dynamic_cast<DeadPathElimPart*>(inState->getLatticeAbove(analysis, *be, 0));
    ROSE_ASSERT(inPart);
    
    edges.push_back(makePart<DeadPathElimPartEdge>(
                      // Create a shared pointer from a copy of the raw pointer to make sure that the original 
                      // object is not deleted when the reference count drops to 0.
                      init_part(dynamic_cast<DeadPathElimPart*>(inPart->copy())),
                      make_part_from_this(shared_from_this())));
  }
  return edges;
}

vector<CFGNode> DeadPathElimPart::CFGNodes()
{
  return base->CFGNodes();
}

// Let A={ set of execution prefixes that terminate at the given anchor SgNode }
// Let O={ set of execution prefixes that terminate at anchor's operand SgNode }
// Since to reach a given SgNode an execution must first execute all of its operands it must
//    be true that there is a 1-1 mapping m() : O->A such that o in O is a prefix of m(o).
// This function is the inverse of m: given the anchor node and operand as well as the
//    Part that denotes a subset of A (the function is called on this part), 
//    it returns a list of Parts that partition O.
std::list<PartPtr> DeadPathElimPart::getOperandPart(SgNode* anchor, SgNode* operand)
{
  if(level==live)
    return base->getOperandPart(anchor, operand);
  else
  {
    list<PartPtr> emptyL;
    return emptyL;
  }
}

bool DeadPathElimPart::operator==(const PartPtr& o) const
{
  const DeadPathElimPartPtr that = dynamic_const_part_cast<DeadPathElimPart>(o);
  ROSE_ASSERT(that.get());
  ROSE_ASSERT(level == that->level);
  ROSE_ASSERT(analysis == that->analysis);
  
  return base == that->base;
}

bool DeadPathElimPart::operator<(const PartPtr& o) const
{
  const DeadPathElimPartPtr that = dynamic_const_part_cast<DeadPathElimPart>(o);
  ROSE_ASSERT(that.get());
  ROSE_ASSERT(level == that->level);
  ROSE_ASSERT(analysis == that->analysis);
  
  return base < that->base;
}

/************************************
 ***** DeadPathElimPartEdge *****
 ************************************/
PartPtr DeadPathElimPartEdge::source()
{ return src; }

PartPtr DeadPathElimPartEdge::target()
{ return tgt; }

bool DeadPathElimPartEdge::operator==(const PartEdgePtr& o) const
{
  const DeadPathElimPartEdgePtr that = dynamic_const_part_cast<DeadPathElimPartEdge>(o);
  ROSE_ASSERT(that.get());
  return src==that->src && tgt==that->tgt;
}

bool DeadPathElimPartEdge::operator<(const PartEdgePtr& o)  const
{
  const DeadPathElimPartEdgePtr that = dynamic_const_part_cast<DeadPathElimPartEdge>(o);
  ROSE_ASSERT(that.get());

  return src<that->src ||
         (src==that->src && tgt<that->tgt);
}

// Pretty print for the object
std::string DeadPathElimPartEdge::str(std::string indent)
{
  ostringstream oss;
  oss << "[DeadPathElimEdge: "<<src->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;")<<"==>"<<endl;
  oss << "                   "<<tgt->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;")<<"]";
  return oss.str();
}

/*TO DO LIST
----------
- extend ValueObjectPtr to provide the cardinality of the set, a way to enumerate it if finite
- update stx_analysis.C::isLive to use Method 3, using the above API*/

/********************************
 ***** DeadPathElimAnalysis *****
 ********************************/

boost::shared_ptr<IntraDFTransferVisitor> DeadPathElimAnalysis::getTransferVisitor(const Function& func, PartPtr part, 
                                               NodeState& state, std::map<PartEdgePtr, std::vector<Lattice*> >& dfInfo)
{ 
  return boost::shared_ptr<DeadPathElimTransfer>(new DeadPathElimTransfer(func, part, state, dfInfo, this));
}

/********************************
 ***** DeadPathElimTransfer *****
 ********************************/

DeadPathElimTransfer::DeadPathElimTransfer(const Function &f, PartPtr part, NodeState &s,  
                                           std::map<PartEdgePtr, std::vector<Lattice*> > &dfInfo, DeadPathElimAnalysis* dpea)
   : IntraDFTransferVisitor(f, part, s, dfInfo),
     dpea(dpea),
     part(part),
     modified(false)
{ }

bool DeadPathElimTransfer::finish() { 
  return modified;
}

void DeadPathElimTransfer::visit(SgIfStmt *sgn)
{
  Dbg::dbg << "DeadPathElimTransfer::visit(SgIfStmt), conditional="<<cfgUtils::SgNode2Str(sgn->get_conditional())<<" isSgExprStmt="<<isSgExprStatement(sgn->get_conditional())<<endl;
  if(SgExprStatement* es=isSgExprStatement(sgn->get_conditional())) {
    Dbg::dbg << "es->expression="<<cfgUtils::SgNode2Str(es->get_expression())<<endl;
    if(isSgCastExp(es->get_expression())) {Dbg::dbg << "es->expression_cast="<<cfgUtils::SgNode2Str(isSgCastExp(es->get_expression())->get_operand())<<endl; }
    Dbg::dbg << "es->expression="<<cfgUtils::SgNode2Str(es->get_expression())<<endl;
    Dbg::indent ind;
    ValueObjectPtr val = dpea->getComposer()->OperandExpr2Val(sgn, es->get_expression(), part, dpea);
    Dbg::dbg << "val="<<val->str()<<" isConcrete="<<val->isConcrete()<<endl;
    if(val->isConcrete()) { Dbg::dbg << "concrete value="<<cfgUtils::SgNode2Str(val->getConcreteValue().get())<<" boolCompat="<<ValueObject::isValueBoolCompatible(val->getConcreteValue())<<endl; }
    // If the conditional has a concrete value, replace the NULL-keyed dfInfo with two copies of the lattice for each
    // successor, one of which is live and the other dead
    if(val->isConcrete() && ValueObject::isValueBoolCompatible(val->getConcreteValue())) {
      DeadPathElimPart* truePart = dynamic_cast<DeadPathElimPart*>(*dfInfo[NULLPartEdge].begin());
      DeadPathElimPart* falsePart = dynamic_cast<DeadPathElimPart*>(truePart->copy());
      
      // If the loop condition is true, set the false part to dead
      if(ValueObject::SgValue2Bool(val->getConcreteValue()))
        falsePart->setToDead();
      // If the loop condition is false, set the true part to dead
      else
        truePart->setToDead();
      
      Dbg::dbg << "truePart="<<truePart->str()<<endl;
      Dbg::dbg << "falsePart="<<falsePart->str()<<endl;
      
      // Restructure dfInfo to map each outgoing edge to its corresponding DeadPathElimPart
      std::vector<PartEdgePtr> edges = part->outEdges();
      ROSE_ASSERT(edges.size()==2);
      dfInfo.clear();
      
      vector<Lattice *> trueDfInfo; 
      trueDfInfo.push_back(truePart);
      dfInfo[edges[0]] = trueDfInfo;
      
      vector<Lattice *> falseDfInfo; 
      falseDfInfo.push_back(falsePart);
      dfInfo[edges[1]] = falseDfInfo;
      
      modified = true;
    }
  } else {
    ROSE_ASSERT(0);
  }
}

void DeadPathElimTransfer::visit(SgNode *sgn)
{

}

DeadPathElimAnalysis::DeadPathElimAnalysis()
{}

void DeadPathElimAnalysis::genInitState(const Function& func, PartPtr part, const NodeState& state, 
                                        std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts)
{
  DeadPathElimPart* newPart = new DeadPathElimPart(part, this);
  
  // If this is the entry node of this function, set newPart to live
  if(part == getComposer()->GetFunctionStartPart(func, this))
    newPart->setToFull();
  
  Dbg::dbg << "DeadPathElimAnalysis::genInitState() newPart="<<newPart->str()<<endl;
  initLattices.push_back(newPart);
}

bool DeadPathElimAnalysis::transfer(const Function& func, PartPtr part, NodeState& state, 
                                    std::map<PartEdgePtr, std::vector<Lattice*> >& dfInfo)
{
  assert(0); 
  return false;
}

// Return the anchor Parts of a given function
PartPtr DeadPathElimAnalysis::GetFunctionStartPart(const Function& func, ComposedAnalysis* client)
{
  return makePart<DeadPathElimPart>(getComposer()->GetFunctionStartPart(func, client), this);
}

PartPtr DeadPathElimAnalysis::GetFunctionEndPart(const Function& func, ComposedAnalysis* client)
{
  return makePart<DeadPathElimPart>(getComposer()->GetFunctionEndPart(func, client), this);
}


}; // namespace dataflow