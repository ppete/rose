#ifndef DEAD_PATH_ELIM_ANALYSIS_H
#define	DEAD_PATH_ELIM_ANALYSIS_H

#include "compose.h"
#include "boost/enable_shared_from_this.hpp"

namespace dataflow
{
/* ######################################
   ##### Live Dead Path Elimination #####
   ###################################### */

// This is an analysis that implements the partition graph, ensuring that all dead paths are eliminated and not
// shown to client analyses.

extern int deadPathElimAnalysisDebugLevel;

class DeadPathElimAnalysis;
class DeadPathElimPart;
typedef CompSharedPtr<DeadPathElimPart> DeadPathElimPartPtr;
class DeadPathElimPartEdge;
typedef CompSharedPtr<DeadPathElimPartEdge> DeadPathElimPartEdgePtr;

class DeadPathElimPart : public FiniteLattice, public Part, public boost::enable_shared_from_this<DeadPathElimPart>
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
  Lattice* remapML(const std::set<pair<MemLocObjectPtr, MemLocObjectPtr> >& ml2ml, PartPtr newPart);
  
  // Adds information about the MemLocObjects in newL to this Lattice, overwriting any information previously 
  //    maintained in this lattice about them.
  // Returns true if the Lattice state is modified and false otherwise.
  bool replaceML(Lattice* newL);
  
  // Computes the meet of this and that and saves the result in this
  // Returns true if this causes this to change and false otherwise
  bool meetUpdate(Lattice* that);
  
  // Set this Lattice object to represent the set of all possible execution prefixes.
  // Return true if this causes the object to change and false otherwise.
  bool setToFull();
  
  // Set this Lattice object to represent the of no execution prefixes (empty set)
  // Return true if this causes the object to change and false otherwise.
  bool setToEmpty();
  
  // Set this Lattice object to represent a dead part
  bool setToDead();
  
  // Pretty print for the object
  std::string str(std::string indent="");
  
  // -------------------------------------------
  // Functions that need to be defined for Parts
  // -------------------------------------------
  
  std::vector<PartEdgePtr> outEdges();
  std::vector<PartEdgePtr> inEdges();
  std::vector<CFGNode> CFGNodes();
  
  // Let A={ set of execution prefixes that terminate at the given anchor SgNode }
  // Let O={ set of execution prefixes that terminate at anchor's operand SgNode }
  // Since to reach a given SgNode an execution must first execute all of its operands it must
  //    be true that there is a 1-1 mapping m() : O->A such that o in O is a prefix of m(o).
  // This function is the inverse of m: given the anchor node and operand as well as the
  //    Part that denotes a subset of A (the function is called on this part), 
  //    it returns a list of Parts that partition O.
  std::list<PartPtr> getOperandPart(SgNode* anchor, SgNode* operand);
  
  bool operator==(const PartPtr& o) const;
  bool operator<(const PartPtr& o)  const;
}; // class DeadPathElimPart

class DeadPathElimPartEdge : public PartEdge {
  // The part that this object is wrapping with live/dead status
  DeadPathElimPartPtr src;
  DeadPathElimPartPtr tgt;
  
  public:
  DeadPathElimPartEdge(DeadPathElimPartPtr src, DeadPathElimPartPtr tgt) : src(src), tgt(tgt) {}
    
  PartPtr source();
  PartPtr target();
  
  bool operator==(const PartEdgePtr& o) const;
  bool operator<(const PartEdgePtr& o)  const;
  
  // Pretty print for the object
  std::string str(std::string indent="");
};

/********************************
 ***** DeadPathElimAnalysis *****
 ********************************/

class DeadPathElimTransfer : public IntraDFTransferVisitor
{
  DeadPathElimAnalysis* dpea;
  PartPtr part;
  bool modified;

  public:
  DeadPathElimTransfer(const Function &f, PartPtr part, NodeState &s, std::map<PartEdgePtr, std::vector<Lattice*> > &d, 
                       DeadPathElimAnalysis* dpea);

  bool finish();

  void visit(SgIfStmt *sgn);
  void visit(SgNode *sgn);
};

class DeadPathElimAnalysis : public IntraFWDataflow
{
  protected:
   
  public:
  DeadPathElimAnalysis();
  
  void genInitState(const Function& func, PartPtr p, const NodeState& state, std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts);
  
  bool transfer(const Function& func, PartPtr part, NodeState& state, 
                std::map<PartEdgePtr, std::vector<Lattice*> >& dfInfo);
  
  boost::shared_ptr<IntraDFTransferVisitor> getTransferVisitor(const Function& func, PartPtr part, NodeState& state, 
                                                               map<PartEdgePtr, vector<Lattice*> >& dfInfo);
  
  // Return the anchor Parts of a given function
  PartPtr GetFunctionStartPart(const Function& func, ComposedAnalysis* client);
  PartPtr GetFunctionEndPart(const Function& func, ComposedAnalysis* client);
  
  // Pretty print for the object
  std::string str(std::string indent="")
  { return "DeadPathElimAnalysis"; }
};

}; //namespace dataflow

#endif	/* DEAD_PATH_ELIM_ANALYSIS_H */

