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
#include "dataflowCfgFilter.h"
#include "CallGraph.h"
#include "uniqueNameTraversal.h"
#include "heapReachingDef.h"
#include "memory_object_impl.h"

#include <vector>

namespace hssa_private
{
  using namespace boost;
  using namespace std;
  using namespace AbstractMemoryObject;

  typedef boost::shared_ptr<ObjSet> ObjSetPtr;

class HeapSSA : public StaticSingleAssignment
{
 public:
  HeapVariableManager* heapVarManager;

 public:
 HeapSSA(SgProject* proj) : StaticSingleAssignment(proj) {
    heapVarManager = new HeapVariableManager(this);
  };
  ~HeapSSA() {};

  void build(bool interprocedural, bool treatPointersAsStructures);
  bool mustBeSame(ObjSetPtr objSet1, ObjSetPtr objSet2);
  bool mustBeSame(ObjSet* objSet1, ObjSet* objSet2);
  bool mustBeSame(ObjSet* objSet1, ObjSet* objSet2, bool& mayBeSame);
  bool mayBeSame(ObjSetPtr objSet1, ObjSetPtr objSet2);
  bool mayBeSame(ObjSet* objSet1, ObjSet* objSet2);
  bool mayBeDifferent(ObjSetPtr objSet1, ObjSetPtr objSet2);
  bool mayBeDifferent(ObjSet* objSet1, ObjSet* objSet2);

 protected:
  void clearTables();
  void uniqueNameTraversal(bool treatPointersAsStructures);
  void insertHeapVariables();
  void insertDPhiFunctions();
  void renumberExtDefinitions(SgFunctionDefinition* func,
                              const vector<FilteredCfgNode>& cfgNodesInPostOrder);
  void findOrCreateHeapVariable(SgType );
  void expandParentMemberDefs(SgFunctionDeclaration* function);
  void expandParentMemberUses(SgFunctionDeclaration* function);
  void insertDefsForChildMemberUses(SgFunctionDeclaration* function);
  void insertDefsForExternalVariables(SgFunctionDeclaration* function);
  void populateLocalDefsTable(SgFunctionDeclaration* function);
  multimap< StaticSingleAssignment::FilteredCfgNode,
    pair<StaticSingleAssignment::FilteredCfgNode, StaticSingleAssignment::FilteredCfgEdge> >
    insertPhiFunctions(SgFunctionDefinition* function, const std::vector<FilteredCfgNode>& cfgNodesInPostOrder);
  void renumberAllDefinitions(SgFunctionDefinition* func, const vector<FilteredCfgNode>& cfgNodesInPostOrder);

  void runDefUseDataFlow(SgFunctionDefinition* func);
  bool propagateDefs(FilteredCfgNode cfgNode);
  void updateIncomingPropagatedDefs(FilteredCfgNode cfgNode);
  void buildUseTable(const vector<FilteredCfgNode>& cfgNodes);

  bool mustBeSame(ScalarExprObj* seObj1, ScalarExprObj* seObj2);
  bool mustBeSame(ScalarNamedObj* snObj1, ScalarNamedObj* snObj2);
  bool mustBeSame(ScalarExprObj* seObj1, ScalarExprObj* seObj2, bool& mayBeSame);
  bool mustBeSame(SgDotExp* dotExp1, SgDotExp* dotExp2);
  bool mustBeSame(SgArrowExp* arrowExp1, SgArrowExp* arrowExp2);
  bool mustBeSame(SgPointerDerefExp* pdrExp1, SgPointerDerefExp* pdrExp2);
  bool mustBeSame(SgDotExp* dotExp, SgPointerDerefExp* pdrExp);
  bool hasSameReachingDef(SgNode* sgn1, SgNode* sgn2);
};
};
