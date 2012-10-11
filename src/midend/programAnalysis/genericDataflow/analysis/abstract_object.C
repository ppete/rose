#include "abstract_object.h"
#include "stx_analysis.h"
#include <iostream>

using namespace std;

namespace dataflow
{

/* ########################
   ##### MemLocObject ##### 
   ######################## */

MemLocObjectPtr NULLMemLocObject;
  
// General version of mayEqual and mustEqual that implements may/must equality with respect to ExprObj
// and uses the derived class' may/mustEqual check for all the other cases
bool MemLocObject::mayEqual(MemLocObjectPtr o, PartPtr p)
{
  // If both this and that are both expression objects or both not expression objects, use the
  // derived class' equality check
  //Dbg::dbg << "MemLocObject::mayEqual() dynamic_cast<const ExprObj*>(this)="<<dynamic_cast<const ExprObj*>(this)<<" dynamic_cast<const ExprObj*>(o.get())="<<dynamic_cast<const ExprObj*>(o.get())<<endl;
  if((dynamic_cast<const ExprObj*>(this)  && dynamic_cast<const ExprObj*>(o.get())) ||
     (!dynamic_cast<const ExprObj*>(this) && !dynamic_cast<const ExprObj*>(o.get())))
  { return mayEqualML(o, p); }
  // Otherwise, we know they're not equal
  { return false; }
}
bool MemLocObject::mustEqual(MemLocObjectPtr o, PartPtr p)
{
  // If both this and that are both expression objects or both not expression objects, use the
  // derived class' equality check
  //Dbg::dbg << "MemLocObject::mustEqual() dynamic_cast<const ExprObj*>(this)="<<dynamic_cast<const ExprObj*>(this)<<"="<<const_cast<MemLocObject*>(this)->str("")<<endl;
  //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;dynamic_cast<const ExprObj*>(o.get())="<<dynamic_cast<const ExprObj*>(o.get())<<"="<<o->str("")<<endl;
  if((dynamic_cast<const ExprObj*>(this)  && dynamic_cast<const ExprObj*>(o.get())) ||
     (!dynamic_cast<const ExprObj*>(this) && !dynamic_cast<const ExprObj*>(o.get())))
  { return mustEqualML(o, p); }
  // Otherwise, we know they're not equal
  { return false; }
}

bool MemLocObject::mayEqual(AbstractObjectPtr o, PartPtr p)
{
  MemLocObjectPtr mo = boost::dynamic_pointer_cast<MemLocObject>(o);
  if(mo) return mayEqual(mo, p);
  else   return false;
}

bool MemLocObject::mustEqual(AbstractObjectPtr o, PartPtr p)
{
  MemLocObjectPtr mo = boost::dynamic_pointer_cast<MemLocObject>(o);
  if(mo) return mustEqual(mo, p);
  else   return false;
}

/* ###############################
   ##### MemLocObjectPtrPair ##### 
   ############################### */

// Returns whether this object may/must be equal to o within the given Part p
bool MemLocObjectPtrPair::mayEqual(MemLocObjectPtrPair that, PartPtr p)
{
  // Both this and that have the same structure
  assert((expr && that.expr) || (!mem && !that.mem));
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  return (expr ? expr->mayEqual(that.expr, p): false) ||
         (mem  ? mem->mayEqual (that.mem, p): false); 
}

bool MemLocObjectPtrPair::mustEqual(MemLocObjectPtrPair that, PartPtr p)
{
  // Both this and that have the same structure
  assert((expr && that.expr) || (!mem && !that.mem));
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  return (expr ? expr->mustEqual(that.expr, p): true) &&
         (mem  ? mem->mustEqual (that.mem, p): true);
}

// Allocates a copy of this object and returns a pointer to it
MemLocObjectPtrPair MemLocObjectPtrPair::copyML() const {
  return MemLocObjectPtrPair(*this);
}

bool MemLocObjectPtrPair::isScalar()
{
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  if(expr && mem) {
    bool exprScalar = MemLocObject::isScalar(expr);
    bool memScalar  = MemLocObject::isScalar(mem);
    assert(exprScalar == memScalar);
    return exprScalar;
  }
  if(expr) return MemLocObject::isScalar(expr) ? true: false;
  if(mem)  return MemLocObject::isScalar(mem) ? true: false;
  ROSE_ASSERT(0);
}

bool MemLocObjectPtrPair::isFunctionMemLoc()
{
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  if(expr && mem) {
    bool exprScalar = MemLocObject::isFunctionMemLoc(expr);
    bool memScalar  = MemLocObject::isFunctionMemLoc(mem);
    assert(exprScalar == memScalar);
    return exprScalar;
  }
  if(expr) return MemLocObject::isFunctionMemLoc(expr) ? true: false;
  if(mem)  return MemLocObject::isFunctionMemLoc(mem) ? true: false;
  ROSE_ASSERT(0);
}

bool MemLocObjectPtrPair::isLabeledAggregate()
{
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  if(expr && mem) {
    bool exprScalar = MemLocObject::isLabeledAggregate(expr);
    bool memScalar  = MemLocObject::isLabeledAggregate(mem);
    assert(exprScalar == memScalar);
    return exprScalar;
  }
  if(expr) return MemLocObject::isLabeledAggregate(expr) ? true: false;
  if(mem)  return MemLocObject::isLabeledAggregate(mem) ? true: false;
  ROSE_ASSERT(0);
}

bool MemLocObjectPtrPair::isArray()
{
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  if(expr && mem) {
    bool exprScalar = MemLocObject::isArray(expr);
    bool memScalar  = MemLocObject::isArray(mem);
    assert(exprScalar == memScalar);
    return exprScalar;
  }
  if(expr) return MemLocObject::isArray(expr) ? true: false;
  if(mem)  return MemLocObject::isArray(mem) ? true: false;
  ROSE_ASSERT(0);
}

bool MemLocObjectPtrPair::isPointer()
{
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  if(expr && mem) {
    bool exprScalar = MemLocObject::isPointer(expr);
    bool memScalar  = MemLocObject::isPointer(mem);
    assert(exprScalar == memScalar);
    return exprScalar;
  }
  if(expr) return MemLocObject::isPointer(expr) ? true: false;
  if(mem)  return MemLocObject::isPointer(mem) ? true: false;
  ROSE_ASSERT(0);
}

// pretty print for the object
std::string MemLocObjectPtrPair::str(std::string indent)
{ 
  ostringstream oss;
  oss << "[";
  if(expr) oss << "expr=" << expr->str(indent) << endl;
  if(mem) {
    if(expr) oss << indent;
    oss << "mem="  << mem->str(indent);
  }
  oss << "]";
  return oss.str();
}

std::string MemLocObjectPtrPair::strp(PartPtr part, std::string indent)
{ 
  ostringstream oss;
  oss << "[";
  if(expr) oss << "expr=" << expr->strp(part, indent) << endl;
  if(mem) {
    if(expr) oss << indent;
    oss << "mem="  << mem->strp(part, indent);
  }
  oss << "]";
  return oss.str();
}

/* ################################
   ##### CombinedMemLocObject ##### 
   ################################ */

template <bool defaultMayEq>
CombinedMemLocObject<defaultMayEq>::CombinedMemLocObject(MemLocObjectPtr memLoc) {
  memLocs.push_back(memLoc);
}

template <bool defaultMayEq>
CombinedMemLocObject<defaultMayEq>::CombinedMemLocObject(const std::list<MemLocObjectPtr>& memLocs) : memLocs(memLocs) {}

template <bool defaultMayEq>
void CombinedMemLocObject<defaultMayEq>::add(MemLocObjectPtr memLoc) {
  memLocs.push_back(memLoc);
}

// Returns whether this object may/must be equal to o within the given Part p
template <bool defaultMayEq>
bool CombinedMemLocObject<defaultMayEq>::mayEqualML(MemLocObjectPtr o, PartPtr part)
{
  boost::shared_ptr<CombinedMemLocObject> that = boost::dynamic_pointer_cast<CombinedMemLocObject>(o);
  ROSE_ASSERT(that);
  
  // If the two combination objects include different numbers of MemLocObjects, say that they may be equal since 
  // we can't be sure either way.
  if(memLocs.size() != that->memLocs.size()) return true;
  
  // Compare all the pairs of MemLocObjects in memLocs and that.memLocs, returning defaultMayEq if any pair
  // returns defaultMayEq since we're looking for the tightest (if defaultMayEq=false) / loosest (if defaultMayEq=true) 
  // answer that any MemLocObject in memLocs can give
  for(list<MemLocObjectPtr>::iterator thisIt=memLocs.begin(), thatIt=that->memLocs.begin();
      thisIt!=memLocs.end();
      thisIt++, thatIt++)
  {
    if((*thisIt)->mayEqual(*thatIt, part) == defaultMayEq) return defaultMayEq;
  }
  
  return !defaultMayEq;
}

template <bool defaultMayEq>
bool CombinedMemLocObject<defaultMayEq>::mustEqualML(MemLocObjectPtr o, PartPtr part)
{
  boost::shared_ptr<CombinedMemLocObject> that = boost::dynamic_pointer_cast<CombinedMemLocObject>(o);
  ROSE_ASSERT(that);
  
  // If the two combination  objects include different numbers of MemLocObjects, say that they are not must equal since 
  // we can't be sure either way.
  if(memLocs.size() != that->memLocs.size()) return false;
  
  // Compare all the pairs of MemLocObjects in memLocs and that.memLocs, returning !defaultMayEq if any pair
  // returns !defaultMayEqual since we're looking for the tightest answer that any MemLocObject in memLocs can give
  for(list<MemLocObjectPtr>::iterator thisIt=memLocs.begin(), thatIt=that->memLocs.begin();
      thisIt!=memLocs.end();
      thisIt++, thatIt++)
  {
    if((*thisIt)->mustEqual(*thatIt, part) == !defaultMayEq) return !defaultMayEq;
  }
  
  return defaultMayEq;
}

// Returns true if this object is live at the given part and false otherwise
template <bool defaultMayEq>
bool CombinedMemLocObject<defaultMayEq>::isLive(PartPtr part) const
{
  // If this is a union type (defaultMayEq=true), an object is live if any of its components are live (weakest constraint)
  // If this is an intersection type (defaultMayEq=false), an object is dead if any of its components are dead (strongest constraint)
  for(list<MemLocObjectPtr>::const_iterator ml=memLocs.begin(); ml!=memLocs.end(); ml++)
    if((*ml)->isLive(part) == defaultMayEq) return defaultMayEq;
  
  return !defaultMayEq;
}

// Allocates a copy of this object and returns a pointer to it
template <bool defaultMayEq>
MemLocObjectPtr CombinedMemLocObject<defaultMayEq>::copyML() const
{ return boost::make_shared<CombinedMemLocObject>(memLocs); }

template <bool defaultMayEq>
std::string CombinedMemLocObject<defaultMayEq>::str(std::string indent)
{
  ostringstream oss;
  oss << "["<<(defaultMayEq? "UnionMLO" : "IntersectMLO")<<": ";
  if(memLocs.size()>1) oss << endl;
  for(list<MemLocObjectPtr>::iterator ml=memLocs.begin(); ml!=memLocs.end(); ) {
    if(ml!=memLocs.begin()) oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;";
    oss << (*ml)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;");
    ml++;
    if(ml!=memLocs.end()) oss << endl;
  }
  oss << "]";
  
  return oss.str();
}

// Create a function that uses examples of combined objects to force the compiler to generate these classes
static void exampleCombinedMemLocObjects2(MemLocObjectPtr ml, std::list<MemLocObjectPtr> mls, IntersectMemLocObject& i, UnionMemLocObject& u, IntersectMemLocObject& i2, UnionMemLocObject& u2);
static void exampleCombinedMemLocObjects(MemLocObjectPtr ml, std::list<MemLocObjectPtr> mls)
{
  IntersectMemLocObject exampleIntersectObject(ml);
  UnionMemLocObject     exampleUnionObject(ml);
  IntersectMemLocObject exampleIntersectObject2(mls);
  UnionMemLocObject     exampleUnionObject2(mls);
  exampleCombinedMemLocObjects2(ml, mls, exampleIntersectObject, exampleUnionObject, exampleIntersectObject2, exampleUnionObject2);
}
static void exampleCombinedMemLocObjects2(MemLocObjectPtr ml, std::list<MemLocObjectPtr> mls, IntersectMemLocObject& i, UnionMemLocObject& u, IntersectMemLocObject& i2, UnionMemLocObject& u2)
{
  exampleCombinedMemLocObjects(ml, mls);
}

/* #########################
   ##### CodeLocObject ##### 
   ######################### */

CodeLocObjectPtr NULLCodeLocObject;

/* ################################
   ##### CodeLocObjectPtrPair ##### 
   ################################ */

// Returns whether this object may/must be equal to o within the given Part p
bool CodeLocObjectPtrPair::mayEqual(CodeLocObjectPtrPair that, PartPtr p)
{
  // Both this and that have the same structure
  assert((expr && that.expr) || (!mem && !that.mem));
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  return (expr ? expr->mayEqual(that.expr, p): false) ||
         (mem  ? mem->mayEqual (that.mem, p): false); 
}

bool CodeLocObjectPtrPair::mustEqual(CodeLocObjectPtrPair that, PartPtr p)
{
  // Both this and that have the same structure
  assert((expr && that.expr) || (!mem && !that.mem));
  // At least one of expr or mem have to be non-NULL
  assert(expr || mem);
  return (expr ? expr->mustEqual(that.expr, p): true) &&
         (mem  ? mem->mustEqual (that.mem, p): true);
}

// Returns a copy of this object
CodeLocObjectPtrPair CodeLocObjectPtrPair::copyCL() const {
  return CodeLocObjectPtrPair(*this);
}

// pretty print for the object
std::string CodeLocObjectPtrPair::str(std::string indent)
{ 
  ostringstream oss;
  oss << "[";
  if(expr) oss << "expr=" << expr->str(indent) << endl;
  if(mem) {
    if(expr) oss << indent;
    oss << "mem="  << mem->str(indent);
  }
  oss << "]";
  return oss.str();
}

std::string CodeLocObjectPtrPair::strp(PartPtr part, std::string indent)
{ 
  ostringstream oss;
  oss << "[";
  if(expr) oss << "expr=" << expr->strp(part, indent) << endl;
  if(mem) {
    if(expr) oss << indent;
    oss << "mem="  << mem->strp(part, indent);
  }
  oss << "]";
  return oss.str();
}

/* #################################
   ##### CombinedCodeLocObject ##### 
   ################################# */

template <bool defaultMayEq>
CombinedCodeLocObject<defaultMayEq>::CombinedCodeLocObject(CodeLocObjectPtr codeLoc) {
  codeLocs.push_back(codeLoc);
}

template <bool defaultMayEq>
CombinedCodeLocObject<defaultMayEq>::CombinedCodeLocObject(const list<CodeLocObjectPtr>& codeLocs) : codeLocs(codeLocs) {}

template <bool defaultMayEq>
void CombinedCodeLocObject<defaultMayEq>::add(CodeLocObjectPtr codeLoc) {
  codeLocs.push_back(codeLoc);
}

// Returns whether this object may/must be equal to o within the given Part p
// These methods are private to prevent analyses from calling them directly.
template <bool defaultMayEq>
bool CombinedCodeLocObject<defaultMayEq>::mayEqualCL(CodeLocObjectPtr o, PartPtr part)
{
  boost::shared_ptr<CombinedCodeLocObject> that = boost::dynamic_pointer_cast<CombinedCodeLocObject>(o);
  // If the two combination objects include different numbers of CodeLocObjects, say that they may be equal since 
  // we can't be sure either way.
  if(codeLocs.size() != that.codeLocs.size()) return true;
  
  // Compare all the pairs of CodeLocObjects in codeLocs and that.codeLocs, returning defaultMayEq if any pair
  // returns defaultMayEq since we're looking for the tightest (if defaultMayEq=false) / loosest (if defaultMayEq=true) 
  // answer that any CodeLocObject in codeLocs can give
  for(list<CodeLocObjectPtr>::iterator thisIt=codeLocs.begin(), thatIt=that->codeLocs.begin();
      thisIt!=codeLocs.end();
      thisIt++, thatIt++)
  {
    if((*thisIt)->mayEqual(*thatIt, part) == defaultMayEq) return defaultMayEq;
  }
  
  return !defaultMayEq;
}

template <bool defaultMayEq>
bool CombinedCodeLocObject<defaultMayEq>::mustEqualCL(CodeLocObjectPtr o, PartPtr part)
{
  boost::shared_ptr<CombinedCodeLocObject> that = boost::dynamic_pointer_cast<CombinedCodeLocObject>(o);
  // If the two combination  objects include different numbers of CodeLocObjects, say that they are not must equal since 
  // we can't be sure either way.
  if(codeLocs.size() != that.codeLocs.size()) return false;
  
  // Compare all the pairs of CodeLocObjects in codeLocs and that.codeLocs, returning !defaultMayEq if any pair
  // returns !defaultMayEqual since we're looking for the tightest answer that any CodeLocObject in codeLocs can give
  for(list<CodeLocObjectPtr>::iterator thisIt=codeLocs.begin(), thatIt=that->codeLocs.begin();
      thisIt!=codeLocs.end();
      thisIt++, thatIt++)
  {
    if((*thisIt)->mustEqual(*thatIt, part) == !defaultMayEq) return !defaultMayEq;
  }
  
  return defaultMayEq;
}

// Returns true if this object is live at the given part and false otherwise
template <bool defaultMayEq>
bool CombinedCodeLocObject<defaultMayEq>::isLive(PartPtr part) const
{
  // If this is a union type (defaultMayEq=true), an object is live if any of its components are live (weakest constraint)
  // If this is an intersection type (defaultMayEq=false), an object is dead if any of its components are dead (strongest constraint)
  for(list<CodeLocObjectPtr>::iterator cl=codeLocs.begin(); cl!=codeLocs.end(); cl++)
    if((*cl)->isLive(part) == defaultMayEq) return defaultMayEq;
  
  return !defaultMayEq;
}

// Allocates a copy of this object and returns a pointer to it
template <bool defaultMayEq>
CodeLocObjectPtr CombinedCodeLocObject<defaultMayEq>::copyCL() const
{ return boost::make_shared<CombinedCodeLocObject>(codeLocs); }

template <bool defaultMayEq>
std::string CombinedCodeLocObject<defaultMayEq>::str(std::string indent)
{
  ostringstream oss;
  oss << "["<<(defaultMayEq? "UnionCLO" : "IntersectCLO")<<": ";
  if(codeLocs.size()>1) oss << endl;
  for(list<CodeLocObjectPtr>::iterator cl=codeLocs.begin(); cl!=codeLocs.end(); ) {
    if(cl!=codeLocs.begin()) oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;";
    oss << (*cl)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;");
    cl++;
    if(cl!=codeLocs.end()) oss << endl;
  }
  oss << "]";
  
  return oss.str();
}

/* #######################
   ##### ValueObject ##### 
   ####################### */

ValueObjectPtr NULLValueObject;

bool ValueObject::mayEqual(AbstractObjectPtr o, PartPtr p)
{
  ValueObjectPtr vo = boost::dynamic_pointer_cast<ValueObject>(o);
  if(vo) return mayEqual(vo, p);
  else   return false;
}

bool ValueObject::mustEqual(AbstractObjectPtr o, PartPtr p)
{
  ValueObjectPtr vo = boost::dynamic_pointer_cast<ValueObject>(o);
  if(vo) return mustEqual(vo, p);
  else   return false;
}

// Returns true if this SgValueExp is convertible into a boolean
bool ValueObject::isValueBoolCompatible(boost::shared_ptr<SgValueExp> val)
{
  return isSgCharVal(val.get())                ||
         isSgBoolValExp(val.get())             ||
         isSgEnumVal(val.get())                ||
         isSgIntVal(val.get())                 ||
         isSgLongIntVal(val.get())             ||
         isSgLongLongIntVal(val.get())         ||
         isSgShortVal(val.get())               ||
         isSgUnsignedCharVal(val.get())        ||
         isSgUnsignedLongVal(val.get())        ||
         isSgUnsignedLongLongIntVal(val.get()) ||
         isSgUnsignedShortVal(val.get())       ||
         isSgWcharVal(val.get());
}

// Convert the value of the given SgValueExp, cast to a boolean
bool ValueObject::SgValue2Bool(boost::shared_ptr<SgValueExp> val)
{
  bool ret;
  if((isSgCharVal(val.get())                && (ret = isSgCharVal(val.get())->get_value())) || 
     (isSgBoolValExp(val.get())             && (ret = isSgBoolValExp(val.get())->get_value())) || 
     (isSgEnumVal(val.get())                && (ret = isSgEnumVal(val.get())->get_value())) ||
     (isSgIntVal(val.get())                 && (ret = isSgIntVal(val.get())->get_value())) || 
     (isSgLongIntVal(val.get())             && (ret = isSgLongIntVal(val.get())->get_value())) || 
     (isSgLongLongIntVal(val.get())         && (ret = isSgLongLongIntVal(val.get())->get_value())) || 
     (isSgShortVal(val.get())               && (ret = isSgShortVal(val.get())->get_value())) || 
     (isSgUnsignedCharVal(val.get())        && (ret = isSgUnsignedCharVal(val.get())->get_value())) || 
     (isSgUnsignedLongVal(val.get())        && (ret = isSgUnsignedLongVal(val.get())->get_value())) || 
     (isSgUnsignedLongLongIntVal(val.get()) && (ret = isSgUnsignedLongLongIntVal(val.get())->get_value())) || 
     (isSgUnsignedShortVal(val.get())       && (ret = isSgUnsignedShortVal(val.get())->get_value())) || 
     (isSgWcharVal(val.get())               && (ret = isSgWcharVal(val.get())->get_valueUL()))) {
    return ret;
  }
  ROSE_ASSERT(0);
}

// Returns true if this object is live at the given part and false otherwise.
// Values are always live.
bool ValueObject::isLive(PartPtr p) const
{ return true; }

// Allocates a copy of this object and returns a pointer to it
AbstractObjectPtr ValueObject::copyAO() const
{ return copyV(); }

// Returns true if the two SgValueExps correspond to the same value when cast to the given type (if t!=NULL)
bool ValueObject::equalValueExp(SgValueExp* e1, SgValueExp* e2, SgType* t)
{
  // Currently not handling type conversions
  ROSE_ASSERT(t==NULL);
  
  if(e1->variantT() != e2->variantT()) return false;
  
  if(isSgBoolValExp(e1))             { return isSgBoolValExp(e1)->get_value()             == isSgBoolValExp(e2)->get_value(); }
  if(isSgCharVal(e1))                { return isSgCharVal(e1)->get_value()                == isSgCharVal(e2)->get_value(); }
  if(isSgComplexVal(e1))             { return equalValueExp(isSgComplexVal(e1)->get_real_value(),      isSgComplexVal(e2)->get_real_value()) &&
                                              equalValueExp(isSgComplexVal(e1)->get_imaginary_value(), isSgComplexVal(e2)->get_imaginary_value()); }
  if(isSgDoubleVal(e1))              { return isSgDoubleVal(e1)->get_value()              == isSgDoubleVal(e2)->get_value(); }
  if(isSgEnumVal(e1))                { return isSgEnumVal(e1)->get_value()                == isSgEnumVal(e2)->get_value(); }
  if(isSgFloatVal(e1))               { return isSgFloatVal(e1)->get_value()               == isSgFloatVal(e2)->get_value(); }
  if(isSgIntVal(e1))                 { return isSgIntVal(e1)->get_value()                 == isSgIntVal(e2)->get_value(); }
  if(isSgLongDoubleVal(e1))          { return isSgLongDoubleVal(e1)->get_value()          == isSgLongDoubleVal(e2)->get_value(); }
  if(isSgLongIntVal(e1))             { return isSgLongIntVal(e1)->get_value()             == isSgLongIntVal(e2)->get_value(); }
  if(isSgLongLongIntVal(e1))         { return isSgLongLongIntVal(e1)->get_value()         == isSgLongLongIntVal(e2)->get_value(); }
  if(isSgShortVal(e1))               { return isSgShortVal(e1)->get_value()               == isSgShortVal(e2)->get_value(); }
  if(isSgStringVal(e1))              { return isSgStringVal(e1)->get_value()              == isSgStringVal(e2)->get_value(); }
  if(isSgWcharVal(e1))               { return isSgWcharVal(e1)->get_value()               == isSgWcharVal(e2)->get_value(); }
  if(isSgUnsignedCharVal(e1))        { return isSgUnsignedCharVal(e1)->get_value()        == isSgUnsignedCharVal(e2)->get_value(); }
  if(isSgUnsignedIntVal(e1))         { return isSgUnsignedIntVal(e1)->get_value()         == isSgUnsignedIntVal(e2)->get_value(); }
  if(isSgUnsignedLongLongIntVal(e1)) { return isSgUnsignedLongLongIntVal(e1)->get_value() == isSgUnsignedLongLongIntVal(e2)->get_value(); }
  if(isSgUnsignedLongVal(e1))        { return isSgUnsignedLongVal(e1)->get_value()        == isSgUnsignedLongVal(e2)->get_value(); }
  if(isSgUnsignedShortVal(e1))       { return isSgWcharVal(e1)->get_value()               == isSgUnsignedShortVal(e2)->get_value(); }
  if(isSgUpcMythread(e1))            { return isSgUpcMythread(e1)->get_value()            == isSgUpcMythread(e2)->get_value(); }
  if(isSgUpcThreads(e1))             { return isSgUpcThreads(e1)->get_value()             == isSgUpcThreads(e2)->get_value(); }
  
  ROSE_ASSERT(0);
}

/* ################################
   ##### CombinedValueObject ##### 
   ################################ */

template <bool defaultMayEq>
CombinedValueObject<defaultMayEq>::CombinedValueObject(ValueObjectPtr val) {
  vals.push_back(val);
}

template <bool defaultMayEq>
CombinedValueObject<defaultMayEq>::CombinedValueObject(const list<ValueObjectPtr>& vals) : vals(vals) {}

template <bool defaultMayEq>
void CombinedValueObject<defaultMayEq>::add(ValueObjectPtr val) {
  vals.push_back(val);
}

// Returns whether this object may/must be equal to o within the given Part p
// These methods are private to prevent analyses from calling them directly.
template <bool defaultMayEq>
bool CombinedValueObject<defaultMayEq>::mayEqual(ValueObjectPtr o, PartPtr part)
{
  boost::shared_ptr<CombinedValueObject> that = boost::dynamic_pointer_cast<CombinedValueObject>(o);
  // If the two combination objects include different numbers of ValueObjects, say that they may be equal since 
  // we can't be sure either way.
  if(vals.size() != that->vals.size()) return true;
  
  // Compare all the pairs of ValueObjects in vals and that.vals, returning defaultMayEq if any pair
  // returns defaultMayEq since we're looking for the tightest (if defaultMayEq=false) / loosest (if defaultMayEq=true) 
  // answer that any ValueObject in vals can give
  for(list<ValueObjectPtr>::iterator thisIt=vals.begin(), thatIt=that->vals.begin();
      thisIt!=vals.end();
      thisIt++, thatIt++)
  {
    if((*thisIt)->mayEqual(*thatIt, part) == defaultMayEq) return defaultMayEq;
  }
  
  return !defaultMayEq;
}

template <bool defaultMayEq>
bool CombinedValueObject<defaultMayEq>::mustEqual(ValueObjectPtr o, PartPtr part)
{
  boost::shared_ptr<CombinedValueObject> that = boost::dynamic_pointer_cast<CombinedValueObject>(o);
  // If the two combination  objects include different numbers of ValueObjects, say that they are not must equal since 
  // we can't be sure either way.
  if(vals.size() != that->vals.size()) return false;
  
  // Compare all the pairs of ValueObjects in vals and that.vals, returning !defaultMayEq if any pair
  // returns !defaultMayEqual since we're looking for the tightest answer that any ValueObject in vals can give
  for(list<ValueObjectPtr>::iterator thisIt=vals.begin(), thatIt=that->vals.begin();
      thisIt!=vals.end();
      thisIt++, thatIt++)
  {
    if((*thisIt)->mustEqual(*thatIt, part) == !defaultMayEq) return !defaultMayEq;
  }
  
  return defaultMayEq;
}

// Returns true if this ValueObject corresponds to a concrete value that is statically-known
template <bool defaultMayEq>
bool CombinedValueObject<defaultMayEq>::isConcrete()
{
  // The combined object is concrete if 
  // intersect (defaultMayEq=false) : any sub-value is concrete
  // union (defaultMayEq=true) : all the sub-values are concrete and have the same type and value
  
  // Intersection
  if(defaultMayEq==false) {
    for(list<ValueObjectPtr>::iterator v=vals.begin(); v!=vals.end(); v++) {
      if((*v)->isConcrete()) return true;
    }
    return false;
  // Union
  } else {
    // The union is not concrete if 
    for(list<ValueObjectPtr>::iterator v=vals.begin(); v!=vals.end(); v++) {
      /*Dbg::dbg << "CombinedValueObject<defaultMayEq>::isConcrete(), v="<<(*v)->str()<<" isConcrete="<<(*v)->isConcrete()<<endl;
      if((*v)->isConcrete()) {
        Dbg::dbg << "my type="<<(*v)->getConcreteType().get()->variantT()<<"="<<cfgUtils::SgNode2Str((*v)->getConcreteType().get())<<" begin type="<<(*vals.begin())->getConcreteType().get()->variantT()<<"="<<cfgUtils::SgNode2Str((*vals.begin())->getConcreteType().get())<<endl;
        if((*v)->getConcreteType().get()->variantT() == (*vals.begin())->getConcreteType().get()->variantT())
          Dbg::dbg << " ValueObject::equalValueExp((*v)->getConcreteValue().get(), (*vals.begin())->getConcreteValue().get())="<<ValueObject::equalValueExp((*v)->getConcreteValue().get(), (*vals.begin())->getConcreteValue().get())<<endl;
      }*/
         // Any sub-value is not concrete, OR
      if(!(*v)->isConcrete() || 
         // Any pair of sub-values have different types, OR
         (*v)->getConcreteType().get()->variantT() != (*vals.begin())->getConcreteType().get()->variantT() ||
         // Any pair of sub-values have different values
         !ValueObject::equalValueExp((*v)->getConcreteValue().get(), (*vals.begin())->getConcreteValue().get()))
      return false;
    }
    return true;
  }
}

// Returns the type of the concrete value (if there is one)
template <bool defaultMayEq>
boost::shared_ptr<SgType> CombinedValueObject<defaultMayEq>::getConcreteType()
{
  ROSE_ASSERT(isConcrete());
  
  return (*vals.begin())->getConcreteType();
}

// Returns the concrete value (if there is one) as an SgValueExp, which allows callers to use
// the normal ROSE mechanisms to decode it
template <bool defaultMayEq>
boost::shared_ptr<SgValueExp> CombinedValueObject<defaultMayEq>::getConcreteValue()
{
  ROSE_ASSERT(isConcrete());
  
  return (*vals.begin())->getConcreteValue();
}

// Allocates a copy of this object and returns a pointer to it
template <bool defaultMayEq>
ValueObjectPtr CombinedValueObject<defaultMayEq>::copyV() const
{ return boost::make_shared<CombinedValueObject>(vals); }

template <bool defaultMayEq>
std::string CombinedValueObject<defaultMayEq>::str(std::string indent)
{
  ostringstream oss;
  oss << "["<<(defaultMayEq? "UnionVO" : "IntersectVO")<<": ";
  if(vals.size()>1) oss << endl;
  for(list<ValueObjectPtr>::iterator v=vals.begin(); v!=vals.end(); ) {
    if(v!=vals.begin()) oss << indent << "&nbsp;&nbsp;&nbsp;&nbsp;";
    oss << (*v)->str(indent+"&nbsp;&nbsp;&nbsp;&nbsp;");
    v++;
    if(v!=vals.end()) oss << endl;
  }
  oss << "]";
  
  return oss.str();
}

// Create a function that uses examples of combined objects to force the compiler to generate these classes
static void exampleCombinedValueObjects2(ValueObjectPtr val, std::list<ValueObjectPtr> vals, IntersectValueObject& i, UnionValueObject& u, IntersectValueObject& i2, UnionValueObject& u2);
static void exampleCombinedValueObjects(ValueObjectPtr val, std::list<ValueObjectPtr> vals)
{
  IntersectValueObject exampleIntersectObject(val);
  UnionValueObject     exampleUnionObject(val);
  IntersectValueObject exampleIntersectObject2(vals);
  UnionValueObject     exampleUnionObject2(vals);
  exampleCombinedValueObjects2(val, vals, exampleIntersectObject, exampleUnionObject, exampleIntersectObject2, exampleUnionObject2);
}
static void exampleCombinedValueObjects2(ValueObjectPtr val, std::list<ValueObjectPtr> vals, IntersectValueObject& i, UnionValueObject& u, IntersectValueObject& i2, UnionValueObject& u2)
{
  exampleCombinedValueObjects(val, vals);
}
/* ############################
   ##### LabeledAggregate ##### 
   ############################ */

std::vector<boost::shared_ptr<LabeledAggregateField> > LabeledAggregate::getElements(PartPtr part) const 
{
  std::vector<boost::shared_ptr<LabeledAggregateField> > rt;
  cerr<<"Error. Direct call to base class's getElements() is not allowed."<<endl;
  ROSE_ASSERT (false);
  return rt;
}

size_t LabeledAggregate::fieldCount(PartPtr part)
{
  cerr<<"Error. Direct call to base class's filedCount() is not allowed."<<endl;
  ROSE_ASSERT (false);
  return 0;
}

/*
  bool LabeledAggregate:: operator == (const LabeledAggregate& o2) const
  {
    cerr<<"Error. Direct call to base class's operator == () is not allowed."<<endl;
    ROSE_ASSERT (false);
    return false;  
  }

  bool LabeledAggregate::operator < ( const LabeledAggregate& o2) const
  {
    cerr<<"Error. Direct call to base class's operator <() is not allowed."<<endl;
    ROSE_ASSERT (false);
    return false;  
  }
*/ 

/* #################################
   ##### LabeledAggregateField ##### 
   ################################# */

std::string LabeledAggregateField::getName()
{
 cerr<<"Error. Direct call to base class's getName() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return "";  
}

MemLocObjectPtr LabeledAggregateField::getField()
{

 cerr<<"Error. Direct call to base class's getField() is not allowed."<<endl;
 ROSE_ASSERT (false);
 MemLocObjectPtr p;
 return p;
}
size_t LabeledAggregateField::getIndex()
{

  cerr<<"Error. Direct call to base class's getIndex() is not allowed."<<endl;
  ROSE_ASSERT (false);
  return 0;
}

//std::string LabeledAggregateField::str(const string& indent)
// pretty print for the object
std::string LabeledAggregateField::str(std::string indent)
{
  
 cerr<<"Error. Direct call to base class's str() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return "";  
}

void LabeledAggregateField::setField(MemLocObjectPtr f)
{
  cerr<<"Error. Direct call to base class's setField() is not allowed."<<endl;
  ROSE_ASSERT (false);
}

void LabeledAggregateField::setParent(boost::shared_ptr<LabeledAggregate> p)
{
 cerr<<"Error. Direct call to base class's setParent() is not allowed."<<endl;
 ROSE_ASSERT (false);
}

boost::shared_ptr<LabeledAggregate> LabeledAggregateField::getParent()
{
  cerr<<"Error. Direct call to base class's getParent() is not allowed."<<endl;
  ROSE_ASSERT (false);
  boost::shared_ptr<LabeledAggregate> p;
  return p;
}

/* #######################
   ##### IndexVector ##### 
   ####################### */

//std::string IndexVector::str(const string& indent)
// pretty print for the object
std::string IndexVector::str(std::string indent)
{
 cerr<<"Error. Direct call to base class (IndexVector)'s str() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return "";  
}
bool IndexVector::mayEqual (IndexVectorPtr other, PartPtr p)
{
 cerr<<"Error. Direct call to base class (IndexVector)'s mayEqual() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return false;  
}
bool IndexVector::mustEqual (IndexVectorPtr other, PartPtr p)
{
 cerr<<"Error. Direct call to base class (IndexVector)'s mustEqual is not allowed."<<endl;
 ROSE_ASSERT (false);
 return false;  
}

/* #################
   ##### Array ##### 
   ################# */

MemLocObjectPtr Array::getElements(PartPtr part)
{
  cerr<<"Error. Direct call to base class (Array)'s getElements() is not allowed."<<endl;
  ROSE_ASSERT (false);
  MemLocObjectPtr p;
  return p;  
}

MemLocObjectPtr Array::getElements(IndexVectorPtr ai, PartPtr part)
{
  cerr<<"Error. Direct call to base class (Array)'s getElements(IndexVector* ai) is not allowed."<<endl;
  ROSE_ASSERT (false);
  MemLocObjectPtr p;
  return p;
}

size_t Array::getNumDims(PartPtr part)
{
  cerr<<"Error. Direct call to base class (Array)'s getNumDims( ) is not allowed."<<endl;
  ROSE_ASSERT (false);
  return 0;
}

MemLocObjectPtr Array::getDereference(PartPtr part)
{
  cerr<<"Error. Direct call to base class (Array)'s getDereference( ) is not allowed."<<endl;
  ROSE_ASSERT (false);
  MemLocObjectPtr p;
  return p;
}
/*
  bool Array:: operator == (const MemLocObject & o2) const
  {
    cerr<<"Error. Direct call to base class (Array)'s operator == () is not allowed."<<endl;
    ROSE_ASSERT (false);
    return false;  
  }

  bool Array:: operator  (const MemLocObject & o2) const
  {
    cerr<<"Error. Direct call to base class (Array)'s operator == () is not allowed."<<endl;
    ROSE_ASSERT (false);
    return false;  
  }
*/

/* ###################
   ##### Pointer ##### 
   ################### */

MemLocObjectPtr Pointer::getDereference(PartPtr part)
{
  cerr<<"Error. Direct call to base class (Pointer)'s getDereference( ) is not allowed."<<endl;
  ROSE_ASSERT (false);
  MemLocObjectPtr p;
  return p;
}

bool Pointer::equalPoints( const Pointer & that)
{
  cerr<<"Error. Direct call to base class (Pointer)'s equalPoints( ) is not allowed."<<endl;
  ROSE_ASSERT (false);
  return false;
}

}; // namespace dataflow
