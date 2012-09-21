#ifndef PARTITIONS_H
#define PARTITIONS_H

#include "rose.h"
#include <boost/function.hpp>
//#include <boost/lambda/lambda.hpp>
//#include <boost/lambda/bind.hpp>
#include <boost/bind.hpp>
#include "cfgUtils.h"
#include "AnalysisDebuggingUtils.h"

namespace dataflow {
// ----------------
// ----- Part -----
// ----------------

class Part;
typedef boost::shared_ptr<Part> PartPtr;
typedef boost::shared_ptr<const Part> ConstPartPtr;
class PartEdge;
typedef boost::shared_ptr<PartEdge> PartEdgePtr;
typedef boost::shared_ptr<const PartEdge> ConstPartEdgePtr;

class Part : public printable {
  public:
  
  virtual std::vector<PartEdgePtr> outEdges()=0;
  virtual std::vector<PartEdgePtr> inEdges()=0;
  virtual std::vector<CFGNode> CFGNodes()=0;
  
  // Applies the given lambda to all the CFGNodes within this part.
  // Returns true if the lambda returns true on ANY of them.
  template <typename Ret> 
  Ret mapCFGNodeANY(boost::function<bool(const CFGNode&)> func) {
    Ret r = (Ret)NULL;
    std::vector<CFGNode> v=CFGNodes();
    for(std::vector<CFGNode>::iterator i=v.begin(); i!=v.end(); i++) {
      if((r = func(*i))) return r;
    }
    return r;
  }
  
  // Applies the given lambda to all the CFGNodes within this part.
  // Returns true if the lambda returns true on ALL of them.
  template <typename Ret> 
  Ret mapCFGNodeALL(boost::function<bool(const CFGNode&)> func){
    Ret r = (Ret)NULL;
    std::vector<CFGNode> v=CFGNodes();
    for(std::vector<CFGNode>::iterator i=v.begin(); i!=v.end(); i++) {
      if(!(r = func(*i))) return r;
    }
    return r;
  }
  
  // If there exist one or more CFGNodes within this part have sub-type NodeType of SgNode,
  // returns a pointer to one of them.
  template <class NodeType>
  NodeType* maySgNodeAny() {
    std::vector<CFGNode> v=CFGNodes();
    for(std::vector<CFGNode>::iterator i=v.begin(); i!=v.end(); i++) {
      if(dynamic_cast<NodeType*>(i->getNode()) == NULL)  return NULL;
    }
    return dynamic_cast<NodeType*>(v.begin()->getNode());

    /*boost::function<NodeType* (CFGNode)> c = dynamic_cast<NodeType*>(boost::lambda::_1);
    return mapCFGNodeALL<NodeType*>(c);
    return NULL;*/
  }
  
  // If all the CFGNodes within this part have sub-type NodeType of SgNode,
  // returns a pointer to one of them.
  template <class NodeType>
  NodeType* mustSgNodeAny() {
    std::vector<CFGNode> v=CFGNodes();
    for(std::vector<CFGNode>::iterator i=v.begin(); i!=v.end(); i++) {
      if(dynamic_cast<NodeType*>(i->getNode()) == NULL)  return NULL;
    }
    return dynamic_cast<NodeType*>(v.begin()->getNode());
    
    //boost::function<NodeType* (CFGNode)> c = dynamic_cast<NodeType*>(boost::lambda::_1);
    //return mapCFGNodeALL<NodeType*>(c);
    //return NULL;
  }
  
  // If the filter accepts (returns true) on any of the CFGNodes within this part, return true)
  bool filterAny(bool (*filter) (CFGNode cfgn));
  
  // If the filter accepts (returns true) on all of the CFGNodes within this part, return true)
  bool filterAll(bool (*filter) (CFGNode cfgn));
  
  virtual bool operator==(const PartPtr o) const=0;
  virtual bool operator<(const PartPtr o)  const=0;
  bool operator!=(const PartPtr o) const;
  bool operator>=(const PartPtr o) const;
  bool operator<=(const PartPtr o) const;
  bool operator> (const PartPtr o) const;
};

// Extension to PartPtr that that can be used as keys in maps because it wraps comparison operations by forwarding 
// them to the Part's own comparison operations. In contrast, the base boost::shared_ptr uses pointer equality.
class PartPtrCmp : public printable
{
  PartPtr ptr;
  
  public:
  PartPtrCmp(const PartPtr& o) : ptr(o) {}
  bool operator==(PartPtrCmp const & o) const;
  bool operator< (PartPtrCmp const & o) const;
  bool operator!=(PartPtrCmp const & o) const;
  bool operator>=(PartPtrCmp const & o) const;
  bool operator<=(PartPtrCmp const & o) const;
  bool operator> (PartPtrCmp const & o) const;
  
  std::string str(std::string indent="");
};

class PartEdge : public printable {
  public:
  virtual PartPtr source()=0;
  virtual PartPtr target()=0;
  
  virtual bool operator==(const PartEdgePtr o) const=0;
  virtual bool operator<(const PartEdgePtr o)  const=0;
  bool operator!=(const PartEdgePtr o) const;
  bool operator>=(const PartEdgePtr o) const;
  bool operator<=(const PartEdgePtr o) const;
  bool operator> (const PartEdgePtr o) const;
};

// Extension to PartEdgePtr that that can be used as keys in maps because it wraps comparison operations by forwarding 
// them to the Part's own comparison operations. In contrast, the base boost::shared_ptr uses pointer equality.
class PartEdgePtrCmp : public printable
{
  PartEdgePtr ptr;
  
  public:
  PartEdgePtrCmp(const PartEdgePtr& o) : ptr(o) {}
  bool operator== (PartEdgePtrCmp const & o) const;
  bool operator<  (PartEdgePtrCmp const & o) const;
  bool operator!= (PartEdgePtrCmp const & o) const;
  bool operator>= (PartEdgePtrCmp const & o) const;
  bool operator<= (PartEdgePtrCmp const & o) const;
  bool operator>  (PartEdgePtrCmp const & o) const;
  
  std::string str(std::string indent="");
};

}; // namespace dataflow

#endif