#ifndef CONSTANT_PROPAGATION_ANALYSIS_H
#define CONSTANT_PROPAGATION_ANALYSIS_H

#include "compose.h"
namespace dataflow
{
    class CPValueObject;
};
#include "VariableStateTransfer.h"
#include "abstract_object_map.h"

namespace dataflow
{
/***************************************
 ***** ConstantPropagationAnalysis *****
 ***************************************/

// This is a forward dataflow analysis that implements a simple abstraction of values 
// that consists of the universal set, a single constant value and an empty set. It 
// maintains a map of memory locations to these value abstractions.

extern int constantPropagationAnalysisDebugLevel;

class CPValueObject : public FiniteLattice, public ValueObject
{
  private:
  // the current value of the variable (if known)
  int value;
  
  // bool uninitialized; // Covered by case of bottom.
  
  bool undefined;
  
  private:
  // this object's current level in the lattice: (bottom, valKnown, divKnown, top)
  short level;
  
  public:  // The different levels of this lattice
  // no information is known about the value of the variable
  static const short bottom = 1; 
  
  // the value of the variable is known
  static const short unknownValue = 2; 
  
  // value is unknown but the divisibility (div and rem) of this variable is known 
  static const short constantValue = 3; 
  
  // value is undefined.
  static const short undefinedValue = 4; 
  
  // this variable holds more values than can be represented using a single value and divisibility
  static const short top = 5;
  
  public:
  // Do we need a default constructor?
  CPValueObject(PartPtr p);
  
  // This constructor builds a constant value lattice.
  CPValueObject(int v, PartPtr p);
  
  CPValueObject(short level, int v, PartPtr p);
  
  // Do we need th copy constructor?
  CPValueObject(const CPValueObject & X);
  
  // Access functions.
  int getValue() const;
  short getLevel() const;
  
  bool setValue(int x);
  bool setLevel(short x);
  
  bool setBottom();
  bool setTop();
  
  // **********************************************
  // Required definition of pure virtual functions.
  // **********************************************
  void initialize();
  
  // returns a copy of this lattice
  Lattice* copy() const;
  
  // overwrites the state of "this" Lattice with "that" Lattice
  void copy(Lattice* that);
  
  bool operator==(Lattice* that) /*const*/;
  
  // computes the meet of this and that and saves the result in this
  // returns true if this causes this to change and false otherwise
  bool meetUpdate(Lattice* that);
  
  // Set this Lattice object to represent the set of all possible execution prefixes.
  // Return true if this causes the object to change and false otherwise.
  bool setToFull();
  
  // Set this Lattice object to represent the of no execution prefixes (empty set)
  // Return true if this causes the object to change and false otherwise.
  bool setToEmpty();
  
  // pretty print for the object
  std::string str(std::string indent="") const;
  std::string str(std::string indent="") { return ((const CPValueObject*)this)->str(indent); }
  std::string strp(PartPtr part, std::string indent="") const;
    
  bool mayEqual(ValueObjectPtr o, PartPtr p);
  bool mustEqual(ValueObjectPtr o, PartPtr p);
  
  // Allocates a copy of this object and returns a pointer to it
  ValueObjectPtr copyV() const;

  /* Don't have good idea how to represent a finite number of options 
  virtual bool isFiniteSet()=0;
  virtual set<AbstractObj> getValueSet()=0;*/
  
  //string str(const string& indent);
};
typedef boost::shared_ptr<CPValueObject> CPValueObjectPtr;

class ConstantPropagationAnalysis : virtual public IntraFWDataflow
{
  protected:
  //static std::map<varID, Lattice*> constVars;
  //AbstractObjectMap constVars;
   
  public:
  ConstantPropagationAnalysis();
  
  void genInitState(const Function& func, PartPtr p, const NodeState& state, std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts);
  
  bool transfer(const Function& func, PartPtr p, NodeState& state, const std::vector<Lattice*>& dfInfo);
  
  boost::shared_ptr<IntraDFTransferVisitor> getTransferVisitor(const Function& func, PartPtr part, NodeState& state, const std::vector<Lattice*>& dfInfo);
  
  boost::shared_ptr<ValueObject> Expr2Val(SgNode* n, PartPtr p);
  
  // pretty print for the object
  std::string str(std::string indent="")
  { return "ConstantPropagationAnalysis"; }
  
  friend class ConstantPropagationAnalysisTransfer;
};

class ConstantPropagationAnalysisTransfer : public VariableStateTransfer<CPValueObject>
{
   private:
   typedef void (ConstantPropagationAnalysisTransfer::*TransferOp)(CPValueObjectPtr, CPValueObjectPtr, CPValueObjectPtr);
   template <typename T> void transferArith(SgBinaryOp *sgn, T transferOp);
   template <class T> void visitIntegerValue(T *sgn);
   
   void transferArith(SgBinaryOp *sgn, TransferOp transferOp);
   
   void transferIncrement(SgUnaryOp *sgn);
   void transferCompoundAdd(SgBinaryOp *sgn);
   void transferAdditive(CPValueObjectPtr arg1Lat, CPValueObjectPtr arg2Lat, CPValueObjectPtr resLat, bool isAddition);
   void transferMultiplicative(CPValueObjectPtr arg1Lat, CPValueObjectPtr arg2Lat, CPValueObjectPtr resLat);
   void transferDivision(CPValueObjectPtr arg1Lat, CPValueObjectPtr arg2Lat, CPValueObjectPtr resLat);
   void transferMod(CPValueObjectPtr arg1Lat, CPValueObjectPtr arg2Lat, CPValueObjectPtr resLat);
   
   public:
   //  void visit(SgNode *);
   void visit(SgLongLongIntVal *sgn);
   void visit(SgLongIntVal *sgn);
   void visit(SgIntVal *sgn);
   void visit(SgShortVal *sgn);
   void visit(SgUnsignedLongLongIntVal *sgn);
   void visit(SgUnsignedLongVal *sgn);
   void visit(SgUnsignedIntVal *sgn);
   void visit(SgUnsignedShortVal *sgn);
   void visit(SgValueExp *sgn);
   void visit(SgPlusAssignOp *sgn);
   void visit(SgMinusAssignOp *sgn);
   void visit(SgMultAssignOp *sgn);
   void visit(SgDivAssignOp *sgn);
   void visit(SgModAssignOp *sgn);
   void visit(SgAddOp *sgn);
   void visit(SgSubtractOp *sgn);
   void visit(SgMultiplyOp *sgn);
   void visit(SgDivideOp *sgn);
   void visit(SgModOp *sgn);
   void visit(SgPlusPlusOp *sgn);
   void visit(SgMinusMinusOp *sgn);
   void visit(SgUnaryAddOp *sgn);
   void visit(SgMinusOp *sgn);
   
   bool finish();
   
   ConstantPropagationAnalysisTransfer(const Function& func, PartPtr part, NodeState& state, const std::vector<Lattice*>& dfInfo, Composer* composer, ConstantPropagationAnalysis* analysis);
};

}; //namespace dataflow

#endif