#include "partitions.h"

namespace dataflow {

/*****************
 ***** Part ******
 *****************/

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

bool Part::operator!=(const PartPtr o) { return !(*this==o); }
bool Part::operator>=(const PartPtr o) { return !(*this<o); }
bool Part::operator<=(const PartPtr o) { return (*this<o) || (*this == o); }
bool Part::operator>(const PartPtr o)  { return !(*this<=o); }

/***********************
 ***** PartPtrCmp ******
 ***********************/

bool PartPtrCmp::operator==(const PartPtr o) { return (*get()) == o; }
bool PartPtrCmp::operator< (const PartPtr o) { return (*get()) <  o; }
bool PartPtrCmp::operator!=(const PartPtr o) { return (*get()) != o; }
bool PartPtrCmp::operator>=(const PartPtr o) { return (*get()) >= o; }
bool PartPtrCmp::operator<=(const PartPtr o) { return (*get()) <= o; }
bool PartPtrCmp::operator> (const PartPtr o) { return (*get()) >  o; }

/*********************
 ***** PartEdge ******
 *********************/

bool PartEdge::operator!=(PartEdgePtr o) { return !(*this==o); }
bool PartEdge::operator>=(PartEdgePtr o) { return !(*this<o); }
bool PartEdge::operator<=(PartEdgePtr o) { return (*this<o) || (*this == o); }
bool PartEdge::operator>(PartEdgePtr o)  { return !(*this<=o); }

/***************************
 ***** PartEdgePtrCmp ******
 ***************************/

bool PartEdgePtrCmp::operator==(const PartEdgePtr o) { return (*get()) == o; }
bool PartEdgePtrCmp::operator< (const PartEdgePtr o) { return (*get()) <  o; }
bool PartEdgePtrCmp::operator!=(const PartEdgePtr o) { return (*get()) != o; }
bool PartEdgePtrCmp::operator>=(const PartEdgePtr o) { return (*get()) >= o; }
bool PartEdgePtrCmp::operator<=(const PartEdgePtr o) { return (*get()) <= o; }
bool PartEdgePtrCmp::operator> (const PartEdgePtr o) { return (*get()) >  o; }

}; // namespace dataflow