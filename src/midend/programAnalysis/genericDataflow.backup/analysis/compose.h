#ifndef COMPOSE_H
#define COMPOSE_H

#include "rose.h"
#include "dataflow.h"
#include "abstract_object.h"
#include "partitions.h"

namespace dataflow
{

// --------------------
// ----- Analyses -----
// --------------------

class NotImplementedException
{};

class Composer;
typedef boost::shared_ptr<Composer> ComposerPtr;

class ComposedAnalysis : public IntraUnitDataflow, public printable
{
  public:
  Composer* composer;
  
  // Informs this analysis about the identity of the Composer object that composes
  // this analysis with others
  void setComposer(Composer* composer)
  {
    this->composer = composer;
  }
  
  Composer* getComposer()
  {
    return composer;
  }
  
  public:
  // Returns the initial Lattice at the given part for this analysis
  /*GOAL: virtual void genInitState(const Part& p, Lattice** initLattice, 
                            std::vector<NodeFact*>& initFacts)=0;*/
  // LEGACY: virtual void genInitState(const Function& func, const DataflowNode& n, const NodeState& state, std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts)=0;
  
  // The transfer function for this analysis
  //GOAL: virtual void transfer(SgNode &n, Part& p)=0;
  //LEGACY: virtual bool transfer(const Function& func, const DataflowNode& n, NodeState& state, const std::vector<Lattice*>& dfInfo)=0;
  
  // Abstract interpretation functions that return this analysis' abstractions that 
  // represent the outcome of the given SgExpression. The default implementations of 
  // these throw NotImplementedException so that if a derived class does not implement 
  // any of these functions, the Composer is informed.
  //
  // The objects returned by these functions are expected to be deallocated by their callers.
  virtual boost::shared_ptr<ValueObject>   Expr2Val    (SgNode* n, const Part& p) 
  { throw NotImplementedException(); }
  virtual boost::shared_ptr<MemLocObject>  Expr2MemLoc (SgNode* n, const Part& p) 
  { throw NotImplementedException(); }
  virtual boost::shared_ptr<CodeLocObject> Expr2CodeLoc(SgNode* n, const Part& p) 
  { throw NotImplementedException(); }
  
  // In the long term we will want analyses to return their own implementations of 
  // maps and sets. This is not strictly required to produce correct code and is 
  // therefore not supported.
  // Maps and Sets 
  /*virtual ValueSet* NewValueSet()  { throw NotImplementedException; }
  virtual ValueMap* NewValueMap()  { throw NotImplementedException; }
  
  virtual MemLocSet* NewMemLocSet() { throw NotImplementedException; }
  virtual MemLocMap* NewMemLocMap() { throw NotImplementedException; }
  
  virtual CodeLocSet* NewCodeLocSet() { throw NotImplementedException; }
  virtual CodeLocMap* NewCodeLocMap() { throw NotImplementedException; }*/
};

//// Implements a memory location abstraction focused on array access expressions. For
//// each expression it uses the memory location and value abstractions implemented by 
//// servers to determine whether two such expressions correspond to the same or 
//// different locations. For other expressions directly uses the equality methods of 
//// the memory location abstraction implemented by the server.
//class ArrayAccessAnalysis : ComposedAnalysis
//{
//   Composer* composer;
//   ArrayAccessAnalysis(Composer* composer) : composer(composer) {}
//
//   // This analysis performs no dataflow   
//   void genInitState(const Part& p, Lattice** initLattice, 
//                     std::vector<NodeFact*>& initFacts) { }
//   void transfer(SgNode &n, Part& p) { }
//   
//   boost::shared_ptr<CPValueObject> Expr2Val(SgExpression* e, const Part& p) 
//   {
//      if(isSgArrayAccess(e)) {
//         return new AAMemLocObject(
//                     composer->Expr2MemLoc(isSgArrayAccess(e)->array_exp(), p, this)
//                     composer->Expr2MemLoc(isSgArrayAccess(e)->index_exp(), p, this));
//      } else {
//         return new AAMemLocObject(composer->Expr2MemLoc(e, p, this), NULL);
//      }
//      return p.state[this].get(composer->Expr2MemLoc(e, p, this)));
//   }
//};
//
//// Represents either (i) an expression of the form a[i] or (**q)[a+b*c] (field index!=NULL) or 
////                  (ii) any other expression that denotes a memory location (field index==NULL).
//class AAMemLocObject : MemLocObject
//{
//   MemLocObject* array;
//   ValueObject* index;
//   
//   AAMemLocObject(MemLocObject* array, ValueObject* index) : array(array), index(index)
//   {
//      // The array field must be non-NULL but the index field may be NULL to indicate 
//      // that this memory  location doesn't correspond to an array index expression
//      ROSE_ASSERT(array);   
//   }
//   
//   // One AAMemLocObject MAY equal another if both their array memory location and 
//   // their index values may be equal to each other
//   bool mayEqual(AbstractObject* o)
//   {
//      AAMemLocObject* oAA;
//      ROSE_ASSERT(oAA=dynamic_cast<AAMemLocObject*>(o));
//      
//      // If one object is an array expression and the other is not, the only conservative 
//      // answer that can be provided is that they may be equal. We may be able to achieve 
//      // more precision if we can evaluate expressions to see the aliasing relationships 
//      // between the two objects
//      if(index==NULL != o->index==NULL)
//         return true;
//      
//      // If both are AAMemLocObjects, use their respective mayEqual methods
//      return oAA->array->mayEqual(array) && 
//            (index? oAA->index->mayEqual(index) : true);
//   }
//   
//   // One AAMemLocObject MUST equal another if both their array memory location and their 
//   // index values must be equal to each other
//   bool mustEqual(AbstractObject* o)
//   {
//      AAMemLocObject* oAA;
//      ROSE_ASSERT(oAA=dynamic_cast<AAMemLocObject*>(o));
//      
//      // If one object is an array expression and the other is not, we cannot conservatively 
//      // guarantee that they must be equal. We may be able to aachieve more precision if we 
//      // can evaluate expressions to see the aliasing relationships between the two objects
//      if(index==NULL != o->index==NULL)
//         return false;
//      
//      // If both are AAMemLocObjects, use their respective mustEqual methods
//      return oAA->array->mustEqual(array) && oAA->index->mustEqual(index);
//   }
//   
//   /* Don't have good idea how to represent a finite number of options 
//   
//   // This AAMemLocObject corresponds to a finite number of memory locations if both its 
//   // array and index are finite sets
//   bool isFiniteSet()
//   {
//      return array->isFiniteSet() && index->isFiniteSet();
//   }
//   
//   set<AbstractObj> getValueSet()
//   {
//      Not yet clear how to represent concrete memory locations. Are these guaranteed to be 
//      lexical memory locations or should we keep them opaque and give them precise equality 
//      operations?
//   }*/
//   
//   string str(string& indent)
//   {
//      ostringstream oss;
//      oss <<           "[AAMemLocObj: \n";
//      oss << indent << "    array="<<array->str(indent+"          ")<<"\n";
//      oss << indent << "    index="<<(index? index->str(indent+"          ") : "NULL")<<"]";
//      return oss.str();
//   }
//};
//
//// Backwards analysis that maintains a set of memory locations that are read along some 
//// path that follows the current location before they are over-written. Implements a 
//// MemLocObject that considers all dead objects as not may-equal and not must-equal to any 
//// live object but are must-equal and may-equal to each other.
//class LiveDeadAnalysis : ComposedAnalysis
//{
//   Composer* composer;
//   LiveDeadAnalysis(Composer* composer) : composer(composer) {}
//   
//   void genInitState(const Part& p, Lattice** initLattice, 
//                     std::vector<NodeFact*>& initFacts) { 
//      *initLattice = composer->NewMemLocSet();
//   }
//   
//   void transfer(SgNode &n, Part& p) { 
//      must implement
//      for instance, to process an (SgAssignOp* op):
//         // The lhs is dead but the rhs is live
//         p.state[this].remove(composer->Expr2MemLoc(op->get_lhs_op(), p, this));
//         p.state[this].insert(composer->Expr2MemLoc(op->get_rhs_op(), p, this));
//   }
//   
//   boost::shared_ptr<LDMemLocObject> Expr2MemLoc(SgExpression* e, const Part& p) {
//      // If e corresponds to a live memory location, return an LDMemLocObject that 
//      // corresponds to it
//      if(p.state[this].contains(composer->Expr2MemLoc(e, p, this)))
//         return new LDMemLocObject(composer->Expr2MemLoc(e, p, this))
//      // Otherwise, return a dead LDMemLocObject
//      else
//         return new LDMemLocObject(NULL);
//   }
//};
//
//// Represents either (i) a live memory location (field obj!=NULL) or
////                  (ii) a dead memory location (field obj==NULL).
//class LDMemLocObject : MemLocObject
//{
//   MemLocObject* obj;
//   
//   LDMemLocObject(MemLocObject* obj) : obj(obj)
//   { }
//   
//   // One LDMemLocObject MAY equal another if they're both live and the objects themselves 
//   // report thatthey may be equal
//   bool mayEqual(AbstractObject* o)
//   {
//      LDMemLocObject* oLD;
//      ROSE_ASSERT(oLD=dynamic_cast<LDMemLocObject*>(o));
//      
//      return obj==NULL || oLD->obj==NULL ||
//             obj->mayEqual(oLD);
//   }
//   
//   // One LDMemLocObject MUST equal another if they're both live and the objects themselves 
//   // report that they must be equal
//   bool mustEqual(AbstractObject* o)
//   {
//      LDMemLocObject* oLD;
//      ROSE_ASSERT(oLD=dynamic_cast<LDMemLocObject*>(o));
//      
//      return obj==NULL || oLD->obj==NULL ||
//             obj->mustEqual(oLD);
//   }
//   
//   /* Don't have good idea how to represent a finite number of options 
//   
//   // This LDMemLocObject corresponds to a finite number of memory locations if it is dead 
//   // or the object itself corresponds to a finite number of memory locations
//   bool isFiniteSet()
//   {
//      return obj==NULL || obj->isFiniteSet();
//   }
//   
//   set<AbstractObj> getValueSet()
//   {
//      if(obj==NULL) {
//         return empty set;
//      }
//      Not yet clear how to represent concrete memory locations. Are these guaranteed to be 
//      lexical memory locations or should we keep them opaque and give them precise equality 
//      operations?
//   } */
//   
//   string str(string& indent)
//   {
//      ostringstream oss;
//      oss << "[LDMemLocObject: \obj="<<(obj? obj->str(indent+"          ") : "NULL")<<"]";
//      return oss.str();
//   }
//};

}; // namespace dataflow

// ------------------------------
// ----- Composition Driver -----
// ------------------------------

#include "stx_analysis.h"

namespace dataflow {

class Composer
{
  public:
   // Abstract interpretation functions that return this analysis' abstractions that 
   // represent the outcome of the given SgExpression. 
   // The objects returned by these functions are expected to be deallocated by their callers.
   virtual boost::shared_ptr<ValueObject>   Expr2Val    (SgNode* n, const Part& p, ComposedAnalysis* client)=0;
   virtual boost::shared_ptr<MemLocObject>  Expr2MemLoc (SgNode* n, const Part& p, ComposedAnalysis* client)=0;
   virtual boost::shared_ptr<CodeLocObject> Expr2CodeLoc(SgNode* n, const Part& p, ComposedAnalysis* client)=0;

   // Maps and Sets
   /*virtual MemLocSet* NewValueSet()=0;
   virtual ValueSet*  NewValueMap()=0;
   
   virtual MemLocSet* NewMemLocSet()=0;
   virtual MemLocSet* NewMemLocMap()=0;
   
   virtual CodeLocSet* NewCodeLocSet()=0;
   virtual CodeLocSet* NewCodeLocMap()=0;*/
};

// Wraps all the information required to invoke methods within the composer from
// within a given part and analysis
class ComposerInv
{
protected:
Composer&         composer;
const Part&       part;
ComposedAnalysis& analysis;

public:
ComposerInv(Composer& _composer, const Part& _part, ComposedAnalysis& _analysis) :
composer(_composer), part(_part), analysis(_analysis)
{}

// Abstract interpretation functions that return this analysis' abstractions that 
  // represent the outcome of the given SgExpression. 
  // The objects returned by these functions are expected to be deallocated by their callers.
  boost::shared_ptr<ValueObject>   Expr2Val(SgNode* n)
  { return composer.Expr2Val(n, part, &analysis); }
  boost::shared_ptr<MemLocObject>  Expr2MemLoc(SgNode* n)
  { return composer.Expr2MemLoc(n, part, &analysis); }
  boost::shared_ptr<CodeLocObject> Expr2CodeLoc(SgNode* n)
  { return composer.Expr2CodeLoc(n, part, &analysis); }
  
  friend class ComposerExpr2Obj;
  friend class ComposerExpr2Val;
  friend class ComposerExpr2MemLoc;
  friend class ComposerExpr2CodeLoc;
};
typedef boost::shared_ptr<ComposerInv> ComposerInvPtr;

// Wraps all the information requires to invoke the Expr2* method of the composer.
// This class is instantiated with specific classes for invoking Expr2Val, Expr2MemLoc 
// and Expr2CodeLoc and these instances can be passed down to generic data structures
// to enable them to create a specific type of AbstractObject without knowing the type
// of object they're creating.
class ComposerExpr2Obj
{
protected:
Composer&         composer;
const Part&       part;
ComposedAnalysis& analysis;

public:
ComposerExpr2Obj(Composer& _composer, const Part& _part, ComposedAnalysis& _analysis) :
composer(_composer), part(_part), analysis(_analysis) {}

virtual AbstractObjectPtr Expr2Obj(SgNode* n)=0;
};
typedef boost::shared_ptr<ComposerExpr2Obj> ComposerExpr2ObjPtr;

class ComposerExpr2Val: public ComposerExpr2Obj
{
  public:
  ComposerExpr2Val(Composer& composer, Part& part, ComposedAnalysis& analysis) :
  ComposerExpr2Obj(composer, part, analysis) {}
  ComposerExpr2Val(ComposerInv civ) : ComposerExpr2Obj(civ.composer, civ.part, civ.analysis) {}
  
  AbstractObjectPtr Expr2Obj(SgNode* n)
  { return boost::dynamic_pointer_cast<AbstractObject>(composer.Expr2Val(n, part, &analysis)); }
};
typedef boost::shared_ptr<ComposerExpr2Val> ComposerExpr2ValPtr;

class ComposerExpr2MemLoc: public ComposerExpr2Obj
{
  public:
  ComposerExpr2MemLoc(Composer& composer, Part& part, ComposedAnalysis& analysis) :
  ComposerExpr2Obj(composer, part, analysis) {}
  ComposerExpr2MemLoc(ComposerInv civ) : ComposerExpr2Obj(civ.composer, civ.part, civ.analysis) {}
  
  AbstractObjectPtr Expr2Obj(SgNode* n)
  { return boost::dynamic_pointer_cast<AbstractObject>(composer.Expr2MemLoc(n, part, &analysis)); }
};
typedef boost::shared_ptr<ComposerExpr2MemLoc> ComposerExpr2MemLocPtr;

class ComposerExpr2CodeLoc: public ComposerExpr2Obj
{
  public:
  ComposerExpr2CodeLoc(Composer& composer, Part& part, ComposedAnalysis& analysis) :
  ComposerExpr2Obj(composer, part, analysis) {}
  ComposerExpr2CodeLoc(ComposerInv civ) : ComposerExpr2Obj(civ.composer, civ.part, civ.analysis) {}
  
  AbstractObjectPtr Expr2Obj(SgNode* n)
  { return boost::dynamic_pointer_cast<AbstractObject>(composer.Expr2CodeLoc(n, part, &analysis)); }
};
typedef boost::shared_ptr<ComposerExpr2CodeLoc> ComposerExpr2CodeLocPtr;

template<class RetObject>
class FuncCaller
{
  public:
  // Calls the given analysis' implementation of Expr2Val. The current Part
  // is provided in case the implementation needs it
  virtual boost::shared_ptr<RetObject> operator()(SgNode* n, const Part& p, ComposedAnalysis* a)=0;
  // Returns the name of the function being called, for debugging purposes
  virtual string funcName()=0;
};

// Simple implementation of a Composer where the analyses form a linear sequence of 
// dependences
class ChainComposer : public Composer
{
  SgProject* project;
  list<ComposedAnalysis*> allAnalyses;
  list<ComposedAnalysis*> doneAnalyses;
  
  public:
  ChainComposer(int argc, char** argv, list<ComposedAnalysis*>& analyses);
  
  //bool runAnalysis(const Function& func, NodeState* state);
  void runAnalysis();
  
  // Generic function that looks up the composition chain from the given client 
  // analysis and returns the result produced by the first instance of the function 
  // called by the caller object found along the way.
  template<class RetObject>
  boost::shared_ptr<RetObject> callServerAnalysisFunc(SgNode* e, const Part& p, ComposedAnalysis* client, 
                                    FuncCaller<RetObject>& caller);
  
  // Abstract interpretation functions that return this analysis' abstractions that 
  // represent the outcome of the given SgExpression. 
  // The objects returned by these functions are expected to be deallocated by their callers.
  boost::shared_ptr<ValueObject> Expr2Val(SgNode* n, const Part& p, ComposedAnalysis* client);
  
  boost::shared_ptr<MemLocObject> Expr2MemLoc(SgNode* n, const Part& p, ComposedAnalysis* client);
  
  boost::shared_ptr<CodeLocObject> Expr2CodeLoc(SgNode* n, const Part& p, ComposedAnalysis* client);
  // Maps and Sets 
  // (when analyses can implement these internally, these functions will also invoke 
  //  callServerAnalysisFunc)
  /*ValueSet* NewValueSet()  { return new ValueSet(); }
  ValueMap* NewValueMap()  { return new ValueMap(); }
  
  MemLocSet* NewMemLocSet() { return new MemLocSet(); }
  MemLocMap* NewMemLocMap() { return new MemLocMap(); }
  
  CodeLocSet* NewCodeLocSet() { return new CodeLocSet(); }
  CodeLocMap* NewCodeLocMap() { return new CodeLocMap(); }*/
};
}; // namespace dataflow

#endif