#include "MPIDepAnalysis.h"

int MPIDepAnalysisDebugLevel = 2;

void MPIDepLattice::copy(const Lattice* _that)
{
    const MPIDepLattice* that = dynamic_cast<const MPIDepLattice*> (_that);

    if (that->isInitialized())
      this->initialize();
    else
      this->uninitialize();

    this->level = that->level;
    this->MPIDep = that->MPIDep;

    dbg_lattice(this, that);
}

bool MPIDepLattice::operator==(const Lattice* _that) const
{
    const MPIDepLattice* that = dynamic_cast<const MPIDepLattice*> (_that);
    return (that->level == this->level);
}

bool MPIDepLattice::meetUpdate(const Lattice* _that)
{
    bool modified = false;
    const MPIDepLattice* that = dynamic_cast<const MPIDepLattice*> (_that);

    if(this->level == bottom && that->level != bottom) {
        this->level = that->level;
        modified = true;
    }
    else if(this->level != top && that->level == top) {
        this->level = top;
        modified = true;
    }
    else if(this->level == yes && that->level == no) {
        this->level = top;
        modified = true;
    }
    else if(this->level == no && that->level == yes) {
        this->level = top;
        modified = true;
    }
    else {
        // do nothing
    }

    return modified;
}

std::string MPIDepLattice::str(std::string indent) const
{
    ostringstream outs;
    if(level == bottom) {
        outs << indent << "[MPIDepLattice : bottom]";
    }
    else if(level == top) {
        outs << indent << "[MPIDepLattice : top]";
    }
    else if(level == yes) {
        outs << indent << "[MPIDepLattice : yes]";
    }
    else {
        outs << indent << "[MPIDepLattice : no]";
    }

    return outs.str();
}

////////////////////////////////////////////////////
/////       MPIDepAnalysisTransfer       ///////////
////////////////////////////////////////////////////

MPIDepAnalysisTransfer::MPIDepAnalysisTransfer (const Function& func,
                                                const DataflowNode& n,
                                                NodeState& state,
                                                Lattice& dfInfo
    ) : VariableStateTransfer<MPIDepLattice>(func, n, state, dfInfo, MPIDepAnalysisDebugLevel /* debug level */ )
{ }

bool MPIDepAnalysisTransfer::finish()
{
    return modified;
}

void MPIDepAnalysisTransfer::visit(SgFunctionCallExp* sgn)
{
    static unsigned fnctr = 0;

    ROSE_ASSERT(sgn != NULL);
    // Get arguments associated with function calls
    vector<SgExpression*> sgexprptrlist = (sgn->get_args())->get_expressions();
    Function callee(sgn);

    if(callee.get_name().getString() == "MPI_Comm_rank" ||
       callee.get_name().getString() == "MPI_Comm_size") {
        //NOTE: for now look only at second argument
        // MPI internal variables are passed by refernce
        // need support to distinguish mpi vars from program vars
        SgExpression* arg1 = *(++(sgexprptrlist.begin()));
        assert(arg1 != NULL);
        if(isSgAddressOfOp(arg1) && varID::isValidVarExp( (isSgAddressOfOp(arg1))->get_operand())) {
                varID          dep_var = SgExpr2Var((isSgAddressOfOp(arg1))->get_operand());
                Lattice*       varlat = getLattice(dep_var);
                MPIDepLattice* res_lattice = dynamic_cast<MPIDepLattice*>(varlat);
                // NOTE: res_lattice can be NULL
                // Why is it not initialized ?
                std::cerr << "try: " << ++fnctr << "  " << varlat << "  " << res_lattice << std::endl;

                if(res_lattice) {
                    std::cerr << res_lattice << " -> T" << std::endl;
                    res_lattice->setToYes();
                    modified = true;
                }
            }
    }
}

FiniteVarsExprsProductLattice*
MPIDepAnalysis::genLattice(const Function& func, const DataflowNode& n, const NodeState& state)
{
  map<varID, Lattice*> emptyM;

  FiniteVarsExprsProductLattice* prodLat = new FiniteVarsExprsProductLattice(new MPIDepLattice, emptyM, (Lattice*) NULL, ldva, n, state);

  prodLat->initialize();
  return prodLat;
}

std::vector<NodeFact*>
MPIDepAnalysis::genFacts(const Function& func, const DataflowNode& n, const NodeState& state)
{
  return std::vector<NodeFact*>();
}

bool MPIDepAnalysis::transfer(const Function& func, const DataflowNode& node, NodeState& state, LatticePtr dfInfo)
{
    visitor_transfer(MPIDepAnalysisTransfer(func, node, state, *dfInfo.get()), node);
    return true;
}

#if OBSOLETE_CODE

boost::shared_ptr<IntraDFTransferVisitor>
MPIDepAnalysis::getTransferVisitor(const Function& func, const DataflowNode& n, NodeState& state, const std::vector<Lattice*>& dfInfo)
{
    return boost::shared_ptr<IntraDFTransferVisitor>(new MPIDepAnalysisTransfer(func, n, state, dfInfo));
}

#endif /* OBSOLETE_CODE */


void dbg_lattice(MPIDepLattice* to, const MPIDepLattice* from)
{
  static bool nl = false;

  ROSE_ASSERT(to && from);
  if (from->level == MPIDepLattice::yes)
  {
    if (nl) { nl = false; std::cerr << endl; }

    std::cerr << from << "  -yes-> " << to << std::endl;
  }
  else
  {
    nl = true;
    std::cerr << ".";
  }
}
