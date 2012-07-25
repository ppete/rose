#ifndef LIVEDEADMEMANALYSIS_H
#define LIVEDEADMEMANALYSIS_H

#include "compose.h"
#include "VariableStateTransfer.h"
#include "abstract_object_set.h"

#include <map>
#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <boost/shared_ptr.hpp>

namespace dataflow {
extern int liveDeadAnalysisDebugLevel;

// Virtual class that allows users of the LiveDeadVarsAnalysis to mark certain variables as 
// being used inside a function call if the function's body is not available.
// NOTE: not sure where the definition exists for this class
class funcSideEffectUses
{
public:
    // Returns the set of variables that are used in a call to the given function for which a body has not been provided.
    // The function is also provided with the DataflowNode where the function was called, as well as its state.
    virtual std::set<MemLocObjectPtr> usedVarsInFunc(const Function& func, const DataflowNode& n, NodeState& state)=0;
};

class LiveDeadMemTransfer : public IntraDFTransferVisitor
{
    std::string indent;
    AbstractObjectSet* liveLat;
    ComposerExpr2MemLocPtr ceml;

    bool modified;
    /*// Expressions that are assigned by the current operation
    std::set<SgExpression*>   assignedExprs;
    // Variables that are assigned by the current operation
    std::set<MemLocObjectPtr> assignedMem;
    // Variables that are used/read by the current operation
    std::set<MemLocObjectPtr> usedMem;*/
    AbstractObjectSet assigned;
    AbstractObjectSet used;

    funcSideEffectUses *fseu;

    friend class LDMAExpressionTransfer;

    // Note that the variable corresponding to this expression is assigned
    void assign(SgExpression *);
    void assign(AbstractObjectPtr mem);
    
    // Note that the variable corresponding to this expression is used
    void use(SgExpression *);
    void use(AbstractObjectPtr mem);

public:
LiveDeadMemTransfer(const Function &f, const DataflowNode &n, NodeState &s, const std::vector<Lattice*> &d, ComposerExpr2MemLocPtr ceml_, funcSideEffectUses *fseu_)
    : IntraDFTransferVisitor(f, n, s, d), indent("    "), 
    liveLat(dynamic_cast<AbstractObjectSet*>(*(dfInfo.begin()))), 
    ceml(ceml_), modified(false), fseu(fseu_)
    {
        if(liveDeadAnalysisDebugLevel>=1) Dbg::dbg << indent << "LiveDeadMemTransfer: liveLat="<<liveLat->str(indent + "    ")<<std::endl;
        // Make sure that all the lattice is initialized
        liveLat->initialize();
    }

    bool finish();

    void visit(SgExpression *);
    void visit(SgInitializedName *);
    void visit(SgReturnStmt *);
    void visit(SgExprStatement *);
    void visit(SgCaseOptionStmt *);
    void visit(SgIfStmt *);
    void visit(SgForStatement *);
    void visit(SgWhileStmt *);
    void visit(SgDoWhileStmt *);
};

class LDMemLocObject;

/* Computes an over-approximation of the set of variables that are live at each DataflowNode. It may consider a given
   variable as live when in fact it is not. */
// !!! CURRENTLY THE ANALYSIS IS IMPRECISE BECAUSE:
// !!!    - IF THERE IS A VARIABLE USE WHERE THE IDENTITY OF THE VARIABLE IS COMPUTED THROUGH AN EXPRESSION, WE DO NOT 
// !!!         RESPOND BY CONSERVATIVELY MAKING ALL VARIABLES LIVE.
// !!!    - IT DOES NOT CONSIDER INTERNALS OF ARRAYS OR OTHER HEAP MEMORY
class LiveDeadMemAnalysis : public ComposedAnalysis, public IntraBWDataflow
{
protected:
    funcSideEffectUses* fseu;
    ComposerExpr2MemLocPtr ceml;
    
public:
    LiveDeadMemAnalysis(funcSideEffectUses* fseu=NULL);
    
    // Generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
    void genInitState(const Function& func, const DataflowNode& n, const NodeState& state,
                      std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts);
        
    boost::shared_ptr<IntraDFTransferVisitor> getTransferVisitor(const Function& func, const DataflowNode& n,
                                                                 NodeState& state, const std::vector<Lattice*>& dfInfo)
    { return boost::shared_ptr<IntraDFTransferVisitor>(
    		new LiveDeadMemTransfer(func, n, state, dfInfo, 
    		                        ComposerExpr2MemLocPtr(new ComposerExpr2MemLoc(*getComposer(), (Part&)n, *((ComposedAnalysis*)this))),
    		                        fseu)); }

    bool transfer(const Function& func, const DataflowNode& n, NodeState& state, const std::vector<Lattice*>& dfInfo) { assert(0); return false; }
    
    // Maps the given SgNode to an implementation of the MemLocObject abstraction.
    MemLocObjectPtr Expr2MemLoc (SgNode* e, const Part& p);
    
    // pretty print for the object
    std::string str(std::string indent="")
    { return "LiveDeadMemAnalysis"; }
};

class LDMemLocObject : public MemLocObject
{
  protected:
  MemLocObjectPtr parent;
  LiveDeadMemAnalysis* ldva;
  const DataflowNode& n;
  bool iAmLive;

  public:
  LDMemLocObject(MemLocObjectPtr parent_, LiveDeadMemAnalysis* ldva, const DataflowNode& n);

  bool mayEqual(MemLocObjectPtr o) const;
  
  bool mustEqual(MemLocObjectPtr o) const;
  
  // pretty print for the object
  std::string str(std::string indent="") const;
  std::string str(std::string indent="") { return ((const LDMemLocObject*)this)->str(indent); }
  
  private:
  // Dummy Virtual method to make it possible to dynamic cast from LDMemLocObjectPtr to MemLocObjectPtr
  virtual void foo() {}
};
typedef boost::shared_ptr<LDMemLocObject> LDMemLocObjectPtr;

// Initialize vars to hold all the variables and expressions that are live at DataflowNode n
void getAllLiveMemAt(LiveDeadMemAnalysis* ldva, const DataflowNode& n, const NodeState& state, std::set<AbstractObjectPtr>& vars, std::string indent="");

// Returns the set of variables and expressions that are live at DataflowNode n
std::set<AbstractObjectPtr> getAllLiveMemAt(LiveDeadMemAnalysis* ldva, const DataflowNode& n, const NodeState& state, std::string indent="");

// Returns true if the given MemLocObject must be live at the given DataflowNode
bool isLiveMust(MemLocObjectPtr mem, LiveDeadMemAnalysis* ldva, const DataflowNode& n, const NodeState& state, string indent);

// Returns true if the given MemLocObject may be live at the given DataflowNode
bool isLiveMay(MemLocObjectPtr mem, LiveDeadMemAnalysis* ldva, const DataflowNode& n, const NodeState& state, string indent);

}; // namespace dataflow

#endif
