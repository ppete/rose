#include "constantAnalysisTransfer.h"
#include "analysisCommon.h"
#include "nodeState.h"
#include "functionState.h"
#include "LatticeArithInstance.h"
#include "analysis.h"

/**     
 * This is a intra-procedural visitor for evaluating the expression
 *           
 * author: jisheng zhao (jz10@rice.edu)   
 */

void ConstantAnalysisTransfer::visit(SgLongLongIntVal *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgLongIntVal *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgIntVal *sgn) {
  long val;
  cfgUtils::IsConstInt((const SgExpression* )sgn, val);
  setLattice(sgn, new LatticeArithInstance<int>(val)); 
}

void ConstantAnalysisTransfer::visit(SgShortVal *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgUnsignedLongLongIntVal *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgUnsignedLongVal *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgUnsignedIntVal *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgUnsignedShortVal *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}
  
void ConstantAnalysisTransfer::visit(SgValueExp *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgPlusAssignOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();
  setLattice(lhsOperand, new LatticeArithInstance<int>(lhsVal + rhsVal));
}

void ConstantAnalysisTransfer::visit(SgMinusAssignOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();
  setLattice(lhsOperand, new LatticeArithInstance<int>(lhsVal - rhsVal));
}

void ConstantAnalysisTransfer::visit(SgMultAssignOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  // if (lhsOperand == NULL || rhsOperand == NULL)
  //   std::cout << "why " << sgn->class_name() << std::endl;

  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);
 
  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();
  setLattice(lhsOperand, new LatticeArithInstance<int>(lhsVal * rhsVal));
}

void ConstantAnalysisTransfer::visit(SgDivAssignOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();
  setLattice(lhsOperand, new LatticeArithInstance<int>((int)(lhsVal / rhsVal)));
}

void ConstantAnalysisTransfer::visit(SgModAssignOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();
  setLattice(lhsOperand, new LatticeArithInstance<int>(lhsVal % rhsVal));
}

void ConstantAnalysisTransfer::visit(SgAddOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();                                    
  SgExpression * rhsOperand = sgn->get_rhs_operand();                                    
  LatticeArith * lhsLattice = getLattice(lhsOperand);                                    
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL) {
    LatticeArith* lattice = new LatticeArithInstance<int>(false, true);
    setLattice(sgn, lattice);
  } else {
    LatticeArithInstance<int> *lhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(lhsLattice);
    LatticeArithInstance<int> *rhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(rhsLattice);

    if (lhsLattice_->isBottom() || rhsLattice_->isBottom()) 
      setLattice(sgn, new LatticeArithInstance<int>(false, true));
    else {
      int lhsVal = lhsLattice_->getValue();        
      int rhsVal = rhsLattice_->getValue();
      setLattice(sgn, new LatticeArithInstance<int>(lhsVal + rhsVal));
    }
  }
}

void ConstantAnalysisTransfer::visit(SgSubtractOp *sgn) {
  // std::cout << "support " << sgn->class_name() << std::endl;
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL) {
    LatticeArith* lattice = new LatticeArithInstance<int>(false, true);
    setLattice(sgn, lattice);
  } else {
    LatticeArithInstance<int> *lhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(lhsLattice);
    LatticeArithInstance<int> *rhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(rhsLattice);

    if (lhsLattice_->isBottom() || rhsLattice_->isBottom())
      setLattice(sgn, new LatticeArithInstance<int>(false, true));
    else {
      int lhsVal = lhsLattice_->getValue();
      int rhsVal = rhsLattice_->getValue();
      setLattice(sgn, new LatticeArithInstance<int>(lhsVal - rhsVal));
    }
  }
}

void ConstantAnalysisTransfer::visit(SgMultiplyOp *sgn) {
  // std::cout << "support " << sgn->class_name() << std::endl;
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL) {
    LatticeArith* lattice = new LatticeArithInstance<int>(false, true);
    setLattice(sgn, lattice);
  } else {
    LatticeArithInstance<int> *lhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(lhsLattice);
    LatticeArithInstance<int> *rhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(rhsLattice);

    if (lhsLattice_->isBottom() || rhsLattice_->isBottom())
      setLattice(sgn, new LatticeArithInstance<int>(false, true));
    else {
      int lhsVal = lhsLattice_->getValue();
      int rhsVal = rhsLattice_->getValue();
      setLattice(sgn, new LatticeArithInstance<int>(lhsVal * rhsVal));
    }
  }
}

void ConstantAnalysisTransfer::visit(SgDivideOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL) {
    LatticeArith* lattice = new LatticeArithInstance<int>(false, true);
    setLattice(sgn, lattice);
  } else {
    LatticeArithInstance<int> *lhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(lhsLattice);
    LatticeArithInstance<int> *rhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(rhsLattice);

    if (lhsLattice_->isBottom() || rhsLattice_->isBottom())
      setLattice(sgn, new LatticeArithInstance<int>(false, true));
    else {
      int lhsVal = lhsLattice_->getValue();
      int rhsVal = rhsLattice_->getValue();
      setLattice(sgn, new LatticeArithInstance<int>((int)(lhsVal / rhsVal)));
    }
  }
}

void ConstantAnalysisTransfer::visit(SgModOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL) {
    LatticeArith* lattice = new LatticeArithInstance<int>(false, true);
    setLattice(sgn, lattice);
  } else {
    LatticeArithInstance<int> *lhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(lhsLattice);
    LatticeArithInstance<int> *rhsLattice_ = dynamic_cast<LatticeArithInstance<int>* >(rhsLattice);

    if (lhsLattice_->isBottom() || rhsLattice_->isBottom())
      setLattice(sgn, new LatticeArithInstance<int>(false, true));
    else {
      int lhsVal = lhsLattice_->getValue();
      int rhsVal = rhsLattice_->getValue();
      setLattice(sgn, new LatticeArithInstance<int>(lhsVal % rhsVal));
    }
  }
}

void ConstantAnalysisTransfer::visit(SgPlusPlusOp *sgn) {
  // std::cout << "support " << sgn->class_name() << std::endl;
  SgExpression * unOperand = sgn->get_operand();                                            
  LatticeArith * unLattice = getLattice(unOperand);

  if (unLattice == NULL)
    return;

  int unVal = (dynamic_cast<LatticeArithInstance<int> * >(unLattice))->getValue();  
  setLattice(sgn, new LatticeArithInstance<int>(unVal + 1)); 
}

void ConstantAnalysisTransfer::visit(SgMinusMinusOp *sgn) {
  // std::cout << "support " << sgn->class_name() << std::endl;
  SgExpression * unOperand = sgn->get_operand();
  LatticeArith * unLattice = getLattice(unOperand);

  if (unLattice == NULL)
    return;

  int unVal = (dynamic_cast<LatticeArithInstance<int> * >(unLattice))->getValue();
  setLattice(sgn, new LatticeArithInstance<int>(unVal - 1));
}

void ConstantAnalysisTransfer::visit(SgUnaryAddOp *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgMinusOp *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgExprStatement *sgn) {
  // std::cout << "support " << sgn->class_name() << std::endl;
  LatticeArith * lattice = getLattice(sgn->get_expression());                 
  if (lattice != NULL)           
    setLattice((const SgExpression*)sgn, dynamic_cast<LatticeArith* >(lattice->copy()));
}

void ConstantAnalysisTransfer::visit(SgIfStmt *sgn) {
  std::cout << "No support yet " << sgn->class_name() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgVarRefExp *sgn) {
  if (getLattice(sgn) != NULL)
    return; 

  const StaticSingleAssignment::VarName& varName = StaticSingleAssignment::getVarName(sgn);  
  const StaticSingleAssignment::NodeReachingDefTable& reachingDefs 
    = ssa->getReachingDefsAtNode_(sgn); 
  // Get SSA look-aside info                                                                  
  if (reachingDefs.find(varName) != reachingDefs.end()) {                                     
    StaticSingleAssignment::ReachingDefPtr reachingDef = (* reachingDefs.find(varName)).second; 
    // Get reaching def node, and corresponding lattice  
    SgNode * defNode = reachingDef->getDefinitionNode();
 
    LatticeArith * lattice = getLattice((const SgExpression*)defNode);     
    if (lattice != NULL) {
      setLattice(sgn, dynamic_cast<LatticeArith* >(lattice->copy()));                 
    }  
  }  
}

void ConstantAnalysisTransfer::visit(SgGreaterThanOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand(); 
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();

  setLattice(sgn, new LatticeArithInstance<bool>(lhsVal > rhsVal));
}

void ConstantAnalysisTransfer::visit(SgGreaterOrEqualOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();

  setLattice(sgn, new LatticeArithInstance<bool>(lhsVal >= rhsVal));
}

void ConstantAnalysisTransfer::visit(SgLessThanOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);
  
  if (lhsLattice == NULL || rhsLattice == NULL)
    return;
  
  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();

  setLattice(sgn, new LatticeArithInstance<bool>(lhsVal < rhsVal));
}

void ConstantAnalysisTransfer::visit(SgLessOrEqualOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();

  setLattice(sgn, new LatticeArithInstance<bool>(lhsVal <= rhsVal));
}

void ConstantAnalysisTransfer::visit(SgNotEqualOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();

  setLattice(sgn, new LatticeArithInstance<bool>(lhsVal != rhsVal));
}

void ConstantAnalysisTransfer::visit(SgEqualityOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (lhsLattice == NULL || rhsLattice == NULL)
    return;

  int lhsVal = (dynamic_cast<LatticeArithInstance<int> * >(lhsLattice))->getValue();
  int rhsVal = (dynamic_cast<LatticeArithInstance<int> * >(rhsLattice))->getValue();

  setLattice(sgn, new LatticeArithInstance<bool>(lhsVal == rhsVal));
}

void ConstantAnalysisTransfer::visit(SgPntrArrRefExp *sgn) {
  if (ssa->heapVarManager->hasHeapReachingDef(sgn)){
    ReachingDef::ReachingDefPtr reachingDef = ssa->heapVarManager->getHeapReachingDef(sgn);
    if (ssa->heapVarManager->hasHeapLattice(reachingDef)) {
      // Get the heap lattice   
      HeapLatticePtr heapLattice = ssa->heapVarManager->getHeapLattice(reachingDef);
      ObjSetPtr currAMOPtr = ssa->heapVarManager->getAMO(sgn);
      ObjSetPtr origAMOPtr = ssa->heapVarManager->hasHeapLattice(currAMOPtr, heapLattice);

      LatticeArith* lattice = heapLattice->getLattice(origAMOPtr);
      if (lattice != NULL) {
        // Set the lattice to the normal lattice table    
	setLattice((const SgExpression*)sgn, lattice->copyInstance());
      }
    }
  } // else 
    // std::cout << "no reaching def? " << std::endl;
}

void ConstantAnalysisTransfer::visit(SgPointerDerefExp *sgn) {
  if (ssa->heapVarManager->hasHeapReachingDef(sgn)){
    ReachingDef::ReachingDefPtr reachingDef = ssa->heapVarManager->getHeapReachingDef(sgn);
    if (ssa->heapVarManager->hasHeapLattice(reachingDef)) {
      // Get the heap lattice        
      HeapLatticePtr heapLattice = ssa->heapVarManager->getHeapLattice(reachingDef);
      ObjSetPtr currAMOPtr = ssa->heapVarManager->getAMO(sgn);
      ObjSetPtr origAMOPtr = ssa->heapVarManager->hasHeapLattice(currAMOPtr, heapLattice);

      LatticeArith* lattice = heapLattice->getLattice(origAMOPtr);
      if (lattice != NULL) {
        // Set the lattice to the normal lattice table                 
        setLattice((const SgExpression*)sgn, lattice->copyInstance());
      }
    }
  } // else
    // std::cout << "no reaching def? " << sgn->get_parent() << std::endl;
}

void ConstantAnalysisTransfer::visit(SgDotExp *sgn) {
  if (ssa->heapVarManager->hasHeapReachingDef(sgn)){
    ReachingDef::ReachingDefPtr reachingDef = ssa->heapVarManager->getHeapReachingDef(sgn);
    if (ssa->heapVarManager->hasHeapLattice(reachingDef)) {
      // Get the heap lattice
      HeapLatticePtr heapLattice = ssa->heapVarManager->getHeapLattice(reachingDef);
      ObjSetPtr currAMOPtr = ssa->heapVarManager->getAMO(sgn);
      ObjSetPtr origAMOPtr = ssa->heapVarManager->hasHeapLattice(currAMOPtr, heapLattice);
     
      LatticeArith* lattice = heapLattice->getLattice(origAMOPtr);
      if (lattice != NULL) {
	// Set the lattice to the normal lattice table
	setLattice((const SgExpression*)sgn, lattice->copyInstance());
      }
    }
  } 
} 
    
void ConstantAnalysisTransfer::visit(SgArrowExp *sgn) {
  if (ssa->heapVarManager->hasHeapReachingDef(sgn)){
    ReachingDef::ReachingDefPtr reachingDef = ssa->heapVarManager->getHeapReachingDef(sgn);
    if (ssa->heapVarManager->hasHeapLattice(reachingDef)) {
      // Get the heap lattice    
      HeapLatticePtr heapLattice = ssa->heapVarManager->getHeapLattice(reachingDef);
      ObjSetPtr currAMOPtr = ssa->heapVarManager->getAMO(sgn);
      ObjSetPtr origAMOPtr = ssa->heapVarManager->hasHeapLattice(currAMOPtr, heapLattice);

      LatticeArith* lattice = heapLattice->getLattice(origAMOPtr);
      if (lattice != NULL) {
        // Set the lattice to the normal lattice table    
        setLattice((const SgExpression*)sgn, lattice->copyInstance());
      }
    }
  }

}

void ConstantAnalysisTransfer::visit(SgAssignOp *sgn) {
  SgExpression * lhsOperand = sgn->get_lhs_operand();
  SgExpression * rhsOperand = sgn->get_rhs_operand();
  LatticeArith * lhsLattice = getLattice(lhsOperand);
  LatticeArith * rhsLattice = getLattice(rhsOperand);

  if (rhsLattice != NULL) {
    // Scalar lattice case:
    setLattice((const SgExpression*)lhsOperand, dynamic_cast<LatticeArith* >(rhsLattice->copy()));
    setLattice((const SgExpression*)sgn, dynamic_cast<LatticeArith* >(rhsLattice->copy()));
  } else if (ssa->heapVarManager->hasHeapReachingDef(rhsOperand)
	     && ssa->heapVarManager->hasAMO(rhsOperand)) {
    // Heap lattice case:
    ReachingDef::ReachingDefPtr reachingDef = ssa->heapVarManager->getHeapReachingDef(rhsOperand);

    if (SgExprStatement* exprStmt = isSgExprStatement(reachingDef->getDefinitionNode())) {
      SgExpression * expr = exprStmt->get_expression();
      SgAssignOp * exprAssign = isSgAssignOp(expr);
    }
    if (ssa->heapVarManager->hasHeapLattice(reachingDef)) {
      HeapLatticePtr heapLattice = ssa->heapVarManager->getHeapLattice(reachingDef);
      ObjSetPtr rhsAMOPtr = ssa->heapVarManager->getAMO(rhsOperand);
     
      rhsLattice = heapLattice->getLattice(rhsAMOPtr);
      if (rhsLattice != NULL) {
	// Set the value into the normal lattice table
	setLattice((const SgExpression*)lhsOperand, rhsLattice->copyInstance());
	setLattice((const SgExpression*)sgn, rhsLattice->copyInstance());
      } 
    } 
  } else {
    setLattice(lhsOperand, NULL);
  }

  if (ssa->heapVarManager->hasDPhi(sgn)) {
    // Update the dphi and heap lattice table                        
    HeapReachingDefPtr dphiPtr = ssa->heapVarManager->getDPhi(sgn);
    ssa->heapVarManager->addHeapLattice(dphiPtr);
    HeapLatticePtr newHeapLattice = ssa->heapVarManager->getHeapLattice(dphiPtr);
    if (ssa->heapVarManager->hasHeapLattice(dphiPtr->getPrevDef())) {
      HeapLatticePtr prevHeapLattice = ssa->heapVarManager->getHeapLattice(dphiPtr->getPrevDef());
      // Replicate the content from previous dphi                              
      newHeapLattice->copy(prevHeapLattice.get());
    }
    ObjSetPtr lhsAMOPtr = ssa->heapVarManager->getAMO(lhsOperand);
    ObjSetPtr origAMOPtr = ssa->heapVarManager->hasHeapLattice(lhsAMOPtr, newHeapLattice);
   
    if (rhsLattice != NULL) {
      // newHeapLattice->update(lhsAMOPtr, origAMOPtr, rhsLattice);
      newHeapLattice->update(lhsAMOPtr, rhsLattice, ssa);
    }
  }
}
