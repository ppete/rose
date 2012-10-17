#ifndef COMPOSE_H
#define COMPOSE_H

#include "rose.h"
#include "dataflow.h"
#include "abstract_object.h"
#include "partitions.h"
#include "latticeFull.h" //< needed for BoolAndLattice inheritance

/* GB 2012-09-02: DESIGN NOTE
   Analyses and abstract objects written for the compositional framework must support a wide range of functionality,
   both mandatory (e.g. mayEqual/mustEqual in AbstractObjects) and optional (e.g. Expr2MemLoc() in ComposedAnalysis).
   In general optional functionality should go into the composer, which will then find an implementor for this
 * functionality. Mandatory functionality should be placed as body-less virtual methods that are required for specific
 * instances of AbstractObject and ComposedAnalysis. Note that although we do currently have a way for ComposedAnalyses
 * to provide optional functionality and have the Composer find it, the same is not true for AbstractObjects because
 * thus far we have not found a use-case where we wanted AbstractObject functionality to be optional. This issue
 * may need to be revisited.
*/

// ------------------------------
// ----- Composition Driver -----
// ------------------------------

namespace dataflow {
extern int composerDebugLevel;
class ComposedAnalysis;
class Composer
{
  public:
   // Abstract interpretation functions that return this analysis' abstractions that
   // represent the outcome of the given SgExpression.
   // The objects returned by these functions are expected to be deallocated by their callers.
   virtual ValueObjectPtr       Expr2Val    (SgNode* n, PartPtr p, ComposedAnalysis* client)=0;
   virtual MemLocObjectPtrPair  Expr2MemLoc (SgNode* n, PartPtr p, ComposedAnalysis* client)=0;
   virtual CodeLocObjectPtrPair Expr2CodeLoc(SgNode* n, PartPtr p, ComposedAnalysis* client)=0;

   // Maps and Sets
   /*virtual MemLocSet* NewValueSet()=0;
   virtual ValueSet*  NewValueMap()=0;

   virtual MemLocSet* NewMemLocSet()=0;
   virtual MemLocSet* NewMemLocMap()=0;

   virtual CodeLocSet* NewCodeLocSet()=0;
   virtual CodeLocSet* NewCodeLocMap()=0;*/
};
typedef boost::shared_ptr<Composer> ComposerPtr;

// Wraps all the information required to invoke methods within the composer from
// within a given part and analysis
class ComposerInv
{
protected:
  Composer&         composer;
  PartPtr           part;
  ComposedAnalysis& analysis;

public:
  ComposerInv(Composer& _composer, PartPtr _part, ComposedAnalysis& _analysis) :
  composer(_composer), part(_part), analysis(_analysis)
  {}

  // Abstract interpretation functions that return this analysis' abstractions that
  // represent the outcome of the given SgExpression.
  // The objects returned by these functions are expected to be deallocated by their callers.
  ValueObjectPtr   Expr2Val(SgNode* n)
  { return composer.Expr2Val(n, part, &analysis); }
  MemLocObjectPtrPair Expr2MemLoc(SgNode* n)
  { return composer.Expr2MemLoc(n, part, &analysis); }
  CodeLocObjectPtrPair Expr2CodeLoc(SgNode* n)
  { return composer.Expr2CodeLoc(n, part, &analysis); }

  friend class ComposerExpr2Obj;
  friend class ComposerExpr2Val;
  friend class ComposerExpr2MemLoc;
  friend class ComposerExpr2CodeLoc;
};
typedef boost::shared_ptr<ComposerInv> ComposerInvPtr;

// Wraps all the information requires to invoke the Expr2* method of the composer.
// This class is instantiated with specific classes for invoking Expr2Val, Expr2MemLoc
// and Expr2CodeLoc and these instances can be passed down to generic data structures
// to enable them to create a specific type of AbstractObject without knowing the type
// of object they're creating.
// GREG: Eliminating the common Expr2Obj method since now not all Expr2* methods return
//       AbstractObjectPtrs
class ComposerExpr2Obj
{
  protected:
  Composer&         composer;
  PartPtr           part;
  ComposedAnalysis& analysis;

  public:
  ComposerExpr2Obj(Composer& _composer, PartPtr _part, ComposedAnalysis& _analysis) :
  composer(_composer), part(_part), analysis(_analysis) {}

  //virtual AbstractObjectPtr Expr2Obj(SgNode* n)=0;
};
typedef boost::shared_ptr<ComposerExpr2Obj> ComposerExpr2ObjPtr;

class ComposerExpr2Val: public ComposerExpr2Obj
{
  public:
  ComposerExpr2Val(Composer& composer, PartPtr part, ComposedAnalysis& analysis) :
      ComposerExpr2Obj(composer, part, analysis) {}
  ComposerExpr2Val(ComposerInv civ) : ComposerExpr2Obj(civ.composer, civ.part, civ.analysis) {}

  ValueObjectPtr Expr2Obj(SgNode* n)
  { return composer.Expr2Val(n, part, &analysis); }
};
typedef boost::shared_ptr<ComposerExpr2Val> ComposerExpr2ValPtr;

class ComposerExpr2MemLoc: public ComposerExpr2Obj
{
  public:
  ComposerExpr2MemLoc(Composer& composer, PartPtr part, ComposedAnalysis& analysis) :
  ComposerExpr2Obj(composer, part, analysis) {}
  ComposerExpr2MemLoc(ComposerInv civ) : ComposerExpr2Obj(civ.composer, civ.part, civ.analysis) {}

  MemLocObjectPtrPair Expr2Obj(SgNode* n)
  { return composer.Expr2MemLoc(n, part, &analysis); }
};
typedef boost::shared_ptr<ComposerExpr2MemLoc> ComposerExpr2MemLocPtr;

class ComposerExpr2CodeLoc: public ComposerExpr2Obj
{
  public:
  ComposerExpr2CodeLoc(Composer& composer, PartPtr part, ComposedAnalysis& analysis) :
    ComposerExpr2Obj(composer, part, analysis) {}
  ComposerExpr2CodeLoc(ComposerInv civ) : ComposerExpr2Obj(civ.composer, civ.part, civ.analysis) {}

  CodeLocObjectPtrPair Expr2Obj(SgNode* n)
  { return composer.Expr2CodeLoc(n, part, &analysis); }
};
typedef boost::shared_ptr<ComposerExpr2CodeLoc> ComposerExpr2CodeLocPtr;

template<class RetObject>
class FuncCaller
{
  public:
  // Calls the given analysis' implementation of Expr2Val. The current Part
  // is provided in case the implementation needs it
  virtual boost::shared_ptr<RetObject> operator()(SgNode* n, PartPtr part, ComposedAnalysis* a)=0;
  // Returns the name of the function being called, for debugging purposes
  virtual string funcName()=0;
};

// Simple implementation of a Composer where the analyses form a linear sequence of
// dependences
class ChainComposer : public Composer
{
  SgProject* project;
  list<ComposedAnalysis*> allAnalyses;
  list<ComposedAnalysis*> doneAnalyses;

  public:
  ChainComposer(int argc, char** argv, list<ComposedAnalysis*>& analyses);

  //bool runAnalysis(const Function& func, NodeState* state);
  void runAnalysis();

  // Generic function that looks up the composition chain from the given client
  // analysis and returns the result produced by the first instance of the function
  // called by the caller object found along the way.
  template<class RetObject>
  boost::shared_ptr<RetObject> callServerAnalysisFunc(SgNode* e, PartPtr p, ComposedAnalysis* client,
                                    FuncCaller<RetObject>& caller);

  // Abstract interpretation functions that return this analysis' abstractions that
  // represent the outcome of the given SgExpression.
  // The objects returned by these functions are expected to be deallocated by their callers.
  ValueObjectPtr Expr2Val(SgNode* n, PartPtr p, ComposedAnalysis* client);

  MemLocObjectPtrPair Expr2MemLoc(SgNode* n, PartPtr p, ComposedAnalysis* client);

  CodeLocObjectPtrPair Expr2CodeLoc(SgNode* n, PartPtr p, ComposedAnalysis* client);

  // Maps and Sets
  // (when analyses can implement these internally, these functions will also invoke
  //  callServerAnalysisFunc)
  /*ValueSet* NewValueSet()  { return new ValueSet(); }
  ValueMap* NewValueMap()  { return new ValueMap(); }

  MemLocSet* NewMemLocSet() { return new MemLocSet(); }
  MemLocMap* NewMemLocMap() { return new MemLocMap(); }

  CodeLocSet* NewCodeLocSet() { return new CodeLocSet(); }
  CodeLocMap* NewCodeLocMap() { return new CodeLocMap(); }*/
};
}; //namespace dataflow

// --------------------
// ----- Analyses -----
// --------------------
namespace dataflow {
class FunctionState;

class NotImplementedException
{};

class InterProceduralDataflow : virtual public InterProceduralAnalysis
{
        public:
        InterProceduralDataflow(IntraProceduralDataflow* intraDataflowAnalysis);

        // the transfer function that is applied to SgFunctionCallExp nodes to perform the appropriate state transfers
        // fw - =true if this is a forward analysis and =false if this is a backward analysis
        // n - the dataflow node that is being processed
        // state - the NodeState object that describes the dataflow state immediately before (if fw=true) or immediately after
        //         (if fw=false) the SgFunctionCallExp node, as established by earlier analysis passes
        // dfInfo - the Lattices that this transfer function operates on. The function propagates them
        //          to the calling function and overwrites them with the dataflow result of calling this function.
        // retState - Pointer reference to a Lattice* vector that will be assigned to point to the lattices of
        //          the function call's return value. The callee may not modify these lattices.
        // Returns true if any of the input lattices changed as a result of the transfer function and
        //    false otherwise.
#if OBSOLETE_CODE
        virtual bool transfer(const Function& func, PartPtr p, NodeState& state,
                              const std::vector<Lattice*>& dfInfo/*, std::vector<Lattice*>** retState, bool fw*/)=0;
#endif /* OBSOLETE_CODE */

        virtual bool transfer(const Function& func, PartPtr p, NodeState& state,
                              LatticePtr dfInfo /*, ConstLatticePtr& retState, bool fw*/) = 0;

};

class InitDataflowState : public UnstructuredPassIntraAnalysis
{
        //std::vector<Lattice*> initState;
        IntraProceduralDataflow* dfAnalysis;

        public:
        InitDataflowState(IntraProceduralDataflow* dfAnalysis/*, std::vector<Lattice*> &initState*/)
        {
                this->dfAnalysis = dfAnalysis;
                this->filter = dfAnalysis->filter; // Must transfer the custom CFG filter, this is tricky!!
                //this->initState = initState;
        }

        void visit(const Function& func, PartPtr p, NodeState& state);
};

// Analysis that finds the Parts that corresponds to calls to a given set of functions
class FindAllFunctionCalls : public UnstructuredPassIntraAnalysis
{
        // The set of functions that we wish to find the calls to
        const std::set<Function>& funcsToFind;

        // Maps each function in funcsToFind to a set of Parts that hold calls to this function
        std::map<Function, std::set<PartPtr> > funcCalls;

        public:
        FindAllFunctionCalls(const std::set<Function>& funcsToFind): funcsToFind(funcsToFind)
        { }

        void visit(const Function& func, PartPtr p, NodeState& state);

        // Returns a reference to funcCalls
        std::map<Function, std::set<PartPtr> >& getFuncCalls() { return funcCalls; }
};

/* Base class of Uni-directional (Forward or Backward) Intra-Procedural Dataflow Analyses */
class IntraUniDirectionalDataflow : public IntraUnitDataflow
{
  public:
  typedef std::vector<PartEdge>      ConnectionContainer; // \todo rename to OutEdgeContainer
  typedef enum {fw=0, bw=1, none=2}  direction;

  // Runs the intra-procedural analysis on the given function and returns true if
  // the function's NodeState gets modified as a result and false otherwise
  // state - the function's NodeState
  // analyzeFromDirectionStart - If true the function should be analyzed from its starting point from the analysis'
  //    perspective (fw: entry point, bw: exit point)
  void runAnalysis(const Function& func, NodeState* state, bool analyzeFromDirectionStart, std::set<Function> calleesUpdated);

  // propagates the dataflow info from the current node's NodeState (curNodeState) to the next node's
  // NodeState (nextNodeState)
  // \pp removed nodeIndex... does not seem to be used
  bool propagateStateToNextNode(ConstLatticePtr currNodeState, PartPtr curNode,
                                LatticePtr nextNodeState, PartPtr nextNode);

#if OBSOLETE_CODE
        ConnectionContainer gatherDescendants(std::vector<DataflowEdge> edges, DataflowNode (DataflowEdge::*edgeFn)() const);
#endif /* OBSOLETE_CODE */

  /// returns the origin node of the dataflow edge @e.
  virtual DataflowNode flowSource(const DataflowEdge& e) = 0;
  virtual DataflowNode flowTarget(const DataflowEdge& e) = 0;

  virtual NodeState*initializeFunctionNodeState(const Function &func, NodeState *fState) = 0;
  //virtual VirtualCFG::dataflowIterator*
  virtual std::list<PartPtr>
    getInitialWorklist(const Function &func, bool analyzeFromDirectionStart, const set<Function> &calleesUpdated, NodeState *fState) = 0;


  virtual LatticePtr getLatticeAnte(NodeState *state) = 0;
  virtual LatticePtr getLatticePost(NodeState *state) = 0;

  // If we're currently at a function call, use the associated inter-procedural
  // analysis to determine the effect of this function call on the dataflow state.
  virtual void transferFunctionCall(const Function &caller, PartPtr p, NodeState *state) = 0;
  virtual ConnectionContainer getDescendants(PartPtr p) = 0;

  virtual PartPtr getUltimate(const Function &func) = 0;
  virtual VirtualCFG::dataflowIterator* getIterator(const Function &func) = 0;

  virtual direction getDirection() = 0;
public:

  using IntraUnitDataflow::transfer; // do not hide the inherited transfer

    /// \brief   the transfer function that is applied to every control flow edge.
    /// \param   func - the function that is being processed
    /// \param   n - the dataflow node that is being processed
    /// \param   state - the NodeState object that describes the state of the node, as established by earlier
    ///          analysis passes
    /// \param   dfInfo - the Lattices that this transfer function operates on. The function takes these lattices
    ///          as input and overwrites them with the result of the transfer. If data transfer along
    ///          an edge is infeasible the state of dfInfo's lattices should be set to uninitialized.
    /// \return  true, iff the edge can be taken (lattice will get propagated to the target node)
    /// \details the default implementation calls the transfer function
    ///          defined on DataflowNode (called on the source of the
    ///          dataflow-edge e).
    /// \note    (1) sage type sensitive implementations are encouraged to discern
    ///              sage nodes using the visitor pattern. See also the comment
    ///              for convenience functions IntraUnitDataflow::visitor_transfer.
    ///          (2) this overloads the transfer function IntraUnitDataflow::transfer
    ///              with an edge sensitive transfer function.
    virtual bool transfer(const Function& func, const DataflowEdge& e, NodeState& state, LatticePtr dfInfo);

  private:

    /// encapsulates transfer function invocation along edges
    void edge_transfer(const Function& func, PartPtr p, NodeState& state, LatticePtr dfInfo, VirtualCFG::dataflowIterator* it);

    /// encapsulates transfer function invocation for nodes
    void node_transfer(const Function& func, PartPtr p, NodeState& state, LatticePtr dfInfo, VirtualCFG::dataflowIterator* it);

  protected:
    /// returns true, iff the transfer functions should get invoked
    ///   on CFG edges, false otherwise (i.e., CFG nodes)
    virtual bool edgeSensitiveAnalysis() const;
};

class ComposedAnalysis : public virtual IntraUniDirectionalDataflow, public printable
{
  public:
  Composer* composer;

  // Informs this analysis about the identity of the Composer object that composes
  // this analysis with others
  void setComposer(Composer* composer)
  {
    this->composer = composer;
  }

  Composer* getComposer()
  {
    return composer;
  }

  public:
  // Returns the initial Lattice at the given part for this analysis
  /*GOAL: virtual void genInitState(PartPtr p, Lattice** initLattice,
                            std::vector<NodeFact*>& initFacts)=0;*/
  // LEGACY: virtual void genInitState(const Function& func, const PartPtr p, const NodeState& state, std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts)=0;

  // The transfer function for this analysis
  //GOAL: virtual void transfer(SgNode &n, Part& p)=0;
  //LEGACY: virtual bool transfer(const Function& func, const PartPtr p, NodeState& state, const std::vector<Lattice*>& dfInfo)=0;

  // Abstract interpretation functions that return this analysis' abstractions that
  // represent the outcome of the given SgExpression. The default implementations of
  // these throw NotImplementedException so that if a derived class does not implement
  // any of these functions, the Composer is informed.
  //
  // The objects returned by these functions are expected to be deallocated by their callers.
  virtual ValueObjectPtr   Expr2Val    (SgNode* n, PartPtr p) { throw NotImplementedException(); }
  virtual MemLocObjectPtr  Expr2MemLoc  (SgNode* n, PartPtr p) { throw NotImplementedException(); }
  virtual CodeLocObjectPtr Expr2CodeLoc(SgNode* n, PartPtr p) { throw NotImplementedException(); }

  // In the long term we will want analyses to return their own implementations of
  // maps and sets. This is not strictly required to produce correct code and is
  // therefore not supported.
  // Maps and Sets
  /*virtual ValueSet* NewValueSet()  { throw NotImplementedException; }
  virtual ValueMap* NewValueMap()  { throw NotImplementedException; }

  virtual MemLocSet* NewMemLocSet() { throw NotImplementedException; }
  virtual MemLocMap* NewMemLocMap() { throw NotImplementedException; }

  virtual CodeLocSet* NewCodeLocSet() { throw NotImplementedException; }
  virtual CodeLocMap* NewCodeLocMap() { throw NotImplementedException; }*/
};

/* Forward Intra-Procedural Dataflow Analysis */
class IntraFWDataflow  : public ComposedAnalysis
{
  public:

  IntraFWDataflow()
  {}

  NodeState* initializeFunctionNodeState(const Function &func, NodeState *fState);
  //VirtualCFG::dataflowIterator*
  std::list<PartPtr>
  getInitialWorklist(const Function &func/*, bool firstVisit*/, bool analyzeDueToCallers, const set<Function> &calleesUpdated, NodeState *fState);

  LatticePtr getLatticeAnte(NodeState *state);
  LatticePtr getLatticePost(NodeState *state);
  void transferFunctionCall(const Function &func, PartPtr p, NodeState *state);
  PartPtr getUltimate(const Function &func);
  ConnectionContainer getDescendants(PartPtr p);

  VirtualCFG::dataflowIterator* getIterator(const Function &func);

  direction getDirection() { return fw; }
  DataflowNode flowSource(const DataflowEdge&) const;
  DataflowNode flowTarget(const DataflowEdge&) const;
};

/* Backward Intra-Procedural Dataflow Analysis */
class IntraBWDataflow  : public ComposedAnalysis
{
  public:

  IntraBWDataflow()
  {}

  NodeState* initializeFunctionNodeState(const Function &func, NodeState *fState);
  //VirtualCFG::dataflowIterator*
  std::list<PartPtr>
    getInitialWorklist(const Function &func/*, bool firstVisit*/, bool analyzeDueToCallers, const set<Function> &calleesUpdated, NodeState *fState);
   LatticePtr getLatticeAnte(NodeState *state);
   LatticePtr getLatticePost(NodeState *state);

  void transferFunctionCall(const Function &func, PartPtr p, NodeState *state);
  PartPtr getUltimate(const Function &func);
  VirtualCFG::dataflowIterator* getIterator(const Function &func);

  direction getDirection() { return bw; }
  DataflowNode flowSource(const DataflowEdge&) const;
  DataflowNode flowTarget(const DataflowEdge&) const;
  ConnectionContainer getDescendants(PartPtr p);
};

/* Dummy Intra-Procedural Dataflow Analysis that doesn't have a direction but is still a compositional
   analysis (e.g. Syntactic analysis or orthogonal array analysis)*/
class IntraUndirDataflow  : public ComposedAnalysis
{
  public:

  IntraUndirDataflow()
  {}

  NodeState* initializeFunctionNodeState(const Function &func, NodeState *fState) { return NULL; }
  //VirtualCFG::dataflowIterator*
  std::list<PartPtr>
    getInitialWorklist(const Function &func/*, bool firstVisit*/, bool analyzeDueToCallers, const set<Function> &calleesUpdated, NodeState *fState) { std::list<PartPtr> empty; return empty; } //return NULL; }
  LatticePtr getLatticeAnte(NodeState *state) { return LatticePtr(static_cast<Lattice*>(0)); }
  LatticePtr getLatticePost(NodeState *state) { return LatticePtr(static_cast<Lattice*>(0)); }
  void transferFunctionCall(const Function &func, PartPtr p, NodeState *state) {};
  PartPtr getUltimate(const Function &func) { return cfgUtils::getFuncStartCFG(func.get_definition(), filter); }
  VirtualCFG::dataflowIterator* getIterator(const Function &func) { return NULL; }
  ConnectionContainer getDescendants(PartPtr p) { return ConnectionContainer(); }

  direction getDirection() { return none; }
};

/*// Dataflow class that maintains a Lattice for every currently live variable
class IntraFWPerVariableDataflow  : public IntraFWDataflow
{
        private:
        bool includeScalars;
        bool includeArrays;


        public:
        IntraFWPerVariableDataflow(bool includeScalars, bool includeArrays);

        // returns the set of global variables(scalars and/or arrays)
        varIDSet& getGlobalVars();

        // returns the set of variables(scalars and/or arrays) declared in this function
        varIDSet& getLocalVars(Function func);

        // returns the set of variables(scalars and/or arrays) referenced in this function
        varIDSet& getRefVars(Function func);

        // generates the initial variable-specific lattice state for a dataflow node
        virtual Lattice* genInitVarState(const Function& func, PartPtr p, const NodeState& state)=0;

        // generates the initial non-variable-specific lattice state for a dataflow node
        virtual Lattice* genInitNonVarState(const Function& func, PartPtr p, const NodeState& state)=0;

        // Generates a map of special constant variables (such as zeroVar) and the lattices that correspond to them
        // These lattices are assumed to be constants: it is assumed that they are never modified and it is legal to
        //    maintain only one copy of each lattice may for the duration of the analysis.
        virtual std::map<varID, Lattice*> genConstVarLattices() const=0;

        private:
        // maps variables to the index of their respective Lattice objects in a given function
        std::map<Function, std::map<varID, int> > varLatticeIndex;
        // map of lattices that correspond to constant variables
        std::map<varID, Lattice*> constVarLattices;
        // =true if constVarLattices has been initialized and =false otherwise
        bool constVarLattices_init;

        public:
        // generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
        std::vector<Lattice*> genInitState(const Function& func, PartPtr p, const NodeState& state);

        Lattice* getVarLattice(const Function& func, const varID& var, const std::vector<Lattice*>& dfInfo);
};*/

/******************************************************
 ***            printDataflowInfoPass               ***
 *** Prints out the dataflow information associated ***
 *** with a given analysis for every CFG node a     ***
 *** function.                                      ***
 ******************************************************/
class printDataflowInfoPass : public IntraFWDataflow
{
        Analysis* analysis;

        public:
        printDataflowInfoPass(Analysis *analysis)
        {
                this->analysis = analysis;
        }

        // generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
        //std::vector<Lattice*> genInitState(const Function& func, PartPtr p, const NodeState& state);
        BoolAndLattice*        genLattice (const Function& func, PartPtr p, const NodeState& state);
        std::vector<NodeFact*> genFacts   (const Function& func, PartPtr p, const NodeState& state);

        // bool transfer(const Function& func, PartPtr p, NodeState& state, const std::vector<Lattice*>& dfInfo);
        void transfer(const Function& func, PartPtr p, NodeState& state, const std::vector<Lattice*>& dfInfo);
};

/**********************************************************************
 ***                 UnstructuredPassInterDataflow                  ***
 *** The trivial inter-procedural dataflow where a intra-procedural ***
 *** dataflow analysis is executed once on every function in the    ***
 *** application, with no guarantees about how dataflow information ***
 *** is transmitted across function calls.                          ***
 **********************************************************************/
class UnstructuredPassInterDataflow : virtual public InterProceduralDataflow
{
        protected:
        // Keeps track of the functions that have already been visited and thus initialized by this inter analysis
        std::set<Function> visited;

        public:
        UnstructuredPassInterDataflow(IntraProceduralDataflow* intraDataflowAnalysis)
                             : InterProceduralAnalysis((IntraProceduralAnalysis*)intraDataflowAnalysis), InterProceduralDataflow(intraDataflowAnalysis)
        {}

        // the transfer function that is applied to SgFunctionCallExp nodes to perform the appropriate state transfers
        // fw - =true if this is a forward analysis and =false if this is a backward analysis
        // n - the dataflow node that is being processed
        // state - the NodeState object that describes the dataflow state immediately before (if fw=true) or immediately after
        //         (if fw=false) the SgFunctionCallExp node, as established by earlier analysis passes
        // dfInfo - the Lattices that this transfer function operates on. The function propagates them
        //          to the calling function and overwrites them with the dataflow result of calling this function.
        // retState - Pointer reference to a Lattice* vector that will be assigned to point to the lattices of
        //          the function call's return value. The callee may not modify these lattices.
        // Returns true if any of the input lattices changed as a result of the transfer function and
        //    false otherwise.
        bool transfer(const Function& func, PartPtr p, NodeState& state,
                      LatticePtr dfInfo /*, std::vector<Lattice*>** retState, bool fw*/)
        {
                return false;
        }

        void runAnalysis();
};

// Analysis that merges the dataflow states belonging to the given Analysis at all the return statements in the given function
// and produces a list of merged lattices (same number of lattices as were maintained by the nodes in the function).
// NOTE: The callers of this analysis are responsible for deallocating the lattices stored in mergedLatsRetVal at the
//       end of the analysis pass.
class MergeAllReturnStates : public UnstructuredPassIntraAnalysis
{
        // Analysis the states of which we'll be merging
        ComposedAnalysis* analysis;

        // List of merged lattices of all the return statements and the returned values
        //LatticePtr _mergedLatsRetStmt;
        LatticePtr _mergedLatsRetVal;

        protected:
        // After the pass is complete, records true if the state of the mergedLattices changed
        // during the analysis and false otherwise
        bool modified;

        public:
        MergeAllReturnStates(ComposedAnalysis* analysis/*, ab latSide*/)
        : analysis(analysis), _mergedLatsRetVal(), modified(false)/*, latSide(latSide)*/
        {}

        MergeAllReturnStates(ComposedAnalysis* analysis, /*const std::vector<Lattice*>& mergedLatsRetStmt, */LatticePtr mLatsRetVal/*, ab latSide*/)
        : analysis(analysis), _mergedLatsRetVal(mLatsRetVal), modified(false) /*, latSide(latSide)*/
        {}

        void visit(const Function& func, PartPtr p, NodeState& state);

        // Merges the lattices in the given vector into mergedLat, which may be mergedLatsRetStmt or mergedLatsRetVal
        // Returns true of mergedLatsStmt changes as a result and false otherwise.
        static bool mergeLats(LatticePtr& mergedLat, ConstLatticePtr lats);

/* \pp needed?
        // Returns a reference to mergedLatsRetStmt
        LatticePtr getMergedLatsRetStmt() { return _mergedLatsRetStmt; }

        // Returns a reference to mergedLatsRetVal
        LatticePtr getMergedLatsRetVal() { return _mergedLatsRetVal; }
*/

        // Returns the value of modified
        bool getModified() { return modified; }

        // Deallocates all the merged lattices
        ~MergeAllReturnStates() {}
};


// Analysis that takes the dataflow state belonging to the given Analysis and initializes to this state all the
//   return statements in the given function and its end. The return value at each return statement is associated
//   with the portion of the lattice mapped to the function's SgSymbol
// NOTE: This pass does not modify the Lattices in lats.
class SetAllReturnStates : public UnstructuredPassIntraAnalysis
{
        // Analysis the states of which we'll be setting
        ComposedAnalysis* analysis;

        // List of lattices to assign the function's returns to
        LatticePtr lats;

        protected:
        // After the pass is complete, records true if the state of the lattices at function end or return
        // statements and false otherwise
        bool modified;

        public:
        SgFunctionParameterList* paramList;
        NodeState* paramsState;

        public:

        explicit
        SetAllReturnStates(ComposedAnalysis* analysis)
        : analysis(analysis), lats(), modified(false), paramList(0), paramsState(0)
        {}

        SetAllReturnStates(ComposedAnalysis* analysis, LatticePtr lats)
        : analysis(analysis), lats(lats), modified(false), paramList(0), paramsState(0)
        {}

        void visit(const Function& func, PartPtr p, NodeState& state);

        // Merges the lattices in the given vector into mergedLat, which may be mergedLatsRetStmt or mergedLatsRetVal
        // Returns true of mergedLatsStmt changes as a result and false otherwise.
        static bool mergeLats(LatticePtr mergedLat, ConstLatticePtr lats);

        // Returns the value of modified
        bool getModified() { return modified; }
};
/*
// A NodeFact associated with a FunctionState that stores the merge of the lattices immediately
// above all return statements in a given function.
class DFStateAtReturns : public NodeFact
{
        // The dataflow state at the end of the function, merged over all the return statements
        // and the implicit return at the end of the function
        std::vector<Lattice*>& latsAtFuncReturn;
        // The dataflow state of the return value, merged over all the return statements
        std::vector<Lattice*>& latsRetVal;

        public:
        //DFStateAtReturns();

        DFStateAtReturns(std::vector<Lattice*>& latsAtFuncReturn, std::vector<Lattice*>& latsRetVal);

        // Returns a copy of this node fact
        NodeFact* copy() const;

        // Applies the MergeAllReturnStates analysis on the given function, incorporating the results into
        // the lattices held by this object.
        // Returns true of the lattices change as a result and false otherwise.
        bool mergeReturnStates(const Function& func, FunctionState* fState, ComposedAnalysis* intraAnalysis);

        // Returns a reference to latsAtFuncReturn
        std::vector<Lattice*>& getLatsAtFuncReturn() { return latsAtFuncReturn; }

        // Returns a reference to latsRetVal
        std::vector<Lattice*>& getLatsRetVal() { return latsRetVal; }

        std::string str(std::string indent);
};
*/

class ContextInsensitiveInterProceduralDataflow : virtual public InterProceduralDataflow, public TraverseCallGraphDataflow
{
        // list of functions that still remain to be processed
        //list<Function> remaining;

        // The functions that still remain to be processed.

        // These functions need to be processed because they are called by functions that have been processed
        // or are called at startup such as main() and the constructors of static objects.
        std::set<Function> remainingDueToCallers;

        // Each function F in this map needs to be processed because it has called other functions and those functions
        // have now been analyzed and the dataflow information at their exit points has changed since the last time
        // F was analyzed. remainingDueToCalls maps each F to all such functions. As such, F needs to be re-analyzed,
        // starting at the calls to these functions.
        std::map<Function, std::set<Function> > remainingDueToCalls;

        // Keeps track of the functions that have already been visited and thus initialized by this inter analysis
        std::set<Function> visited;

        public:
        ContextInsensitiveInterProceduralDataflow(IntraUniDirectionalDataflow* intraDataflowAnalysis, SgIncidenceDirectedGraph* graph) ;

        // Since ContextInsensitiveInterProceduralDataflow takes in only Composed intra analyses,
        // this method is a simple way to get access to the intra analysis with the right type.
        ComposedAnalysis* getIntraComposeAnalysis() {
          ComposedAnalysis* ca = dynamic_cast<ComposedAnalysis*>(intraAnalysis);
          ROSE_ASSERT(ca);
          return ca;
        }

        public:

        // the transfer function that is applied to SgFunctionCallExp nodes to perform the appropriate state transfers
        // fw - =true if this is a forward analysis and =false if this is a backward analysis
        // n - the dataflow node that is being processed
        // state - the NodeState object that describes the dataflow state immediately before (if fw=true) or immediately after
        //         (if fw=false) the SgFunctionCallExp node, as established by earlier analysis passes
        // dfInfo - the Lattices that this transfer function operates on. The function propagates them
        //          to the calling function and overwrites them with the dataflow result of calling this function.
        // retState - Pointer reference to a Lattice* vector that will be assigned to point to the lattices of
        //          the function call's return value. The callee may not modify these lattices.
        // Returns true if any of the input lattices changed as a result of the transfer function and
        //    false otherwise.
        bool transfer(const Function& func, PartPtr p, NodeState& state,
                      LatticePtr dfInfo /*, , ConstLatticePtr& retState, bool fw*/);

        // Uses TraverseCallGraphDataflow to traverse the call graph.
        void runAnalysis();

        // Runs the intra-procedural analysis every time TraverseCallGraphDataflow passes a function.
        void visit(const CGFunction* func);
};

} // namespace dataflow

#endif
