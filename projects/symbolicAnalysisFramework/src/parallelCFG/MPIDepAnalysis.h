#ifndef _MPIRANKDEPANALYSIS_H
#define _MPIRANKDEPANALYSIS_H

#include "rose.h"
#include "genericDataflowCommon.h"
#include "VirtualCFGIterator.h"
#include "cfgUtils.h"
#include "CallGraphTraverse.h"
#include "analysisCommon.h"
#include "analysis.h"
#include "dataflow.h"
#include "latticeFull.h"
#include "VariableStateTransfer.h"
#include "liveDeadVarAnalysis.h"
#include "printAnalysisStates.h"

extern int MPIDepAnalysisDebugLevel;

/*!
 * Information about a variable's dependence on MPI_Comm_rank or MPI_Comm_size
 */
// NOTE : MPI_Status is also MPI dependant
// NOTE : taintanalysis will suffice ?
class MPIDepLattice : public FiniteLattice
{
    public:
    /*
     *       top
     *     /     \
     *  yes       no
     *     \     /
     *     bottom
     */

    typedef enum {
        top,
        yes,
        no,
        bottom
    } latticeLevel;

    latticeLevel level;
    bool MPIDep;

    MPIDepLattice()
    {
        level = bottom;
        MPIDep = false;
    }

    // copy constructor
    MPIDepLattice(const MPIDepLattice& that)
    {
        this->level = that.level;
        this->MPIDep = that.MPIDep;
    }

    // copy from that
    void copy(const Lattice* that);

    MPIDepLattice* copy() const
    {
        return new MPIDepLattice(*this);
    }

    bool operator==(const Lattice* that) const;

    void setToTop()
    {
        level = top;
    }

    void setToYes()
    {
        level = yes;
        MPIDep = false;
    }

    bool meetUpdate(const Lattice* that);

    latticeLevel getLevel()
    {
        return level;
    }

    void setToNo()
    {
        level = no;
        MPIDep = false;
    }

    void initialize() { }

    void clear() {} // \pp \todo remove

    string str(string indent="");
};

/* inherit VariableStateTransfer
 * VariableStateTransfer implements basic transfer functions to
 * infer information about variables automatically
 */
// requires live dead var analysis
class MPIDepAnalysisTransfer : public VariableStateTransfer<MPIDepLattice>
{
    protected:
    bool modified;
    public:
    /*
     * Mark vars MPI_Comm_rank or MPI_Comm_size
     * as dependant
     */
    void visit(SgFunctionCallExp*);

    bool finish();

    // constructor
    MPIDepAnalysisTransfer(const Function& func, const DataflowNode& n, NodeState& state, Lattice& dfInfo);
};

/*!
 * Analysis to identify MPI dependency for variables
 */
class MPIDepAnalysis : public IntraFWDataflow
{
    LiveDeadVarsAnalysis* ldva;

    public:
    MPIDepAnalysis(LiveDeadVarsAnalysis *_ldva) : ldva(_ldva)
    { }

    FiniteVarsExprsProductLattice*
    genLattice(const Function& func, const DataflowNode& n, const NodeState& state);

    std::vector<NodeFact*>
    genFacts(const Function& func, const DataflowNode& n, const NodeState& state);


    // transfer function that maps current state to next state
    bool transfer(const Function& func, const DataflowNode& n, NodeState& state, LatticePtr dfInfo);

#if OBSOLETE_CODE
    void genInitState(const Function& func, const DataflowNode& n, const NodeState& state,
                      vector<Lattice*>& initLattices, vector<NodeFact*>& initFacts);

    // returns an instance of object that has transfer functions to map from current state to next state
    boost::shared_ptr<IntraDFTransferVisitor>
        getTransferVisitor(const Function& func, const DataflowNode& node, NodeState& state, const std::vector<Lattice*>& dfInfo);
#endif /* OBSOLETE_CODE */

};

#endif
