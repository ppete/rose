#include "stx_analysis.h"
#include <map>
#include <typeinfo>
#include "sageInterface.h"
#include <boost/enable_shared_from_this.hpp>
#include "live_dead_analysis.h"

using namespace std;

namespace dataflow {
  
/*****************************
 ***** SyntacticAnalysis *****
 *****************************/
  
// the top level builder for MemLocObject from any SgNode

MemLocObjectPtr SyntacticAnalysis::Expr2MemLoc(SgNode* n, PartPtr p)
{ return Expr2MemLoc_noPart(n); }

// Maps the given SgNode to an implementation of the MemLocObject abstraction.
// The Part field is ignored since it makes no difference for the syntactic analysis.
MemLocObjectPtr SyntacticAnalysis::Expr2MemLoc_noPart(SgNode* n)
{
  MemLocObjectPtr rt;

  assert (n!= NULL);
  if (isSgPntrArrRefExp (n) && !isSgPntrArrRefExp (n->get_parent())) // only generate MemLocObject for the top level isSgPntrArrRefExp
  {
    SgPntrArrRefExp* r = isSgPntrArrRefExp(n);
    assert (r != NULL);
    rt = createNamedMemLocObject (r);
  } 
  else if (isSgVarRefExp (n))
  {
    SgVarRefExp* exp = isSgVarRefExp (n);
    assert (exp != NULL);
    rt = createNamedOrAliasedMemLocObject (exp);
  }
  else if (isSgExpression(n)) // the order matters !! Must put after V_SgVarRefExp, SgPntrArrRefExp etc.
  {
    SgExpression* exp = isSgExpression (n);
    assert (exp != NULL);
    rt = createExpressionMemLocObject (exp, exp->get_type());
  }
  else if (isSgType(n))
  {
    SgType* t = isSgType(n);
    assert (t != NULL);
    rt = createAliasedMemLocObject (t);
  }
  else if (isSgSymbol(n) || isSgInitializedName(n)) // skip SgFunctionSymbol etc
  {
    SgSymbol* s;
    if(isSgSymbol(n)) s = isSgSymbol (n);
    else              s = isSgInitializedName(n)->search_for_symbol_from_symbol_table();
    assert (s != NULL);

    if (!isMemberVariableDeclarationSymbol (s))
      rt  = createNamedMemLocObject (s, s->get_type(), MemLocObjectPtr(), NULL); // parent should be NULL since it is not a member variable symbol
                                                            // TODO handle array of arrays ?? , then last IndexVector* should not be NULL   
    else
    {
      // This symbol is part of an aggregate object
      // We cannot create an MemLocObject based on this symbol alone since it can be instantiated to multiple instances, based on the parent obj, and optional index value
      // We should create something like a.b when this field (b) is referenced in the AST
    }  
  }
  return rt;
}

ValueObjectPtr SyntacticAnalysis::Expr2Val(SgNode* n, PartPtr  p)
{ return boost::make_shared<StxValueObject>(n); }

CodeLocObjectPtr SyntacticAnalysis::Expr2CodeLoc(SgNode* n, PartPtr p)
{ return boost::make_shared<StxCodeLocObject>(n, p); }


/**************************
 ***** StxValueObject *****
 **************************/

StxValueObject::StxValueObject(SgNode* n)
{
  val = isSgValueExp(n);
}

StxValueObject::StxValueObject(const StxValueObject& that) : val(that.val)
{ }

bool StxValueObject::mayEqual(ValueObjectPtr other, PartPtr p) const
{
  StxValueObjectPtr svo = boost::dynamic_pointer_cast <StxValueObject> (other);
  // ValueObject abstractions of different types may be equal to each other (can't tell either way)
  if(!svo) { return true; }
  
  // If either object is not an SgValue, they may be equal to each other
  if(val==NULL || svo->val==NULL) { return true; }
  
  // If both are SgValues, equalValExp makes a definitive precise comparison
  return equalValExp(val, svo->val);
}

bool StxValueObject::mustEqual(ValueObjectPtr other, PartPtr p) const
{
  //const StxValueObject & svo = dynamic_cast <const StxValueObject&> (other);
  StxValueObjectPtr svo = boost::dynamic_pointer_cast <StxValueObject> (other);
  // ValueObject abstractions of different types can't be proven to be definitely equal to each other (can't tell either way)
  if(!svo) { return false; }
  
  // If either object is not an SgValue, we can't prove that must be equal to each other
  if(val==NULL || svo->val==NULL) { return true; }
  
  // If both are SgValues, equalValExp makes a definitive precise comparison
  return equalValExp(val, svo->val);
}

// Returns true if the given pair of SgValueExps represent the same value and false otherwise
bool StxValueObject::equalValExp(SgValueExp* a, SgValueExp* b)
{
  if(isSgBoolValExp(a) && isSgBoolValExp(b)) 
    return isSgBoolValExp(a)->get_value() == isSgBoolValExp(b)->get_value();
  else if(isSgCharVal(a) && isSgCharVal(a)) 
    return isSgCharVal(a)->get_value() == isSgCharVal(b)->get_value();
  else if(isSgComplexVal(a) && isSgComplexVal(b))
    return equalValExp(isSgComplexVal(a)->get_real_value(), isSgComplexVal(b)->get_real_value()) &&
           equalValExp(isSgComplexVal(a)->get_imaginary_value(), isSgComplexVal(b)->get_imaginary_value());
  else if(isSgDoubleVal(a) && isSgDoubleVal(b))
    return isSgDoubleVal(a)->get_value() == isSgDoubleVal(b)->get_value();
  else if(isSgEnumVal(a) && isSgEnumVal(b))
    return isSgEnumVal(a)->get_value() == isSgEnumVal(b)->get_value();
  else if(isSgFloatVal(a) && isSgFloatVal(b))
    return isSgFloatVal(a)->get_value() == isSgFloatVal(b)->get_value();
  else if(isSgIntVal(a) && isSgIntVal(b))
    return isSgIntVal(a)->get_value() == isSgIntVal(b)->get_value();
  else if(isSgLongDoubleVal(a) && isSgLongDoubleVal(b))
    return isSgLongDoubleVal(a)->get_value() == isSgLongDoubleVal(b)->get_value();
  else if(isSgLongIntVal(a) && isSgLongIntVal(b))
    return isSgLongIntVal(a)->get_value() == isSgLongIntVal(b)->get_value();
  else if(isSgLongLongIntVal(a) && isSgLongLongIntVal(b))
    return isSgLongLongIntVal(a)->get_value() == isSgLongLongIntVal(b)->get_value();
  else if(isSgShortVal(a) && isSgShortVal(b))
    return isSgShortVal(a)->get_value() == isSgShortVal(b)->get_value();
  else if(isSgStringVal(a) && isSgStringVal(b))
    return isSgStringVal(a)->get_value() == isSgStringVal(b)->get_value();
  else if(isSgUnsignedCharVal(a) && isSgUnsignedCharVal(b))
    return isSgUnsignedCharVal(a)->get_value() == isSgUnsignedCharVal(b)->get_value();
  else if(isSgUnsignedIntVal(a) && isSgUnsignedIntVal(b))
    return isSgUnsignedIntVal(a)->get_value() == isSgUnsignedIntVal(b)->get_value();
  /*else if(isSgUnsigedLongLongIntVal(a) && isSgUnsigedLongLongIntVal(b))
    return isSgUnsigedLongLongIntVal(a)->get_value() == isSgUnsigedLongLongIntVal(b)->get_value();*/
  else if(isSgUnsignedLongVal(a) && isSgUnsignedLongVal(b))
    return isSgUnsignedLongVal(a)->get_value() == isSgUnsignedLongVal(b)->get_value();
  else if(isSgUnsignedShortVal(a) && isSgUnsignedShortVal(b))
    return isSgUnsignedShortVal(a)->get_value() == isSgUnsignedShortVal(b)->get_value();
  /*else if(isSgUpcMythreadVal(a) && isSgUpcMythreadVal(b))
    return isSgUpcMythreadVal(a)->get_value() == isSgUpcMythreadVal(b)->get_value();
  else if(isSgUpcThreadsVal(a) && isSgUpcThreadsVal(b))
    return isSgUpcThreadsVal(a)->get_value() == isSgUpcThreadsVal(b)->get_value();*/
  else if(isSgWcharVal(a) && isSgWcharVal(b))
    return isSgWcharVal(a)->get_value() == isSgWcharVal(b)->get_value();
  else
    return false;
}

/* Don't have good idea how to represent a finite number of options 
bool isFiniteSet();
set<AbstractObj> getValueSet();*/
 
//std::string StxValueObject::str(const string& indent) {
std::string StxValueObject::str(std::string indent) const { // pretty print for the object
  return "[StxValueObject: "+(val? val->unparseToString() : "NULL")+"]";
}

// Allocates a copy of this object and returns a pointer to it
ValueObjectPtr StxValueObject::copyV() const 
{ return boost::make_shared<StxValueObject>(*this); }

/****************************
 ***** StxCodeLocObject *****
 ****************************/

StxCodeLocObject::StxCodeLocObject(SgNode* n, PartPtr p) : part(p)
{
  code = isSgExpression(n);
}    

StxCodeLocObject::StxCodeLocObject(const StxCodeLocObject& that) : part(that.part), code(that.code)
{ }

bool StxCodeLocObject::mayEqual(CodeLocObjectPtr other, PartPtr p) const
{
   return mustEqual(other, p);
}

bool StxCodeLocObject::mustEqual(CodeLocObjectPtr other, PartPtr p) const
{
  //const StxCodeLocObject & svo = dynamic_cast <const StxCodeLocObject&> (other);
  StxCodeLocObjectPtr svo = boost::dynamic_pointer_cast <StxCodeLocObject> (other);
  if(!svo) { return false; }
  if(isSgFunctionCallExp(code) && isSgFunctionCallExp(svo->code) &&
     isSgFunctionCallExp(code)->getAssociatedFunctionSymbol() && 
     isSgFunctionCallExp(svo->code)->getAssociatedFunctionSymbol())
    return isSgFunctionCallExp(code)->getAssociatedFunctionSymbol()->get_name() == 
           isSgFunctionCallExp(svo->code)->getAssociatedFunctionSymbol()->get_name();
  else
    return false;
}

//std::string StxCodeLocObject::str(const string& indent) {
std::string StxCodeLocObject::str(std::string indent) const { // pretty print for the object
  return "[StxCodeLocObject: "+(code? code->unparseToString() : "NULL")+"]";
}

// Allocates a copy of this object and returns a pointer to it
CodeLocObjectPtr StxCodeLocObject::copyCL() const 
{ return boost::make_shared<StxCodeLocObject>(*this); }

/***************************
 ***** StxMemLocObject *****
 ***************************/

  // Only useful to provide compare operator of std::map.
  // This operator is not semantically consistent: if a mustEqual b and a < c 
  // then it is not guaranteed that b < c.
  bool Scalar_Impl::operator < (const MemLocObject& other) const
  {
    return (this < &other);
  }

  bool Function_Impl::operator < (const MemLocObject& other) const
  {
    return (this < &other);
  }

  bool LabeledAggregate_Impl::operator < (const MemLocObject& other) const
  {
    return (this < &other);
  }

  bool Array_Impl::operator < (const MemLocObject& other) const
  {
    return (this < &other);
  }

  bool Pointer_Impl::operator < (const MemLocObject& other) const
  {
    return (this < &other);
  }

  // A map to store named obj set
  // This can provide quick lookup for existing named MemLocObject to avoid duplicated creation
  // SgSymbol associated with class/struct data member is shared among all class/struct instances
  // so we have to use two keys (parent MemLocObject and SgSymbol) to ensure the uniqueness of named objects
  //
  // Array elements are represented as NamedObj also. They need one more key (IndexVector) to differentiate them
  // Total three keys: 
  //    Parent MemLocObject: needed only for a member of a data structure, or an element of an array
  //    Associated symbol: needed for all NamedObj, the unique symbol for a scalar, a member of a data structure.  Or the shared symbol for array and all its elements
  //    IndexVector: needed only for an element of an array only 
  map<MemLocObject*, map<SgSymbol*, map <IndexVector*, MemLocObjectPtr > > > named_objset_map; 

  /*GB: Deprecating IndexSets and replacing them with ValueObjects.
  IndexSet::~IndexSet()
  {
    cerr<<"Error. Calling the base destructor of IndexSet is not allowed. "<<endl;
    assert (false);
  }

  std::map <size_t, ConstIndexSet * >  ConstIndexSet::constIndexMap;
  UnknownIndexSet* UnknownIndexSet::inst = NULL;

  bool IndexSet::operator==(const IndexSet & other) const
  {
    cerr<<"Error. Calling the base operator=() of IndexSet is not allowed. "<<endl;
    assert (false);
    return false;
  }

  bool IndexSet::mayEqual(const IndexSet & other, const Part& p) const
  {
    cerr<<"Error. Calling the base mayEqual() of IndexSet is not allowed. "<<endl;
    assert (false);
    return false;
  }

  bool IndexSet::mustEqual(const IndexSet & other, const Part& p) const
  {
    cerr<<"Error. Calling the base mustEqual() of IndexSet is not allowed. "<<endl;
    assert (false);
    return false;
  }

  bool IndexSet::operator!=(const IndexSet & other) const
  {
    cerr<<"Error. Calling the base operator!=() of IndexSet is not allowed. "<<endl;
    assert (false);
    return false;
  }

  bool ConstIndexSet::operator!= (const IndexSet & other) const
  {
    return !(*this == other);
  }

  bool ConstIndexSet::operator == (const IndexSet & other) const
  {
    bool rt = false;
    try
    {
      const ConstIndexSet & cis = dynamic_cast <const ConstIndexSet&> (other);
      return (cis.value == this->value);
    }
    catch (bad_cast & bc)
    {
      try
      {
        const UnknownIndexSet & uis = dynamic_cast <const UnknownIndexSet&> (other);
        return (uis == *this);
      }
      catch (bad_cast & bc)
      {
        cerr<<"Error: unreachable branch reached ."<<endl;
        assert (false);
      }
    }
    return rt;
  }

  bool ConstIndexSet::mayEqual(const IndexSet & other, const Part& p) const
  {
    bool rt = false;
    try
    {
      const ConstIndexSet & cis = dynamic_cast <const ConstIndexSet&> (other);
      return (cis.value == this->value);
    }
    catch (bad_cast & bc)
    {
      try
      {
        const UnknownIndexSet & uis = dynamic_cast <const UnknownIndexSet&> (other);
        ROSE_ASSERT(&uis); // this is a use of uis to avoid a warning
        return true; // may equal to an unknown index set
      }
      catch (bad_cast & bc)
      {
        cerr<<"Error: unreachable branch reached ."<<endl;
        assert (false);
      }

    }
   return rt;
  }

  bool ConstIndexSet::mustEqual(const IndexSet & other, const Part& p) const
  {
    bool rt = false;
    try
    {
      const ConstIndexSet & cis = dynamic_cast <const ConstIndexSet&> (other);
      return (cis.value == this->value);
    }
    catch (bad_cast & bc)
    {
      try
      {
        const UnknownIndexSet & uis = dynamic_cast <const UnknownIndexSet&> (other);
        ROSE_ASSERT(&uis); // this is a use of uis to avoid a warning
        return false; // cannot decide if it is a must relation
      }
      catch (bad_cast & bc)
      {
        cerr<<"Error: unreachable branch reached ."<<endl;
        assert (false);
      }

    }
   return rt;
  }
 
  ConstIndexSet* ConstIndexSet::get_inst(SgValueExp * v_exp){
    size_t v; 
    assert (v_exp != NULL);
    SgType* t = v_exp->get_type();
    assert (t!= NULL);
    assert (SageInterface::isStrictIntegerType (t) == true);
    switch (v_exp->variantT())
    { 
      //Take advantage of the fact that the value expression is always SgUnsignedLongVal in AST
      case V_SgUnsignedLongVal:
      { 
        SgUnsignedLongVal* ul_exp = isSgUnsignedLongVal (v_exp); 
        v =  ul_exp->get_value() ; 
        break;
      }
      case V_SgIntVal:
      { 
        SgIntVal* i_exp = isSgIntVal (v_exp); 
        assert (i_exp->get_value() >=0);
        v =  i_exp->get_value() ; 
        break;
      }
 
      //TODO Handle other integer value nodes
      default:
      {
        cerr<<"Error in ConstIndexSet::ConstIndexSet(), unexpected integer valued SgValueExp type: " << v_exp->class_name()<<endl;
        assert(false);
      }
    }
    return get_inst (v);
  }

  ConstIndexSet* ConstIndexSet::get_inst(size_t v)
  {
    ConstIndexSet* rt = constIndexMap[v];
    if ( rt == NULL)
    {
      rt = new ConstIndexSet (v);
      constIndexMap[v] = rt;
    }
    assert (rt);
    return rt;   
  }

  UnknownIndexSet* UnknownIndexSet::get_inst()
  {
    if (inst == NULL)
      inst = new UnknownIndexSet();
    return inst;  
  }*/

  // convert std::vector<SgExpression*>* subscripts to IndexVector*  array_index_vector
  // We only generate two kinds of IndexSet : ConstIndexSet or UnkownIndexSet
  IndexVector * generateIndexVector (std::vector<SgExpression*>& subscripts)
  {
    assert (subscripts.size() >0 );
    IndexVector_Impl * rt = new IndexVector_Impl ();  // TODO how to avoid duplicated creation here, or we don't care
    std::vector<SgExpression*>::iterator iter;
    
    for (iter = subscripts.begin(); iter != subscripts.end(); iter++)
    {
      rt->index_vector.push_back(boost::make_shared<StxValueObject>(*iter));
      /*GB: Deprecating IndexSets and replacing them with ValueObjects.
      SgExpression* exp = *iter;
      if (isSgValueExp (exp))
      {
        rt->index_vector.push_back(ConstIndexSet::get_inst(isSgValueExp (exp)));
      }
      else
      {
        rt->index_vector.push_back(UnknownIndexSet::get_inst()); 
      }*/
    }  
    return rt; 
  }
     
  //there are at least three levels resolution for modeling memory for labeled aggregates (structures, classes, etc)
  //
  //Think the following example:
  //-------------------
  //struct A { int i; int j;} ;
  //struct A a1;
  //struct A a2;
  //
  //int x = a1.i + a2.i + a2.j + a2.j;
  //-------------------
  //
  //1. most coarse: treat any references to struct A's instance as the same to struct A.
  //    This means to treat a1.i, a2.i, a2.j, a2.j as the same access to struct A.
  //    There is only one memory object for all a1.i, a2.i, a2.j and a2.j.
  //
  //2. finer: distinguish between different fields of A. But the same field to all instances will be treated as the same.
  //
  //  Now a1.i and a2.i will be modeled as A.i
  //      a2.j and a2.j will be modeled as A.j
  //  There are two memory objects for all a1.i, a2.i, a2.j and a2.j.
  //
  //3. Finest : distinguish between not only the fields, but also the instances.
  //
  //    a1.i, a2.i, a2.j, a2.j will be represented as four different objects.
  
  // We decide the resolution of this implementation is to distinguish between both fields and instances of aggregated objects.
  // This means type declarations (e.g. struct A{}) without declared instances (struct A a1; )will not have the corresponding memory objects.
  //
  // Naively creating NamedObj from symbol won't work since a single symbol can be shared by different NamedObj,
  // e.g.,  a1.i, and a2.i are different. But the field i will share the same symbol
  // So we have to traverse the SgVarRef to generate NamedObj
  // three level case: a1.mag.size  the AST will look like
  //    (a1 <-- SgDotExp --> mag ) <-- SgDotExp --> size
  //
  // To create all NamedObj, one has to search both symbols and SgVarRef and skip the overlapped objects.
  //
  // For all symbols, there are two categories
  // 1. symbols corresponding to real top level instances of types. Create NamedObj as we see each of them, NULL as parent
  //    They are the symbols with declarations not under SgClassDefinition
  // 2. symbols within type declarations: does not correspond NamedObj by itself. We should ignore them until we see the instance  
  //    They are the symbols with declarations under SgClassDefinition
  //   
  // For all SgVarRef, find the corresponding symbol 
  // 1. if is a instance symbol. skip since we already created it
  // 2. if it is a symbol within a declaration, two cases
  //    a. the symbol has a pointer type, we don't track pointer aliasing, so we create AliasedObj for it
  //    b. other types: a child of an instance, check if is the rhs of SgDotExp/SgArrowExp, if not assert
  //        use lhs of SgDotExp/SgArrowExp as parent
  //            lhs could be SgVarRefExp: find the corresponding NamedObj as parent (top level object, labeled aggregate)
  //            lhs could be another SgDotExp: find its rhs's NamedObj as parent
  //  
  //  To avoid duplicated NamedObj, map[parent][symbol] -> NamedObj
  //
  // TODO: build the connection between SgVarRefExp and the created NamedObj and support fast lookup!

  std::string LabeledAggregateField_Impl::getName()
  {
    MemLocObjectPtr f = getField();
    boost::shared_ptr<NamedObj> nn = boost::dynamic_pointer_cast<NamedObj>(f);
    assert(nn);
    return nn->getName(); 
  }

  size_t LabeledAggregateField_Impl::getIndex()
  {
    LabeledAggregatePtr parent = getParent();
    std::vector<LabeledAggregateFieldPtr > elements = parent->getElements();
    size_t i=0;
    for (i=0; i<elements.size(); i++)
    {
      if (this == elements[i].get())
        break;
    }
    assert (i !=  elements.size()); // must find it! 
    return i;
  }

  //std::string LabeledAggregateField_Impl::str(const string& indent)
  std::string LabeledAggregateField_Impl::str(std::string indent) const // pretty print for the object
  {
    string rt;
    rt = "LabeledAggregateField_Impl: parent @ " + StringUtility::numberToString(parent.get())  + " field " 
      + field->str(indent+"    ");
    return rt;
  }

  // --------------------- Expression Object --------------------
  /* 
  bool ExprObj::operator== (ExprObj& o2)
  {
    if (o2.anchor_exp == anchor_exp)
      return true;
    else
      return false;
  }
 */ 

 // expression objects: true if the same SgExpression, otherwise all false 
 // TODO need to plug in real value analysis for expressions to answer this question
  bool ExprObj::operator== (const  MemLocObject& o2) const
  {
    try
    {
      const ExprObj & expr_o2 = dynamic_cast <const ExprObj&> (o2);
      return (  this -> anchor_exp  == expr_o2.anchor_exp);
    }
    catch (bad_cast & bc)
    {
      return false;
    }
  }

 // concern about the ExprObj itself , not the value it contains/stores
  bool ExprObj::mayEqual(MemLocObjectPtr o2, PartPtr p) const
  {
    //const ExprObj & expr_o2 = dynamic_cast <const ExprObj&> (o2);
    ExprObjPtr expr_o2 = boost::dynamic_pointer_cast <ExprObj> (o2);
    //Dbg::dbg << "NamedObj::mayEqual this="<<str("")<<endl;
    //Dbg::dbg << "                   o2="<<(o2? o2->str("") : "NULL")<<endl;
    //Dbg::dbg << "    ==>"<<(!expr_o2 ? false: ( this -> anchor_exp  == expr_o2->anchor_exp))<<endl;
    
    LDMemLocObjectPtr ld_o2 = boost::dynamic_pointer_cast<LDMemLocObject>(o2);
    ROSE_ASSERT(!ld_o2);
    
    if(!expr_o2) { return false; }
    return ( this -> anchor_exp  == expr_o2->anchor_exp);
  }

  // reuse the equal operator, which is must equal for ExprObj
  bool ExprObj::mustEqual(MemLocObjectPtr o2, PartPtr p) const
  {
    //const ExprObj & expr_o2 = dynamic_cast <const ExprObj&> (o2);
    ExprObjPtr expr_o2 = boost::dynamic_pointer_cast <ExprObj> (o2);
    /*Dbg::dbg << "NamedObj::mustEqual this="<<str("")<<endl;
    Dbg::dbg << "                   expr_o2="<<(o2? o2->str("") : "NULL")<<endl;
    Dbg::dbg << "    ==>"<<(!expr_o2 ? false: ( this -> anchor_exp  == expr_o2->anchor_exp))<<endl;*/
    
    if(!expr_o2) { return false; }
    return (  this -> anchor_exp  == expr_o2->anchor_exp);
  }
 
  //std::string ExprObj::str(const string& indent)
  std::string ExprObj::str(std::string indent) const // pretty print for the object
  {
    string rt;

    if (anchor_exp!= NULL)
      rt += anchor_exp->class_name()+ ": " + anchor_exp->unparseToString() + " @ " + StringUtility::numberToString (anchor_exp);
    else
      rt += "expression: NULL";

    if (type != NULL )
      rt += "  type:" + type->unparseToString() + " @ " + StringUtility::numberToString(type);
    else
      rt += "  type: NULL";
    return rt;
  }
  //------------------
  std::set<SgType*> ScalarExprObj::getType() const
  {
    std::set<SgType*> rt;
    rt.insert (ExprObj::getType());
    return rt;
  }

  bool ScalarExprObj::operator == (const MemLocObject& o2) const
  {
    const ExprObj& o1 = dynamic_cast<const ExprObj&> (*this);
    return (o1==o2);
  } 
  
  bool ScalarExprObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (ExprObj::mayEqual(o2, p));
  } 

  bool ScalarExprObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (ExprObj::mustEqual(o2, p));
  }
  
  //std::string ScalarExprObj::str(const string& indent)
  std::string ScalarExprObj::str(std::string indent) const // pretty print for the object
  {
    string rt = "ScalarExprObj @" + StringUtility::numberToString(this)+ " "+ ExprObj::str(indent+"    ");
    return rt;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr ScalarExprObj::copyML() const
  { return boost::make_shared<ScalarExprObj>(*this); }
  
  //------------------
  std::set<SgType*> FunctionExprObj::getType() const
  {
    std::set<SgType*> rt;
    rt.insert (ExprObj::getType());
    return rt;
  }

  bool FunctionExprObj::operator == (const MemLocObject& o2) const
  {
   const ExprObj& o1 = dynamic_cast<const ExprObj&> (*this);
   return (o1==o2);
  } 

  bool FunctionExprObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
   return (ExprObj::mayEqual(o2, p));
  } 

  bool FunctionExprObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
   return (ExprObj::mustEqual(o2, p));
  }

  //std::string FunctionExprObj::str(const string& indent)
  std::string FunctionExprObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "FunctionExprObj @" + StringUtility::numberToString(this)+ " "+ ExprObj::str(indent+"    ");
    return rt;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr FunctionExprObj::copyML() const
  { return boost::make_shared<FunctionExprObj>(*this); }

  //------------------
   std::set<SgType*> ArrayExprObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (ExprObj::getType());
    return rt;
  }

 
  bool ArrayExprObj::operator == (const MemLocObject& o2) const
  {
   const ExprObj& o1 = dynamic_cast<const ExprObj&> (*this);
    return (o1==o2);
  } 
  
  bool ArrayExprObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (ExprObj::mayEqual(o2, p));
  } 

  bool ArrayExprObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (ExprObj::mustEqual(o2, p));
  }

  //std::string ArrayExprObj::str(const string& indent)
  std::string ArrayExprObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "ArrayExprObj @" + StringUtility::numberToString(this)+ " "+ ExprObj::str(indent+"    ");
    return rt;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr ArrayExprObj::copyML() const
  { return boost::make_shared<ArrayExprObj>(*this); }

  //------------------
  std::set<SgType*> PointerExprObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (ExprObj::getType());
    return rt;
  }

  MemLocObjectPtr PointerExprObj::getDereference() 
  {
    // simplest type-based implementation
    SgType* t = ExprObj::getType();
    SgPointerType* p_t = isSgPointerType(t);
    assert (p_t != NULL);
    return createAliasedMemLocObject (p_t->get_base_type());
  }

  MemLocObjectPtr PointerExprObj::getElements() // in case it is a pointer to array
  {
    MemLocObjectPtr rt;
    //TODO
    assert (false);
    return rt;
  }

  // Returns true if this pointer refers to the same abstract object as that pointer.
  //GB: getDereference subsumes this
  /*bool  PointerExprObj::equalPoints (Pointer & that)
  {
    // type based: same base type, sa
    SgType* this_type = *(this->getType().begin()); 
    SgType* that_type = *(that.getType().begin());
    return (this_type == that_type);
  }*/

  bool PointerExprObj::operator == (const MemLocObject& o2) const
  {
    const ExprObj& o1 = dynamic_cast<const ExprObj&> (*this);
    return (o1==o2);
  } 

  // We are concerned about the PointerExprObj itself, not the mem location it points to!!
  bool PointerExprObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (ExprObj::mayEqual(o2, p));
  } 

  // identical pointers, must equal for now
  bool PointerExprObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (ExprObj::mustEqual(o2, p));
  }

  //std::string PointerExprObj::str(const string& indent)
  std::string PointerExprObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "PointerExprObj @" + StringUtility::numberToString(this)+ " "+ ExprObj::str(indent+"    ");
    return rt;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr PointerExprObj::copyML() const
  { return boost::make_shared<PointerExprObj>(*this); }

  //---------------------
  LabeledAggregateExprObj::LabeledAggregateExprObj (SgExpression* e, SgType* t): ExprObj (e,t) 
  {
    init(e, t);
  }
  
  LabeledAggregateExprObj::LabeledAggregateExprObj(const LabeledAggregateExprObj& that):ExprObj(that.anchor_exp, that.type)
  {
    init(that.anchor_exp, that.type);
  }
  
  void LabeledAggregateExprObj::init(SgExpression* e, SgType* t)
  {
    assert (e != NULL);
    assert (t != NULL);

    assert (e->get_type() == t);
    SgClassType * c_t = isSgClassType(t);
    assert (c_t != NULL);
    fillUpElements (this, LabeledAggregate_Impl::getElements(), c_t);
  }
  
  std::set<SgType*> LabeledAggregateExprObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (ExprObj::getType());
    return rt;
  }

  bool LabeledAggregateExprObj::operator == (const MemLocObject& o2) const
  {
    const ExprObj& o1 = dynamic_cast<const ExprObj&> (*this);
    return (o1==o2);
  } 

  bool LabeledAggregateExprObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (ExprObj::mayEqual(o2, p));
  } 

  bool LabeledAggregateExprObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (ExprObj::mustEqual(o2, p));
  }

  //std::string LabeledAggregateExprObj::str(const string& indent)
  std::string LabeledAggregateExprObj::str(std::string indent) const // pretty print for the object  
  {
    std::string rt = "LabeledAggregateExprObj @ " + StringUtility::numberToString (this);
    rt += " "+ ExprObj::str(indent+"    ");
    rt += "   with " + StringUtility::numberToString(fieldCount()) + " fields:\n";
    rt += indent;
    for (size_t i =0; i< fieldCount(); i++)
    {
      rt += "\t" + (getElements())[i]->str(indent+"    ") + "\n";
    }
    return rt; 
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr LabeledAggregateExprObj::copyML() const
  { return boost::make_shared<LabeledAggregateExprObj>(*this); }
  
  // --------------------- Named Object --------------------
  
  bool NamedObj::operator== (const NamedObj & o2) const
  {
    bool rt = false;
    NamedObj o1 = *this;
    if (o1.anchor_symbol == o2.anchor_symbol) // same symbol
      if (o1.parent == o2.parent)   // same parent
      {
        if ( (o1.array_index_vector) != NULL && (o2.array_index_vector) != NULL)
        {
            // same array index, must use *pointer == *pointer to get the right comparison!!
          if ((*(o1.array_index_vector)) == (*(o2.array_index_vector))) 
            rt = true; // semantically equivalent index vectors
        }
        else
          if ( o1.array_index_vector == o2.array_index_vector) // both are NULL
            rt = true ;
      }
    return rt;
  }

  bool NamedObj::mayEqual(NamedObjPtr o2, PartPtr p) const
  {
    bool rt = false;
    if (anchor_symbol == o2->anchor_symbol) // same symbol
    // GB: Do we need to be more relaxed with mayEqual?
    if((!parent && !o2->parent) || 
       (parent && o2->parent && parent->mayEqual(o2->parent, p)))   // same parent
      {
        if ( (array_index_vector) != NULL && (o2->array_index_vector) != NULL)
        {
            // same array index, must use *pointer == *pointer to get the right comparison!!
          if ((*(array_index_vector)).mayEqual(*(o2->array_index_vector), p)) 
            rt = true; // semantically equivalent index vectors
        }
        else
          if ( array_index_vector == o2->array_index_vector) // both are NULL
            rt = true ;
      }
    return rt;
  }

  bool NamedObj::mustEqual(NamedObjPtr o2, PartPtr p) const
  {
    bool rt = false;
    //Dbg::dbg << "NamedObj::mustEqual() anchor_symbol == o2->anchor_symbol="<<(anchor_symbol == o2->anchor_symbol)<<endl;
    if (anchor_symbol == o2->anchor_symbol) // same symbol
    //Dbg::dbg << "NamedObj::mustEqual() parent="<<parent<<" o2->parent="<<o2->parent<<endl;
      if((!parent && !o2->parent) || 
       (parent && o2->parent && parent->mustEqual(o2->parent, p)))   // same parent
      {
      //Dbg::dbg << "NamedObj::mustEqual() array_index_vector="<<array_index_vector<<" o2->array_index_vector="<<o2->array_index_vector<<endl;
        if((array_index_vector) != NULL && (o2->array_index_vector) != NULL)
        {
            // same array index, must use *pointer == *pointer to get the right comparison!!
          if((*(array_index_vector)).mustEqual(*(o2->array_index_vector), p)) 
            rt = true; // semantically equivalent index vectors
        }
        else
          if(array_index_vector == o2->array_index_vector) // both are NULL
            rt = true;
      }
    return rt;
  }

  bool NamedObj::operator== (const MemLocObject & o2) const
  {
    // three cases:
    try {
    	// case 1:
    	const AliasedObj & aliased_o2 = dynamic_cast <const AliasedObj&> (o2);
      return isAliased (getType(), aliased_o2.getType());
		} catch (std::bad_cast& bc) {
			try{
				// case 2:
				const NamedObj& named_o2 = dynamic_cast <const NamedObj&> (o2);
				return *this == named_o2;
			} catch (std::bad_cast& bc) {
				//case 3:
        // Only Expression Obj is left, always return false 
				return false;
			}
    }
  }

  bool NamedObj::mayEqual(MemLocObjectPtr o2, PartPtr p) const
  {
    // three cases:
    
    AliasedObjPtr aliased_o2 = boost::dynamic_pointer_cast <AliasedObj> (o2);
    if(aliased_o2) {
    	// case 1:
      return isAliased(getType(), aliased_o2->getType());
    } else { 
      NamedObjPtr named_o2 = boost::dynamic_pointer_cast <NamedObj> (o2);
      if(named_o2) {
      	// case 2:
      	return NamedObj::mayEqual(named_o2, p);
      } else {
        //case 3:
        // Only Expression Obj is left, always return false 
        return false;
      }
    }
  }

  bool NamedObj::mustEqual(MemLocObjectPtr o2, PartPtr p) const
  {
    // three cases:
    
    AliasedObjPtr aliased_o2 = boost::dynamic_pointer_cast <AliasedObj> (o2);
    if(aliased_o2) {
    	// case 1:
      Dbg::dbg << "NamedObj::mustEqual o2="<<o2->str("")<<", o2.get()"<<o2.get()<<", aliased_o2.get()="<<aliased_o2.get()<<endl;
      ROSE_ASSERT(aliased_o2 || !aliased_o2); // Using aliased_o2 to avoid a warning.
      return false; //TODO accurate alias analysis can answer this question better. For now, we cannot decide. 
    }
    else { 
    	// case 2:
      NamedObjPtr named_o2 = boost::dynamic_pointer_cast <NamedObj> (o2);
      if(named_o2) {
        return NamedObj::mustEqual(named_o2, p);
      } else {
        //case 3:
        // Only Expression Obj is left, always return false 
        return false;
      }
    }
  }
  
  //std::string IndexVector_Impl::str(const string& indent)
  std::string IndexVector_Impl::str(std::string indent) const // pretty print for the object  
  {
    string rt;
    std::vector<IndexSet *> ::const_iterator iter;
    for (iter = index_vector.begin(); iter != index_vector.end(); iter++)
    {
      IndexSet* current_index_field = *iter;
      rt += current_index_field->str(indent+"    ");
      if(iter != index_vector.begin()) rt += ", ";
    }
    return rt;
  }

  bool IndexVector_Impl::operator == (const IndexVector & other) const
  {
    bool rt = false;
    try {
      const IndexVector_Impl & other_impl = dynamic_cast <const IndexVector_Impl & > (other);
      bool has_diff_element = false;
      if (this->getSize() == other_impl.getSize()) 
      { // same size, no different element
        for (size_t i =0; i< other_impl.getSize(); i++)
        {
          if (*(this->index_vector[i]) !=*(other_impl.index_vector[i]))
          {
            has_diff_element = true;
              break;
          }
        }
        if (!has_diff_element )
          rt = true;
      }
    }
    catch (std::bad_cast& bc)
    {
      rt = IndexVector::operator == (other);
    }

    return rt; 
  }

  bool IndexVector_Impl::mayEqual(const IndexVector & other, const Part& p) const
  {
    bool rt = false;
    try {
      const IndexVector_Impl & other_impl = dynamic_cast <const IndexVector_Impl & > (other);
      bool has_diff_element = false;
      if (this->getSize() == other_impl.getSize()) 
      { // same size, no different element
        for (size_t i =0; i< other_impl.getSize(); i++)
        {
          if (!(*(this->index_vector[i])).mayEqual(*(other_impl.index_vector[i]), p))
          {
            has_diff_element = true;
              break;
          }
        }
        if (!has_diff_element )
          rt = true;
      }
    }
    catch (std::bad_cast& bc)
    {
      rt = IndexVector::mayEqual(other, p);
    }
    return rt; 
  }

  bool IndexVector_Impl::mustEqual(const IndexVector & other, const Part& p) const
  {
    bool rt = false;
    try {
      const IndexVector_Impl & other_impl = dynamic_cast <const IndexVector_Impl & > (other);
      bool has_diff_element = false;
      if (this->getSize() == other_impl.getSize()) 
      { // same size, no different element
        for (size_t i =0; i< other_impl.getSize(); i++)
        {
          if (!(*(this->index_vector[i])).mustEqual(*(other_impl.index_vector[i]), p))
          {
            has_diff_element = true;
              break;
          }
        }
        if (!has_diff_element )
          rt = true;
      }
    }
    catch (std::bad_cast& bc)
    {
      rt = IndexVector::mustEqual(other, p);
    }
    return rt; 
  }

  //std::string NamedObj::str(const string& indent)
  std::string NamedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt;

    if (anchor_symbol != NULL)
      rt += "symbol: " + anchor_symbol->get_name().getString() + " @ " + StringUtility::numberToString (anchor_symbol);
    else
      rt += "symbol: NULL";

    if (type != NULL)
      rt += "  type:" + type->unparseToString() + " @ " + StringUtility::numberToString(type);
    else
      rt += "  type: NULL";

    if (parent)
      rt += "  parent: @ " + StringUtility::numberToString(parent.get()); // use address is sufficient
    else
      rt += "  parent: NULL";

    if (array_index_vector != NULL)
      rt += "  array_index_vector: @ " + StringUtility::numberToString(array_index_vector) + array_index_vector->str(indent+"    "); // use address is sufficient
    else
      rt += "  array_index_vector: NULL";

    return rt;
  }

  //------------------
  std::set<SgType*> ScalarNamedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (NamedObj::getType());
    return rt;
  }

  // This is a confusing part:  operator == of AbstractObject side is implemented through the operator== () of the NamedObj
  bool ScalarNamedObj::operator == (const MemLocObject& o2) const
  {
    const NamedObj& o1 = dynamic_cast<const NamedObj&> (*this);
    return (o1==o2);
  } 

bool ScalarNamedObj::mayEqual(MemLocObjectPtr o2, PartPtr p) const
  {
    return (NamedObj::mayEqual(o2, p));
  } 

  bool ScalarNamedObj::mustEqual(MemLocObjectPtr o2, PartPtr p) const
  {
    return (NamedObj::mustEqual(o2, p));
  }

  //std::string ScalarNamedObj::str(const string& indent)
  std::string ScalarNamedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "ScalarNamedObj @" + StringUtility::numberToString(this)+ " "+ NamedObj::str(indent);
    return rt;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr ScalarNamedObj::copyML() const
  { return boost::make_shared<ScalarNamedObj>(*this); }

  //------------------
  std::set<SgType*> FunctionNamedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (NamedObj::getType());
    return rt;
  }

  // This is a confusing part:  operator == of AbstractObject side is implemented through the operator== () of the NamedObj
  bool FunctionNamedObj::operator == (const MemLocObject& o2) const
  {
    const NamedObj& o1 = dynamic_cast<const NamedObj&> (*this);
    return (o1==o2);
  } 

  bool FunctionNamedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (NamedObj::mayEqual(o2, p));
  } 

  bool FunctionNamedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (NamedObj::mustEqual(o2, p));
  }

  //std::string FunctionNamedObj::str(const string& indent)
  std::string FunctionNamedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "FunctionNamedObj @" + StringUtility::numberToString(this)+ " "+ NamedObj::str(indent);
    return rt;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr FunctionNamedObj::copyML() const
  { return boost::make_shared<FunctionNamedObj>(*this); }

  //------------------
  std::set<SgType*> PointerNamedObj::getType() const
  {
    std::set<SgType*> rt;
    rt.insert (NamedObj::getType());
    return rt;
  }

  MemLocObjectPtr PointerNamedObj::getDereference() 
  {
    // simplest type-based implementation
    SgType* t = NamedObj::getType();
    SgPointerType* p_t = isSgPointerType(t);
    assert (p_t != NULL);
    return createAliasedMemLocObject (p_t->get_base_type());
  }

  MemLocObjectPtr PointerNamedObj::getElements() // in case it is a pointer to array
  {
    MemLocObjectPtr rt;
    //TODO
    assert (false);

    return rt;
    
  }

  // Returns true if this pointer refers to the same abstract object as that pointer.
  //GB: getDereference subsumes this
  /*bool  PointerNamedObj::equalPoints (Pointer & that)
  {
    // type based: same base type, sa
    SgType* this_type = *(this->getType().begin()); 
    SgType* that_type = *(that.getType().begin());
    return (this_type == that_type);
  }*/

  bool PointerNamedObj::operator == (const MemLocObject& o2) const
  {
   const NamedObj& o1 = dynamic_cast<const NamedObj&> (*this);
    return (o1==o2);
  } 

  bool PointerNamedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (NamedObj::mayEqual(o2, p));
  } 

  bool PointerNamedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (NamedObj::mustEqual(o2, p));
  }

  //std::string PointerNamedObj::str(const string& indent)
  std::string PointerNamedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "PointerNamedObj @" + StringUtility::numberToString(this)+ " "+ NamedObj::str(indent);
    return rt;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr PointerNamedObj::copyML() const
  { return boost::make_shared<PointerNamedObj>(*this); }

  // a helper function to fill up std::vector<LabeledAggregateField*>  from a class/structure type
  // TODO handle static members,they should be treated as global variables , not instances
  void fillUpElements (MemLocObject* p, std::vector<LabeledAggregateFieldPtr > & elements, SgClassType* c_t)
  {
    assert (p!= NULL);
    boost::shared_ptr<LabeledAggregate> lp = 
      boost::shared_ptr<LabeledAggregate>(dynamic_cast <LabeledAggregate* > (p));
    assert (lp);

    assert (c_t != NULL);
    SgDeclarationStatement * decl = c_t ->get_declaration();
    assert (decl != NULL);
    SgClassDeclaration* c_decl = isSgClassDeclaration(decl);
    assert (c_decl != NULL);
    SgClassDeclaration* def_decl = isSgClassDeclaration(c_decl->get_definingDeclaration()); 
    if (def_decl != NULL )
    {   
      SgClassDefinition * c_def = def_decl->get_definition();
      assert (c_def != NULL);
      // get members and insert LabeledAggregateField_Impl
      SgDeclarationStatementPtrList stmt_list = c_def->get_members();
      SgDeclarationStatementPtrList::iterator iter;
      for (iter = stmt_list.begin(); iter != stmt_list.end(); iter ++)
      {
        SgDeclarationStatement * decl_stmt = *iter;
        SgVariableDeclaration * var_decl = isSgVariableDeclaration (decl_stmt);
        if (var_decl)
        {
          SgVariableSymbol * s = SageInterface::getFirstVarSym(var_decl);
          MemLocObjectPtr field_obj = createNamedMemLocObject (s, s->get_type(), lp, NULL); // we don't store explicit index  for elements for now
          boost::shared_ptr<LabeledAggregateField_Impl> f(new LabeledAggregateField_Impl (field_obj, lp));
          elements.push_back(f);
        }  
      }
    }
  }

  //----------------------
  LabeledAggregateNamedObj::LabeledAggregateNamedObj(SgSymbol* s, SgType* t, MemLocObjectPtr p, IndexVector* iv): NamedObj(s,t,p, iv)
  {
    init(s, t, p, iv);
  }
  
  LabeledAggregateNamedObj::LabeledAggregateNamedObj(const LabeledAggregateNamedObj& that): NamedObj(that.anchor_symbol, that.type, that.parent, that.array_index_vector)
  {
    init(that.anchor_symbol, that.type, that.parent, that.array_index_vector);
  }
  
  void LabeledAggregateNamedObj::init(SgSymbol* s, SgType* t, MemLocObjectPtr p, IndexVector* iv)
  {
    assert (s != NULL);
    assert (t != NULL);

    assert (s->get_type() == t);
    SgClassType * c_t = isSgClassType(t);

    fillUpElements (this, LabeledAggregate_Impl::getElements(), c_t);
  }

  std::set<SgType*> LabeledAggregateNamedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (NamedObj::getType());
    return rt;
  }

  //std::string LabeledAggregateNamedObj::str(const string& indent)
  std::string LabeledAggregateNamedObj::str(std::string indent) const // pretty print for the object  
  {
    std::string rt = "LabeledAggregateNamedObj @ " + StringUtility::numberToString (this);
    rt += " "+ NamedObj::str(indent);
    rt += "   with " + StringUtility::numberToString(fieldCount()) + " fields:\n";
    for (size_t i =0; i< fieldCount(); i++)
    {
      rt += indent + "\t" + (getElements())[i]->str(indent+"    ") + "\n";
    }
    return rt; 
  }
  
  bool LabeledAggregateNamedObj::operator == (const MemLocObject& o2) const
  { 
    const NamedObj& o1 = dynamic_cast<const NamedObj&> (*this);
    return (o1==o2);
  } 

  bool LabeledAggregateNamedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  { 
    return (NamedObj::mayEqual(o2, p));
  } 

  bool LabeledAggregateNamedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  { 
    return (NamedObj::mustEqual(o2, p));
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr LabeledAggregateNamedObj::copyML() const
  { return boost::make_shared<LabeledAggregateNamedObj>(*this); }
  
  //---------------------
  ArrayNamedObj::ArrayNamedObj(SgSymbol* s, SgType* t, MemLocObjectPtr p, IndexVector* iv): NamedObj (s,t,p, iv)
  {
    init(s,t,p,iv);
  }
    
  ArrayNamedObj::ArrayNamedObj(const LabeledAggregateNamedObj& that): NamedObj(that.anchor_symbol, that.type, that.parent, that.array_index_vector)
  {
    init(that.anchor_symbol, that.type, that.parent, that.array_index_vector);
  }
  
  void ArrayNamedObj::init(SgSymbol* s, SgType* t, MemLocObjectPtr p, IndexVector* iv)
  {
    assert (s != NULL);
    assert (t != NULL);

    assert (isSgVariableSymbol (s) != NULL);
    assert (s->get_type() == t);
    SgArrayType * a_t = isSgArrayType(t);
    assert (a_t != NULL);
  }

  std::set<SgType*> ArrayNamedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (NamedObj::getType());
    return rt;
  }

  size_t ArrayNamedObj::getNumDims () const
  {
    SgType * a_type = NamedObj::getType();
    assert (a_type != NULL);
    assert (isSgArrayType(a_type) != NULL);
    return SageInterface::getDimensionCount (a_type);
  }

  //std::string ArrayNamedObj::str(const string& indent)
  std::string ArrayNamedObj::str(std::string indent) const // pretty print for the object  
  {
    std::string rt = "ArrayNamedObj @ " + StringUtility::numberToString (this);
    rt += " "+ NamedObj::str(indent);
    rt += "   with " + StringUtility::numberToString(getNumDims()) + " dimensions";
/*     for (size_t i =0; i< fieldCount(); i++)
     {
       rt += "\t" + (getElements())[i]->str(indent+"    ") + "\n";
     }
*/
    return rt; 
  }

  // Returns the memory object that corresponds to the elements described by the given abstract index, 
  MemLocObjectPtr ArrayNamedObj::getElements(IndexVector* ai) 
  { 
    MemLocObjectPtr mem_obj;
    
    SgVariableSymbol* s = isSgVariableSymbol(this->getSymbol());
    assert (s != NULL);
    assert (ai != NULL);
    assert (isSgArrayType(s->get_type()) != NULL);
    SgType* element_type = SageInterface::getArrayElementType (s->get_type());
    assert (element_type != NULL);

    mem_obj = named_objset_map[this][s][ai];
     if (!mem_obj)
     {
       mem_obj = createNamedMemLocObject (s, element_type, 
                           boost::dynamic_pointer_cast<MemLocObject>(shared_from_this()), ai);
       named_objset_map[this][s][ai] = mem_obj;
     }

    return mem_obj;
  }

  MemLocObjectPtr ArrayNamedObj::getDereference() 
  { 
    // return array[0][*]..[*]
    IndexVector_Impl* myindexv = new IndexVector_Impl();
    myindexv ->index_vector.push_back(ConstIndexSet::get_inst((size_t)0));
    // we use unknown index to represent the ALL element concept of a dimension
    // TODO, we may want to generate an Array object which is the N-1 dimension array type to be accurate.
    for (size_t i =0; i< getNumDims() -1; i++)
    {
      myindexv ->index_vector.push_back(UnknownIndexSet::get_inst());
    }

    return getElements(myindexv);
  }
  //use the [Named|Expr|Aliased]Obj side of 
  bool ArrayNamedObj::operator == (const MemLocObject& o2) const
  { 
   const NamedObj& o1 = dynamic_cast<const NamedObj&> (*this);
    return (o1==o2);
  } 
  
  bool ArrayNamedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  { 
    return (NamedObj::mayEqual(o2, p));
  } 
  bool ArrayNamedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  { 
    return (NamedObj::mustEqual(o2, p));
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr ArrayNamedObj::copyML() const
  { return boost::make_shared<ArrayNamedObj>(*this); }

  // --------------------- Aliased Object --------------------
  //std::string AliasedObj::str(const string& indent)
  std::string AliasedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt;
    if (type != NULL )
      rt += type->unparseToString() + " @ " + StringUtility::numberToString(type); 
    return rt;
  }

  // Simplest alias analysis: same type ==> aliased
  bool isAliased (const SgType *t1, const SgType* t2) 
  {
    // TODO : consider subtype, if type1 is a subtype of type2, they are aliased to each other also
    if (t1 == t2)
      return true;
    else if (isSgFunctionType(t1) && isSgFunctionType(t2)) // function type, check return and argument types
    {
      const SgFunctionType * ft1 = isSgFunctionType(t1);
      const SgFunctionType * ft2 = isSgFunctionType(t2);
      if (isAliased (ft1->get_return_type(), ft2->get_return_type())) // CHECK return type
      {
        SgFunctionParameterTypeList* ptl1 = ft1->get_argument_list();
        SgFunctionParameterTypeList* ptl2 = ft2->get_argument_list();
        SgTypePtrList tpl1 = ptl1->get_arguments();
        SgTypePtrList tpl2 = ptl2->get_arguments();
        if (tpl1.size() == tpl2.size())
        {
          size_t equal_count = 0;
          for (size_t i =0; i< tpl1.size(); i++) // check each argument type
          {
            if ( isAliased (tpl1[i], tpl2[i]) )
              equal_count ++;
          }
          if (equal_count == tpl1.size())
            return true;
        }
      }
    }

    return false;
  }

  bool AliasedObj::operator == ( const AliasedObj & o2)  const
  {
    AliasedObj o1 = *this;
    SgType* own_type = o1.getType();
    SgType* other_type = o2.getType();
    return isAliased (own_type, other_type);
  }


  // if type may alias to each other, may equal
  bool AliasedObj::mayEqual(AliasedObjPtr o2, PartPtr p)  const
  {
    SgType* own_type = getType();
    SgType* other_type = o2->getType();
    return isAliased (own_type, other_type);
  }

  //identical type means must equal 
  bool AliasedObj::mustEqual(AliasedObjPtr o2, PartPtr p)  const
  { 
    SgType* t1 = getType();
    SgType* t2 = o2->getType();

    if (t1 == t2)
      return true;
    else if (isSgFunctionType(t1) && isSgFunctionType(t2)) // function type, check return and argument types
    {
      const SgFunctionType * ft1 = isSgFunctionType(t1);
      const SgFunctionType * ft2 = isSgFunctionType(t2);
      if (isAliased (ft1->get_return_type(), ft2->get_return_type())) // CHECK return type
      {
        SgFunctionParameterTypeList* ptl1 = ft1->get_argument_list();
        SgFunctionParameterTypeList* ptl2 = ft2->get_argument_list();
        SgTypePtrList tpl1 = ptl1->get_arguments();
        SgTypePtrList tpl2 = ptl2->get_arguments();
        if (tpl1.size() == tpl2.size())
        {
          size_t equal_count = 0;
          for (size_t i =0; i< tpl1.size(); i++) // check each argument type
          {
            if ( isAliased (tpl1[i], tpl2[i]) )
              equal_count ++;
          }
          if (equal_count == tpl1.size())
            return true;
        }
      }
    }
    return false;
  }

  bool AliasedObj::operator == (const MemLocObject& o2) const
  {
    // three cases
    // 1. o2 is  ExpressionObj: always return false
    // 2. o2 is Named Obj: return operator == (AliasedObj&o1, NamedObj & o2)
    // 3. o2 is AliasedObj:

    // There might be better way to code this
    try
    {
      const AliasedObj & aliased_o2 = dynamic_cast <const AliasedObj&> (o2); 
      AliasedObj o1 = *this;
      return o1 == aliased_o2;
    } 
    catch (bad_cast & bc)
    {
      try
      {
        const NamedObj named_o2 = dynamic_cast <const NamedObj&> (o2); 
        return isAliased (this->getType(), named_o2.getType());
      } 
      catch (bad_cast & bc)
      {
        return false;
      }
    }
  }

  bool AliasedObj::mayEqual(MemLocObjectPtr o2, PartPtr p) const
  {
    AliasedObjPtr aliased_o2 = boost::dynamic_pointer_cast <AliasedObj> (o2);
    if(aliased_o2) {
     	// 1. o2 is AliasedObj:
     	return mayEqual(aliased_o2, p);
    } else {
      NamedObjPtr named_o2 = boost::dynamic_pointer_cast <NamedObj> (o2);
      if(named_o2) {
      	// 2. o2 is Named Obj: return operator == (AliasedObj&o1, NamedObj & o2)
      	return isAliased (getType(), named_o2->getType());
      } else {
      	// 3. o2 is  ExpressionObj: always return false
      	return false;
      }
    }
  }

  bool AliasedObj::mustEqual(MemLocObjectPtr o2, PartPtr p) const
  {
    AliasedObjPtr aliased_o2 = boost::dynamic_pointer_cast <AliasedObj> (o2);
    if(aliased_o2) {
    	// 1. o2 is AliasedObj:
      return mustEqual(aliased_o2, p);
    } else {
      NamedObjPtr named_o2 = boost::dynamic_pointer_cast <NamedObj> (o2);
      if(named_o2) {
      	// 2. o2 is  NamedObj: no way they can be equal mem object
        return false;
      } else {
      	// 3. o2 is  ExpressionObj: always return false
        return false;
      }
    }
  }

  bool ScalarAliasedObj::operator == (const MemLocObject& o2) const
  {
    const AliasedObj& o1 = dynamic_cast<const AliasedObj&> (*this);
    return (o1==o2);
  }

  bool ScalarAliasedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mayEqual(o2, p));
  }

  bool ScalarAliasedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mustEqual(o2, p));
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr ScalarAliasedObj::copyML() const
  { return boost::make_shared<ScalarAliasedObj>(*this); }

  // Returns true if this pointer refers to the same abstract object as that pointer.
  //GB: getDereference subsumes this
  /*bool PointerAliasedObj::equalPoints(const Pointer & that)
  {
    SgType* this_type = *(this->getType().begin()); 
    SgType* that_type = *(that.getType().begin());
    return (this_type == that_type);
  }*/
  
  bool FunctionAliasedObj::operator == (const MemLocObject& o2) const
  {
    const AliasedObj& o1 = dynamic_cast<const AliasedObj&> (*this);
    return (o1==o2);
  }

  bool FunctionAliasedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mayEqual(o2, p));
  }

  bool FunctionAliasedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mustEqual(o2, p));
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr FunctionAliasedObj::copyML() const
  { return boost::make_shared<FunctionAliasedObj>(*this); }

  bool LabeledAggregateAliasedObj::operator == (const MemLocObject& o2) const
  {
    const AliasedObj& o1 = dynamic_cast<const AliasedObj&> (*this);
    //  return (o1.operator==( o2));
    return (o1==o2);
  }
  
  bool LabeledAggregateAliasedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mayEqual(o2, p));
  }

  bool LabeledAggregateAliasedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mustEqual(o2, p));
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr LabeledAggregateAliasedObj::copyML() const
  { return boost::make_shared<LabeledAggregateAliasedObj>(*this); }

  bool ArrayAliasedObj::operator == (const MemLocObject& o2) const
  {
    const AliasedObj& o1 = dynamic_cast<const AliasedObj&> (*this);
    return (o1==o2);
  }
  
  bool ArrayAliasedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mayEqual(o2, p));
  }

  bool ArrayAliasedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mustEqual(o2, p));
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr ArrayAliasedObj::copyML() const
  { return boost::make_shared<ArrayAliasedObj>(*this); }


  MemLocObjectPtr PointerAliasedObj::getDereference()
  {
    // simplest type-based implementation
    SgType* t = AliasedObj::getType();
    SgPointerType* p_t = isSgPointerType(t);
    assert (p_t != NULL);
    return createAliasedMemLocObject (p_t->get_base_type());
  }

  bool PointerAliasedObj::operator == (const MemLocObject& o2) const
  {
    const AliasedObj& o1 = dynamic_cast<const AliasedObj&> (*this);
    return (o1==o2);
  }

  bool PointerAliasedObj::mayEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mayEqual(o2, p));
  }

  bool PointerAliasedObj::mustEqual(const MemLocObjectPtr o2, PartPtr p) const
  {
    return (AliasedObj::mustEqual(o2, p));
  }
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr PointerAliasedObj::copyML() const
  { return boost::make_shared<PointerAliasedObj>(*this); }

  std::set<SgType*> ScalarAliasedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (AliasedObj::getType());
    return rt;
  }

  std::set<SgType*> FunctionAliasedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (AliasedObj::getType());
    return rt;
  }

  std::set<SgType*> LabeledAggregateAliasedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (AliasedObj::getType());
    return rt;
  }

  std::set<SgType*> ArrayAliasedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (AliasedObj::getType());
    return rt;
  }

  std::set<SgType*> PointerAliasedObj::getType()
  {
    std::set<SgType*> rt;
    rt.insert (AliasedObj::getType());
    return rt;
  }

  //std::string ScalarAliasedObj::str(const string& indent)
  std::string ScalarAliasedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "ScalarAliasedObj @ " + StringUtility::numberToString(this)+ " "+ AliasedObj::str(indent);
    return rt;
  }

  //std::string FunctionAliasedObj::str(const string& indent)
  std::string FunctionAliasedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "FunctionAliasedObj @ " + StringUtility::numberToString(this)+ " "+ AliasedObj::str(indent);
    return rt;
  }

  //std::string LabeledAggregateAliasedObj::str(const string& indent)
  std::string LabeledAggregateAliasedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "LabeledAggregateAliasedObj @ " + StringUtility::numberToString(this)+ " "+ AliasedObj::str(indent);
    return rt;
  }
  
  //std::string ArrayAliasedObj::str(const string& indent)
  std::string ArrayAliasedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "ArrayAliasedObj @ " + StringUtility::numberToString(this)+ " "+ AliasedObj::str(indent);
    return rt;
  }
  
  //std::string PointerAliasedObj::str(const string& indent)
  std::string PointerAliasedObj::str(std::string indent) const // pretty print for the object  
  {
    string rt = "PointerAliasedObj @ " + StringUtility::numberToString(this)+ " "+ AliasedObj::str(indent);
    return rt;
  }

  /*
     bool operator == ( ScalarAliasedObj & o1, AbstractObject& o2) 
     {
     return dynamic_cast<AbstractObject>
     }
     */

  // A map to store aliased obj set
  // This can provide quick lookup for existing aliased objset to avoid duplicated creation
  map<SgType*, MemLocObjectPtr > aliased_objset_map; 

  void dump_aliased_objset_map ()
  {
    cout<<"Not yet implemented."<<endl;
    assert (false);

  }
  // creator for different objects
  // ------------------------------------------------------------------
  MemLocObjectPtr createAliasedMemLocObject(SgType* t)  // One object per type, Type based alias analysis. A type of the object pointed to by a pointer
  {
    bool assert_flag = true; 
    assert (t!= NULL);
    MemLocObjectPtr rt;
    map<SgType*, MemLocObjectPtr >::const_iterator iter;
    iter = aliased_objset_map.find(t);
    if (iter == aliased_objset_map.end())
    { // None found, create a new one and update the map
      if (SageInterface::isScalarType(t))
        // We define the following SgType as scalar types: 
        // char, short, int, long , void, Wchar, Float, double, long long, string, bool, complex, imaginary 
      {
        rt = MemLocObjectPtr(new ScalarAliasedObj(t));
        assert (rt); 
      }
      else if (isSgPointerType(t))
      {
        rt = MemLocObjectPtr(new PointerAliasedObj(t));
        assert (rt); 
      }
      else if (isSgArrayType(t))
      { 
        // TODO: We may wan to only generate a single array aliased obj for a multi-dimensional array
        // which will have multiple SgArrayType nodes , each per dimension
        rt = MemLocObjectPtr(new ArrayAliasedObj(t));
        assert (rt); 
      }  
      else if (isSgClassType(t))
      {  
        rt = MemLocObjectPtr(new LabeledAggregateAliasedObj(t));
        assert (rt); 
      }  
      else if (isSgFunctionType(t))
      {  
        rt = MemLocObjectPtr(new FunctionAliasedObj(t));
        assert (rt); 
      }  
      else
      {
        cerr<<"Warning: createAliasedMemLocObject(): unhandled type:"<<t->class_name()<<endl;
        assert_flag = false;
      }  

      // Update the map only if something has been created
      if (rt) 
        aliased_objset_map[t]= rt;
    }
    else // Found one, return it directly
    {
      rt = (*iter).second; 
    }  

    if (assert_flag)
      assert (rt); // we cannot assert this since not all SgType are supported now
    return rt;
  } 

  // variables that are explicitly declared/named in the source code
  // local, global, static variables,
  // formal and actual function parameters
  //  Scalar
  //  Labeled aggregate
  //  Pointer
  //  Array
  // ------------------------------------------------------------------
  MemLocObjectPtr createNamedMemLocObject(SgSymbol* anchor_symbol, SgType* t, MemLocObjectPtr parent, IndexVector * iv)
  {
    MemLocObjectPtr rt;

    if (!isSgVariableSymbol(anchor_symbol) && !isSgFunctionSymbol(anchor_symbol))
    {
      cerr<<"Warning. createNamedMemLocObject() skips non-variable and non-function symbol:"<< anchor_symbol->class_name() <<endl;
      return rt;
    }
    
    // check parameters
    assert (anchor_symbol != NULL);
    // ! (isArray || isPointer) ==> !isArray && !isPointer
    if (! isSgArrayType(anchor_symbol->get_type())  && ! isSgPointerType(anchor_symbol->get_type()))
    { // only array elements can have different type from its anchor (parent) symbol
       // pointer type can also have array-like subscripting
      assert (anchor_symbol->get_type() == t);
    }
    bool assert_flag = true; 

    if (!named_objset_map[parent.get()][anchor_symbol][iv]) // TODO: Here is buggy, index vector is not uniquely generated now!
    { // None found, create a new one depending on its type and update the map
      if (SageInterface::isScalarType(t))
        // We define the following SgType as scalar types: 
        // char, short, int, long , void, Wchar, Float, double, long long, string, bool, complex, imaginary 
      { 
        rt = MemLocObjectPtr(new ScalarNamedObj(anchor_symbol, t, parent, iv));
        assert (rt);
      }
      else if (isSgFunctionType(t))
      {
        rt = MemLocObjectPtr(new FunctionNamedObj(anchor_symbol, t, parent, iv));
        assert (rt);
      }
 
      else if (isSgPointerType(t))
      {
        rt = MemLocObjectPtr(new PointerNamedObj(anchor_symbol, t, parent, iv));
        assert (rt);
      }
      else if (isSgClassType(t))
      {
        rt = MemLocObjectPtr(new LabeledAggregateNamedObj (anchor_symbol, t ,parent,iv));
        assert (rt);
      }
      else if (isSgArrayType(t)) // This is for the entire array variable
      {
        rt = MemLocObjectPtr(new ArrayNamedObj (anchor_symbol, t, parent, iv));
        assert (rt);
      }
      else
      {
        cerr<<"Warning: createNamedMemLocObject(): unhandled symbol:"<<anchor_symbol->class_name() << 
          " name: " <<  anchor_symbol->get_name().getString() << " type: "<< t->class_name()<< " @ "<<StringUtility::numberToString(anchor_symbol) <<endl;
        assert_flag = false;
      }

      // update the map  only if something has been created
      if (rt)
        named_objset_map[parent.get()][anchor_symbol][iv]= rt;
    }
    else // Found one, return it directly
    {
      rt = named_objset_map[parent.get()][anchor_symbol][iv];
    }
  
    if (assert_flag)
      assert (rt); // we cannot assert this since not all SgType are supported now
    return rt;
  }

  // For a SgVarRef, find the corresponding symbol first
  // 1. if is a instance symbol. It corresponding to real top level instances of types. Create NamedObj as we see each of them, NULL as parent
  //     They are the symbols with declarations not under SgClassDefinition
  // 2. if it is a symbol within a class definition, two cases
  //    a. the symbol has a pointer type, we don't track pointer aliasing, so we create AliasedObj for it
  //    b. other types: a child of an instance, check if is the rhs of SgDotExp/SgArrowExp, if not assert
  //        use lhs of SgDotExp/SgArrowExp as parent
  //            lhs could be SgVarRefExp: find the corresponding NamedObj as parent (top level object, labeled aggregate)
  //            lhs could be another SgDotExp: find its rhs's NamedObj as parent

  MemLocObjectPtr createNamedOrAliasedMemLocObject (SgVarRefExp* r) // create NamedMemLocObject or aliased object from a variable reference 
  // TODO the name should be clarified to create NamedObj only, since we don't break the chain if the type is a pointer here
  {
    assert (r!=NULL);
    SgVariableSymbol * s = r->get_symbol();
    assert (s != NULL);
    SgType * t = s->get_type();
    assert (t != NULL);
    //TODO think again about if we want to break the chain here   
#if 0  
    if (isSgPointerType(t)) // pointer type is taken care already by iterating through SgType from memory pools
    {
      //we don't track pointer aliasing, so we create AliasedObj for it
      return createAliasedMemLocObject (t);
    }
#endif    
    if (isMemberVariableDeclarationSymbol (s))
    { // symbol within SgClassDefinition
      //I think a reference to a data memory can only happen through . or -> operator
      SgExpression* parent = isSgExpression(r->get_parent());
      assert (parent != NULL);
      SgDotExp * d_e = isSgDotExp (parent);
      SgArrowExp * a_e = isSgArrowExp (parent);
      assert (d_e != NULL || a_e != NULL);
      SgBinaryOp* b_e = isSgBinaryOp (parent);
      assert (b_e != NULL);
      assert (b_e->get_rhs_operand_i() == r);

      // First, get MemLocObject for its parent part
      MemLocObjectPtr p_obj;
      SgExpression * lhs = b_e ->get_lhs_operand_i();
      assert (lhs != NULL);
      if (isSgVarRefExp(lhs))
      {
        p_obj = createNamedOrAliasedMemLocObject (isSgVarRefExp(lhs)); // recursion here
      }
      else if (isSgBinaryOp (lhs)) // another SgDotExp or SgArrowExp
      { // find its rhs's NamedObj as parent
        SgDotExp * d_e2 = isSgDotExp (lhs);
        SgArrowExp * a_e2 = isSgArrowExp (lhs);
        assert (d_e2 != NULL || a_e2 != NULL);
        SgExpression* rhs = isSgBinaryOp (lhs) -> get_rhs_operand_i();
        assert (isSgVarRefExp (rhs) != NULL); // there might be some more cases!!
        p_obj = createNamedOrAliasedMemLocObject (isSgVarRefExp(rhs));
      }
      // now create the child mem obj
      MemLocObjectPtr mem_obj = createNamedMemLocObject (s, s->get_type(), p_obj, NULL); // we don't explicitly store index for elements of labeled aggregates for now 
      // assert (mem_obj != NULL); // we may return NULL for cases not yet handled
      return mem_obj;
    }
    else // other symbols
    {
      MemLocObjectPtr mem_obj = createNamedMemLocObject (s, s->get_type(), MemLocObjectPtr(), NULL); 
      // assert (mem_obj != NULL); // We may return NULL for cases not yet handled
      return mem_obj;
    }
  }

 // create NamedObj from an array element access 
 /* The AST for a 2-D array element access:  
  * Two SgPntrArrRefExp will be found. But we only need to create one element. 
  * We choose to trigger the creation when we see the top level SgPntrArrRefExp
       a[4][6]    SgPntrArrRefExp  (a[4], 6)  // We focus on this level
                          lhs: SgPntrArrRefExp (a, 4) // inner level, we skip this SgPntrArrRefExp
                                 lhs: SgVarRefExp = a   //  find symbol for a, the go back wards to find rhs operands such as 4 and 6
                                 rhs: SgIntVal = 4
                          rhs: SgIntVal =6    
    Two things should happen when we see an array element access like: a[4][6]
    1. Create ArrayNamedObj for the entire array a. It has two further cases:
       a. The array is a standalone object, not a field of another aggregates or array (TODO)
          create it based on symbol is sufficient
       b. The array is part of other objects, such as structure/class/array
          We have to create it based on both its symbol and parent, and optionally the index 
       The creation interface should take care of avoiding duplicated creation of the entire array object.    
    2. Create the array element NamedMemLocObject for  a[4][6], based on parent a, and indexVector <4, 6>
  */
  MemLocObjectPtr createNamedMemLocObject (SgPntrArrRefExp* r) 
  {
    MemLocObjectPtr mem_obj;
    assert (r!=NULL);
    MemLocObjectPtr whole_array_obj;

    SgPntrArrRefExp* arr_ref_parent = isSgPntrArrRefExp(r->get_parent());
    if ( arr_ref_parent == NULL) // this is the top level SgPntrArrRefExp
    {
     // try to create the Obj for the whole array first
      SgExpression* arrayNameExp = NULL;
      std::vector<SgExpression*>* subscripts = new std::vector<SgExpression*>;

      SageInterface::isArrayReference (r, & arrayNameExp, & subscripts);
      SgInitializedName* array_name = SageInterface::convertRefToInitializedName (arrayNameExp);
      SgVariableSymbol * s = NULL; 
      if (array_name != NULL)
      {
        s = isSgVariableSymbol(array_name->get_symbol_from_symbol_table());
        assert (s != NULL);
        SgType * t = s->get_type();
        // both array type and pointer type can have subscripts like p[10]
        assert (isSgArrayType(t) != NULL || isSgPointerType(t) != NULL);
        whole_array_obj = SyntacticAnalysis::Expr2MemLoc_noPart(s);
        if (!whole_array_obj)
        {
           cerr<<"Warning. Unhandled case in createNamedMemLocObject(SgPntrArrRefExp*) where the array is part of other aggregate objects."<<endl;
        }

      }
      else
      {
        // We only handle canonical array like a[1], not (pointer+10)[1] for now TODO
        cerr<<"Warning. Unhandled case in createNamedMemLocObject(SgPntrArrRefExp*) where the array name is not a single variable."<<endl;
      }

      // create the element access then, using symbol, parent, and index
      IndexVector * iv = generateIndexVector  (*subscripts);
      assert (iv != 0);
      mem_obj = named_objset_map[whole_array_obj.get()][s][iv];
      if (!mem_obj)
      {
        mem_obj = createNamedMemLocObject (s, r->get_type(), whole_array_obj, iv);
        named_objset_map[whole_array_obj.get()][s][iv] = mem_obj;
      }
    }
    else
    { 
      // This is isSgPntrArrRefExp in the middle
      // we should not generate any MemLocObject for it.
    }
    // assert (mem_obj != NULL); // we may return NULL 
    return mem_obj;
  }

  
  // A map to avoid duplicated creation of ExprObj
  // SgExpression here excludes SgVarRef, which should be associated with a named memory object
  map<SgExpression*, MemLocObjectPtr > expr_objset_map; 

  // ------------------------------------------------------------------
  // Creator for expression MemLocObject
  MemLocObjectPtr createExpressionMemLocObject(SgExpression* anchor_exp, SgType*t)
  {
    MemLocObjectPtr rt;
    assert (anchor_exp != NULL);
    assert (t!= NULL);
    assert (anchor_exp->get_type() == t);

    bool assert_flag = true; 
    SgVarRefExp* var_exp = isSgVarRefExp (anchor_exp);
    if (var_exp)
    {
      cerr<<"Error. Trying to create an expression object when anchor_exp is a SgVarRefExp, which should be associated with a named object. "<<endl;
      assert (false);
    }  

    if (expr_objset_map[anchor_exp] == NULL)
    { // None found, create a new one depending on its type and update the map
      if (SageInterface::isScalarType(t))
        // We define the following SgType as scalar types: 
        // char, short, int, long , void, Wchar, Float, double, long long, string, bool, complex, imaginary 
      { 
        // An array element access could also have a scalar type, but we want to record it as a named object, instead of an expression object
        rt = MemLocObjectPtr(new ScalarExprObj(anchor_exp, t));
        assert (rt);
      }
      else if (isSgFunctionType(t))
      {
        rt = MemLocObjectPtr(new FunctionExprObj(anchor_exp,t));
        assert (rt);
      }
 
      else if (isSgPointerType(t))
      {
        rt = MemLocObjectPtr(new PointerExprObj(anchor_exp,t));
        assert (rt);
      }
      else if (isSgClassType(t))
      {
        rt = MemLocObjectPtr(new LabeledAggregateExprObj(anchor_exp,t));
        assert (rt);
      }
      else if (isSgArrayType(t))
      {
        rt = MemLocObjectPtr(new ArrayExprObj(anchor_exp, t));
        assert (rt);
      }
      else
      {
        cerr<<"Warning: createExprMemLocObject(): unhandled expression:"<<anchor_exp->class_name() << 
          " string : " <<  anchor_exp->unparseToString() << " type: "<< t->class_name()<< " @ "<<StringUtility::numberToString(anchor_exp) <<endl;
        assert_flag = false;
      }

      // update the map  only if something has been created
      if (rt)
        expr_objset_map[anchor_exp] = rt;
    }
    else // Found one, return it directly
    {
      rt = expr_objset_map[anchor_exp];
    }
  
    if (assert_flag)
      assert (rt); // we cannot assert this since not all SgType are supported now
    return rt;
  }

  // a helper function to check if a symbol is corresponding to a member variable declaration within SgClassDefinition or not
  bool isMemberVariableDeclarationSymbol(SgSymbol * s)
  {
    bool rt = false; 
    assert (s!=NULL);
    // Only relevant for SgVariableSymbol for now
    SgVariableSymbol* vs = isSgVariableSymbol (s); 
    if (vs != NULL)
    {
      SgInitializedName* i_name = vs->get_declaration();
      assert  (i_name != NULL);
      if (isSgClassDefinition(i_name->get_scope()))
        rt = true;
    }
    return rt; 
  }

}; // namespace dataflow
