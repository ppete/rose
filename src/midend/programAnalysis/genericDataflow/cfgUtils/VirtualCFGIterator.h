#ifndef VIRTUAL_CFG_ITERATOR
#define VIRTUAL_CFG_ITERATOR

#include "virtualCFG.h"
#include "DataflowCFG.h"
#include "partitions.h"
//#include "baseCFGIterator.h"

#include <list>
#include <set>
#include <string>

namespace VirtualCFG{

// Iterates over Parts in a VirtualCFG, respecting dependences in the graph.
// Supports both forward and backward iteration.
class iterator/* : public virtual BaseCFG::iterator*/
{
        //protected:
        public:
                
        std::list<dataflow::PartPtr> remainingNodes;
        std::set<dataflow::PartPtr> visited;
        bool initialized;

        public:
        iterator();
        
        iterator(const dataflow::PartPtr start);
        virtual ~iterator() { }
        
        void init(const dataflow::PartPtr start);

        protected:
        // returns true if the given dataflow::PartPtr is in the remainingNodes list and false otherwise
        bool isRemaining(const dataflow::PartPtr p);
                
        // advances this iterator in the given direction. Forwards if fwDir=true and backwards if fwDir=false.
        // if pushAllChildren=true, all of the current node's unvisited children (predecessors or successors, 
        //    depending on fwDir) are pushed onto remainingNodes
        void advance(bool fwDir, bool pushAllChildren);
        
        public:
        virtual void operator ++ (int);
        
        bool eq(const iterator& other_it) const;
        
        bool operator==(const iterator& other_it) const;
        
        bool operator!=(const iterator& it) const;
                
        dataflow::PartPtr operator * ();
        
        // Returns a fresh iterator that starts at node n
        static iterator begin(const dataflow::PartPtr n);
        
        // Returns an empty iterator that can be compared to any other iterator to 
        // check if it has completed passing over its iteration space
        static iterator end();
        
        // Contains the state of an iterator, allowing iterators to be 
        // checkpointed and restarted.
        class checkpoint/* : public virtual BaseCFG::iterator::checkpoint*/
        {
          std::list<dataflow::PartPtr> remainingNodes;
          std::set<dataflow::PartPtr>  visited;
        
          public:
          checkpoint(const std::list<dataflow::PartPtr>& remainingNodes, const std::set<dataflow::PartPtr>& visited);
                
          checkpoint(const checkpoint& that);
          
          std::string str(std::string indent="");
          
          friend class iterator;
        };
        
        // Returns a checkpoint of this iterator's progress.
        checkpoint getChkpt();
        
        // Loads this iterator's state from the given checkpoint.
        void restartFromChkpt(checkpoint& chkpt);
        
        std::string str(std::string indent="");
};

class back_iterator : /*public virtual BaseCFG::backiterator, */public virtual iterator
{
        public:
        back_iterator(): iterator() {}
        
        back_iterator(const dataflow::PartPtr end): iterator(end) { }
        
        void operator ++ (int);
};

class dataflowIterator : /*public virtual BaseCFG::dataflow, */public virtual iterator
{
        dataflow::PartPtr terminator;
        public:
        //dataflow(): iterator() {}
        
        dataflowIterator(const dataflow::PartPtr terminator_arg);
        
        //dataflow(const dataflow::PartPtr &start) : iterator(start) {}
        dataflowIterator(const dataflow::PartPtr start, const dataflow::PartPtr terminator_arg);
        
        void init(const dataflow::PartPtr start_arg, const dataflow::PartPtr terminator_arg);
        
        // Initializes this iterator's terminator node
        /*void setTerminator(const dataflow::PartPtr terminator) {
                initialized = true;
                this->terminator = terminator;
        }*/
        
        void add(const dataflow::PartPtr next);
        
        //void operator ++ (int);
        
        // Contains the state of an dataflow iterator, allowing dataflow 
        // iterators to be checkpointed and restarted.
        class checkpoint/* : public virtual BaseCFG::dataflow::checkpoint*/
        {
                protected:
                iterator::checkpoint iChkpt;
                dataflow::PartPtr terminator;
                
                public:
                checkpoint(const iterator::checkpoint& iChkpt, const dataflow::PartPtr terminator);
                
                checkpoint(const checkpoint &that);
                        
                std::string str(std::string indent="");
                
                friend class dataflowIterator;
        };
        
        // Returns a checkpoint of this dataflow iterator's progress.
        checkpoint getChkpt();
        
        // Loads this dataflow iterator's state from the given checkpoint.
        void restartFromChkpt(checkpoint& chkpt);
        
        std::string str(std::string indent="");
};

class back_dataflowIterator: /*public virtual BaseCFG::back_dataflow,*/ public virtual dataflowIterator
{
        public: 
        //back_dataflow(): back_iterator() {}
        
        back_dataflowIterator(const dataflow::PartPtr terminator_arg) : dataflowIterator(terminator_arg) {}
        
        //back_dataflow(const dataflow::PartPtr &end) : iterator(end) {}
        
        back_dataflowIterator(const dataflow::PartPtr end, const dataflow::PartPtr terminator_arg);
                
        void operator ++ (int);
};
}
#endif
