#pragma once
#include "dataflow.h"
#include <rose.h>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <ostream>
#include <fstream>
#include <sstream>
#include <boost/foreach.hpp>
#include <filteredCFG.h>
#include "staticSingleAssignment.h"
#include <boost/unordered_map.hpp>
#include "reachingDef.h"
#include "dataflowCfgFilter.h"
#include "CallGraph.h"
#include "HeapSSALattice.h"
#include "heapSSA.h"
#include "uniqueNameTraversal.h"
#include "memory_object_impl.h"

#include <vector>

namespace hssa_private
{
  using namespace boost;
  using namespace std;
  using namespace AbstractMemoryObject;
  using namespace ssa_private;

  class HeapReachingDef;

  typedef boost::shared_ptr<HeapReachingDef> HeapReachingDefPtr;
  typedef map<SgNode*, HeapReachingDefPtr> NodeHeapReachingDefTable;
  typedef map<SgNode*, ReachingDef::ReachingDefPtr> NodeReachingDefTable;
  typedef boost::shared_ptr<ObjSet> ObjSetPtr; 
  typedef map<SgNode*, ObjSetPtr> NodeAMOTable;
  typedef boost::shared_ptr<HeapSSALattice> HeapLatticePtr;
  typedef boost::unordered_map<SgNode*, std::set<SgNode* > > LocalDefUseTable;
  typedef std::map<SgNode* , HeapReachingDefPtr> NodeHeapReachingDefTable;

class HeapReachingDef : public ReachingDef
{
 protected:
  ReachingDef::ReachingDefPtr currDef_;
  ReachingDef::ReachingDefPtr prevDef_;

 public:
 HeapReachingDef(SgNode* defNode, Type type) : ReachingDef(defNode, type) {};
  ~HeapReachingDef() {}

  bool isDPhiFunction() const;
  void addJoinedDPhi(ReachingDef::ReachingDefPtr currDef, ReachingDef::ReachingDefPtr prevDef) {
    currDef_ = currDef;
    prevDef_ = prevDef;
  };

  ReachingDef::ReachingDefPtr getCurrDef() { return currDef_; };
  ReachingDef::ReachingDefPtr getPrevDef() { return prevDef_; }; 
};

  class HeapSSA;

class HeapVariableManager 
{
 protected:
  HeapSSA* hssa;
  // SgNode --> extended reaching def map
  NodeReachingDefTable reachingDefTable;
  // SgNode --> AMO map
  NodeAMOTable amoTable;
  // SgNode --> use SgNodes map
  LocalDefUseTable localUses;
  // SgNode --> def SgNode map
  LocalDefUseTable localDefs;
  // SgNode --> def phi function map
  NodeHeapReachingDefTable dphiTable;
  // DPhi/Phi --> Heap Product Lattice map
  map<ReachingDef::ReachingDefPtr, HeapLatticePtr > phiHeapLatticeMap;
 
  // Heap Variable names
  map<SgScopeStatement*, VarUniqueName * > varNames;

  // Current Function
  SgFunctionDefinition* currFunc;

  void buildAMO(SgNode* sgn);


 public:
 HeapVariableManager() {};
 HeapVariableManager(HeapSSA* hssaInstance) : hssa(hssaInstance) {};
  ~HeapVariableManager() {};

  void setCurrentFunction(SgFunctionDefinition* func) { currFunc = func; };

  bool hasHeapReachingDef(SgNode* sgn);
  ReachingDef::ReachingDefPtr getHeapReachingDef(SgNode* sgn);
  bool hasAMO(SgNode* sgn);
  ObjSetPtr getAMO(SgNode* sgn);
  void buildAMOs(SgFunctionDeclaration* function);
  bool setAMO(SgNode* sgn, ObjSetPtr& objSetPtr);

  bool addHeapUse(SgNode* useNode, SgNode* heapUse);
  bool hasHeapUse(SgNode* sgn);
  bool addHeapDef(SgNode* defNode, SgNode* heapDef);
  bool addDPhi(SgNode* sgn);
  bool hasDPhi(SgNode* sgn);
  HeapReachingDefPtr getDPhi(SgNode* sgn);
  bool isHeapVar(const StaticSingleAssignment::VarName& varName);
  bool updateUseReachingDef(SgNode* sgn, ReachingDef::ReachingDefPtr reachingDef);

  bool hasHeapLattice(ReachingDef::ReachingDefPtr reachingDef);
  HeapLatticePtr getHeapLattice(ReachingDef::ReachingDefPtr reachingDef);
  void addHeapLattice(ReachingDef::ReachingDefPtr reachingDef);
  ObjSetPtr hasHeapLattice(ObjSetPtr objSetPtr, HeapLatticePtr heapLatticePtr);
  ObjSetPtr mayHaveHeapLattice(ObjSetPtr objSetPtr, HeapLatticePtr heapLatticePtr);
  void joinHeapSSALattice(HeapLatticePtr heapLattice1, HeapLatticePtr heapLattice2);

  const StaticSingleAssignment::VarName& getHeapVarName(SgExpression* sgn);
  const StaticSingleAssignment::VarName& getCurrentHeapVar();
  void getDummyDefForHeapVar(StaticSingleAssignment::LocalDefUseTable& originalDefTable);
  static HeapReachingDefPtr emptyHeapReachingDefPtr;
  static ObjSetPtr emptyObjSetPtr;
};

}
