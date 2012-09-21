#ifndef PARTITION_ITERATOR
#define PARTITION_ITERATOR

#include "virtualCFG.h"
#include "DataflowCFG.h"
#include "partitions.h"
//#include "baseCFGIterator.h"

#include <list>
#include <set>
#include <string>

namespace dataflow{

// Iterates over Parts in a Partition, respecting dependences in the graph.
// Supports both forward and backward iteration.
class partIterator
{
  //protected:
  public:
          
  std::list<PartPtrCmp> remainingNodes;
  std::set<PartPtrCmp> visited;
  bool initialized;

  public:
  partIterator();
  
  partIterator(const PartPtrCmp start);
  virtual ~partIterator() { }
  
  void init(const PartPtrCmp start);

  protected:
  // returns true if the given PartPtr is in the remainingNodes list and false otherwise
  bool isRemaining(const PartPtrCmp p);
          
  // advances this iterator in the given direction. Forwards if fwDir=true and backwards if fwDir=false.
  // if pushAllChildren=true, all of the current node's unvisited children (predecessors or successors, 
  //    depending on fwDir) are pushed onto remainingNodes
  void advance(bool fwDir, bool pushAllChildren);
  
  public:
  virtual void operator ++ (int);
  
  bool eq(const partIterator& other_it) const;
  
  bool operator==(const partIterator& other_it) const;
  
  bool operator!=(const partIterator& it) const;
          
  PartPtr operator * ();
  
  // Returns a fresh iterator that starts at node n
  static partIterator begin(const PartPtrCmp n);
  
  // Returns an empty iterator that can be compared to any other iterator to 
  // check if it has completed passing over its iteration space
  static partIterator end();
  
  // Contains the state of an iterator, allowing iterators to be 
  // checkpointed and restarted.
  class checkpoint/* : public virtual BaseCFG::iterator::checkpoint*/
  {
    std::list<PartPtrCmp> remainingNodes;
    std::set<PartPtrCmp>  visited;
  
    public:
    checkpoint(const std::list<PartPtrCmp>& remainingNodes, const std::set<PartPtrCmp>& visited);
          
    checkpoint(const checkpoint& that);
    
    std::string str(std::string indent="");
    
    friend class partIterator;
  };
  
  // Returns a checkpoint of this iterator's progress.
  checkpoint getChkpt();
  
  // Loads this iterator's state from the given checkpoint.
  void restartFromChkpt(checkpoint& chkpt);
  
  std::string str(std::string indent="");
};

class back_partIterator : public virtual partIterator
{
  public:
  back_partIterator(): partIterator() {}
  
  back_partIterator(const PartPtrCmp end): partIterator(end) { }
  
  void operator ++ (int);
};

class dataflowPartIterator : public virtual partIterator
{
  protected:
  PartPtrCmp terminator;
  public:
  //dataflow(): iterator() {}
  
  dataflowPartIterator(const PartPtrCmp terminator_arg);
  dataflowPartIterator(const PartPtrCmp start, const PartPtrCmp terminator_arg);
  
  void init(const PartPtrCmp start_arg, const PartPtrCmp terminator_arg);
  
  // Initializes this iterator's terminator node
  /*void setTerminator(const PartPtr terminator) {
          initialized = true;
          this->terminator = terminator;
  }*/
  
  void add(const PartPtrCmp next);
  
  void operator ++ (int);
  
  // Contains the state of an dataflow iterator, allowing dataflow 
  // iterators to be checkpointed and restarted.
  class checkpoint/* : public virtual BaseCFG::checkpoint*/
  {
    protected:
    partIterator::checkpoint iChkpt;
    PartPtrCmp terminator;
    
    public:
    checkpoint(const partIterator::checkpoint& iChkpt, const PartPtrCmp terminator);
    
    checkpoint(const checkpoint &that);
            
    std::string str(std::string indent="");
    
    friend class dataflowPartIterator;
  };
  
  // Returns a checkpoint of this dataflow iterator's progress.
  checkpoint getChkpt();
  
  // Loads this dataflow iterator's state from the given checkpoint.
  void restartFromChkpt(checkpoint& chkpt);
  
  std::string str(std::string indent="");
};

class back_dataflowPartIterator: public virtual dataflowPartIterator
{
  public: 
  back_dataflowPartIterator(const PartPtrCmp terminator_arg) : dataflowPartIterator(terminator_arg) {}
  back_dataflowPartIterator(const PartPtrCmp end, const PartPtrCmp terminator_arg);
          
  void operator ++ (int);
  
  std::string str(std::string indent="");
};
}; // namespace dataflow
#endif
