#include "abstract_object.h"
#include "stx_analysis.h"
#include <iostream>

using namespace std;

namespace dataflow
{

/* ########################
   ##### MemLocObject ##### 
   ######################## */

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
