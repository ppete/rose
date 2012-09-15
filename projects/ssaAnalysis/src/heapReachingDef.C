#include "heapSSA.h"
#include "heapReachingDef.h"
#include "analysisCommon.h"
#include "nodeState.h"
#include "functionState.h"
#include "LatticeArithInstance.h"
#include "analysis.h"
#include "uniqueNameTraversal.h"
#include "defsAndUsesTraversal.h"

/**     
 * This is an extended reaching def object that support heap SSA 
 *           
 * author: jisheng zhao (jz10@rice.edu)   
 */

#define foreach BOOST_FOREACH
#define reverse_foreach BOOST_REVERSE_FOREACH

using namespace std;
using namespace boost;
using namespace ssa_private;
using namespace hssa_private;

HeapReachingDefPtr HeapVariableManager::emptyHeapReachingDefPtr;
ObjSetPtr HeapVariableManager::emptyObjSetPtr;

bool HeapReachingDef::isDPhiFunction() const {
  return defType == DEF_PHI;
};

bool HeapVariableManager::hasDPhi(SgNode* sgn) {
  return dphiTable.find(sgn) != dphiTable.end();
}

/**
 * Check if the given varName is corresponding to current function
 */
bool HeapVariableManager::isHeapVar(const StaticSingleAssignment::VarName& varName) {
  if (varName.size() == 1 && varNames.find(currFunc) != varNames.end())
    // Compare if the two var name vector has same SgInitializedName pointer
    return varNames[currFunc]->getKey()[0] == varName[0];
  else
    return false;
}

HeapReachingDefPtr HeapVariableManager::getDPhi(SgNode* sgn) {
  return dphiTable[sgn];
}

bool HeapVariableManager::hasHeapReachingDef(SgNode* sgn) {
  return reachingDefTable.find(sgn) != reachingDefTable.end();
}; 

ReachingDef::ReachingDefPtr HeapVariableManager::getHeapReachingDef(SgNode* sgn) {
  ROSE_ASSERT(reachingDefTable.find(sgn) != reachingDefTable.end());
  return reachingDefTable[sgn];
};

bool HeapVariableManager::hasAMO(SgNode* sgn) {
  return amoTable.find(sgn) != amoTable.end();
}

ObjSetPtr HeapVariableManager::getAMO(SgNode* sgn) {
  return amoTable[sgn];
};

/**
 * Set the AMO for a given SgNode
 */
bool HeapVariableManager::setAMO(SgNode* sgn, ObjSetPtr& objSetPtr) {
  if (amoTable.find(sgn) != amoTable.end())
    return false;
  else {
    amoTable[sgn] = objSetPtr;
    return true;
  }
}

/**
 * Build abstract memory object for such given cases:
 * SgDotExpr, e.g. p.x
 * SgArrowExpr, e.g. p->x
 * SgPointerDerefExp, e.g. * p
 * SgPntrArrRefExp, e.g. A[i]
 */
void HeapVariableManager::buildAMOs(SgFunctionDeclaration* function) {
  class EvaluateExpressionTraversal : public AstSimpleProcessing { 
  public:
    HeapVariableManager* heapVarManager;

    void visit(SgNode* sgn) {
      if (SgPntrArrRefExp* ptrArr = isSgPntrArrRefExp(sgn)) {
	heapVarManager->buildAMO(ptrArr);
      } else if (SgPointerDerefExp* ptrDeref = isSgPointerDerefExp(sgn)) {
	heapVarManager->buildAMO(ptrDeref);
      } else if (SgDotExp* dotExpr = isSgDotExp(sgn)) {
	heapVarManager->buildAMO(dotExpr);
      } else if (SgArrowExp* arrowExpr = isSgArrowExp(sgn)) {
	heapVarManager->buildAMO(arrowExpr);
      } 
    }
  };
  
  EvaluateExpressionTraversal trav; 
  trav.heapVarManager = this;                                   
  trav.traverse(function, postorder);
};

/**
 * Build abstract memory object by invoking object set API
 */
void HeapVariableManager::buildAMO(SgNode* sgn) {
  amoTable[sgn] = ObjSetPtr(ObjSetFactory::createObjSet(sgn));
}; 

bool HeapVariableManager::addHeapUse(SgNode* useNode, SgNode* heapUse) 
{
  localUses[useNode].insert(heapUse);
  return true;
};

bool HeapVariableManager::hasHeapUse(SgNode* sgn) {
  return localUses.find(sgn) != localUses.end();
};

bool HeapVariableManager::addHeapDef(SgNode* defNode, SgNode* heapDef) 
{
  localDefs[defNode].insert(heapDef);
  return true;
};

/**
 * Set given node's all use SgNode with the input reaching def which is a dphi
 */
bool HeapVariableManager::updateUseReachingDef(SgNode* sgn, 
					       ReachingDef::ReachingDefPtr reachingDef) {
  ROSE_ASSERT(localUses.find(sgn) != localUses.end());
  foreach (SgNode* useNode, localUses[sgn]) {
    reachingDefTable[useNode] = reachingDef;
  }
}

/**
 * Get the heap variable name from a given SgExpression
 */
const StaticSingleAssignment::VarName& HeapVariableManager::getHeapVarName(SgExpression* sgn) 
{
  // We only create single heap variable here, so this is not related to the input SgNode
  if (varNames.find(currFunc) == varNames.end()) {
    std::string hv_ = "_hv_";
    SgName name(hv_.c_str());
    SgType* type = sgn->get_type();
    SgInitializedName* initializedName = new SgInitializedName(name, type);
    initializedName->set_scope(currFunc);

    // Create a new unique var name object which take the psudo SgInitializedName object
    VarUniqueName* varName = new VarUniqueName(initializedName);
    
    varNames[currFunc] = varName;
  }
  
  return varNames[currFunc]->getKey();
}

const StaticSingleAssignment::VarName& HeapVariableManager::getCurrentHeapVar() 
{
  ROSE_ASSERT(varNames.find(currFunc) != varNames.end());
  return varNames[currFunc]->getKey();
}

void HeapVariableManager::getDummyDefForHeapVar(StaticSingleAssignment::LocalDefUseTable& originalDefTable) 
{
  if (varNames.find(currFunc) != varNames.end()) {
    const StaticSingleAssignment::VarName& heapVar = getCurrentHeapVar();
    set<StaticSingleAssignment::VarName>& originalVarsAtFunctionEntry = originalDefTable[currFunc];
    if (originalVarsAtFunctionEntry.count(heapVar) == 0) {
      originalVarsAtFunctionEntry.insert(heapVar);
    } 
  }
}

/**
 * Create a dphi function for the given SgNode
 */
bool HeapVariableManager::addDPhi(SgNode* sgn) {
  // TODO:
  ROSE_ASSERT(dphiTable.find(sgn) == dphiTable.end());
  dphiTable[sgn] = HeapReachingDefPtr(new HeapReachingDef(sgn, HeapReachingDef::DEF_PHI));
  reachingDefTable[sgn] = dphiTable[sgn];
  return true;
}
 
bool HeapVariableManager::hasHeapLattice(ReachingDef::ReachingDefPtr reachingDef) {
  return phiHeapLatticeMap.find(reachingDef) != phiHeapLatticeMap.end();
}

HeapLatticePtr HeapVariableManager::getHeapLattice(ReachingDef::ReachingDefPtr reachingDef) {
  ROSE_ASSERT(phiHeapLatticeMap.find(reachingDef) != phiHeapLatticeMap.end());
  return phiHeapLatticeMap[reachingDef];
}

void HeapVariableManager::addHeapLattice(ReachingDef::ReachingDefPtr reachingDef) {
  ROSE_ASSERT(phiHeapLatticeMap.find(reachingDef) == phiHeapLatticeMap.end());
  phiHeapLatticeMap[reachingDef] = HeapLatticePtr(new HeapSSALattice());
}

/**
 * Check if the give object set (i.e. AMO) has corresponding lattice in the heap SSA lattice set
 */
ObjSetPtr HeapVariableManager::hasHeapLattice(ObjSetPtr objSetPtr, HeapLatticePtr heapLatticePtr) {
  map<ObjSetPtr, LatticeArith* >& amoLatticeMap = heapLatticePtr->getAMOLatticeMap();

  for (map<ObjSetPtr, LatticeArith* >::iterator it = amoLatticeMap.begin();
       it != amoLatticeMap.end(); it ++) {
    if (hssa->mustBeSame((* it).first.get(), objSetPtr.get()))
      return (* it).first;
  }

  return HeapVariableManager::emptyObjSetPtr;
}  
 
/**   
 * Check if the give object set (i.e. AMO) may have corresponding lattice in the heap SSA lattice set 
 */
ObjSetPtr HeapVariableManager::mayHaveHeapLattice(ObjSetPtr objSetPtr, 
						  HeapLatticePtr heapLatticePtr) {
  map<ObjSetPtr, LatticeArith* >& amoLatticeMap = heapLatticePtr->getAMOLatticeMap();

  for (map<ObjSetPtr, LatticeArith* >::iterator it = amoLatticeMap.begin();
       it != amoLatticeMap.end(); it ++) {
    if (hssa->mayBeSame((* it).first.get(), objSetPtr.get()))
      return (* it).first;
  }

  std::cout << "can't find objset " << objSetPtr << std::endl;
  return HeapVariableManager::emptyObjSetPtr;
}

/**
 * Join the two given heap SSA lattices, lattice2 --> lattice1
 */
void HeapVariableManager::joinHeapSSALattice(HeapLatticePtr heapLattice1, 
					     HeapLatticePtr heapLattice2) {
  map<ObjSetPtr, LatticeArith* >& amoLatticeMap1 = heapLattice1->getAMOLatticeMap();
  map<ObjSetPtr, LatticeArith* >& amoLatticeMap2 = heapLattice2->getAMOLatticeMap();
  
  for (map<ObjSetPtr, LatticeArith* >::iterator it2 = amoLatticeMap2.begin();
       it2 != amoLatticeMap2.end(); it2 ++) {
    ObjSetPtr objSetPtr2 = (* it2).first;
    bool found = false;
    for (map<ObjSetPtr, LatticeArith* >::iterator it1 = amoLatticeMap1.begin();
	 it1 != amoLatticeMap1.end(); it1 ++) {
      ObjSetPtr objSetPtr1 = (* it1).first;
      if (hssa->mustBeSame(objSetPtr2.get(), objSetPtr1.get())) {
	// Meet update the two same AMOs' lattice and put to the 1st heap SSA lattice
	heapLattice1->meetUpdate(objSetPtr1, objSetPtr1, (* it2).second);
	found = true;
	break;
      } 
    }
    if (!found)
      // Add new AMO's lattice to the 1st heap SSA lattices
      heapLattice1->meetUpdate(objSetPtr2, emptyObjSetPtr, (* it2).second);
  }
}
