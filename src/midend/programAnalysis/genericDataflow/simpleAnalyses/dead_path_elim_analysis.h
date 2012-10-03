#ifndef DEAD_PATH_ELIM_ANALYSIS_H
#define	DEAD_PATH_ELIM_ANALYSIS_H

#include "compose.h"

namespace dataflow
{
/* ######################################
   ##### Live Dead Path Elimination #####
   ###################################### */

// This is an analysis that implements the partition graph, ensuring that all dead paths are eliminated and not
// shown to client analyses.

extern int deadPathElimAnalysisDebugLevel;

class DeadPathElimAnalysis;

class DeadPathElimPart : public FiniteLattice, public Part
{
  private:
  // This object's current level in the lattice: (bottom, dead, live)
  enum DPELevel {bottom=0, dead=1, live=2};
  DPELevel level;
  
  // The part that this object is wrapping with live/dead status
  PartPtr base;
  // The DeadPathElimAnalysis that created this part
  DeadPathElimAnalysis* analysis;
  
  public:
  DeadPathElimPart(PartPtr base, DeadPathElimAnalysis* analysis);
  DeadPathElimPart(const DeadPathElimPart& that);
  
  // ----------------------------------------------
  // Functions that need to be defined for Lattices
  // ----------------------------------------------
  void initialize();
  
  // Returns a copy of this lattice
  Lattice* copy() const;
  
  // Overwrites the state of "this" Lattice with "that" Lattice
  void copy(Lattice* that);
  
  bool operator==(Lattice* that) /*const*/;
  
  // Computes the meet of this and that and saves the result in this
  // Returns true if this causes this to change and false otherwise
  bool meetUpdate(Lattice* that);
  
  // Set this Lattice object to represent the set of all possible execution prefixes.
  // Return true if this causes the object to change and false otherwise.
  bool setToFull();
  
  // Set this Lattice object to represent the of no execution prefixes (empty set)
  // Return true if this causes the object to change and false otherwise.
  bool setToEmpty();
  
  // Pretty print for the object
  std::string str(std::string indent="");
  
  // -------------------------------------------
  // Functions that need to be defined for Parts
  // -------------------------------------------
  
  std::vector<PartEdgePtr> outEdges();
  std::vector<PartEdgePtr> inEdges();
  std::vector<CFGNode> CFGNodes();
  
  bool operator==(const PartPtr o) const;
  bool operator<(const PartPtr o)  const;
}; // class DeadPathElimPart

class DeadPathElimPartPartEdge : public PartEdge {
  // The part that this object is wrapping with live/dead status
  PartPtr base;
  bool live;
  
  public:
  DeadPathElimPartPartEdge(PartPtr base, bool live=true) : base(base), live(true) {}
    
  PartPtr source();
  PartPtr target();
  
  bool operator==(const PartEdgePtr o) const;
  bool operator<(const PartEdgePtr o)  const;
};

/********************************
 ***** DeadPathElimAnalysis *****
 ********************************/

class DeadPathElimTransfer : public IntraDFTransferVisitor
{
  DeadPathElimPart* curPart;
  DeadPathElimAnalysis* dpea;
  PartPtr part;

  public:
  DeadPathElimTransfer(const Function &f, PartPtr part, NodeState &s, const std::vector<Lattice*> &d, 
                       DeadPathElimAnalysis* dpea);

  bool finish();

  void visit(SgIfStmt *sgn);
  void visit(SgNode *sgn);
};

class DeadPathElimAnalysis : virtual public IntraFWDataflow
{
  protected:
  //static std::map<varID, Lattice*> constVars;
  //AbstractObjectMap constVars;
   
  public:
  DeadPathElimAnalysis();
  
  void genInitState(const Function& func, PartPtr p, const NodeState& state, std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts);
  
  bool transfer(const Function& func, PartPtr p, NodeState& state, const std::vector<Lattice*>& dfInfo);
  
  boost::shared_ptr<IntraDFTransferVisitor> getTransferVisitor(const Function& func, PartPtr part, NodeState& state, const std::vector<Lattice*>& dfInfo);
  
  // Return the anchor Parts of a given function
  PartPtr GetFunctionStartPart(const Function& func);
  PartPtr GetFunctionEndPart(const Function& func);
  
  // Pretty print for the object
  std::string str(std::string indent="")
  { return "DeadPathElimAnalysis"; }
};

class DeadPathElimAnalysis : virtual public IntraUndirDataflow
{
  // Map that records which parts are live. Maintaining this mapping concretely is important because a given path 
  // is live if any of its predecessors (source parts of incoming edges) are live and thus to determine whether
  // a successor S of a given part P is live, we must look at the predecessors of S that are not P, which will likely
  // induce a large graph search. To avoid the large expense of repeated searches we must store the liveness status
  // of any parts for which it has already been computed. In the current implementation we keep the design simple
  // by pre-computing the liveness status of all parts in each function when we analyze it.
  static std::map<DeadPathElimPartPtr, bool> partLiveness;
  
  public:
  DeadPathElimAnalysis() : IntraUndirDataflow() {}
  
  void runAnalysis(const Function&  func, NodeState* state, bool, std::set<Function>) { }
  
  void genInitState(const Function& func, PartPtr p, const NodeState& state, std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts);
   
  bool transfer(const Function& func, PartPtr p, NodeState& state, const std::vector<Lattice*>& dfInfo) {
    return true;
  }
  
  // Returns true if the given Part is live and false otherwise
  bool isPartLive(DeadPathElimPartPtr part);
   
  // Return the anchor Parts of a given function
  PartPtr GetFunctionStartPart(const Function& func);
  PartPtr GetFunctionEndPart(const Function& func);

  // pretty print for the object
  std::string str(std::string indent="")
  { return "DeadPathElimAnalysis"; }
};

}; //namespace dataflow

#endif	/* DEAD_PATH_ELIM_ANALYSIS_H */

