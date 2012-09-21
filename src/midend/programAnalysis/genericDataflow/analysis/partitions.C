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

bool Part::operator!=(const PartPtr o) const { return !(*this==o); }
bool Part::operator>=(const PartPtr o) const { return !(*this<o); }
bool Part::operator<=(const PartPtr o) const { return (*this<o) || (*this == o); }
bool Part::operator>(const PartPtr o)  const { return !(*this<=o); }

/***********************
 ***** PartPtrCmp ******
 ***********************/

bool PartPtrCmp::operator==(PartPtrCmp const & o) const { return (*ptr.get()) == o.ptr; }
bool PartPtrCmp::operator< (PartPtrCmp const & o) const { return (*ptr.get()) <  o.ptr; }
bool PartPtrCmp::operator!=(PartPtrCmp const & o) const { return (*ptr.get()) != o.ptr; }
bool PartPtrCmp::operator>=(PartPtrCmp const & o) const { return (*ptr.get()) >= o.ptr; }
bool PartPtrCmp::operator<=(PartPtrCmp const & o) const { return (*ptr.get()) <= o.ptr; }
bool PartPtrCmp::operator> (PartPtrCmp const & o) const { return (*ptr.get()) >  o.ptr; }

std::string PartPtrCmp::str(std::string indent) { return ptr->str(indent); }

/*********************
 ***** PartEdge ******
 *********************/

bool PartEdge::operator!=(PartEdgePtr o) const { return !(*this==o); }
bool PartEdge::operator>=(PartEdgePtr o) const { return !(*this<o); }
bool PartEdge::operator<=(PartEdgePtr o) const { return (*this<o) || (*this == o); }
bool PartEdge::operator>(PartEdgePtr o)  const { return !(*this<=o); }

/***************************
 ***** PartEdgePtrCmp ******
 ***************************/

bool PartEdgePtrCmp::operator==(PartEdgePtrCmp const & o) const { return (*ptr.get()) == o.ptr; }
bool PartEdgePtrCmp::operator< (PartEdgePtrCmp const & o) const { return (*ptr.get()) <  o.ptr; }
bool PartEdgePtrCmp::operator!=(PartEdgePtrCmp const & o) const { return (*ptr.get()) != o.ptr; }
bool PartEdgePtrCmp::operator>=(PartEdgePtrCmp const & o) const { return (*ptr.get()) >= o.ptr; }
bool PartEdgePtrCmp::operator<=(PartEdgePtrCmp const & o) const { return (*ptr.get()) <= o.ptr; }
bool PartEdgePtrCmp::operator> (PartEdgePtrCmp const & o) const { return (*ptr.get()) >  o.ptr; }

std::string PartEdgePtrCmp::str(std::string indent) { return ptr->str(indent); }

}; // namespace dataflow