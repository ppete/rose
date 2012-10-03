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
// Records that this analysis has initialized its state at this node
void NodeState::initialized(Analysis* init)
{
  initializedAnalyses[(Analysis*)init] = true;
}

// Returns true if this analysis has initialized its state at this node and false otherwise
bool NodeState::isInitialized(Analysis* analysis)
{
  return initializedAnalyses.find((Analysis*)analysis) != initializedAnalyses.end();
}

// Set this node's lattices for this analysis (possibly above or below only, replacing previous mappings).
// The lattices will be associated with the NULL edge
void NodeState::setLattices(const Analysis* analysis, vector<Lattice*>& lattices)
{
  vector<Lattice*> tmp;
  
  if(dfInfoAbove.find((Analysis*)analysis) != dfInfoAbove.end())
    dfInfoAbove[(Analysis*)analysis].clear();
  else
    dfInfoAbove[(Analysis*)analysis] = tmp;

  if(dfInfoBelow.find((Analysis*)analysis) != dfInfoBelow.end())
    dfInfoBelow[(Analysis*)analysis].clear();
  else
    dfInfoBelow[(Analysis*)analysis] = tmp;

  // Set dfInfoAbove to lattices
  dfInfoAbove[(Analysis*)analysis][PartEdgePtr()] = lattices;
  // copy dfInfoAbove to dfInfoBelow (including copies of all the lattices)
  for(vector<Lattice*>::iterator it = dfInfoAbove[(Analysis*)analysis][PartEdgePtr()].begin(); 
      it!=dfInfoAbove[(Analysis*)analysis][PartEdgePtr()].end(); it++)
  {
    Lattice* l = (*it)->copy();
    //Dbg::dbg << "NodeState::setLattices pushing dfInfoBelow: "<<l->str("")<<"\n";
    dfInfoBelow[(Analysis*)analysis][PartEdgePtr()].push_back(l);
  }
  
  // Records that this analysis has initialized its state at this node
  initialized((Analysis*)analysis);
}

// Set this node's lattices for this analysis above the node, replacing previous mappings).
// The lattices will be associated with the NULL edge
void NodeState::setLatticeAbove(const Analysis* analysis, vector<Lattice*>& lattices)
{
  setLattice_ex(dfInfoAbove, analysis, PartEdgePtr(), lattices);
}

void NodeState::setLatticeBelow(const Analysis* analysis, vector<Lattice*>& lattices)
{
  setLattice_ex(dfInfoBelow, analysis, PartEdgePtr(), lattices);
}

// Set this node's lattices for this analysis, along the given departing edge
void NodeState::setLatticeAbove(const Analysis* analysis, PartEdgePtr departEdge, std::vector<Lattice*>& lattices)
{
  setLattice_ex(dfInfoAbove, analysis, departEdge, lattices);
}

// Set this node's lattices for this analysis, along the given departing edge
void NodeState::setLatticeBelow(const Analysis* analysis, PartEdgePtr departEdge, std::vector<Lattice*>& lattices)
{
  setLattice_ex(dfInfoBelow, analysis, departEdge, lattices);
}

static vector<Lattice*> emptyLatVec;

// returns the given lattice from above the node, which owned by the given analysis
Lattice* NodeState::getLatticeAbove(const Analysis* analysis, int latticeName) const
{
  return getLattice_ex(dfInfoAbove, analysis, PartEdgePtr(), latticeName);
}

// returns the given lattice from below the node, which owned by the given analysis
Lattice* NodeState::getLatticeBelow(const Analysis* analysis, int latticeName) const
{
  return getLattice_ex(dfInfoBelow, analysis, PartEdgePtr(), latticeName);
}

// Returns the given lattice above the node from the given analysis along the given departing edge
Lattice* NodeState::getLatticeAbove(const Analysis* analysis, PartEdgePtr departEdge, int latticeName) const
{
  return getLattice_ex(dfInfoAbove, analysis, departEdge, latticeName);
}

// Returns the given lattice below the node from the given analysis along the given departing edge
Lattice* NodeState::getLatticeBelow(const Analysis* analysis, PartEdgePtr departEdge, int latticeName) const
{
  return getLattice_ex(dfInfoBelow, analysis, departEdge, latticeName);
}


// Returns the map containing all the lattices above the node from the given analysis along the NULL edge
// (read-only access)
const vector<Lattice*>& NodeState::getLatticeAbove(const Analysis* analysis) const
{ return getLattice_ex(dfInfoAbove, analysis, PartEdgePtr()); }

// Returns the map containing all the lattices below the node from the given analysis along the NULL edge
// (read-only access)
const std::vector<Lattice*>& NodeState::getLatticeBelow(const Analysis* analysis) const
{ return getLattice_ex(dfInfoBelow, analysis, PartEdgePtr()); }

// Returns the map containing all the lattices above the node from the given analysis along the given departing edge
// (read-only access)
const std::vector<Lattice*>& NodeState::getLatticeAbove(const Analysis* analysis, PartEdgePtr departEdge) const
{ return getLattice_ex(dfInfoAbove, analysis, departEdge); }

// Returns the map containing all the lattices below the node from the given analysis along the given departing edge
// (read-only access)
const std::vector<Lattice*>& NodeState::getLatticeBelow(const Analysis* analysis, PartEdgePtr departEdge) const
{ return getLattice_ex(dfInfoBelow, analysis, departEdge); }

// Returns the map containing all the lattices above the node from the given analysis along the NULL edge
// (read/write access)
std::vector<Lattice*>& NodeState::getLatticeAboveMod(const Analysis* analysis)
{ return getLattice_ex(dfInfoAbove, analysis, PartEdgePtr()); }

// Returns the map containing all the lattices above the node from the given analysis along the NULL edge
// (read/write access)
std::vector<Lattice*>& NodeState::getLatticeBelowMod(const Analysis* analysis)
{ return getLattice_ex(dfInfoBelow, analysis, PartEdgePtr()); }

// Returns the map containing all the lattices above the node from the given analysis along the given departing edge
// (read/write access)
std::vector<Lattice*>& NodeState::getLatticeAboveMod(const Analysis* analysis, PartEdgePtr departEdge)
{ return getLattice_ex(dfInfoAbove, analysis, departEdge); }

// Returns the map containing all the lattices above the node from the given analysis along the given departing edge
// (read/write access)
std::vector<Lattice*>& NodeState::getLatticeBelowMod(const Analysis* analysis, PartEdgePtr departEdge)
{ return getLattice_ex(dfInfoBelow, analysis, departEdge); }

// Deletes all lattices above this node associated with the given analysis
void NodeState::deleteLatticeAbove(const Analysis* analysis)
{ delete_ex(dfInfoAbove, analysis); }

// deletes all lattices below this node associated with the given analysis
void NodeState::deleteLatticeBelow(const Analysis* analysis)
{ delete_ex(dfInfoBelow, analysis); }

// General lattice setter function
void NodeState::setLattice_ex(LatticeMap& dfMap, const Analysis* analysis, PartEdgePtr departEdge, 
                              std::vector<Lattice*>& lattices)
{
  // If the analysis currently has a mapping in dfInfoB
  std::map<PartEdgePtr, std::vector<Lattice*>::iterator w;
  if((dfInfo.find((Analysis*)analysis)) != dfInfo.end() && 
     ((w = dfInfo[((Analysis*)analysis)].find(departEdge)) != dfInfo[((Analysis*)analysis)].end()))
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
    dfInfo[(Analysis*)analysis][departEdge] = lattices;
  }
  
  // Records that this analysis has initialized its state at this node
  initialized((Analysis*)analysis);
}

// General lattice getter function
Lattice* NodeState::getLattice_ex(const LatticeMap& dfMap, const Analysis* analysis, 
                                  PartEdgePtr departEdge, int latticeName) const
{
  std::map<PartEdgePtr, std::vector<Lattice*>::const_iterator w;
  
  // If this analysis has registered some Lattices at this node/edge combination
  if((dfMap.find((Analysis*)analysis)) != dfMap.end() && 
     ((w = dfMap[((Analysis*)analysis)].find(departEdge)) != dfMap[((Analysis*)analysis)].end())) {
      //printf("dfLattices->first=%p, dfLattices->second.size()=%d\n", dfLattices->first, dfLattices->second.size());
    if(w->second.size()>=(unsigned int)latticeName)
      return w->second.at(latticeName);
    else
      return NULL;
  }
  
  return NULL;
}

// General read-only lattice vector getter function
const vector<Lattice*> NodeState::getLattice_ex(const LatticeMap& dfMap, const Analysis* analysis, 
                                                PartEdgePtr departEdge) const
{
  std::map<PartEdgePtr, std::vector<Lattice*>::const_iterator w;
  
  // If this analysis has registered some Lattices at this node/edge combination
  if((dfMap.find((Analysis*)analysis)) != dfMap.end() && 
     ((w = dfMap[((Analysis*)analysis)].find(departEdge)) != dfMap[((Analysis*)analysis)].end())) {
      //printf("dfLattices->first=%p, dfLattices->second.size()=%d\n", dfLattices->first, dfLattices->second.size());
    return w->second;
  else
    return emptyLatVec;
}

// General read/write lattice vector getter function
vector<Lattice*> NodeState::getLattice_ex(const LatticeMap& dfMap, const Analysis* analysis, 
                                          PartEdgePtr departEdge)
{
  std::map<PartEdgePtr, std::vector<Lattice*>::iterator w;
  
  // If this analysis has registered some Lattices at this node/edge combination
  if((dfMap.find((Analysis*)analysis)) != dfMap.end() && 
     ((w = dfMap[((Analysis*)analysis)].find(departEdge)) != dfMap[((Analysis*)analysis)].end())) {
      //printf("dfLattices->first=%p, dfLattices->second.size()=%d\n", dfLattices->first, dfLattices->second.size());
    return w->second;
  else
    return emptyLatVec;
}


// Deletes all lattices above/below this node associated with the given analysis
void NodeState::delete_ex(const LatticeMap& dfMap, const Analysis* analysis)
{
  ROSE_ASSERT(dfMap.find((Analysis*)analysis) != dfMap.end());
  map<PartEdgePtr, vector<Lattice*> > & l = dfMap.find((Analysis*)analysis)->second;
  // Delete the individual lattices associated with this analysis
  for(map<PartEdgePtr, vector<Lattice*> >::iterator e=l.begin(); e!=l.end(); e++)
    for(vector<Lattice*>::iterator l=e->second.begin(); l!=e->second.end(); l++)
      delete *l;

  // Delete the analysis' mapping in dfInfoAbove
  dfMap.erase((Analysis*)analysis);
}

// Returns true if the two lattices vectors contain equivalent information and false otherwise
bool NodeState::equivLattices(const std::vector<Lattice*>& latticesA,
                              const std::vector<Lattice*>& latticesB)
{
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
}

// Creates a copy of all the dataflow state (Lattices and Facts) associated with
// analysis srcA and associates this copied state with analysis tgtA.
void NodeState::cloneAnalysisState(const Analysis* srcA, const Analysis* tgtA)
{
  // Copy srcA's facts
  //const map <int, NodeFact*>& srcFacts = getFacts(srcA);
  const vector<NodeFact*>& srcFacts = getFacts(srcA);
  //printf("srcFacts.size()=%d\n", srcFacts.size());
  
  vector<NodeFact*> tgtFacts;
  for(vector<NodeFact*>::const_iterator it = srcFacts.begin();
      it != srcFacts.end(); it++)
  { tgtFacts.push_back((*it)->copy()); }
  // Associate analysis tgtA with the copied facts
  setFacts(tgtA, tgtFacts);
  
  // Copy srcA's lattices into tgtLatAbv and tgtLatBel
  const map<PartEdgePtr, vector<Lattice*> >& srcLatAbv = getLatticeAbove(srcA);
  vector<Lattice*> tgtLatAbv;
  
  for(map<PartEdgePtr, vector<Lattice*> >::const_iterator e=srcLatAbv.begin(); e!=srcLatAbv.end(); e++) {
    for(map<PartEdgePtr, vector<Lattice*> >::const_iterator l=e->second.begin(); l!=e->second.end(); l++)
      tgtLatAbv[e->first].push_back((*it)->copy());
  }
  
  const map<PartEdgePtr, vector<Lattice*> >& srcLatBel = getLatticeBelow(srcA);
  vector<Lattice*> tgtLatBel;
  
  for(map<PartEdgePtr, vector<Lattice*> >::const_iterator e=srcLatBel.begin(); e!=srcLatBel.end(); e++) {
    for(map<PartEdgePtr, vector<Lattice*> >::const_iterator l=e->second.begin(); l!=e->second.end(); l++)
      tgtLatBel[e->first].push_back((*it)->copy());
  }
  
  // Associate analysis tgtA with the copied lattices
  setLatticeAbove(tgtA, tgtLatAbv);
  setLatticeBelow(tgtA, tgtLatBel);
}

// Given a set of analyses, one of which is designated as a master, unions together the 
// lattices associated with each of these analyses. The results are associated on each 
// CFG node with the master analysis.
void NodeState::unionLattices(set<Analysis*>& unionSet, const Analysis* master)
{
  map<PartEdgePtr, vector<Lattice*> >& masterLatAbv = getLatticeAboveMod(master);
  map<PartEdgePtr, vector<Lattice*> >& masterLatBel = getLatticeBelowMod(master);

  //printf("    unionLattices() unionSet.size()=%d, master=%p, this=%p\n", unionSet.size(), master, this);
  //printf("  masterLatAbv.size()=%d, masterLatBel.size()=%d\n", masterLatAbv.size(), masterLatBel.size());
  for(set<Analysis*>::iterator it = unionSet.begin(); it!=unionSet.end(); it++)
  {
    Analysis* curA = *it;
    //printf("  curA=%p\n", curA);
    if(curA != master)
    {
      unionLatticeMaps(getLatticeAboveMod(master), getLatticeAbove(curA));
      unionLatticeMaps(getLatticeBelowMod(master), getLatticeBelow(curA));
    }
  }
}

// Unions the dataflow information in Lattices held by the from map into the to map
// Returns true if this causes a change in the lattices in to and false otherwise
bool NodeState::unionLatticeMaps(map<PartEdgePtr, vector<Lattice*> >& to, 
                                 const map<PartEdgePtr, vector<Lattice*> >& from)
{
  // All the analyses in unionSet must have the same number of edges
  ROSE_ASSERT(to.size() == from.size());

  bool modified = false;
  
  map<PartEdgePtr, vector<Lattice*> >::iterator       eTo;
  map<PartEdgePtr, vector<Lattice*> >::const_iterator eFrom;
  for(eTo=to.begin(), eFrom=from.begin(); eTo!=to.end(); eTo++, eFrom++) {
    // All the analyses in unionSet must have the same number of lattices associated with each edge
    ROSE_ASSERT(eMst->second.size() == eFrom->second.size());
    ROSE_ASSERT(eMst->second.size() == eFrom->second.size());

    // Union the Above lattices 
    vector<Lattice*>::iterator       lTo;
    vector<Lattice*>::const_iterator lFrom;
    for(lTo=eTo->second.begin(), lFrom=eFrom->second.begin(); lTo!=eTo->second.end(); lTo++, lFrom++) {
      if((*lTo)->finiteLattice())
        modified = (*lTo)->meetUpdate(*lFrom) || modified;
      else {
        InfiniteLattice* meetResult = dynamic_cast<InfiniteLattice*>((*itN)->copy());
        meetResult->meetUpdate(*itC); 
        // Widen the resulting meet
        modified =  dynamic_cast<InfiniteLattice*>(*itN)->widenUpdate(meetResult) | modified;
        delete meetResult;
      }
    }
  }
  
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
NodeFact* NodeState::getFact(const Analysis* analysis, int factName) const
{
  NodeFactMap::const_iterator factsIt;
  // if this analysis has registered some Lattices at this node
  if((factsIt = facts.find((Analysis*)analysis)) != facts.end())
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
const vector<NodeFact*>& NodeState::getFacts(const Analysis* analysis) const
{
  // if this analysis has registered some facts at this node, return their map
  if(facts.find((Analysis*)analysis)!=facts.end())
    return facts.find((Analysis*)analysis)->second;
  else
    // otherwise, return an empty map
    return emptyFactsMap;
}

// returns the map of all the facts owned by the given analysis at this NodeState
// (read/write access)
vector<NodeFact*>& NodeState::getFactsMod(const Analysis* analysis)
{
  // if this analysis has registered some facts at this node, return their map
  if(facts.find((Analysis*)analysis)!=facts.end())
    return facts.find((Analysis*)analysis)->second;
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
  copyLattices_aEQa(analysis, to, PartEdgePtr(), from, PartEdgePtr());
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
  copyLattices_bEQa(analysis, to, PartEdgePtr(), from, PartEdgePtr());
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
  copyLattices_bEQb(analysis, to, PartEdgePtr(), from, PartEdgePtr());
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
  copyLattices_aEQb(analysis, to, PartEdgePtr(), from, PartEdgePtr());
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
void NodeState::copyLattices(map<PartEdgePtr, vector<Lattice*> >& dfInfoTo,
                       const map<PartEdgePtr, vector<Lattice*> >& dfInfoFrom)
{
  ROSE_ASSERT(dfInfoTo.size() == dfInfoFrom.size());
  
  // Copy lattices
  //Dbg::dbg << "    copyLattices()\n";
  map<PartEdgePtr, vector<Lattice*> >::iterator eTo;
  const map<PartEdgePtr, vector<Lattice*> >::iterator eFrom;
  for(eTo=dfInfoTo.begin(), eFrom=dfInfoFrom.begin(); eTo!=dfInfoTo.end(); eTo++, eFrom++) {
    ROSE_ASSERT(eTo->first == eFrom->first);
    
    vector<Lattice*>::iterator lTo;
    vector<Lattice*>::const_iterator lFrom;
    
    for(lTo=eTo->second.begin(), lFrom=eFrom->second.begin(); lTo!=eTo->second.end(); lTo++, lFrom++) {
      (*lTo)->copy(*lFrom);
    }
  }
}

// dfInfoTo[*] a copy of dfInfoFrom[*]. It is assumed that dfInfoTo is initially empty
void NodeState::copyLatticesOW(map<PartEdgePtr, vector<Lattice*> >& dfInfoTo,
                         const map<PartEdgePtr, vector<Lattice*> >& dfInfoFrom)
{
  ROSE_ASSERT(dfInfoTo.size() == 0);
  
  for(map<PartEdgePtr, vector<Lattice*> >::const_iterator e=dfInfo.begin(); e!=dfInfo.end(); e++) {
    for(vector<Lattice*>::const_iterator l=e->second.begin(); l!=e->second.end(); l++, i++) {
      dfInfoTo[e->first].push_back((*l)->copy());
    }
  }
  
  
}  

// Makes dfInfoTo[toDepartEdge] a copy of dfInfoFrom[fromDepartEdge]
void NodeState::copyLattices(map<PartEdgePtr, vector<Lattice*> >& dfInfoTo,   PartEdgePtr toDepartEdge, 
                       const map<PartEdgePtr, vector<Lattice*> >& dfInfoFrom, PartEdgePtr fromDepartEdge)
{
  ROSE_ASSERT(dfInfoTo.size() == dfInfoFrom.size());
  ROSE_ASSERT(dfInfoTo.find(dfInfoTo)   != dfInfoTo.end());
  ROSE_ASSERT(dfInfoTo.find(dfInfoFrom) != dfInfoFrom.end());
  
  // Copy lattices
  //Dbg::dbg << "    copyLattices()\n";
  map<PartEdgePtr, vector<Lattice*> >::iterator       eTo   = dfInfoTo.find(dfInfoTo);
  const map<PartEdgePtr, vector<Lattice*> >::iterator eFrom = dfInfoFrom.find(dfInfoFrom);

  vector<Lattice*>::iterator lTo;
  vector<Lattice*>::const_iterator lFrom;

  for(lTo=eTo->second.begin(), lFrom=eFrom->second.begin(); lTo!=eTo->second.end(); lTo++, lFrom++) {
    (*lTo)->copy(*lFrom);
  }
}

string NodeState::str(Analysis* analysis, string indent) const
{
  ostringstream oss;
  
  // If the analysis has not yet been initialized, say so
  if(initializedAnalyses.find(analysis) == initializedAnalyses.end()) {
    oss << "[NodeState: NONE for Analysis]\n";
  // If it has been initialized, stringify it
  } else {
    oss << "[NodeState: \n";
    ROSE_ASSERT(dfInfoAbove.size() == dfInfoBelow.size());
    ROSE_ASSERT(dfInfoAbove.find(analysis) != dfInfoAbove.end());
    ROSE_ASSERT(dfInfoBelow.find(analysis) != dfInfoBelow.end());
    int i=0;
    
    ROSE_ASSERT(dfInfoAbove.find(analysis)->second.size() == dfInfoBelow.find(analysis)->second.size());
    
    map<PartEdgePtr, vector<Lattice*> >::const_iterator eAbv, eBel;
    for(eAbv=dfInfoAbove.find(analysis)->second.begin(), eBel=dfInfoBelow.find(analysis)->second.begin(); 
        eAbv!=dfInfoAbove.find(analysis)->second.end(); eAbv++, eBel++) {
      ROSE_ASSERT(eAbv->first == eBel->first);
      ROSE_ASSERT(eAbv->second.size() == eBel->second.size());
      
      oss << indent << "edge "<<eAbv->first.str()<<endl;
      
      vector<Lattice*>::const_iterator lAbv, lBel;
      int i=0;
      for(lAbv=eAbv->second.begin(), lBel=eBel->second.begin(); lAbv!=eAbv->second.end(); lAbv++, lBel++, i++) {
        oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;Lattice "<<i<<" Above: "<<(*lAbv)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<"\n";
        oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;Lattice "<<i<<" Below: "<<(*lBel)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<"\n";
      }
    }
    
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
string NodeState::str(const map<PartEdgePtr, vector<Lattice*> >& dfInfo, string indent)
{
  ostringstream oss;
  
  for(map<PartEdgePtr, vector<Lattice*> >::const_iterator e=dfInfo.begin(); e!=dfInfo.end(); e++) {
    oss << indent << "edge "<<e->first.str()<<endl;

    int i=0;
    for(vector<Lattice*>::const_iterator l=e->second.begin(); l!=e->second.end(); l++, i++) {
      oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;Lattice "<<i<<" "<<(*)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<"\n";
    }
  }
  
  return oss.str();
}

}; // namespace dataflow