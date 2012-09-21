#include "const_prop_analysis.h"

#include <boost/bind.hpp>
#include <boost/mem_fn.hpp>
#include <boost/make_shared.hpp>

namespace dataflow {

int constantPropagationAnalysisDebugLevel = 2;

// **********************************************************************
//                      ConstantPropagationLattice
// **********************************************************************

CPValueObject::CPValueObject(PartPtr p) : Lattice(p), FiniteLattice(p)
   {
     this->value = 0;
     this->level = bottom;
   }

CPValueObject::CPValueObject(int v, PartPtr p) : Lattice(p), FiniteLattice(p)
   {
     this->value = v;
     this->level = constantValue;
   }

CPValueObject::CPValueObject(short level, int v, PartPtr p) : Lattice(p), FiniteLattice(p)
   {
     this->value = v;
     this->level = level;
   }

// This is the same as the implicit definition, so it might not be required to be defined explicitly.
// I am searching for the minimal example of the use of the data flow classes.
CPValueObject::CPValueObject(const CPValueObject & X) : Lattice(X.part), FiniteLattice(X.part)
   {
     this->value = X.value;
     this->level = X.level;
   }

int
CPValueObject::getValue() const
   {
     return value;
   }

short
CPValueObject::getLevel() const
   {
     return level;
   }
  
bool
CPValueObject::setValue(int x)
   {
  // These are more than access functions, they return if the state of the lattice has changed.
     bool modified = this->level != constantValue || this->value != value;
     this->value = x;
     level = constantValue;
     return modified;
   }

bool
CPValueObject::setLevel(short x)
   {
  // These are more than access functions, they return if the state of the lattice has changed.
     bool modified = this->level != x;
     level = x;
     return modified;
   }

bool
CPValueObject::setBottom()
   {
  // These are more than access functions, they return if the state of the lattice has changed.
     bool modified = this->level != bottom;
     this->value = 0;
     level = bottom;
     return modified;
   }

bool
CPValueObject::setTop()
   {
  // These are more than access functions, they return if the state of the lattice has changed.
     bool modified = this->level != top;
     this->value = 0;
     level = top;
     return modified;
   }

// **********************************************
// Required definition of pure virtual functions.
// **********************************************
void
CPValueObject::initialize()
   {
  // Use the default constructor (implemented above).
  // So nothing to do here.
   }


// returns a copy of this lattice
Lattice*
CPValueObject::copy() const
   {
     return new CPValueObject(*this);
   }


// overwrites the state of "this" Lattice with "that" Lattice
void
CPValueObject::copy(Lattice* X)
   {
     CPValueObject* that = dynamic_cast<CPValueObject*>(X);

     this->value = that->value;
     this->level = that->level;
   }


bool
CPValueObject::operator==(Lattice* X) /*const*/
   {
  // Implementation of equality operator.
     CPValueObject* that = dynamic_cast<CPValueObject*>(X);
     return (value == that->value) && (level == that->level);
   }

// computes the meet of this and that and saves the result in this
// returns true if this causes this to change and false otherwise
bool
CPValueObject::meetUpdate(Lattice* X)
   {
     CPValueObject* that = dynamic_cast<CPValueObject*>(X);

  // Need to handle bottom, copy from the other side.


  // This is the more technically interesting required function.
  //   2. unknownValue, missing the cases that meet bottom, top ??
     if (this->level == unknownValue && that->level == unknownValue)
        {
       // leave it and return false
          return false;
        }
       else
        {
          if (this->level == unknownValue && that->level == constantValue)
             {
               this->level = constantValue;
               this->value = that->value;
               return true;
             }
            else
             {   //  3. const value: missing the cases of meeting bottom and top ??
               if (this->level == constantValue && that->level == unknownValue)
                  {
                    return false;
                  }
                 else
                  {
                    if (this->level == constantValue && that->level == constantValue)
                       {
                         if (this->value == that->value)
                            {
                              return false;
                            }
                           else
                            {
                              this->level = top;
                              return true;
                            }
                       }
                      else // 4.  undefinedValue  is not covered ???
                       {
                         if (this->level == bottom) // 1. can only go up: must be the value of that lattice since this lattice is already the bottom
                            {
                              this->level = that->level;
                              this->value = that->value;

                              return (that->level != bottom);
                            }
                           else
                            {
                              if (this->level == top) //5.  already at the top. Cannot go up further.
                                 {
                                   return false;
                                 }
                                else
                                 {
                                   if (that->level == top)
                                      {
                                        bool modified = this->level != top;
                                        this->level = top;
                                        return modified;
                                      }
                                 }
                            }
                       }
                  }
             }
        }

  // Make up a return value for now.
     return false;
   }

// Set this Lattice object to represent the set of all possible execution prefixes.
// Return true if this causes the object to change and false otherwise.
bool CPValueObject::setToFull()
{
return setTop();
}

// Set this Lattice object to represent the of no execution prefixes (empty set)
// Return true if this causes the object to change and false otherwise.
bool CPValueObject::setToEmpty()
{
  return setBottom();
}

string
CPValueObject::str(string indent) const
{
     return strp(part, indent);
}

string
CPValueObject::strp(PartPtr part, string indent) const
{
    
     ostringstream outs;
     if(level == bottom)
          outs << "[bottom]";
       else if(level == unknownValue)
          outs << "[unknown: "<<value<<"]";
       else if(level == constantValue)
          outs << "[const: "<<value<<"]";
       else if(level == top)
          outs << "[top]";

     return outs.str();
}


bool CPValueObject::mayEqual(ValueObjectPtr o, PartPtr p)
{
  return mustEqual(o, p);
}

bool CPValueObject::mustEqual(ValueObjectPtr o, PartPtr p)
{
  CPValueObjectPtr that = boost::dynamic_pointer_cast<CPValueObject>(o);
  if(!that) { return false; }
  return (value == that->value) && (level == that->level);
}

// Allocates a copy of this object and returns a pointer to it
ValueObjectPtr CPValueObject::copyV() const
{
  return boost::make_shared<CPValueObject>(*this);
}

  /* Don't have good idea how to represent a finite number of options 
  virtual bool isFiniteSet()=0;
  virtual set<AbstractObj> getValueSet()=0;*/
  
/*string CPValueObject::str(const string& indent)
{
  ostringstream outs;
  if(level == bottom)
    outs << indent << "[level: bottom]";
  else if(level == unknownValue)
    outs << indent << "[level: unknownValue, val = "<<value<<"]";
  else if(level == constantValue)
    outs << indent << "[level: constantValue, val = "<<value<<"]";
  else if(level == top)
    outs << indent << "[level: top]";
  
  return outs.str();
}*/

// **********************************************************************
//                  ConstantPropagationAnalysisTransfer
// **********************************************************************

template <typename T>
void ConstantPropagationAnalysisTransfer::transferArith(SgBinaryOp *sgn, T transferOp)
   {
     CPValueObjectPtr arg1Lat, arg2Lat, resLat;
     getLattices(sgn, arg1Lat, arg2Lat, resLat);
        {
          transferOp(this, arg1Lat, arg2Lat, resLat);
          setLattice(sgn, resLat);
          if (isSgCompoundAssignOp(sgn))
            setLattice(sgn->get_lhs_operand(), resLat);
        }
   }

void
ConstantPropagationAnalysisTransfer::transferArith(SgBinaryOp *sgn, TransferOp transferOp)
   {
     transferArith(sgn, boost::mem_fn(transferOp));
   }

void 
ConstantPropagationAnalysisTransfer::transferIncrement(SgUnaryOp *sgn)
   {
     CPValueObjectPtr arg1Lat, arg2Lat, resLat;
     getLattices(sgn, arg1Lat, arg2Lat, resLat);
     transferAdditive(arg1Lat, arg2Lat, resLat, isSgPlusPlusOp(sgn));
     setLattice(sgn, resLat);
     // GB: shouldn't need to deallocate when we consistently use boost shared pointers
     //delete arg2Lat; // Allocated by getLattices
     setLattice(sgn->get_operand(), resLat);
   }

void
ConstantPropagationAnalysisTransfer::transferAdditive(CPValueObjectPtr arg1Lat, CPValueObjectPtr arg2Lat, CPValueObjectPtr resLat, bool isAddition)
   {
     if (arg1Lat->getLevel() == CPValueObject::bottom || arg2Lat->getLevel() == CPValueObject::bottom)
        {
          updateModified(resLat->setLevel(CPValueObject::bottom));
        }
       else 
        {
          // Both knownValue
          if(arg1Lat->getLevel() == CPValueObject::constantValue && arg2Lat->getLevel() == CPValueObject::constantValue) 
             {
               updateModified(resLat->setValue(isAddition ? arg1Lat->getValue() + arg2Lat->getValue() : arg1Lat->getValue() - arg2Lat->getValue()));
             }
            else
             {
               // Else => Top
               updateModified(resLat->setLevel(CPValueObject::top));
             }
        }
   }


void
ConstantPropagationAnalysisTransfer::transferMultiplicative(CPValueObjectPtr arg1Lat, CPValueObjectPtr arg2Lat, CPValueObjectPtr resLat)
   {
     if (arg1Lat->getLevel() == CPValueObject::bottom || arg2Lat->getLevel() == CPValueObject::bottom)
        {
          updateModified(resLat->setLevel(CPValueObject::bottom));
        }
       else 
        {
       // Both knownValue
          if(arg1Lat->getLevel() == CPValueObject::constantValue && arg2Lat->getLevel() == CPValueObject::constantValue) 
             {
               updateModified(resLat->setValue(arg1Lat->getValue() * arg2Lat->getValue()));
             }
            else
             {
            // Else => Top
               updateModified(resLat->setLevel(CPValueObject::top));
             }
        }
   }

void
ConstantPropagationAnalysisTransfer::transferDivision(CPValueObjectPtr arg1Lat, CPValueObjectPtr arg2Lat, CPValueObjectPtr resLat)
   {
     if (arg1Lat->getLevel() == CPValueObject::bottom || arg2Lat->getLevel() == CPValueObject::bottom)
        {
          updateModified(resLat->setLevel(CPValueObject::bottom));
        }
       else 
        {
       // Both knownValue
          if(arg1Lat->getLevel() == CPValueObject::constantValue && arg2Lat->getLevel() == CPValueObject::constantValue) 
             {
               updateModified(resLat->setValue(arg1Lat->getValue() / arg2Lat->getValue()));
             }
            else
             {
            // Else => Top
               updateModified(resLat->setLevel(CPValueObject::top));
             }
        }
   }

void
ConstantPropagationAnalysisTransfer::transferMod(CPValueObjectPtr arg1Lat, CPValueObjectPtr arg2Lat, CPValueObjectPtr resLat)
   {
     if (arg1Lat->getLevel() == CPValueObject::bottom || arg2Lat->getLevel() == CPValueObject::bottom)
        {
          updateModified(resLat->setLevel(CPValueObject::bottom));
        }
       else 
        {
       // Both knownValue
          if(arg1Lat->getLevel() == CPValueObject::constantValue && arg2Lat->getLevel() == CPValueObject::constantValue) 
             {
               updateModified(resLat->setValue(arg1Lat->getValue() % arg2Lat->getValue()));
             }
            else
             {
            // Else => Top
               updateModified(resLat->setLevel(CPValueObject::top));
             }
        }
   }

void
ConstantPropagationAnalysisTransfer::visit(SgLongLongIntVal *sgn)
   {
   }

void
ConstantPropagationAnalysisTransfer::visit(SgLongIntVal *sgn)
   {
   }

void
ConstantPropagationAnalysisTransfer::visit(SgIntVal *sgn)
   {
     ROSE_ASSERT(sgn);
     //CPValueObjectPtr resLat = getLattice(sgn);
     CPValueObjectPtr resLat(new CPValueObject(sgn->get_value(), part));
     ROSE_ASSERT(resLat);
     //resLat->setValue(sgn->get_value());
     //resLat->setLevel(CPValueObject::constantValue);
     setLattice(sgn, resLat);
   }

void
ConstantPropagationAnalysisTransfer::visit(SgShortVal *sgn)
   {
   }

void
ConstantPropagationAnalysisTransfer::visit(SgUnsignedLongLongIntVal *sgn)
   {
   }

void
ConstantPropagationAnalysisTransfer::visit(SgUnsignedLongVal *sgn)
   {
   }

void
ConstantPropagationAnalysisTransfer::visit(SgUnsignedIntVal *sgn)
   {
   }

void
ConstantPropagationAnalysisTransfer::visit(SgUnsignedShortVal *sgn)
   {
   }

void
ConstantPropagationAnalysisTransfer::visit(SgValueExp *sgn)
   {
   }

void
ConstantPropagationAnalysisTransfer::visit(SgPlusAssignOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferAdditive, _1, _2, _3, _4, true ));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgMinusAssignOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferAdditive, _1, _2, _3, _4, false));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgMultAssignOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferMultiplicative, _1, _2, _3, _4 ));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgDivAssignOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferDivision, _1, _2, _3, _4 ));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgModAssignOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferMod, _1, _2, _3, _4 ));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgAddOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferAdditive, _1, _2, _3, _4, true ));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgSubtractOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferAdditive, _1, _2, _3, _4, false));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgMultiplyOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferMultiplicative, _1, _2, _3, _4 ));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgDivideOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferDivision, _1, _2, _3, _4 ));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgModOp *sgn)
   {
     transferArith(sgn, boost::bind(&ConstantPropagationAnalysisTransfer::transferMod, _1, _2, _3, _4 ));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgPlusPlusOp *sgn)
   {
     transferIncrement(sgn);
   }

void
ConstantPropagationAnalysisTransfer::visit(SgMinusMinusOp *sgn)
   {
     transferIncrement(sgn);
   }

void
ConstantPropagationAnalysisTransfer::visit(SgUnaryAddOp *sgn)
   {
     setLattice(sgn, getLattice(sgn->get_operand()));
   }

void
ConstantPropagationAnalysisTransfer::visit(SgMinusOp *sgn)
   {
     CPValueObjectPtr operandLat = getLattice(sgn->get_operand());

     // This fixes up the value if it is relevant (where level is neither top not bottom).
     operandLat->setValue(-operandLat->getValue());
     
     setLattice(sgn, operandLat);
   }

bool
ConstantPropagationAnalysisTransfer::finish()
   {
     return modified;
   }

ConstantPropagationAnalysisTransfer::ConstantPropagationAnalysisTransfer(const Function& func, PartPtr part, NodeState& state, const std::vector<Lattice*>& dfInfo, Composer* composer, ConstantPropagationAnalysis* analysis)
   : VariableStateTransfer<CPValueObject>(func, state, dfInfo, boost::make_shared<CPValueObject>(part), composer, analysis, part, constantPropagationAnalysisDebugLevel)
   {
   }




// **********************************************************************
//                     ConstantPropagationAnalysis
// **********************************************************************

// GB: Is this needed for boost shared-pointers?
ConstantPropagationAnalysis::ConstantPropagationAnalysis()
{
}

// generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
void
ConstantPropagationAnalysis::genInitState(const Function& func, PartPtr p, const NodeState& state, std::vector<Lattice*>& initLattices, std::vector<NodeFact*>& initFacts)
   {
      //ComposerExpr2MemLocPtr ceml(new ComposerExpr2MemLoc(*getComposer(), p, *((ComposedAnalysis*)this)));
      AbstractObjectMap* l = new AbstractObjectMap(new MustEqualFunctor(), boost::make_shared<CPValueObject>(p)/*, ceml*/, p);
      /*Dbg::dbg << "ConstantPropagationAnalysis::genInitState, returning l="<<l<<" n=<"<<Dbg::escape(p.getNode()->unparseToString())<<" | "<<p.getNode()->class_name()<<" | "<<p.getIndex()<<">\n";
      Dbg::dbg << "    l="<<l->str("    ")<<endl;*/
      initLattices.push_back(l);
     
     // GB: WE NEED TO INITIALIZE THIS LATTICE WITH THE CURRENTLY LIVE VARIABLES. E.G. AS INITIALIZATION-TIME
   }

  
bool
ConstantPropagationAnalysis::transfer(const Function& func, PartPtr p, NodeState& state, const std::vector<Lattice*>& dfInfo)
   {
     assert(0); 
     return false;
   }

boost::shared_ptr<IntraDFTransferVisitor>
ConstantPropagationAnalysis::getTransferVisitor(const Function& func, PartPtr part, NodeState& state, const std::vector<Lattice*>& dfInfo)
   {
  // Why is the boost shared pointer used here?
     return boost::shared_ptr<IntraDFTransferVisitor>(new ConstantPropagationAnalysisTransfer(func, part, state, dfInfo, composer, this));
   }

ValueObjectPtr ConstantPropagationAnalysis::Expr2Val(SgNode* n, PartPtr part)
{
  AbstractObjectMap* cpMap = dynamic_cast<AbstractObjectMap*>(NodeState::getNodeState(this, part)->getLatticeAbove(this, 0));
  ROSE_ASSERT(cpMap);
  
  MemLocObjectPtrPair p = composer->Expr2MemLoc(n, part, this);
  // Return the lattice associated with n's expression since that is likely to be more precise
  // but if it is not available, used the memory object
  return (p.expr ? boost::dynamic_pointer_cast<ValueObject>(cpMap->get(p.expr)) :
                   boost::dynamic_pointer_cast<ValueObject>(cpMap->get(p.mem)));
}

}; // namespace dataflow;