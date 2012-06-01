#include "dataflow.h"
#include "latticeFull.h"
#include "LatticeArith.h"
#include "SSAVariableStateTransfer.h"
// #include "SSAFiniteProduceLattice.h"
#include "heapSSA.h"

#include <vector>

class ConstantAnalysisTransfer : public SSAVariableStateTransfer<LatticeArith>
{
 protected:

 public:
 ConstantAnalysisTransfer(const ::Function& func, HeapSSA* ssaInstance,
        const DataflowNode& n, NodeState& state,
        const std::vector<Lattice*>& dfInfo, const int &debugLevel_)
   : SSAVariableStateTransfer<LatticeArith>(func, ssaInstance, n, state, dfInfo, debugLevel_)
  {
    // Make sure that all the lattices are initialize
    // TODO: const std::vector<Lattice*>& lattices = prodLat->getLattices();
    // for(std::vector<Lattice*>::const_iterator it = lattices.begin(); it!=lattices.end(); it++)
    //   (dynamic_cast<LatticeType *>(*it))->initialize();
  };

  LatticeArith * getLattice_(const SgExpression* sgn) { return getLattice__(sgn); };
  void setLattice_(const SgExpression* sgn, LatticeArith* lattice) { setLattice(sgn, lattice); };

  void start() { modified = true; }
  bool finish() { return false; }// modified; };

  void visit(SgAssignOp *sgn);
  void visit(SgLongLongIntVal *sgn);
  void visit(SgLongIntVal *sgn);
  void visit(SgIntVal *sgn);
  void visit(SgShortVal *sgn);
  void visit(SgUnsignedLongLongIntVal *sgn);
  void visit(SgUnsignedLongVal *sgn);
  void visit(SgUnsignedIntVal *sgn);
  void visit(SgUnsignedShortVal *sgn);
  void visit(SgValueExp *sgn);
  void visit(SgPlusAssignOp *sgn);
  void visit(SgMinusAssignOp *sgn);
  void visit(SgMultAssignOp *sgn);
  void visit(SgDivAssignOp *sgn);
  void visit(SgModAssignOp *sgn);
  void visit(SgAddOp *sgn);
  void visit(SgSubtractOp *sgn);
  void visit(SgMultiplyOp *sgn);
  void visit(SgDivideOp *sgn);
  void visit(SgModOp *sgn);
  void visit(SgPlusPlusOp *sgn);
  void visit(SgMinusMinusOp *sgn);
  void visit(SgUnaryAddOp *sgn);
  void visit(SgMinusOp *sgn);
  void visit(SgIfStmt *sgn);
  void visit(SgExprStatement *sgn);
  void visit(SgVarRefExp *sgn);
  void visit(SgGreaterThanOp *sgn);
  void visit(SgGreaterOrEqualOp *sgn);
  void visit(SgLessThanOp *sgn);
  void visit(SgLessOrEqualOp *sgn);
  void visit(SgNotEqualOp *sgn);
  void visit(SgEqualityOp *sgn);
  void visit(SgPntrArrRefExp *sgn);
  void visit(SgPointerDerefExp *sgn);
  void visit(SgDotExp *sgn);
  void visit(SgArrowExp *sgn);
};
