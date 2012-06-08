#include "heapSSA.h"
#include "analysisCommon.h"
#include "nodeState.h"
#include "functionState.h"
#include "LatticeArithInstance.h"
#include "analysis.h"
#include "uniqueNameTraversal.h"
#include "defsAndUsesTraversal.h"
#include "iteratedDominanceFrontier.h"
#include "controlDependence.h"
#include "heapDefsAndUsesTraversal.h"

/**     
 * This is a intra-procedural heap SSA constructor 
 *           
 * author: jisheng zhao (jz10@rice.edu)   
 */

#define foreach BOOST_FOREACH
#define reverse_foreach BOOST_REVERSE_FOREACH

using namespace std;
using namespace boost;
using namespace ssa_private;
using namespace hssa_private;
   
void HeapSSA::build(bool interprocedural, bool treatPointersAsStructures) {
  // Clear the internal tables
  clearTables();
  // Perform the unique name traversal
  uniqueNameTraversal(treatPointersAsStructures);

  // Collect the functions that need to be processed
  unordered_set<SgFunctionDefinition*> interestingFunctions;
  vector<SgFunctionDefinition*> funcs 
    = SageInterface::querySubTree<SgFunctionDefinition > (project, V_SgFunctionDefinition);
  FunctionFilter functionFilter;
  foreach (SgFunctionDefinition* f, funcs) {
    if (functionFilter(f->get_declaration()))
      interestingFunctions.insert(f);
  }

  DefsAndUsesTraversal defUseTrav(this, treatPointersAsStructures);
  // Identify the heap use/def operations
  HeapDefsAndUsesTraversal heapDefUseTrav(this, treatPointersAsStructures);
  //Generate all local information before doing interprocedural analysis. This is so we know      
  //what variables are directly modified in each function body before we do interprocedural propagation
  foreach(SgFunctionDefinition* func, interestingFunctions) {
    defUseTrav.traverse(func->get_declaration());
     
    heapVarManager->setCurrentFunction(func);
    heapDefUseTrav.traverse(func->get_declaration());

    // Collect Heap operations and set the correspond abstract memory objects
    heapVarManager->buildAMOs(func->get_declaration());
 
    //Expand any member variable definition to also define its parents at the same node         
    // expandParentMemberDefinitions(func->get_declaration());
    expandParentMemberDefs(func->get_declaration());
    
    //Expand any member variable uses to also use the parent variables (e.g. a.x also uses a)   
    expandParentMemberUses(func->get_declaration());
    
    insertDefsForChildMemberUses(func->get_declaration());
  }

  //Interprocedural iterations. We iterate on the call graph until all interprocedural defs are propagated                                            
  if (interprocedural)
    interproceduralDefPropagation(interestingFunctions);

  //Now we have all local information, including interprocedural defs. Propagate the defs along control-flow 
  foreach(SgFunctionDefinition* func, interestingFunctions) {
    vector<FilteredCfgNode> functionCfgNodesPostorder = getCfgNodesInPostorder(func);
   
    heapVarManager->setCurrentFunction(func);
    //Insert definitions at the SgFunctionDefinition for external variables whose values flow inside the function
    insertDefsForExternalVariables(func->get_declaration());
    // Insert the dummy def for the heap variable
    heapVarManager->getDummyDefForHeapVar(originalDefTable);

    //Create all ReachingDef objects:                                                           
    //Create ReachingDef objects for all original definitions                                   
    populateLocalDefsTable(func->get_declaration());
    
    //Insert phi functions at join points                                                       
    multimap< FilteredCfgNode, pair<FilteredCfgNode, FilteredCfgEdge> > controlDependencies =
      insertPhiFunctions(func, functionCfgNodesPostorder);
 
    // Renumber all instantiated ReachingDef objects  
    renumberAllDefinitions(func, functionCfgNodesPostorder);

    runDefUseDataFlow(func);
    
    //We have all the propagated defs, now update the use table
    buildUseTable(functionCfgNodesPostorder);
    
    //Annotate phi functions with dependencies 
    //annotatePhiNodeWithConditions(func, controlDependencies);
  }
}

void HeapSSA::clearTables() {
  originalDefTable.clear();
  expandedDefTable.clear();
  reachingDefsTable.clear();
  localUsesTable.clear();
  useTable.clear();
  ssaLocalDefTable.clear();
}

void HeapSSA::uniqueNameTraversal(bool treatPointersAsStructures) {
  #ifdef DISPLAY_TIMINGS
  timer time;
#endif
  if (getDebug())
    cout << "Running UniqueNameTraversal...\n";
  UniqueNameTraversal uniqueTrav(
				 SageInterface::querySubTree<SgInitializedName > (project, V_SgInitializedName), treatPointersAsStructures);
  uniqueTrav.traverse(project);
  if (getDebug())
    cout << "Finished UniqueNameTraversal." << endl;
#ifdef DISPLAY_TIMINGS
  printf("-- Timing: UniqueNameTraversal took %.2f seconds.\n", time.elapsed());
  fflush(stdout);
  time.restart();
#endif

}

void HeapSSA::expandParentMemberDefs(SgFunctionDeclaration* function)
{
  class ExpandDefsTraversal : public AstSimpleProcessing
  {
  public:
    HeapSSA* hssa;

    void visit(SgNode* node)
    {
      if (hssa->originalDefTable.count(node) == 0)
	return;

      //We want to iterate the vars defined on this node, and expand them
      foreach(const VarName& definedVar, hssa->originalDefTable[node]) {

	if (getDebugExtra())
	  {
	    cout << "Checking [" << varnameToString(definedVar) << "]" << endl;
	  }
	
	//Check if the variableName has multiple parts
	if (definedVar.size() == 1)
	  {
	    continue;
	  }
	
	//We are dealing with a multi-part variable, loop the entry and expand it           
	//Start at one so we don't get the same defs in the original and expanded defs      
	for (unsigned int i = 1; i < definedVar.size(); i++) {
	  //Create a new varName vector that goes from beginning to end - i               
	  VarName newName;
	  newName.assign(definedVar.begin(), definedVar.end() - i);
	  
	  if (getDebugExtra())
	    {
	      cout << "Testing for presence of [" << varnameToString(newName) << "]" << endl;
	    }
	  
	  //Only insert the new definition if it does not already exist in the original def table  
	  if (hssa->originalDefTable[node].count(newName) == 0)
	    {
	      //Insert the new name as being defined here.                                
	      hssa->expandedDefTable[node].insert(newName);
	      
	      if (getDebugExtra())
		{
		  cout << "Inserted new name [" << varnameToString(newName) << "] into defs." << endl;
		}
	    }
	}
      }
    }
  };

  ExpandDefsTraversal trav;
  trav.hssa = this;
  trav.traverse(function, preorder);
}

void HeapSSA::expandParentMemberUses(SgFunctionDeclaration* function)
{

  class ExpandUsesTraversal : public AstSimpleProcessing
  {
  public:
    HeapSSA* hssa;

    void visit(SgNode* node)
    {
      if (hssa->localUsesTable.count(node) == 0)
	return;

      //We want to iterate the vars used on this node, and expand them 
      foreach(const VarName& usedVar, hssa->localUsesTable[node]) {
	  if (getDebugExtra()) {
	      cout << "Checking [" << varnameToString(usedVar) << "]" << endl;
	    }

	  //Check if the variableName has multiple parts 
	  if (usedVar.size() == 1) {
	    continue;
	  }

	  //We are dealing with a multi-part variable, loop the entry and expand it           
	  //Start at one so we don't reinsert same use                                        
	  for (unsigned int i = 1; i < usedVar.size(); i++)
	    {
	      //Create a new varName vector that goes from beginning to end - i  
	      VarName newName;
	      newName.assign(usedVar.begin(), usedVar.end() - i);

	      if (getDebugExtra())
		{
		  cout << "Testing for presence of [" << varnameToString(newName) << "]" << endl;
		}

	      //Only insert the new definition if it does not already exist                   
	      if (hssa->localUsesTable[node].count(newName) == 0)
		{
		  //Insert the new name as being used here.                                   
		  hssa->localUsesTable[node].insert(newName);

		  if (getDebugExtra())
		    {
		      cout << "Inserted new name [" << varnameToString(newName) << "] into uses." << endl;
		    }
		}
	    }
	}
    }
  };

  ExpandUsesTraversal trav;
  trav.hssa = this;
  trav.traverse(function, preorder);
}

void HeapSSA::insertDefsForChildMemberUses(SgFunctionDeclaration* function)
{
  ROSE_ASSERT(function->get_definition() != NULL);

  set<VarName> usedNames = getVarsUsedInSubtree(function);

  //Map each varName to all used names for which it is a prefix      
  map<VarName, set<VarName> > nameToChildNames;

  foreach(const VarName& rootName, usedNames)
    {

      foreach(const VarName& childName, usedNames)
        {
	  if (childName.size() <= rootName.size())
	    continue;

	  if (isPrefixOfName(childName, rootName))
            {
	      nameToChildNames[rootName].insert(childName);
            }
        }
    }

  //Now that we have all the used names, we iterate the definitions.          
  //If there is a definition and a child of it is used, we have to insert a definition for the child also
  class InsertExpandedDefsTraversal : public AstSimpleProcessing
  {
  public:
    HeapSSA* hssa;
    map<VarName, set<VarName> >* nameToChildNames;
    
    void visit(SgNode* node)
    {
      LocalDefUseTable::const_iterator childDefs = hssa->originalDefTable.find(node);
      
      if (childDefs == hssa->originalDefTable.end())
	return;
      
      foreach(const VarName& definedVar, childDefs->second)
	{
	map<VarName, set<VarName> >::iterator childVars = nameToChildNames->find(definedVar);
	if (childVars == nameToChildNames->end())
	  continue;
	
	//Go over all the child names and define them here also  
	foreach(const VarName& childName, childVars->second)
	  {
	    ROSE_ASSERT(childName.size() > definedVar.size());
	    for (size_t i = 0; i < (childName.size() - definedVar.size()); i++)
	      {
		//Create a new varName vector that goes from beginning to end - i   
		VarName newName;
		newName.assign(childName.begin(), childName.end() - i);
		
		if (hssa->expandedDefTable[node].count(newName) == 0 
		    && hssa->originalDefTable[node].count(newName) == 0)
		  {
		    hssa->expandedDefTable[node].insert(newName);
		  }
	      }
	  }
	}
    }
  };
  
 InsertExpandedDefsTraversal trav;
 trav.hssa = this;
 trav.nameToChildNames = &nameToChildNames;
 trav.traverse(function, preorder);
}

void HeapSSA::insertDefsForExternalVariables(SgFunctionDeclaration* function)
{
  ROSE_ASSERT(function->get_definition() != NULL);

  set<VarName> usedNames = getVarsUsedInSubtree(function);

  set<VarName>& originalVarsAtFunctionEntry = originalDefTable[function->get_definition()];
  set<VarName>& expandedVarsAtFunctionEntry = expandedDefTable[function->get_definition()];

  //Iterate over each used variable and check it it is declared outside of the function scope 
  foreach(const VarName& usedVar, usedNames)
    {
      VarName rootName;
      rootName.assign(1, usedVar[0]);

      SgScopeStatement* varScope = SageInterface::getScope(rootName[0]);
      SgScopeStatement* functionScope = function->get_definition();

      //If it is a local variable, there should be a def somewhere inside the function    
      if (varScope == functionScope || SageInterface::isAncestor(functionScope, varScope))
        {
	  //We still need to insert defs for compiler-generated variables (e.g. __func__), since they don't have defs in the AST           
	  if (!isBuiltinVar(rootName))
	    continue;
        }
      else if (isSgGlobal(varScope))
        {
	  //Handle the case of declaring "extern int x" inside the function                   
	  //Then, x has global scope but it actually has a definition inside the function so we don't need to insert one                   
	  if (SageInterface::isAncestor(function->get_definition(), rootName[0]))
            {
	      //When else could a var be declared inside a function and be global?     
	      SgVariableDeclaration* varDecl = isSgVariableDeclaration(rootName[0]->get_parent());
	      ROSE_ASSERT(varDecl != NULL);
	      ROSE_ASSERT(varDecl->get_declarationModifier().get_storageModifier().isExtern());
	      continue;
            }
        }

      //Are there any other types of external vars?   
      ROSE_ASSERT(isBuiltinVar(rootName) || isSgClassDefinition(varScope) || isSgNamespaceDefinitionStatement(varScope)
		  || isSgGlobal(varScope));

      //The variable is not in local scope; we need to insert a def for it at the function definition                                      
      for (size_t i = 0; i < usedVar.size(); i++)
        {
	  //Create a new varName vector that goes from beginning to end - i      
	  VarName newName;
	  newName.assign(usedVar.begin(), usedVar.end() - i);
	  originalVarsAtFunctionEntry.insert(newName);
	  
	  ROSE_ASSERT(expandedVarsAtFunctionEntry.count(newName) == 0);
        }
    }
}

void HeapSSA::populateLocalDefsTable(SgFunctionDeclaration* function)
{
  ROSE_ASSERT(function->get_definition() != NULL);

  struct InsertDefs : public AstSimpleProcessing
  {
    HeapSSA* hssa;

    void visit(SgNode * node)
    {
      //Short circuit to prevent creating empty entries in the local def table when we don't need them                                   
      if ((hssa->originalDefTable.count(node) == 0 || hssa->originalDefTable[node].empty()) &&
	  (hssa->expandedDefTable.count(node) == 0 || hssa->expandedDefTable[node].empty()))
	{
	  return;
	}

      //This is the table of local definitions at the current node     
      NodeReachingDefTable& localDefs = hssa->ssaLocalDefTable[node];

      if (hssa->originalDefTable.count(node) > 0)
	{

	  foreach(const VarName& definedVar, hssa->originalDefTable[node])
	    {
	      localDefs[definedVar] = ReachingDefPtr(new ReachingDef(node, ReachingDef::ORIGINAL_DEF));
	    }
	}

      if (hssa->expandedDefTable.count(node) > 0)
	{

	  foreach(const VarName& definedVar, hssa->expandedDefTable[node])
	    {
	      localDefs[definedVar] = ReachingDefPtr(new ReachingDef(node, ReachingDef::EXPANDED_DEF));
	    }
	}
    }
  };

  InsertDefs trav;
  trav.hssa = this;
  trav.traverse(function, preorder);
}

multimap< StaticSingleAssignment::FilteredCfgNode, pair<StaticSingleAssignment::FilteredCfgNode, StaticSingleAssignment::FilteredCfgEdge> > HeapSSA::insertPhiFunctions(SgFunctionDefinition* function, const std::vector<FilteredCfgNode>& cfgNodesInPostOrder)
{
  if (getDebug())
    printf("Inserting phi nodes in function %s...\n", function->get_declaration()->get_name().str());
  ROSE_ASSERT(function != NULL);

  //First, find all the places where each name is defined        
  map<VarName, vector<FilteredCfgNode> > nameToDefNodesMap;

  foreach(const FilteredCfgNode& cfgNode, cfgNodesInPostOrder)
    {
      SgNode* node = cfgNode.getNode();

      //Don't visit the sgFunctionDefinition node twice        
      if (isSgFunctionDefinition(node) && cfgNode != FilteredCfgNode(node->cfgForBeginning()))
	continue;

      //Check the definitions at this node and add them to the map        
      LocalDefUseTable::const_iterator defEntry = originalDefTable.find(node);
      if (defEntry != originalDefTable.end())
        {

	  foreach(const VarName& definedVar, defEntry->second)
            {
	      nameToDefNodesMap[definedVar].push_back(cfgNode);
            }
        }

      defEntry = expandedDefTable.find(node);
      if (defEntry != expandedDefTable.end())
        {

	  foreach(const VarName& definedVar, defEntry->second)
            {
	      nameToDefNodesMap[definedVar].push_back(cfgNode);
            }
        }
    }

  //Build an iterated dominance frontier for this function    
  map<FilteredCfgNode, FilteredCfgNode> iPostDominatorMap;
  map<FilteredCfgNode, set<FilteredCfgNode> > domFrontiers =
    calculateDominanceFrontiers<FilteredCfgNode, FilteredCfgEdge > (function, NULL, &iPostDominatorMap);

  //Calculate control dependencies (for annotating the phi functions)     
  multimap< FilteredCfgNode, pair<FilteredCfgNode, FilteredCfgEdge> > controlDependencies =
    calculateControlDependence<FilteredCfgNode, FilteredCfgEdge > (function, iPostDominatorMap);

  //Find the phi function locations for each variable      
  VarName var;
  vector<FilteredCfgNode> definitionPoints;

  foreach(tie(var, definitionPoints), nameToDefNodesMap)
    {
      ROSE_ASSERT(!definitionPoints.empty() && "We have a variable that is not defined anywhere!");

      //Calculate the iterated dominance frontier  
      set<FilteredCfgNode> phiNodes = calculateIteratedDominanceFrontier(domFrontiers, definitionPoints);

      if (getDebug())
	printf("Variable %s has phi nodes inserted at\n", varnameToString(var).c_str());

      foreach(FilteredCfgNode phiNode, phiNodes)
        {
	  SgNode* node = phiNode.getNode();
	  ROSE_ASSERT(reachingDefsTable[node].first.count(var) == 0);

	  //We don't want to insert phi defs for functions that have gone out of scope  
	  if (!isVarInScope(var, node))
	    continue;

	  reachingDefsTable[node].first[var] = ReachingDefPtr(new ReachingDef(node, ReachingDef::PHI_FUNCTION));

	  if (getDebug())
	    printf("\t\t%s\n", phiNode.toStringForDebugging().c_str());
        }
    }

  return controlDependencies;
}

void HeapSSA::renumberAllDefinitions(SgFunctionDefinition* func, const vector<FilteredCfgNode>& cfgNodesInPostOrder)
{
  //Map from each name to the next index. Not in map means 0                 
  map<VarName, int> nameToNextIndexMap;

  //The SgFunctionDefinition node is special. reachingDefs INTO the function definition node are actually                                  
  //The definitions that reach the *end* of the function              
  //reachingDefs OUT of the function definition node are the ones that come externally into the function                                   
  FilteredCfgNode functionStartNode = FilteredCfgNode(func->cfgForBeginning());
  FilteredCfgNode functionEndNode = FilteredCfgNode(func->cfgForEnd());

  //We process nodes in reverse postorder; this provides a natural numbering for definitions 
  reverse_foreach(const FilteredCfgNode& cfgNode, cfgNodesInPostOrder) {
    SgNode* astNode = cfgNode.getNode();
    
    //Iterate over all the phi functions inserted at this node. We skip the SgFunctionDefinition entry node,                             
    //since those phi functions actually belong to the bottom of the CFG    
    if (cfgNode != functionStartNode) {
      
      foreach(NodeReachingDefTable::value_type& varDefPair, reachingDefsTable[astNode].first) {
	const VarName& definedVar = varDefPair.first;
	ReachingDefPtr reachingDef = varDefPair.second;
	
	if (!reachingDef->isPhiFunction())
	    continue;
	
	//Give an index to the variable        
	int index = 0;
	if (nameToNextIndexMap.count(definedVar) > 0) {
	  index = nameToNextIndexMap[definedVar];
	}
	nameToNextIndexMap[definedVar] = index + 1;
	  
	reachingDef->setRenamingNumber(index);
      }
    }
    
    //Local defs at the function end actually occur at the very beginning of the function  
    if (cfgNode != functionEndNode) {
      //Iterate over all the local definitions at the node
      foreach(NodeReachingDefTable::value_type& varDefPair, ssaLocalDefTable[astNode]) {
	const VarName& definedVar = varDefPair.first;
	ReachingDefPtr reachingDef = varDefPair.second;
	
	//Give an index to the variable                                                
	int index = 0;
	if (nameToNextIndexMap.count(definedVar) > 0) {
	  index = nameToNextIndexMap[definedVar];
	}
	nameToNextIndexMap[definedVar] = index + 1;
	
	reachingDef->setRenamingNumber(index);
      
	// Hack the dphi reaching def and renumbering them
	if (heapVarManager->isHeapVar(definedVar) && heapVarManager->hasDPhi(astNode)) {
	  // Renumbering the dphi function here
	  ReachingDefPtr dphiReachingDef = heapVarManager->getDPhi(astNode);
	  //Give an index to the variable  
	  int dphiInd = 0;
	  if (nameToNextIndexMap.count(definedVar) > 0) {
	    dphiInd = nameToNextIndexMap[definedVar];
	  }
	  nameToNextIndexMap[definedVar] = dphiInd + 1;

	  dphiReachingDef->setRenamingNumber(dphiInd);
	}
      }
    }
  }
}

void HeapSSA::runDefUseDataFlow(SgFunctionDefinition* func)
{
  if (getDebug())
    printOriginalDefTable();
  //Keep track of visited nodes                                                                  
  unordered_set<SgNode*> visited;
  
  set<FilteredCfgNode> worklist;
  
  FilteredCfgNode current = FilteredCfgNode(func->cfgForBeginning());
  worklist.insert(current);
  
  while (!worklist.empty())
    {
      if (getDebugExtra())
	cout << "-------------------------------------------------------------------------" << endl;
      //Get the node to work on                                                                  
      current = *worklist.begin();
      worklist.erase(worklist.begin());
      
      //Propagate defs to the current node                                                       
      bool changed = propagateDefs(current);

      //For every edge, add it to the worklist if it is not seen or something has changed        
      
      reverse_foreach(const FilteredCfgEdge& edge, current.outEdges())
        {
	  FilteredCfgNode nextNode = edge.target();
	  
	  //Insert the child in the worklist if the parent is changed or it hasn't been visited yet                                                                                                
	  if (changed || visited.count(nextNode.getNode()) == 0)
	    {
	      //Add the node to the worklist                                                     
	      bool insertedNew = worklist.insert(nextNode).second;
	      if (insertedNew && getDebugExtra())
		{
		  if (changed)
		    cout << "Defs Changed: Added " << nextNode.getNode()->class_name() << nextNode.getNode() << " to the worklist." << endl;
		  else
		    cout << "Next unvisited: Added " << nextNode.getNode()->class_name() << nextNode.getNode() << " to the worklist." << endl;
		}
	    }
	}
      
      //Mark the current node as seen                                                            
      visited.insert(current.getNode());
    }
}

bool HeapSSA::propagateDefs(FilteredCfgNode cfgNode)
{
  SgNode* node = cfgNode.getNode();

  //This updates the IN table with the reaching defs from previous nodes                         
  updateIncomingPropagatedDefs(cfgNode);

  //Special Case: the OUT table at the function definition node actually denotes definitions at the function entry                                                                                 
  //So, if we're propagating to the *end* of the function, we shouldn't update the OUT table     
  if (isSgFunctionDefinition(node) && cfgNode == FilteredCfgNode(node->cfgForEnd()))
    {
      return false;
    }
  
  //Create a staging OUT table. At the end, we will check if this table                          
  //Was the same as the currently available one, to decide if any changes have occurred          
  //We initialize the OUT table to the IN table                                                  
  NodeReachingDefTable outDefsTable = reachingDefsTable[node].first;
  
  //Special case: the IN table of the function definition node actually denotes                  
  //definitions reaching the *end* of the function. So, start with an empty table to prevent def initions                                                                                           
  //from the bottom of the function from propagating to the top.                                 
  if (isSgFunctionDefinition(node) && cfgNode == FilteredCfgNode(node->cfgForBeginning()))
    {
      outDefsTable.clear();
    }
  
  //Now overwrite any local definitions:                                                         
  if (ssaLocalDefTable.count(node) > 0)
    {
      
      foreach(const NodeReachingDefTable::value_type& varDefPair, ssaLocalDefTable[node])
	{
	  const VarName& definedVar = varDefPair.first;
	  ReachingDefPtr localDef = varDefPair.second;
	  
	  outDefsTable[definedVar] = localDef;
	}
    }
  
  //Compare old to new OUT tables                                                                
  bool changed = (reachingDefsTable[node].second != outDefsTable);
  if (changed)
    {
      reachingDefsTable[node].second = outDefsTable;
    }
  
  return changed;
}

void HeapSSA::updateIncomingPropagatedDefs(FilteredCfgNode cfgNode)
{
  //Get the previous edges in the CFG for this node   
  vector<FilteredCfgEdge> inEdges = cfgNode.inEdges();
  SgNode* astNode = cfgNode.getNode();

  NodeReachingDefTable& incomingDefTable = reachingDefsTable[astNode].first;

  //Iterate all of the incoming edges   
  for (unsigned int i = 0; i < inEdges.size(); i++) {
    SgNode* prev = inEdges[i].source().getNode();
    
    const NodeReachingDefTable& previousDefs = reachingDefsTable[prev].second;
    
    //Merge all the previous defs into the IN table of the current node 
    foreach(const NodeReachingDefTable::value_type& varDefPair, previousDefs) {
      const VarName& var = varDefPair.first;
      const ReachingDefPtr previousDef = varDefPair.second;
      
      //Here we don't propagate defs for variables that went out of scope    
      //(built-in vars are body-scoped but we inserted the def at the SgFunctionDefinition node, so we make an exception)              
      if (!isVarInScope(var, astNode) && !isBuiltinVar(var))
	continue;
      
      //If this is the first time this def has propagated to this node, just copy it over   
      if (incomingDefTable.count(var) == 0) {
	incomingDefTable[var] = previousDef;
 
	// Process the heap variable and dphi function  
	if (heapVarManager->isHeapVar(var)) {
	  SgInitializedName* prevSgn = isSgInitializedName(previousDef->getDefinitionNode());
	  if (prevSgn != NULL) {
	    SgType* nodeType = prevSgn->get_type();
	  }
	  // Get the prev node's dphi 
          ReachingDefPtr prevDPhi = previousDef;
	  if (!prevDPhi->isPhiFunction() 
	      && heapVarManager->hasDPhi(previousDef->getDefinitionNode())) {
	    prevDPhi = heapVarManager->getDPhi(previousDef->getDefinitionNode());
	  }
          if (heapVarManager->hasHeapUse(astNode)) {
            // Set prev node's dphi as all current node's heap uses' reaching def    
	    heapVarManager->updateUseReachingDef(astNode, prevDPhi);
	  }
          if (heapVarManager->hasDPhi(astNode)) {
            HeapReachingDefPtr currDPhi = heapVarManager->getDPhi(astNode);
            currDPhi->addJoinedDPhi(currDPhi, prevDPhi);
	  } 
        }
      } else {
	ReachingDefPtr existingDef = incomingDefTable[var];
	
	if (existingDef->isPhiFunction() && existingDef->getDefinitionNode() == astNode) {
	  //There is a phi node here. We update the phi function to point to the previous reaching definition                      
	  existingDef->addJoinedDef(previousDef, inEdges[i]);
	} else {
	  //If there is no phi node, and we get a new definition, it better be the same as the one previously propagated.                                   
	  if (!(*previousDef == *existingDef)) {
	    printf("ERROR: At node %s@%d, two different definitions reach for variable %s\n", astNode->class_name().c_str(), astNode->get_file_info()->get_line(), varnameToString(var).c_str());
	    ROSE_ASSERT(false);
	  }
	} 

	// Process the heap variable and dphi function
	if (heapVarManager->isHeapVar(var)) {
	  SgNode* currNode = astNode;
	  if (SgExprStatement* exprStmt = isSgExprStatement(astNode)) {
	    SgExpression * expr = exprStmt->get_expression();
	    currNode = expr;
	  }
	  // Get the prev node's dphi
	  ReachingDefPtr prevDPhi = existingDef;
	  if (!prevDPhi->isPhiFunction() 
	      && heapVarManager->hasDPhi(previousDef->getDefinitionNode())) {
	    prevDPhi = heapVarManager->getDPhi(previousDef->getDefinitionNode());
	  } 
	  if (heapVarManager->hasHeapUse(currNode)) {
	    // Set prev node's dphi as all current node's heap uses' reaching def
	    heapVarManager->updateUseReachingDef(currNode, prevDPhi);
	  }
	  if (heapVarManager->hasDPhi(currNode) && existingDef->isPhiFunction()) {
	    HeapReachingDefPtr currDPhi = heapVarManager->getDPhi(currNode);
	    currDPhi->addJoinedDPhi(currDPhi, prevDPhi);
	  }
	}
      }
    }
  }
}

void HeapSSA::buildUseTable(const vector<FilteredCfgNode>& cfgNodes) {
  foreach(const FilteredCfgNode& cfgNode, cfgNodes) {
    SgNode* node = cfgNode.getNode();
    if (localUsesTable.count(node) == 0)
      continue;
    
    foreach(const VarName& usedVar, localUsesTable[node]) {
      //Check the defs that are active at the current node to find the reaching definition 
      //We want to check if there is a definition entry for this use at the current node  
      if (reachingDefsTable[node].first.count(usedVar) > 0) {
	useTable[node][usedVar] = reachingDefsTable[node].first[usedVar];
      } else {
	// There are no defs for this use at this node, this shouldn't happen  
	printf("Error: Found use for the name '%s', but no reaching defs!\n", varnameToString(usedVar).c_str());
	printf("Node is %s:%d in %s\n", node->class_name().c_str(), node->get_file_info()->get_line(),
	       node->get_file_info()->get_filename());
	ROSE_ASSERT(false);
      }
    }
  }
}

/**
 * Check if the two given abstract memory objects must be same or not, now we support two types 
 * of object set: ScalarExprObj and ScalarNamedObj
 */
bool HeapSSA::mustBeSame(ObjSetPtr objSet1, ObjSetPtr objSet2) {
  ScalarExprObj* seObj1 = dynamic_cast<ScalarExprObj* >(objSet1.get());
  ScalarExprObj* seObj2 = dynamic_cast<ScalarExprObj* >(objSet2.get());
  if (seObj1 != NULL && seObj2 != NULL)
    return mustBeSame(seObj1, seObj1);
  else if (seObj1 != NULL || seObj2 != NULL)
    return false;

  ScalarNamedObj* snObj1 = dynamic_cast<ScalarNamedObj* >(objSet1.get());
  ScalarNamedObj* snObj2 = dynamic_cast<ScalarNamedObj* >(objSet2.get());
  if (snObj1 != NULL && snObj2 != NULL)
    return mustBeSame(snObj1, snObj1);

  return false;
}

bool HeapSSA::mustBeSame(ObjSet* objSet1, ObjSet* objSet2) {
  ScalarExprObj* seObj1 = dynamic_cast<ScalarExprObj* >(objSet1);
  ScalarExprObj* seObj2 = dynamic_cast<ScalarExprObj* >(objSet2);
  
  if (seObj1 != NULL && seObj2 != NULL)
    return mustBeSame(seObj1, seObj2);
  else if (seObj1 != NULL || seObj2 != NULL)
    return false;
  
  ScalarNamedObj* snObj1 = dynamic_cast<ScalarNamedObj* >(objSet1);
  ScalarNamedObj* snObj2 = dynamic_cast<ScalarNamedObj* >(objSet2);
  if (snObj1 != NULL && snObj2 != NULL) {
    return mustBeSame(snObj1, snObj2);
  }

  return false;
}

bool HeapSSA::mustBeSame(ObjSet* objSet1, ObjSet* objSet2, bool& mayBeSame) {
  ScalarExprObj* seObj1 = dynamic_cast<ScalarExprObj* >(objSet1);
  ScalarExprObj* seObj2 = dynamic_cast<ScalarExprObj* >(objSet2);

  if (seObj1 != NULL && seObj2 != NULL)
    return mustBeSame(seObj1, seObj2, mayBeSame);
  else if (seObj1 != NULL || seObj2 != NULL)
    return false;

  ScalarNamedObj* snObj1 = dynamic_cast<ScalarNamedObj* >(objSet1);
  ScalarNamedObj* snObj2 = dynamic_cast<ScalarNamedObj* >(objSet2);
  if (snObj1 != NULL && snObj2 != NULL) {
    return mustBeSame(snObj1, snObj2);
  }

  return false;
}

/**  
 * Check if the two given abstract memory objects may be same or not, now we support two types
 * of object set: ScalarExprObj and ScalarNamedOb
 */
bool HeapSSA::mayBeSame(ObjSetPtr objSet1, ObjSetPtr objSet2) {
  return mustBeSame(objSet1, objSet2);
}

bool HeapSSA::mayBeSame(ObjSet* objSet1, ObjSet* objSet2) {
  return mustBeSame(objSet1, objSet2);
}

/**           
 * Check if the two given abstract memory objects may be different or not, now we support 
 * two types of object set: ScalarExprObj and ScalarNamedObj
 */
bool HeapSSA::mayBeDifferent(ObjSetPtr objSet1, ObjSetPtr objSet2) {
  return !mustBeSame(objSet1, objSet2);
}

bool HeapSSA::mayBeDifferent(ObjSet* objSet1, ObjSet* objSet2) {
  return !mustBeSame(objSet1, objSet2);
}

/**      
 * Check if the two scalar expression abstract memory objects must be same or not, i.e. . or ->
 */
bool HeapSSA::mustBeSame(ScalarExprObj* seObj1, ScalarExprObj* seObj2) {
  SgDotExp* dotExp1 = isSgDotExp(seObj1->anchor_exp);
  SgDotExp* dotExp2 = isSgDotExp(seObj2->anchor_exp);
  if (dotExp1 != NULL && dotExp2 != NULL)
    return mustBeSame(dotExp1, dotExp2);

  SgArrowExp* arrowExp1 = isSgArrowExp(seObj1->anchor_exp);
  SgArrowExp* arrowExp2 = isSgArrowExp(seObj2->anchor_exp);
  if (arrowExp1 != NULL && arrowExp2 != NULL)
    return mustBeSame(arrowExp1, arrowExp2);

  SgPointerDerefExp* pdrExp1 = isSgPointerDerefExp(seObj1->anchor_exp);
  SgPointerDerefExp* pdrExp2 = isSgPointerDerefExp(seObj2->anchor_exp);
  if (pdrExp1 != NULL && pdrExp2 != NULL)
    return mustBeSame(pdrExp1, pdrExp2);

  if (dotExp1 != NULL && pdrExp2 != NULL)
    return mustBeSame(dotExp1, pdrExp2);
  else if (dotExp2 != NULL && pdrExp1 != NULL)
    return mustBeSame(dotExp2, pdrExp1);

  return false;
}

bool HeapSSA::mustBeSame(ScalarExprObj* seObj1, ScalarExprObj* seObj2, bool& mayBeSame) {
  SgDotExp* dotExp1 = isSgDotExp(seObj1->anchor_exp);
  SgDotExp* dotExp2 = isSgDotExp(seObj2->anchor_exp);
  if (dotExp1 != NULL && dotExp2 != NULL)
    return mustBeSame(dotExp1, dotExp2);

  SgArrowExp* arrowExp1 = isSgArrowExp(seObj1->anchor_exp);
  SgArrowExp* arrowExp2 = isSgArrowExp(seObj2->anchor_exp);
  if (arrowExp1 != NULL && arrowExp2 != NULL)
    return mustBeSame(arrowExp1, arrowExp2);

  SgPointerDerefExp* pdrExp1 = isSgPointerDerefExp(seObj1->anchor_exp);
  SgPointerDerefExp* pdrExp2 = isSgPointerDerefExp(seObj2->anchor_exp);
  if (pdrExp1 != NULL && pdrExp2 != NULL)
    return mustBeSame(pdrExp1, pdrExp2);

  if (dotExp1 != NULL && pdrExp2 != NULL) { 
    mayBeSame = true; 
    return mustBeSame(dotExp1, pdrExp2);
  } else if (dotExp2 != NULL && pdrExp1 != NULL) {
    mayBeSame = true; 
    return mustBeSame(dotExp2, pdrExp1);
  }

  return false;
}

/**
 * Check if two dot expressions point to same heap address
 */
bool HeapSSA::mustBeSame(SgDotExp* dotExp1, SgDotExp* dotExp2) {
  SgNode* lhs1 = dotExp1->get_lhs_operand();
  SgNode* lhs2 = dotExp2->get_lhs_operand();
  if (hasSameReachingDef(lhs1, lhs2)) {
    SgNode* rhs1 = dotExp1->get_rhs_operand();
    SgNode* rhs2 = dotExp2->get_rhs_operand();

    SgVarRefExp* varRef1 = isSgVarRefExp(rhs1);
    SgVarRefExp* varRef2 = isSgVarRefExp(rhs2);
    if (varRef1 != NULL && varRef2 != NULL)
      return varRef1->get_symbol() == varRef2->get_symbol();
    
    bool res = hasSameReachingDef(rhs1, rhs2);
    return res;
  }
  
  return false;
}

/**
 * Check if two arrow expression point to same heap address 
 */
bool HeapSSA::mustBeSame(SgArrowExp* arrowExp1, SgArrowExp* arrowExp2) {
  SgNode* lhs1 = arrowExp1->get_lhs_operand();
  SgNode* lhs2 = arrowExp2->get_lhs_operand();
  if (hasSameReachingDef(lhs1, lhs2)) {
    SgNode* rhs1 = arrowExp1->get_rhs_operand();
    SgNode* rhs2 = arrowExp2->get_rhs_operand();
    return hasSameReachingDef(rhs1, rhs2);
  }

  return false;
}

/**
 * Check if two pointer de-reference have same pointer value
 */
bool HeapSSA::mustBeSame(SgPointerDerefExp* pdrExp1, SgPointerDerefExp* pdrExp2) {
  return hasSameReachingDef(pdrExp1->get_operand(), pdrExp2->get_operand());
}

bool HeapSSA::mustBeSame(SgDotExp* dotExp, SgPointerDerefExp* pdrExp) {
  return false;
}

/**   
 * Check if the two scalar named abstract memory objects must be same or not, i.e. array access
 */
bool HeapSSA::mustBeSame(ScalarNamedObj* snObj1, ScalarNamedObj* snObj2) {
  // Check the array reference to see if they come from same definition
  if (snObj1->anchor_symbol->get_symbol_basis() == snObj2->anchor_symbol->get_symbol_basis()) {
    // Check the array indexes
    if ((* snObj1->array_index_vector) == (* snObj2->array_index_vector))
      return true;
    // This is not enough, need to check the variable index as well, current IndexVector 
    // and IndexSet implementation is limitted, i.e. only supports constant integer index
    // TODO: check index constant
  }

  return false;
}

/**
 * Check if the two given SgNodes have same reaching def object, i.e. same variable
 */
bool HeapSSA::hasSameReachingDef(SgNode* sgn1, SgNode* sgn2) {
  const StaticSingleAssignment::VarName& varName1 = StaticSingleAssignment::getVarName(sgn1);
  const StaticSingleAssignment::VarName& varName2 = StaticSingleAssignment::getVarName(sgn2);
  const StaticSingleAssignment::NodeReachingDefTable& reachingDefs1
    = getReachingDefsAtNode_(sgn1);
  const StaticSingleAssignment::NodeReachingDefTable& reachingDefs2
    = getReachingDefsAtNode_(sgn2);
  
  // Get SSA look-aside info                                                              
  if (reachingDefs1.find(varName1) != reachingDefs1.end()
      && reachingDefs2.find(varName2) != reachingDefs2.end()) {
    StaticSingleAssignment::ReachingDefPtr reachingDef1 = (* reachingDefs1.find(varName1)).second;
    StaticSingleAssignment::ReachingDefPtr reachingDef2 = (* reachingDefs1.find(varName2)).second;
    return reachingDef1.get() == reachingDef2.get();
  } else
    return false;
}
