// we don't want functionState.h to be included until nodeState.h is finished
#define NO_FUNCTION_STATE_H
#include "nodeState.h"
// inclure functionState.h now
#undef NO_FUNCTION_STATE_H
#include "functionState.h"
#include "compose.h"

#include <boost/make_shared.hpp>

using namespace std;

namespace dataflow {

//
// local helper functions

static
ConstLatticePtr
getLattice_ex(const NodeState::LatticeMap& dfMap, const Analysis* analysis, PartEdgePtr departEdge);

static
LatticePtr
getLatticeMod_ex(NodeState::LatticeMap& dfMap, const Analysis* analysis, PartEdgePtr departEdge);

static
void delete_ex(NodeState::LatticeMap& dfMap, const Analysis* analysis);

//
// NodeState implementation

// Records that this analysis has initialized its state at this node
void NodeState::initialized(const Analysis* init)
{
  initializedAnalyses[init] = true;
}

// Returns true if this analysis has initialized its state at this node and false otherwise
bool NodeState::isInitialized(const Analysis* analysis) const
{
  return initializedAnalyses.find(analysis) != initializedAnalyses.end();
}

// Set this node's lattices for this analysis (possibly above or below only, replacing previous mappings).
// The lattices will be associated with the NULL edge
void NodeState::setLattice(const Analysis* analysis, LatticePtr lattice)
{
  PartLattice tmp;
  
  if(dfInfoAbove.find((Analysis*)analysis) != dfInfoAbove.end())
    dfInfoAbove[(Analysis*)analysis].clear();
  else
    dfInfoAbove[(Analysis*)analysis] = tmp;

  if(dfInfoBelow.find((Analysis*)analysis) != dfInfoBelow.end())
    dfInfoBelow[(Analysis*)analysis].clear();
  else
    dfInfoBelow[(Analysis*)analysis] = tmp;

  // Set dfInfoAbove to lattices
  dfInfoAbove[(Analysis*)analysis][NULLPartEdge] = lattice;
                dfInfoBelow[(Analysis*)analysis][NULLPartEdge] = clone(lattice);
  
  // Records that this analysis has initialized its state at this node
  initialized((Analysis*)analysis);
}

// Set this node's lattices for this analysis above the node, replacing previous mappings).
// The lattices will be associated with the NULL edge
void NodeState::setLatticeAbove(const Analysis* analysis, LatticePtr lattice)
{
  // if the analysis currently has a mapping in dfInfoAbove
  // \todo \pp check implementation in original code
  setLatticeAbove(analysis, NULLPartEdge, lattice);
}

// Set this node's lattices for this analysis, along the given departing edge
void NodeState::setLatticeAbove(const Analysis* analysis, PartEdgePtr departEdge, LatticePtr lattice)
{
  // was: setLattice_ex(dfInfoAbove, analysis, departEdge, lattices);
  dfInfoAbove[analysis][departEdge] = lattice;

  // Records that this analysis has initialized its state at this node
  initialized(analysis);
}


// Set this node's lattices for this analysis above the node, replacing previous mappings).
// The lattices will be associated with the NULL edge
void NodeState::setLatticeBelow(const Analysis* analysis, LatticePtr lattice)
{
  // if the analysis currently has a mapping in dfInfoAbove
  // \todo \pp check implementation in original code
  setLatticeBelow(analysis, NULLPartEdge, lattice);
}

// Set this node's lattices for this analysis, along the given departing edge
void NodeState::setLatticeBelow(const Analysis* analysis, PartEdgePtr departEdge, LatticePtr lattice)
{
  // was: setLattice_ex(dfInfoAbove, analysis, departEdge, lattices);
  dfInfoBelow[analysis][departEdge] = lattice;

  // Records that this analysis has initialized its state at this node
  initialized(analysis);
}

// static vector<Lattice*> emptyLatVec;

// Returns the map containing all the lattices above the node from the given analysis along the all edges
// (read-only access)
const NodeState::PartLattice&
NodeState::getLatticeAboveAll(const Analysis* analysis) const
{ 
  ROSE_ASSERT(dfInfoAbove.find(analysis) != dfInfoAbove.end());
  return dfInfoAbove.find(analysis)->second;
}

// \pp if the nodestate has no information, we return a reference to a dummy-lattice
//     not sure if this is the best way of handling the absence of state
//     as in principle the state of the lattice could be accidentally modified.
static LatticePtr dummyLattice(static_cast<Lattice*>(0));

// Returns the map containing all the lattices below the node from the given analysis along the all edges
// (read-only access)
const NodeState::PartLattice&
NodeState::getLatticeBelowAll(const Analysis* analysis) const
{ 
  ROSE_ASSERT(dfInfoBelow.find(analysis) != dfInfoBelow.end());
  return dfInfoBelow.find(analysis)->second;
}

#if OBSOLETE_CODE
// returns the given lattice from above the node, which owned by the given analysis
LatticePtr
NodeState::getLatticeAbove(Analysis* analysis, int latticeName) const
{
  return getLattice_ex(dfInfoAbove, analysis, NULLPartEdge, latticeName);
}

// returns the given lattice from below the node, which owned by the given analysis
LatticePtr
NodeState::getLatticeBelow(Analysis* analysis, int latticeName) const
{
  return getLattice_ex(dfInfoBelow, analysis, NULLPartEdge, latticeName);
}
  
// Returns the given lattice above the node from the given analysis along the given departing edge
Lattice*
NodeState::getLatticeAbove(Analysis* analysis, PartEdgePtr departEdge, int latticeName) const
{
  return getLattice_ex(dfInfoAbove, analysis, departEdge, latticeName);
}

// Returns the given lattice below the node from the given analysis along the given departing edge
LatticePtr NodeState::getLatticeBelow(Analysis* analysis, PartEdgePtr departEdge, int latticeName) const
{
  return getLattice_ex(dfInfoBelow, analysis, departEdge, latticeName);
}

#endif /* OBSOLETE_CODE */

// Returns the map containing all the lattices above the node from the given analysis along the NULL edge
// (read-only access)
ConstLatticePtr NodeState::getLatticeAbove(const Analysis* analysis) const
{
  return getLattice_ex(dfInfoAbove, analysis, NULLPartEdge);
}

// Returns the map containing all the lattices below the node from the given analysis along the NULL edge
// (read-only access)
ConstLatticePtr
NodeState::getLatticeBelow(const Analysis* analysis) const
{
  return getLattice_ex(dfInfoBelow, analysis, NULLPartEdge);
}

// Returns the map containing all the lattices above the node from the given analysis along the given departing edge
// (read-only access)
ConstLatticePtr
NodeState::getLatticeAbove(const Analysis* analysis, PartEdgePtr departEdge) const
{ return getLattice_ex(dfInfoAbove, analysis, departEdge); }

// Returns the map containing all the lattices below the node from the given analysis along the given departing edge
// (read-only access)
ConstLatticePtr
NodeState::getLatticeBelow(const Analysis* analysis, PartEdgePtr departEdge) const
{ return getLattice_ex(dfInfoBelow, analysis, departEdge); }

// Returns the map containing all the lattices above the node from the given analysis along the all edges
// (read/write access)
NodeState::PartLattice&
NodeState::getLatticeAboveAllMod(const Analysis* analysis)
{ return dfInfoAbove[analysis];
}

// Returns the map containing all the lattices below the node from the given analysis along the all edges
// (read/write access)
NodeState::PartLattice&
NodeState::getLatticeBelowAllMod(const Analysis* analysis)
{ return dfInfoBelow[analysis]; }

// Returns the map containing all the lattices above the node from the given analysis along the NULL edge
// (read/write access)
LatticePtr
NodeState::getLatticeAboveMod(const Analysis* analysis)
{ return getLatticeMod_ex(dfInfoAbove, analysis, NULLPartEdge); }

// Returns the map containing all the lattices above the node from the given analysis along the NULL edge
// (read/write access)
LatticePtr
NodeState::getLatticeBelowMod(const Analysis* analysis)
{ return getLatticeMod_ex(dfInfoBelow, analysis, NULLPartEdge); }

// Returns the map containing all the lattices above the node from the given analysis along the given departing edge
// (read/write access)
LatticePtr
NodeState::getLatticeAboveMod(const Analysis* analysis, PartEdgePtr departEdge)
{ return getLatticeMod_ex(dfInfoAbove, analysis, departEdge); }

// Returns the map containing all the lattices above the node from the given analysis along the given departing edge
// (read/write access)
LatticePtr
NodeState::getLatticeBelowMod(const Analysis* analysis, PartEdgePtr departEdge)
{ return getLatticeMod_ex(dfInfoBelow, analysis, departEdge); }

// Deletes all lattices above this node associated with the given analysis
void NodeState::deleteLatticeAbove(const Analysis* analysis)
{ delete_ex(dfInfoAbove, analysis); }

// deletes all lattices below this node associated with the given analysis
void NodeState::deleteLatticeBelow(const Analysis* analysis)
{ delete_ex(dfInfoBelow, analysis); }

#if OBSOLETE_CODE

// General lattice setter function
void NodeState::setLattice_ex(LatticeMap& dfMap, Analysis* analysis, PartEdgePtr departEdge, LatticePtr& lattice)
{
  // If the analysis currently has a mapping in dfInfoB
  std::map<PartEdgePtr, std::vector<Lattice*> >::iterator w;
  if((dfMap.find((Analysis*)analysis)) != dfMap.end() && 
     ((w = dfMap[((Analysis*)analysis)].find(departEdge)) != dfMap[((Analysis*)analysis)].end()))
  {
    // Empty out the current mapping of analysis in dfInfo
    for(vector<Lattice*>::iterator it = w->second.begin(); 
        it != w->second.end(); it++)
    { delete *it; }
    w->second.clear();
    
    // Create the new mapping
    w->second = lattices;
  }
  else
  {
    // Create the new mapping
    dfMap[(Analysis*)analysis][departEdge] = lattices;
  }
  
  // Records that this analysis has initialized its state at this node
  initialized((Analysis*)analysis);
}

// General read-only lattice vector getter function
const vector<Lattice*>& NodeState::getLattice_ex(const LatticeMap& dfMap, Analysis* analysis, 
                                                PartEdgePtr departEdge) const
{
  LatticeMap::const_iterator a;
  std::map<PartEdgePtr, std::vector<Lattice*> >::const_iterator w;
  
  // If this analysis has registered some Lattices at this node/edge combination
  if((a=dfMap.find((Analysis*)analysis)) != dfMap.end() && 
     ((w = a->second.find(departEdge)) != a->second.end())) {
      //printf("dfLattices->first=%p, dfLattices->second.size()=%d\n", dfLattices->first, dfLattices->second.size());
    return w->second;
  } else
    return emptyLatVec;
}
#endif /* OBSOLETE_CODE */

// Returns true if the two lattices vectors contain equivalent information and false otherwise
bool NodeState::equivLattices(ConstLatticePtr latticesA, ConstLatticePtr latticesB)
{
  return latticesA->equiv(latticesB.get());
  
#if OBSOLETE_CODE
  //printf("    latticesA.size()=%d latticesB.size()=%d\n", latticesA.size(), latticesB.size());
  if(latticesA.size() != latticesB.size())
    return false;
  
  vector<Lattice*>::const_iterator itA, itB;
  for(itA = latticesA.begin(), itB = latticesB.begin();
      itA != latticesA.end(), itB != latticesB.end();
      itA++, itB++)
  {
    if(!((*itA)->equiv(*itB))) return false;
  }
  
  return true;
#endif /* OBSOLETE_CODE */
}

// Creates a copy of all the dataflow state (Lattices and Facts) associated with
// analysis srcA and associates this copied state with analysis tgtA.
void NodeState::cloneAnalysisState(const Analysis* srcA, Analysis* tgtA)
{
  // Copy srcA's facts
  //const map <int, NodeFact*>& srcFacts = getFacts(srcA);
  const vector<NodeFact*>& srcFacts = getFacts(srcA);
  //printf("srcFacts.size()=%d\n", srcFacts.size());
  
  vector<NodeFact*> tgtFacts;
  for(vector<NodeFact*>::const_iterator f = srcFacts.begin();
      f != srcFacts.end(); f++)
  { tgtFacts.push_back((*f)->copy()); }
  // Associate analysis tgtA with the copied facts
  setFacts(tgtA, tgtFacts);
  
  // Copy srcA's lattices into tgtLatAbv and tgtLatBel
  const PartLattice& srcLatAbv = getLatticeAboveAll(srcA);
  
  for(PartLattice::const_iterator e=srcLatAbv.begin(); e!=srcLatAbv.end(); ++e) {
#if OBSOLETE_CODE
    vector<Lattice*> tgtLatAbv;
    for(vector<Lattice*>::const_iterator l=e->second.begin(); l!=e->second.end(); l++)
      tgtLatAbv.push_back((*l)->copy());
#endif /* OBSOLETE_CODE */
    // Associate analysis tgtA with the copied lattices
    ROSE_ASSERT(e->second.get());
    LatticePtr clonedLat(e->second->copy());

    setLatticeAbove(tgtA, e->first, clonedLat);
  }
  
  const PartLattice& srcLatBel = getLatticeBelowAll(srcA);
  for(PartLattice::const_iterator e=srcLatBel.begin(); e!=srcLatBel.end(); ++e) {
#if OBSOLETE_CODE
    vector<Lattice*> tgtLatBel;
    for(vector<Lattice*>::const_iterator l=e->second.begin(); l!=e->second.end(); l++)
      tgtLatBel.push_back((*l)->copy());
#endif /* OBSOLETE_CODE */
    // Associate analysis tgtA with the copied lattices
    ROSE_ASSERT(e->second.get());
    LatticePtr clonedLat(e->second->copy());

    setLatticeBelow(tgtA, e->first, clonedLat);
  }
}

// Given a set of analyses, one of which is designated as a master, unions together the 
// lattices associated with each of these analyses. The results are associated on each 
// CFG node with the master analysis.
void NodeState::unionLattices(set<Analysis*>& unionSet, const Analysis* master)
{
  //printf("    unionLattices() unionSet.size()=%d, master=%p, this=%p\n", unionSet.size(), master, this);
  //printf("  masterLatAbv.size()=%d, masterLatBel.size()=%d\n", masterLatAbv.size(), masterLatBel.size());
  for(set<Analysis*>::iterator it = unionSet.begin(); it!=unionSet.end(); it++)
  {
    Analysis* curA = *it;
    //printf("  curA=%p\n", curA);
    if(curA != master)
    {
      unionLatticeMaps(getLatticeAboveAllMod(master), getLatticeAboveAll(curA));
      unionLatticeMaps(getLatticeBelowAllMod(master), getLatticeBelowAll(curA));
    }
  }
}

// Unions the dataflow information in Lattices held by the from map into the to map
// Returns true if this causes a change in the lattices in to and false otherwise
bool NodeState::unionLatticeMaps(PartLattice& to, const PartLattice& from)
{
  bool modified = false;

  ROSE_ASSERT(to.size() == from.size());

  PartLattice::iterator       tgtpos = to.begin();
  PartLattice::const_iterator srcpos = from.begin();

  while (tgtpos != to.end())
  {
    // \pp do the keys in the map need to match?
    // ROSE_ASSERT(tgtpos.second == srcpos.second);

    ROSE_ASSERT(tgtpos->second.get());
    if (tgtpos->second->finiteLattice())
      modified = tgtpos->second->meetUpdate(srcpos->second.get()) || modified;
    else {
      InfiniteLattice&   tgtlat = dynamic_cast<InfiniteLattice&>(*tgtpos->second.get());
      InfiniteLatticePtr meetResult(tgtlat.copy());

      meetResult->meetUpdate(srcpos->second.get());
      // Widen the resulting meet
      modified =  tgtlat.widenUpdate(meetResult.get()) || modified;
    }

    ++tgtpos; ++srcpos;
  }

#if OBSOLETE_CODE
  // All the analyses in unionSet must have the same number of edges
  ROSE_ASSERT(to.size() == from.size());

  map<PartEdgePtr, vector<Lattice*> >::iterator       eTo;
  map<PartEdgePtr, vector<Lattice*> >::const_iterator eFrom;
  for(eTo=to.begin(), eFrom=from.begin(); eTo!=to.end(); eTo++, eFrom++) {
    // All the analyses in unionSet must have the same number of lattices associated with each edge
    ROSE_ASSERT(eTo->second.size() == eFrom->second.size());

    // Union the Above lattices 
    vector<Lattice*>::iterator       lTo;
    vector<Lattice*>::const_iterator lFrom;
    for(lTo=eTo->second.begin(), lFrom=eFrom->second.begin(); lTo!=eTo->second.end(); lTo++, lFrom++) {
      if((*lTo)->finiteLattice())
        modified = (*lTo)->meetUpdate(*lFrom) || modified;
      else {
        InfiniteLattice* meetResult = dynamic_cast<InfiniteLattice*>((*lTo)->copy());
        meetResult->meetUpdate(*lFrom); 
        // Widen the resulting meet
        modified =  dynamic_cast<InfiniteLattice*>(*lTo)->widenUpdate(meetResult) | modified;
        delete meetResult;
      }
    }
  }
#endif /* OBSOLETE_CODE */
  
  return modified;
}

// associates the given analysis/fact name with the given NodeFact, 
// deleting any previous association (the previous NodeFact is freed)
void NodeState::addFact(const Analysis* analysis, int factName, NodeFact* f)
{
  NodeFactMap::iterator factsIt;
  // if this analysis has registered some facts at this node
  if((factsIt = facts.find((Analysis*)analysis)) != facts.end())
  {
    // delete the old fact (if any) and set it to the new fact
    //if(factsIt->second.find(factName) != factsIt->second.end())
    if((unsigned int)factName < factsIt->second.size())
    {
      delete factsIt->second[factName];
      factsIt->second[factName] = f;
    }
    else
    {
      for(int i=factsIt->second.size(); i<(factName-1); i++)
        factsIt->second.push_back(NULL);
      factsIt->second.push_back(f);
    }
  }
  else
  {
    vector<NodeFact*> newVec;
    for(int i=0; i<(factName-1); i++)
      newVec.push_back(NULL);
    newVec.push_back(f);
    facts[(Analysis*)analysis] = newVec;
  }
}

// associates the given analysis with the given map of fact names to NodeFacts
// deleting any previous association (the previous NodeFact is freed)
void NodeState::setFacts(const Analysis* analysis, const vector<NodeFact*>& newFacts)
{
  NodeFactMap::iterator factsIt;
  // if this analysis has registered some facts at this node
  if((factsIt = facts.find((Analysis*)analysis)) != facts.end())
  {
    // delete the old facts (if any) and associate the analysis with the new set of facts
    for(vector<NodeFact*>::iterator it = factsIt->second.begin();
        it != factsIt->second.end(); it++)
    //{ delete it->second; }
    { delete *it; }
    factsIt->second.clear();
    factsIt->second = newFacts;
  }
  else
  {
    // Associate newFacts with the analysis
    facts[(Analysis*)analysis] = newFacts;
  }
  
  // Records that this analysis has initialized its state at this node
  initialized((Analysis*)analysis);
}

// returns the given fact, which owned by the given analysis
NodeFact*
NodeState::getFact(const Analysis* analysis, int factName) const
{
  NodeFactMap::const_iterator factsIt = facts.find(analysis);
  // if this analysis has registered some Lattices at this node
  if((factsIt) != facts.end())
  {
    vector<NodeFact*>::const_iterator it;
    //printf("NodeState::getFact() factName=%d factsIt->second.size()=%d\n", factName, factsIt->second.size());
    //if((it = factsIt->second.find(factName)) != factsIt->second.end())
    if((unsigned int)factName < factsIt->second.size())
      return (factsIt->second)[factName];
  }
  return NULL;
}

static vector<NodeFact*> emptyFactsMap;
// returns the map of all the facts owned by the given analysis at this NodeState
// (read-only access)
const vector<NodeFact*>&
NodeState::getFacts(const Analysis* analysis) const
{
  NodeFactMap::const_iterator factsIt = facts.find(analysis);

  // if this analysis has registered some facts at this node, return their map
  if(factsIt != facts.end())
    return factsIt->second;
  else
    // otherwise, return an empty map
    return emptyFactsMap;
}

// returns the map of all the facts owned by the given analysis at this NodeState
// (read/write access)
vector<NodeFact*>&
NodeState::getFactsMod(const Analysis* analysis)
{
  NodeFactMap::iterator factsIt = facts.find(analysis);

  // if this analysis has registered some facts at this node, return their map
  if(factsIt != facts.end())
    return factsIt->second;
  else
    // otherwise, return an empty map
    return emptyFactsMap;
}

// deletes all facts at this node associated with the given analysis
void NodeState::deleteFacts(const Analysis* analysis)
{
  vector<NodeFact*>& f = getFactsMod(analysis);
  
  // delete the individual facts associated with this analysis
  for(vector<NodeFact*>::iterator it = f.begin(); it!=f.end(); it++)
    //delete it->second;
    delete *it;

  // delete the analysis' mapping in facts
  facts.erase((Analysis*)analysis);
}

// delete all state at this node associated with the given analysis
void NodeState::deleteState(const Analysis* analysis)
{
  deleteLatticeAbove(analysis);
  deleteLatticeBelow(analysis);
  deleteFacts(analysis);
}

// ====== STATIC ======
map<ComposedAnalysis*, map<PartPtr, NodeState*> > NodeState::nodeStateMap;

// Returns the NodeState object associated with the given Part from the given analysis.
NodeState* NodeState::getNodeState(ComposedAnalysis* analysis, PartPtr p)
{
  if(nodeStateMap.find(analysis)                == nodeStateMap.end() ||
     nodeStateMap[analysis].find(p) == nodeStateMap[analysis].end()) {
    /*Dbg::dbg << "NodeState::getNodeState() Creating new state. analysis="<<analysis<<"(found="<<(nodeStateMap.find(analysis) == nodeStateMap.end())<< ") p="<<p->str();
    if(nodeStateMap.find(analysis) != nodeStateMap.end()) 
      Dbg::dbg<<"(found="<<(nodeStateMap[analysis].find(p) == nodeStateMap[analysis].end())<<")";
    if(nodeStateMap[analysis].size() > 0) {
      PartPtr last = nodeStateMap[analysis].rbegin()->first;
      Dbg::dbg << "nodeStateMap[analysis].rbegin()"<<last.str()<<endl;
      PartPtr c(p);
      Dbg::dbg << "eq="<<(last == c)<<endl;
    }*/
    
    nodeStateMap[analysis][p] = new NodeState();
    //Dbg::dbg << "state="<<nodeStateMap[analysis][p]<<endl;
  }
  
  return nodeStateMap[analysis][p];
}

// Copies from's above lattices for analysis to to's above lattices for the same analysis, both along the NULL edge.
void NodeState::copyLattices_aEQa(Analysis* analysis, NodeState& to, const NodeState& from)
{
  copyLattices_aEQa(analysis, to, NULLPartEdge, from, NULLPartEdge);
}
// Copies along the given departing edges
void NodeState::copyLattices_aEQa(Analysis* analysis, NodeState& to,   PartEdgePtr toDepartEdge, 
                                                const NodeState& from, PartEdgePtr fromDepartEdge)
{
  ROSE_ASSERT(to.dfInfoAbove.find(analysis)   != to.dfInfoAbove.end());
  ROSE_ASSERT(from.dfInfoAbove.find(analysis) != from.dfInfoAbove.end());
  copyLattices(to.dfInfoAbove.find(analysis)->second, toDepartEdge, from.dfInfoAbove.find(analysis)->second, fromDepartEdge); 
}

// Copies from's above lattices for analysis to to's below lattices for the same analysis, both along the NULL edge.
void NodeState::copyLattices_bEQa(Analysis* analysis, NodeState& to, const NodeState& from)
{
  copyLattices_bEQa(analysis, to, NULLPartEdge, from, NULLPartEdge);
}
// Copies along the given departing edges
void NodeState::copyLattices_bEQa(Analysis* analysis, NodeState& to,   PartEdgePtr toDepartEdge, 
                                                const NodeState& from, PartEdgePtr fromDepartEdge)
{
  ROSE_ASSERT(to.dfInfoBelow.find(analysis)   != to.dfInfoBelow.end());
  ROSE_ASSERT(from.dfInfoAbove.find(analysis) != from.dfInfoAbove.end());
  copyLattices(to.dfInfoBelow.find(analysis)->second, toDepartEdge, from.dfInfoAbove.find(analysis)->second, fromDepartEdge); 
}

// Copies from's below lattices for analysis to to's below lattices for the same analysis, both along the NULL edge.
void NodeState::copyLattices_bEQb(Analysis* analysis, NodeState& to, const NodeState& from)
{
  copyLattices_bEQb(analysis, to, NULLPartEdge, from, NULLPartEdge);
}
// Copies along the given departing edges
void NodeState::copyLattices_bEQb(Analysis* analysis, NodeState& to,   PartEdgePtr toDepartEdge, 
                                                const NodeState& from, PartEdgePtr fromDepartEdge)
{
  ROSE_ASSERT(to.dfInfoBelow.find(analysis)   != to.dfInfoBelow.end());
  ROSE_ASSERT(from.dfInfoBelow.find(analysis) != from.dfInfoBelow.end());
  copyLattices(to.dfInfoBelow.find(analysis)->second, toDepartEdge, from.dfInfoBelow.find(analysis)->second, fromDepartEdge);
}


// Copies from's below lattices for analysis to to's above lattices for the same analysis, both along the NULL edge.
void NodeState::copyLattices_aEQb(Analysis* analysis, NodeState& to, const NodeState& from)
{
  copyLattices_aEQb(analysis, to, NULLPartEdge, from, NULLPartEdge);
}
// Copies along the given departing edges
void NodeState::copyLattices_aEQb(Analysis* analysis, NodeState& to,   PartEdgePtr toDepartEdge, 
                                                const NodeState& from, PartEdgePtr fromDepartEdge)
{
  ROSE_ASSERT(to.dfInfoAbove.find(analysis)   != to.dfInfoAbove.end());
  ROSE_ASSERT(from.dfInfoBelow.find(analysis) != from.dfInfoBelow.end());
  copyLattices(to.dfInfoAbove.find(analysis)->second, toDepartEdge, from.dfInfoBelow.find(analysis)->second, fromDepartEdge); 
}

// Makes dfInfoTo[*] a copy of dfInfoFrom[*], ensuring that they both have the same structure
void NodeState::copyLattices(PartLattice& dfInfoTo, const PartLattice& dfInfoFrom)
{
  ROSE_ASSERT(dfInfoTo.size() == dfInfoFrom.size());
  
  // Copy lattices
  //Dbg::dbg << "    copyLattices()\n";
  PartLattice::iterator eTo;
  PartLattice::const_iterator eFrom;
  for(eTo=dfInfoTo.begin(), eFrom=dfInfoFrom.begin(); eTo!=dfInfoTo.end(); eTo++, eFrom++) {
    ROSE_ASSERT(eTo->first == eFrom->first);
    
    eTo->second->copy(eFrom->second.get());

#if OBSOLETE_CODE
    vector<Lattice*>::iterator lTo;
    vector<Lattice*>::const_iterator lFrom;
    
    for(lTo=eTo->second.begin(), lFrom=eFrom->second.begin(); lTo!=eTo->second.end(); lTo++, lFrom++) {
      (*lTo)->copy(*lFrom);
    }
#endif /* OBSOLETE_CODE */
  }
}

// Makes dfInfoTo[*] a copy of dfInfoFrom[*]. If dfInfoTo is not initially empty, it is cleared and its 
// Lattices are deallocated.
void NodeState::copyLatticesOW(PartLattice& dfInfoTo, const PartLattice& dfInfoFrom)
{

#if OBSOLETE_CODE
  // First, empty out dfInfoTo if needed
  for(map<PartEdgePtr, vector<Lattice*> >::iterator eTo=dfInfoTo.begin(); eTo!=dfInfoTo.end(); eTo++) {  
    for(vector<Lattice*>::iterator lTo=eTo->second.begin(); lTo!=eTo->second.end(); lTo++) {
      delete *lTo;
    }
  }
  dfInfoTo.clear();
#endif /* OBSOLETE_CODE */
  
  for(PartLattice::const_iterator eFrom=dfInfoFrom.begin(); eFrom!=dfInfoFrom.end(); eFrom++) {
    // for(vector<Lattice*>::const_iterator lFrom=eFrom->second.begin(); lFrom!=eFrom->second.end(); lFrom++)
    dfInfoTo[eFrom->first] = LatticePtr(eFrom->second->copy());
  }
}

// Makes dfInfoTo[toDepartEdge] a copy of dfInfoFrom[fromDepartEdge]
// If adjustPEdge is true, calls Lattice::setPartEdge() on the copied lattices in dfInfoTo to associate them with this edge.
void NodeState::copyLattices(PartLattice& dfInfoTo,   PartEdgePtr toDepartEdge,
                       const PartLattice& dfInfoFrom, PartEdgePtr fromDepartEdge, bool adjustPEdge)
{
  ROSE_ASSERT(dfInfoTo.size() == dfInfoFrom.size());
  ROSE_ASSERT(dfInfoTo.find(toDepartEdge) != dfInfoTo.end());
  ROSE_ASSERT(dfInfoFrom.find(fromDepartEdge) != dfInfoFrom.end());
  
  // Copy lattices
  //Dbg::dbg << "    copyLattices()\n";
  PartLattice::iterator       eTo   = dfInfoTo.find(toDepartEdge);
  PartLattice::const_iterator eFrom = dfInfoFrom.find(fromDepartEdge);

  ROSE_ASSERT(eTo != dfInfoTo.end() && eFrom != dfInfoFrom.end());
  eTo->second->copy(eFrom->second.get());

    if(adjustPEdge)
      // Adjust the Lattice's part edge to correspond to its new edge
      (*lTo)->setPartEdge(toDepartEdge);


#if OBSOLETE_CODE
  vector<Lattice*>::iterator lTo;
  vector<Lattice*>::const_iterator lFrom;

  for(lTo=eTo->second.begin(), lFrom=eFrom->second.begin(); lTo!=eTo->second.end(); lTo++, lFrom++) {
    (*lTo)->copy(*lFrom);
    if(adjustPEdge)
      // Adjust the Lattice's part edge to correspond to its new edge
      (*lTo)->setPartEdge(toDepartEdge);
  }
#endif /* OBSOLETE_CODE */
}

// Makes dfInfoTo[toDepartEdge] a copy of dfInfoFrom[fromDepartEdge]. If dfInfoTo[toDepartEdge] is not initially empty, 
// it is cleared and its Lattices are deallocated.
void NodeState::copyLatticesOW(PartLattice& dfInfoTo,   PartEdgePtr toDepartEdge,
                         const PartLattice& dfInfoFrom, PartEdgePtr fromDepartEdge, bool adjustPEdge)
{
  ROSE_ASSERT(dfInfoFrom.find(fromDepartEdge) != dfInfoFrom.end());
  
#if OBSOLETE_CODE
  // First, empty out dfInfoTo[toDepartEdge] if needed
  for(vector<Lattice*>::iterator lTo=dfInfoTo[toDepartEdge].begin(); lTo!=dfInfoTo[toDepartEdge].end(); lTo++)
    delete *lTo;
  dfInfoTo[toDepartEdge].clear();
#endif /* OBSOLETE_CODE */
  
  PartLattice::const_iterator eFrom = dfInfoFrom.find(fromDepartEdge);
    if(adjustPEdge)
      // Adjust the Lattice's part edge to correspond to its new edge
      lTo->setPartEdge(toDepartEdge);

  dfInfoTo[toDepartEdge] = LatticePtr(eFrom->second->copy());

#if OBSOLETE_CODE
  for(vector<Lattice*>::const_iterator lFrom=eFrom->second.begin(); lFrom!=eFrom->second.end(); lFrom++)
    dfInfoTo[toDepartEdge].push_back((*lFrom)->copy());
#endif /* OBSOLETE_CODE */
}

string NodeState::str(string indent)
{
  ostringstream oss;
  
  oss << "[";
  for(BoolMap::iterator i=initializedAnalyses.begin(); i!=initializedAnalyses.end(); ) {
    oss << str(i->first, indent+"&nbsp;&nbsp;&nbsp;&nbsp;");
    i++;
    if(i!=initializedAnalyses.end())
      oss << endl;
  }
  oss << "]";
  
  return oss.str();
}


string NodeState::str(const Analysis* analysis, string indent)
{
  ostringstream oss;
  
  // If the analysis has not yet been initialized, say so
  if(initializedAnalyses.find(analysis) == initializedAnalyses.end()) {
    oss << "[NodeState: NONE for Analysis"<<analysisName.str()<<"]\n";
    /*for(std::map<Analysis*, bool >::iterator a=initializedAnalyses.begin(); a!=initializedAnalyses.end(); a++)
      oss << "a="<<a->first<<endl;*/
  // If it has been initialized, stringify it
  } else {
    oss << "[NodeState: analysis ("<<analysisName.str()<<")\n";
    /*ROSE_ASSERT(dfInfoAbove.size() == dfInfoBelow.size());
    ROSE_ASSERT(dfInfoAbove.find(analysis) != dfInfoAbove.end());
    ROSE_ASSERT(dfInfoBelow.find(analysis) != dfInfoBelow.end());*/
    int i=0;
    
    //ROSE_ASSERT(dfInfoAbove[analysis].size() == dfInfoBelow[analysis].size());
    oss << indent << "Lattices Above: \n"<<indent<<str(dfInfoAbove[analysis], indent+"&nbsp;&nbsp;&nbsp;&nbsp;");
    oss << indent << "Lattices Below: \n"<<indent<<str(dfInfoBelow[analysis], indent+"&nbsp;&nbsp;&nbsp;&nbsp;");
    
    ROSE_ASSERT(facts.find(analysis) != facts.end());
    i=0;
    const vector<NodeFact*>& aFacts = facts.find(analysis)->second;
    for(vector<NodeFact*>::const_iterator fact=aFacts.begin(); fact!=aFacts.end(); fact++, i++)
      oss << indent << "    Fact "<<i<<": "<<(*fact)->str(indent+"  ")<<"\n";
    oss << indent << "]";
  }
  
  return oss.str();
}

// Returns the string representation of the Lattices stored in the given map
string NodeState::str(const PartLattice& dfInfo, string indent)
{
  ostringstream oss;
  
  for(PartLattice::const_iterator e=dfInfo.begin(); e!=dfInfo.end(); e++) {
    PartEdgePtr edg = e->first;
    oss << indent << "edge "<<(edg? edg->str(): "NULL")<<endl;

    int i=0;
    // for(vector<Lattice*>::const_iterator l=e->second.begin(); l!=e->second.end(); l++, i++) {
    Lattice* l = e->second.get();
    ROSE_ASSERT(l);
    oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;Lattice "<<i<<" = "<<(l)<<"="<<l->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<"\n";
    //}
  }
  
  return oss.str();
}

// General lattice getter function
// declared static by previous declaration
ConstLatticePtr
getLattice_ex(const NodeState::LatticeMap& dfMap, const Analysis* analysis, PartEdgePtr departEdge)
{
  typedef NodeState::PartLattice PartLattice;
  typedef NodeState::LatticeMap  LatticeMap;

  if(dfMap.find(analysis) == dfMap.end()) {
    Dbg::region reg(1,1, Dbg::region::topLevel, "NodeState::getLattice_ex");
    Dbg::dbg << "dfMap.find("<<analysis<<")!=dfMap.end() = "<<(dfMap.find((Analysis*)analysis) != dfMap.end())<<" dfMap.size()="<<dfMap.size()<<endl;
    for(LatticeMap::const_iterator i=dfMap.begin(); i!=dfMap.end(); i++)
    { Dbg::dbg << "i="<<i->first<<endl; }
  }
  /*if((a=dfMap.find((Analysis*)analysis)) != dfMap.end()) {
    Dbg::dbg << "a->second.find("<<(departEdge? departEdge->str(): "NULL")<<")!= a->second.end() = "<<(a->second.find(departEdge) != a->second.end())<<endl;
    Dbg::dbg << "a->second="<<endl;
    Dbg::indent ind;
    std::map<PartEdgePtr, vector<Lattice*> > b = a->second;
    Dbg::dbg << str(b)<<endl;
  }*/

#if OBSOLETE_CODE
  // If this analysis has registered some Lattices at this node/edge combination
  if((a=dfMap.find((Analysis*)analysis)) != dfMap.end() &&
     ((w = a->second.find(departEdge)) != a->second.end())) {
      //Dbg::dbg << "w->second.size()="<<w->second.size()<<" latticeName="<<latticeName<<endl;
    if(w->second.size()>=(unsigned int)latticeName)
      return w->second.at(latticeName);
    else
      return NULL;
  }
#endif /* OBSOLETE_CODE */

  LatticeMap::const_iterator edgepos = dfMap.find(analysis);
  if (edgepos == dfMap.end()) return dummyLattice;

  PartLattice::const_iterator latpos = edgepos->second.find(departEdge);
  if (latpos == edgepos->second.end()) return dummyLattice;

  return latpos->second;
}


// General read/write lattice vector getter function
// declared static by previous declaration
LatticePtr
getLatticeMod_ex(NodeState::LatticeMap& dfMap, const Analysis* analysis, PartEdgePtr departEdge)
{
  typedef NodeState::PartLattice PartLattice;
  typedef NodeState::LatticeMap  LatticeMap;

  LatticeMap::const_iterator edgepos = dfMap.find(analysis);
  if (edgepos == dfMap.end()) return dummyLattice;

  PartLattice::const_iterator latpos = edgepos->second.find(departEdge);
  if (latpos == edgepos->second.end()) return dummyLattice;

  return latpos->second;
}

// declared static by previous declaration
void delete_ex(NodeState::LatticeMap& dfMap, const Analysis* analysis)
{
  dfMap.erase(analysis);
}



} // namespace dataflow
