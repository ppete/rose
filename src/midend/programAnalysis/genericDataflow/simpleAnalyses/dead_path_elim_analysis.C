#include "dead_path_elim_analysis.h"

using namespace std;

namespace dataflow {

/****************************
 ***** DeadPathElimPart *****
 ****************************/

DeadPathElimPart::DeadPathElimPart(PartPtr base, DeadPathElimAnalysis* analysis) :
  level(bottom), base(base), analysis(analysis)
{
}

DeadPathElimPart::DeadPathElimPart(const DeadPathElimPart& that) :
  level(that.level), base(that.base), analysis(that.analysis)
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
  DeadPathElimPart* that = dynamic_cast<DeadPathElimPart>(that_arg);
  ROSE_ASSERT(that);
  
  level    = that->level;
  base     = that->base;
  analysis = that->analysis;
}

bool DeadPathElimPart::operator==(Lattice* that) /*const*/
{
  DeadPathElimPart* that = dynamic_cast<DeadPathElimPart>(that_arg);
  ROSE_ASSERT(that);
  
  return level    == that->level &&
         base     == that->base &&
         analysis == that->analysis;
}

// Computes the meet of this and that and saves the result in this
// Returns true if this causes this to change and false otherwise
bool DeadPathElimPart::meetUpdate(Lattice* that)
{
  DeadPathElimPart* that = dynamic_cast<DeadPathElimPart>(that_arg);
  ROSE_ASSERT(that);
  ROSE_ASSERT(base==that.base);
  ROSE_ASSERT(analysis==that.analysis);
  
  // The result of the meet if the max of the lattice points of the two arguments
  bool modified = (level>that.level);
  level = (level<that.level? that.level: level);
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

// Pretty print for the object
std::string DeadPathElimPart::str(std::string indent="")
{
  ostringstream oss;
  oss << "[DeadPathElimPart: level="<<(level==dead? "dead": (level==live? "live": "???"))<<", "<<
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
  
  for(vector<PartEdgePtr>::iterator be=baseEdges.begin(); be=baseEdges.end(); be++) {
    edges.push_back(makePart<DeadPathElimPartPartEdge>(*be, live));
  }
  return edges;
}

vector<PartEdgePtr> DeadPathElimPart::inEdges()
{

}

vector<CFGNode> DeadPathElimPart::CFGNodes()
{

}
  
bool DeadPathElimPart::operator==(const PartPtr o) const
{
  const DeadPathElimPartPtr that = dynamic_part_cast<const DeadPathElimPart>(o);
  ROSE_ASSERT(that);
  
  return level    == that->level &&
         base     == that->base &&
         analysis == that->analysis;
}

bool DeadPathElimPart::operator<(const PartPtr o)  const
{
  const DeadPathElimPartPtr that = dynamic_part_cast<const DeadPathElimPart>(o);
  ROSE_ASSERT(that);
  
  return (base < that->base) ||
         (base == that->base && level < that->level) ||
         (base == that->base && level == that->level && analysis < that->analysis);
}

/*TO DO LIST
----------
- extend ValueObjectPtr to provide the cardinality of the set, a way to enumerate it if finite
- update stx_analysis.C::isLive to use Method 3, using the above API*/

/********************************
 ***** DeadPathElimAnalysis *****
 ********************************/

boost::shared_ptr<IntraDFTransferVisitor> DeadPathElimAnalysis::getTransferVisitor(const Function& func, PartPtr part, 
                                                                 NodeState& state, const std::vector<Lattice*>& dfInfo)
{ return boost::shared_ptr<IntraDFTransferVisitor>(
    		new LiveDeadMemTransfer(func, part, state, dfInfo, 
    		                        this, ComposerExpr2MemLocPtr(new ComposerExpr2MemLoc(*getComposer(), part, *((ComposedAnalysis*)this))),
    		                        fseu));
}

/********************************
 ***** DeadPathElimTransfer *****
 ********************************/

DeadPathElimTransfer::DeadPathElimTransfer(const Function &f, PartPtr part, NodeState &s,  
                                           const std::vector<Lattice*> &d, DeadPathElimAnalysis* dpea)
   : IntraDFTransferVisitor(f, part, s, d),
     curPart(dynamic_cast<AbstractObjectSet*>(*(dfInfo.begin()))), 
     dpea(dpea),
     part(part)
{
   if(deadPathElimAnalysisDebugLevel>=1) {
     Dbg::dbg << "DeadPathElimTransfer: curPart=";
     Dbg::indent ind(deadPathElimAnalysisDebugLevel, 1);
     Dbg::dbg << curPart->str("")<<endl;
   }
   // Make sure that all the lattice is initialized
   liveLat->initialize();
}

bool DeadPathElimTransfer::finish() {}

void DeadPathElimTransfer::visit(SgIfStmt *sgn)
{
  if(SgExpressionStmt* es=isSgExpressionStmt(sgn->get_condition())) {
    ValueObjectPtr val = dpea->getComposer()->OperandExpr2Val(sgn, es->get_expression(), part, dpea);
    if(val->isConcrete()) 
  }
}

void DeadPathElimTransfer::visit(SgNode *sgn);

void runAnalysis(const Function&  func, NodeState* state, bool, std::set<Function>)
{
  dataflowPartIterator partIt(getComposer()->GetFunctionEndPart(func, this));
  PartPtr startPart = getComposer()->GetFunctionStartPart(func, this);
  partIt.add(startPart);
  
  // Initialize the starting part to true
  partLiveness[startPart]=true;
          
  for(; partIt != dataflowPartIterator::end(); partIt++) {
    PartPtr part = *partIt;
    
    if(partLiveness[part]) {
      if(SgIfStmt* ifstmt = part->mustSgNodeAny<SgIfStmt>()) {
        if(isSgExpressionStmt(ifstmt->get_conditional)) {
          /* !!! The part should correspond to the expression itself*/
          ValueObjectPtr = getComposer()->Expr2Val(isSgExpressionStmt(ifstmt->get_conditional)->get_expression(), part);
        }

      }

      vector<CFGNode> nodes = (*partIt)->CFGNodes();
      for()
    // If this part is dead, mark all of its 
    } else {
    
    }
  }
}

void DeadPathElimAnalysis::genInitState(const Function& func, PartPtr p, const NodeState& state, std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts)
{
  
  getComposer()->
}

// Returns true if the given Part is live and false otherwise
bool DeadPathElimAnalysis::isPartLive(DeadPathElimPartPtr part)
{
  ROSE_ASSERT(partLiveness.find(part)!=partLiveness.end());
  return partLiveness[part];
}


}; // namespace dataflow