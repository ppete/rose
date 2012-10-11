#include "partitions.h"

using namespace std;

namespace dataflow {

/* ################
   ##### Part #####
   ################ */

PartEdgePtr NULLPart;
PartEdgePtr NULLPartEdge;
  
// If the filter accepts (returns true) on any of the CFGNodes within this part, return true)
bool Part::filterAny(bool (*filter) (CFGNode cfgn))
{
  std::vector<CFGNode> v=CFGNodes();
  for(std::vector<CFGNode>::iterator i=v.begin(); i!=v.end(); i++) {
    if(filter(*i)) return true;
  }
  return false;
}

// If the filter accepts (returns true) on all of the CFGNodes within this part, return true)
bool Part::filterAll(bool (*filter) (CFGNode cfgn))
{
  std::vector<CFGNode> v=CFGNodes();
  for(std::vector<CFGNode>::iterator i=v.begin(); i!=v.end(); i++) {
    if(!filter(*i)) return false;
  }
  return true;
}

bool Part::operator!=(const PartPtr& o) const { return !(*this==o); }
bool Part::operator>=(const PartPtr& o) const { return !(*this<o); }
bool Part::operator<=(const PartPtr& o) const { return (*this<o) || (*this == o); }
bool Part::operator> (const PartPtr& o) const { return !(*this<=o); }

/* ####################
   ##### PartEdge #####
   #################### */

bool PartEdge::operator!=(const PartEdgePtr& o) const { return !(*this==o); }
bool PartEdge::operator>=(const PartEdgePtr& o) const { return !(*this<o); }
bool PartEdge::operator<=(const PartEdgePtr& o) const { return (*this<o) || (*this == o); }
bool PartEdge::operator> (const PartEdgePtr& o) const { return !(*this<=o); }

/* ############################
   ##### IntersectionPart #####
   ############################ */
IntersectionPart::IntersectionPart(PartPtr part) { parts.push_back(part); }
IntersectionPart::IntersectionPart(const std::list<PartPtr>& parts) : parts(parts) {}

void IntersectionPart::add(PartPtr part) { parts.push_back(part); }

// Returns the list of outgoing IntersectionPartEdge of this Part, which are the cross-product of the outEdges()
// of its sub-parts.
std::vector<PartEdgePtr> IntersectionPart::outEdges() {
  std::list<PartEdgePtr> outPartEdges;
  std::vector<PartEdgePtr> edges;
  outEdges_rec(parts.begin(), outPartEdges, edges);
  return edges;
}

// Recursive computation of the cross-product of the outEdges of all the sub-parts of this Intersection part.
// Hierarchically builds a recursion tree that contains more and more combinations of PartsPtr from the outEdges
// of different sub-parts. When the recursion tree reaches its full depth (one level per part in parts), it creates
// an intersection the current combination of 
// partI - refers to the current part in parts
// outPartEdges - the list of outgoing edges of the current combination of this IntersectionPart's sub-parts, 
//         upto partI
void IntersectionPart::outEdges_rec(std::list<PartPtr>::iterator partI, std::list<PartEdgePtr> outPartEdges, 
                                                        std::vector<PartEdgePtr>& edges) {
  // If we've reached the last part in parts and outEdgeParts contains all the outgoing PartEdges
  if(partI == parts.end())
    edges.push_back(makePart<IntersectionPartEdge>(outPartEdges));
  // If we haven't yet reached the end, recurse on all the outgoing edges of the current part
  else {
    // Get this part's outgoing edges
    vector<PartEdgePtr> partOut = (*partI)->outEdges();
    
    // Advance to the next part in parts
    partI++;
    
    // Recurse on the cross product of the outgoing edges of this part and the outgoing edges of subsequent parts
    for(vector<PartEdgePtr>::iterator e=partOut.begin(); e!=partOut.end(); e++){
      outPartEdges.push_back(*e);
      outEdges_rec(partI, outPartEdges, edges);
      outPartEdges.pop_back();
    }
  }
}

// Returns the list of incoming IntersectionPartEdge of this Part, which are the cross-product of the inEdges()
// of its sub-parts.
std::vector<PartEdgePtr> IntersectionPart::inEdges() {
  list<PartEdgePtr> inPartEdges;
  vector<PartEdgePtr> edges;
  inEdges_rec(parts.begin(), inPartEdges, edges);
  return edges;
}
// Recursive computation of the cross-product of the inEdges of all the sub-parts of this Intersection part.
// Hierarchically builds a recursion tree that contains more and more combinations of PartsPtr from the inEdges
// of different sub-parts. When the recursion tree reaches its full depth (one level per part in parts), it creates
// an intersection the current combination of 
// partI - refers to the current part in parts
// inPartEdges - the list of incoming edges of the current combination of this IntersectionPart's sub-parts, 
//         upto partI
void IntersectionPart::inEdges_rec(list<PartPtr>::iterator partI, list<PartEdgePtr> inPartEdges, 
                                   vector<PartEdgePtr>& edges) {
  // If we've reached the last part in parts and inEdgeParts contains all the incoming PartEdges
  if(partI == parts.end())
    edges.push_back(makePart<IntersectionPartEdge>(inPartEdges));
  // If we haven't yet reached the end, recurse on all the incoming edges of the current part
  else {
    // Get this part's incoming edges
    vector<PartEdgePtr> partIn = (*partI)->inEdges();
    
    // Advance to the next part in parts
    partI++;
    
    // Recurse on the cross product of the ingoing edges of this part and the incoming edges of subsequent parts
    for(vector<PartEdgePtr>::iterator e=partIn.begin(); e!=partIn.end(); e++){
      inPartEdges.push_back(*e);
      inEdges_rec(partI, inPartEdges, edges);
      inPartEdges.pop_back();
    }
  }
}

// Returns the intersection of the lists of CFGNodes returned by the Parts in parts
std::vector<CFGNode> IntersectionPart::CFGNodes() {
  std::vector<CFGNode> nodes;
  for(list<PartPtr>::iterator partI=parts.begin(); partI!=parts.end(); partI++) {
    // If this is the first part, simply copy its CFGNodes to nodes
    if(partI!=parts.begin()) { nodes = (*partI)->CFGNodes(); }
    // Otherwise, remove any nodes from node that are not in (*partI)->CFGNodes()
    else {
      vector<CFGNode> partNodes=(*partI)->CFGNodes();
      for(vector<CFGNode>::iterator nI=nodes.begin(); nI!=nodes.end(); ) {
        bool found=false;
        for(vector<CFGNode>::iterator pnI=partNodes.begin(); pnI!=partNodes.end(); pnI++) {  
          if(nI==pnI) { found=true; break; }
        }
        // If the current element in nodes was not found in partNodes, erase it and move on to the next one
        if(!found) { 
          vector<CFGNode>::iterator nINext = nI; nINext++;
          nodes.erase(nI);
          nI = nINext;
        // If it was found, just move on to the next CFGNode in nodes
        } else
          nI++;
      }
    }
  }
  
  return nodes;
}

// Let A={ set of execution prefixes that terminate at the given anchor SgNode }
// Let O={ set of execution prefixes that terminate at anchor's operand SgNode }
// Since to reach a given SgNode an execution must first execute all of its operands it must
//    be true that there is a 1-1 mapping m() : O->A such that o in O is a prefix of m(o).
// This function is the inverse of m: given the anchor node and operand as well as the
//    Part that denotes a subset of A (the function is called on this part), 
//    it returns a list of Parts that partition O.
std::list<PartPtr> IntersectionPart::getOperandPart(SgNode* anchor, SgNode* operand)
{
  list<PartPtr> accumOperandParts;
  list<PartPtr> allParts;
  getOperandPart_rec(anchor, operand, parts.begin(), accumOperandParts, allParts);
  return allParts;
}
// Recursive computation of the cross-product of the getOperandParts of all the sub-parts of this Intersection part.
// Hierarchically builds a recursion tree that contains more and more combinations of PartsPtr from the inEdges
// of different sub-parts. When the recursion tree reaches its full depth (one level per part in parts), it creates
// an intersection the current combination of 
// partI - refers to the current part in parts
// accumOperandParts - the list of incoming parts of the current combination of this IntersectionPart's sub-parts, 
//         upto partI
void IntersectionPart::getOperandPart_rec(SgNode* anchor, SgNode* operand,
                                          list<PartPtr>::iterator partI, list<PartPtr> accumOperandParts, 
                                          list<PartPtr>& allParts)
{
  // If we've reached the last part in parts and inEdgeParts contains all the incoming PartEdges
  if(partI == parts.end())
    allParts.push_back(makePart<IntersectionPart>(accumOperandParts));
  // If we haven't yet reached the end, recurse on all the incoming edges of the current part
  else {
    // Get this part's incoming edges
    list<PartPtr> operandParts = (*partI)->getOperandPart(anchor, operand);
    
    // Advance to the next part in parts
    partI++;
    
    // Recurse on the cross product of the ingoing edges of this part and the incoming edges of subsequent parts
    for(list<PartPtr>::iterator opP=operandParts.begin(); opP!=operandParts.end(); opP++){
      accumOperandParts.push_back(*opP);
      getOperandPart_rec(anchor, operand, partI, accumOperandParts, allParts);
      accumOperandParts.pop_back();
    }
  }
}

// Two IntersectionParts are equal of all their constituent sub-parts are equal
bool IntersectionPart::operator==(const PartPtr& o) const
{
  IntersectionPartPtr that = dynamic_part_cast<IntersectionPart>(o);
  
  // Two intersection parts with different numbers of sub-parts are definitely not equal
  if(parts.size() != that->parts.size()) return false;
  
  for(list<PartPtr>::const_iterator thisIt=parts.begin(), thatIt=that->parts.begin();
      thisIt!=parts.end(); thisIt++) {
    if(*thisIt != *thatIt) return false;
  }
  
  return true;
}

// Lexicographic ordering: This IntersectionPart is < that IntersectionPart if this has fewer parts than that or
// there exists an index i in this.parts and that.parts s.t. forall j<i. this.parts[j]==that.parts[j] and 
// this.parts[i] < that.parts[i].
bool IntersectionPart::operator<(const PartPtr& o) const
{
  IntersectionPartPtr that = dynamic_part_cast<IntersectionPart>(o);
  
  // If this has fewer parts than that, it is ordered before it
  if(parts.size() < that->parts.size()) return true;
  // If greater number of parts, it is order afterwards
  if(parts.size() > that->parts.size()) return false;
  
  // Keep iterating for as long as the sub-parts are equal and declare this < that if we find
  // a sub-part in this < the corresponding sub-part in that
  for(list<PartPtr>::const_iterator thisIt=parts.begin(), thatIt=that->parts.begin();
      thisIt!=parts.end(); thisIt++) {
    if(*thisIt < *thatIt) return true;
    else if(*thisIt > *thatIt) return false;
  }
  
  // If the lexicographic < condition was not met then this is not < than that
  return false;
}

std::string IntersectionPart::str(std::string indent)
{
  ostringstream oss;
  oss << "[IntersectionPart:"<<endl;
  for(list<PartPtr>::iterator part=parts.begin(); part!=parts.end(); part++)
    oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;" << (*part)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;") << endl;
  oss << "]";
  return oss.str();
}

/* ################################
   ##### IntersectionPartEdge #####
   ################################ */
IntersectionPartEdge::IntersectionPartEdge(PartEdgePtr edge) { edges.push_back(edge); }
IntersectionPartEdge::IntersectionPartEdge(const list<PartEdgePtr>& edges) : edges(edges) {}
  
void IntersectionPartEdge::add(PartEdgePtr edge) { edges.push_back(edge); }

// Return the part that intersects the sources of all the sub-edges of this IntersectionPartEdge
PartPtr IntersectionPartEdge::source() {
  list<PartPtr> sourceParts;
  for(list<PartEdgePtr>::iterator e=edges.begin(); e!=edges.end(); e++)
    sourceParts.push_back((*e)->source());
  return makePart<IntersectionPart>(sourceParts);
}

// Return the part that intersects the targets of all the sub-edges of this IntersectionPartEdge
PartPtr IntersectionPartEdge::target() {
  list<PartPtr> targetParts;
  for(list<PartEdgePtr>::iterator e=edges.begin(); e!=edges.end(); e++)
    targetParts.push_back((*e)->target());
  return makePart<IntersectionPart>(targetParts);
}

// Two IntersectionPartEdges are equal of all their constituent sub-parts are equal
bool IntersectionPartEdge::operator==(const PartEdgePtr& o) const
{
  IntersectionPartEdgePtr that = dynamic_part_cast<IntersectionPartEdge>(o);
  
  // Two intersection parts with different numbers of sub-parts are definitely not equal
  if(edges.size() != that->edges.size()) return false;
  
  for(list<PartEdgePtr>::const_iterator thisIt=edges.begin(), thatIt=that->edges.begin();
      thisIt!=edges.end(); thisIt++) {
    if(*thisIt != *thatIt) return false;
  }
  
  return true;
}

// Lexicographic ordering: This IntersectionPartEdge is < that IntersectionPartEdge if this has fewer edges than that or
// there exists an index i in this.edges and that.edges s.t. forall j<i. this.edges[j]==that.edges[j] and 
// this.edges[i] < that.edges[i].
bool IntersectionPartEdge::operator<(const PartEdgePtr& o) const
{
  IntersectionPartEdgePtr that = dynamic_part_cast<IntersectionPartEdge>(o);
  
  // If this has fewer edges than that, it is ordered before it
  if(edges.size() < that->edges.size()) return true;
  // If greater number of edges, it is order afterwards
  if(edges.size() > that->edges.size()) return false;
  
  // Keep iterating for as long as the sub-edges are equal and declare this < that if we find
  // a sub-edge in this < the corresponding sub-edge in that
  for(list<PartEdgePtr>::const_iterator thisIt=edges.begin(), thatIt=that->edges.begin();
      thisIt!=edges.end(); thisIt++) {
    if(*thisIt < *thatIt) return true;
    else if(*thisIt > *thatIt) return false;
  }
  
  // If the lexicographic < condition was not met then this is not < than that
  return false;
}

std::string IntersectionPartEdge::str(std::string indent)
{
  ostringstream oss;
  oss << "[IntersectionPartEdge:"<<endl;
  for(list<PartEdgePtr>::iterator edge=edges.begin(); edge!=edges.end(); edge++)
    oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;" << (*edge)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;") << endl;
  oss << "]";
  return oss.str();
}

}; // namespace dataflow