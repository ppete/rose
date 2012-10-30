#ifndef ABSTRACT_OBJECT_H
#define ABSTRACT_OBJECT_H

#include "rose.h"
#include "AnalysisDebuggingUtils.h"
#include "partitions.h"
#include <string>
#include <cstring>
#include <vector>
#include <boost/enable_shared_from_this.hpp>

/*TODO
 *  ====
 *- There are five categories of MemLocObjects, each with its own API. When a client 
 *  calls composer->Expr2MemLoc(), how do they know which category of object they'll get?
 *  They can check what they get with MemLocObject::is*() but right now they have to 
 *  predict what they get based on the type of the SgNode they give to Expr2MemLoc().
 *  This is bad because 1. we haven't yet established an SgNode type -> MemLocObject 
 *  category mapping and 2. because even if we did it would be too long to keep track of.
 *  
 *  Also, we don't have a way for an analysis to implement just the Expr2MemLoc() for just
 *  one category and have the framework 1. detect this and 2. fill in the gaps for the 
 *  other categories.
 * 
 *- Currently analyses do not meaningfully implement LabeledAggregateField. In general,
 *  how can the framework verify this?
 */

/* GB 2012-09-02: DESIGN NOTE
 * All actions on and queries of AbstractObjects are done in the context of some PartEdge. This is manifested differently
 * in different scenarios.
 * AbstractObjects from prior analyses - pointers to these are used throughout client analyses and thus, they should
 *    not maintain a reference to a host PartEdge. Since they come from completed analyses it is sufficient for callers
 *    to pass a PartEdge into the call and for the response to be computed with respect to this PartEdge, based on the results
 *    of the prior analysis. For example, the liveness of a given MemLocObject at a given PartEdge can be determined
 *    by looking at the lattice left behind at that PartEdge by the live-dead analysis.
 * AbstractObjects being kept by current analysis - these are propagated in dataflow style throughout the CFG within
 *    a given analysis. The analysis' transfer functions should ensure that every time the meaning of an AbstractObject
 *    changes as a result of being propagated across PartEdges, this is reflected in the object's internal information 
 *    without maintaining an explicit dependence on the PartEdge. This, however, is not a strict requirement since there
 *    may be syntactic information relevant to the meaning of the object that requires a reference to the origin PartEdge.
 * Containers that include just objects from current analysis - like above, should maintain no reference to their 
 *    source PartEdge since it is not needed. Further, the typical use-case will be to have one copy of a container for 
 *    each PartEdge, meaning that they can maintain their identity without explicitly knowing the PartEdge
 * Containers that include some of both types of objects (prior and current) - there should be a separate instance of
 *    these containers for each PartEdge and each should maintain explicit reference to its host PartEdge. Thus, when it needs
 *    to provide the PartEdge to calls to functions within AbstractObjects from prior analyses, this PartEdge is always 
 *    available.
 */

/* GB 2012-10-22: DESIGN NOTE
 * When it comes to the structure of MemLocObjects (e.g. are they scalars, labeled aggregates, etc. and if so, what's 
 * their internal structure) we need to decide how much the reported structure can change across PartEdges. Can
 * a MemLocObject that was a Scalar in one PartEdge become an Array in another? If a Pointer dereferences to a given
 * MemLocObject in one PartEdge, must it do the same in every other? The decision for now is to make the choice of 
 * MemLocObject type (Scalar, FunctionName, LabeledAggregate, Array or Pointer) static in that once a MemLocObject is
 * created, its type is fixed and does not change from one PartEdge to another. All other aspects of a MemLocObject
 * can vary freely. Thus, methods such as MemLocObject::isScalar() do not take a PartEdge as an argument, whereas
 * methods such as LabeledAggregate::fieldCount() do.
 */

// ----------------------------
// ----- Abstract Objects -----
// ----------------------------

namespace dataflow {
// Root class of all abstract objects
class AbstractObject;
typedef boost::shared_ptr<AbstractObject> AbstractObjectPtr;
class AbstractObject : public printable
{
  public:
  // Returns whether this object may/must be equal to o within the given Part p
  virtual bool mayEqual(AbstractObjectPtr o, PartEdgePtr pedge)=0;
  virtual bool mustEqual(AbstractObjectPtr o, PartEdgePtr pedge)=0;
  
  // Returns true if this object is live at the given part and false otherwise
  virtual bool isLive(PartEdgePtr pedge) const=0;
  
  // Allocates a copy of this object and returns a pointer to it
  virtual AbstractObjectPtr copyAO() const=0;

  /* Don't have good idea how to represent a finite number of options 
  virtual bool isFiniteSet()=0;
  virtual set<AbstractObj> getValueSet()=0;*/
  
  //virtual std::string str(const std::string& indent)=0;
  
  // Variant of the str method that can produce information specific to the current Part.
  // Useful since AbstractObjects can change from one Part to another.
  virtual std::string strp(PartEdgePtr pedge, std::string indent="")
  { return str(indent); }
};


/* ########################
   ##### MemLocObject ##### 
   ######################## */

// Major types of abstract objects
class MemLocObject;
typedef boost::shared_ptr<MemLocObject> MemLocObjectPtr;
extern MemLocObjectPtr NULLMemLocObject;

class Scalar;
typedef boost::shared_ptr<Scalar> ScalarPtr;
class FunctionMemLoc;
typedef boost::shared_ptr<FunctionMemLoc> FunctionMemLocPtr;
class LabeledAggregate;
typedef boost::shared_ptr<LabeledAggregate> LabeledAggregatePtr;
class Array;
typedef boost::shared_ptr<Array> ArrayPtr;
class Pointer;
typedef boost::shared_ptr<Pointer> PointerPtr;

class MemLocObject : public AbstractObject, public boost::enable_shared_from_this<MemLocObject>
{ 
private:
  // Returns whether this object may/must be equal to o within the given Part p
  // These methods are private to prevent analyses from calling them directly.
  virtual bool mayEqualML(MemLocObjectPtr o, PartEdgePtr pedge)=0;
  virtual bool mustEqualML(MemLocObjectPtr o, PartEdgePtr pedge)=0;
  
public:
  // General version of mayEqual and mustEqual that implements may/must equality with respect to ExprObj
  // and uses the derived class' may/mustEqual check for all the other cases
  bool mayEqual(MemLocObjectPtr o, PartEdgePtr pedge);
  bool mustEqual(MemLocObjectPtr o, PartEdgePtr pedge);
  
  bool mayEqual(AbstractObjectPtr o, PartEdgePtr pedge);
  bool mustEqual(AbstractObjectPtr o, PartEdgePtr pedge);
  
  // Allocates a copy of this object and returns a pointer to it
  virtual MemLocObjectPtr copyML() const=0;
  AbstractObjectPtr copyAO() const
  { return copyML(); }
  
  /*static ScalarPtr isScalar(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<Scalar>(ml); }
  
  static FunctionMemLocPtr isFunctionMemLoc(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<FunctionMemLoc>(ml); }
  
  static LabeledAggregatePtr isLabeledAggregate(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<LabeledAggregate>(ml); }
  
  static ArrayPtr isArray(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<Array>(ml); }
  
  static PointerPtr isPointer(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<Pointer>(ml); }*/

  virtual ScalarPtr isScalar()
  { return boost::dynamic_pointer_cast<Scalar>(shared_from_this()); }

  virtual FunctionMemLocPtr isFunctionMemLoc()
  { return boost::dynamic_pointer_cast<FunctionMemLoc>(shared_from_this()); }

  virtual LabeledAggregatePtr isLabeledAggregate()
  { return boost::dynamic_pointer_cast<LabeledAggregate>(shared_from_this()); }

  virtual ArrayPtr isArray()
  { return boost::dynamic_pointer_cast<Array>(shared_from_this()); }

  virtual PointerPtr isPointer()
  { return boost::dynamic_pointer_cast<Pointer>(shared_from_this()); }
};

// Holds a pair of MemLocObjectPtr (one for the expression object and another for the object in memory) and provides 
// basic functionality to accessing them easily
class MemLocObjectPtrPair : public printable
{
public:
  // It is always true that one or both of expr and mem are non-null
  MemLocObjectPtr expr;
  MemLocObjectPtr mem;
  MemLocObjectPtrPair(MemLocObjectPtr expr, MemLocObjectPtr mem): expr(expr), mem(mem)
  {}
  
  MemLocObjectPtrPair(const MemLocObjectPtrPair& that): expr(that.expr), mem(that.mem)
  {}
  
  // Returns whether this object may/must be equal to o within the given Part p
  bool mayEqual(MemLocObjectPtrPair that, PartEdgePtr pedge);
  bool mustEqual(MemLocObjectPtrPair that, PartEdgePtr pedge);
  
  // Returns a copy of this object
  MemLocObjectPtrPair copyML() const;
  
  bool isScalar();
  bool isFunctionMemLoc();
  bool isLabeledAggregate();
  bool isArray();
  bool isPointer();
  
  // pretty print for the object
  std::string str(std::string indent="");
  
  // Variant of the str method that can produce information specific to the current Part.
  // Useful since AbstractObjects can change from one Part to another.
  std::string strp(PartEdgePtr pedge, std::string indent="");
};

// The combination of multiple MemLocObjects. Maintains multiple MemLocObjects and responds to
//   API calls with the most or least accurate response that its constituent objects return, depending
//   on the value of the template parameter defaultMayEq (the default value that mayEqual would return
//   if any constituent MemLocObject returns this value).
// For practical purposes analyses should ensure that different instances of IntersectMemLocObject 
//   are only compared if they include the same types of MemLocObjects in the same order. Otherwise, 
//   the comparisons will be uselessly inaccurate.
template <bool defaultMayEq>
class CombinedMemLocObject : public virtual MemLocObject
{
  public:
  std::list<MemLocObjectPtr> memLocs;
  
  public:
  CombinedMemLocObject(MemLocObjectPtr memLoc);
  CombinedMemLocObject(const std::list<MemLocObjectPtr>& memLocs);
  
  public:
  // Creates a new CombinedMemLocObject. If all the sub-objects have a given type (Scalar, FunctionMemLoc, 
  // LabeledAggregate, Array or Pointer), the created CombinedMemLocObject has hte same type. Otherwise, the
  // created CombinedMemLocObject is an instance of the generic CombinedMemLocObject class.
  static boost::shared_ptr<CombinedMemLocObject<defaultMayEq> > create(MemLocObjectPtr memLoc);
  static boost::shared_ptr<CombinedMemLocObject<defaultMayEq> > create(const std::list<MemLocObjectPtr>& memLocs);
  
  void add(MemLocObjectPtr memLoc);
  
  // Returns whether this object may/must be equal to o within the given Part p
  bool mayEqualML(MemLocObjectPtr o, PartEdgePtr pedge);
  bool mustEqualML(MemLocObjectPtr o, PartEdgePtr pedge);
  
  // Allocates a copy of this object and returns a pointer to it
  MemLocObjectPtr copyML() const;
  
  // Returns true if this object is live at the given part and false otherwise
  bool isLive(PartEdgePtr pedge) const;
  
  std::string str(std::string indent="");
};
typedef CombinedMemLocObject<false> IntersectMemLocObject;
typedef boost::shared_ptr<IntersectMemLocObject> IntersectMemLocObjectPtr;
typedef CombinedMemLocObject<true> UnionMemLocObject;
typedef boost::shared_ptr<UnionMemLocObject> UnionMemLocObjectPtr;



/* #########################
   ##### CodeLocObject ##### 
   ######################### */

class CodeLocObject;
typedef boost::shared_ptr<CodeLocObject> CodeLocObjectPtr;
extern CodeLocObjectPtr NULLCodeLocObject;

class CodeLocObject : public AbstractObject
{ 
  public:
  // Returns whether this object may/must be equal to o within the given Part p
  virtual bool mayEqualCL(CodeLocObjectPtr o, PartEdgePtr pedge)=0;
  virtual bool mustEqualCL(CodeLocObjectPtr o, PartEdgePtr pedge)=0;
  
  // General version of mayEqual and mustEqual that implements may/must equality with respect to ExprObj
  // and uses the derived class' may/mustEqual check for all the other cases
  // GREG: Currently nothing interesting here since we don't support ExprObjs for CodeLocObjects
  bool mayEqual(CodeLocObjectPtr o, PartEdgePtr pedge)
  {
    return mayEqualCL(o, pedge);
  }
  bool mustEqual(CodeLocObjectPtr o, PartEdgePtr pedge)
  {
    return mustEqualCL(o, pedge);
  }
  
  bool mayEqual(AbstractObjectPtr o, PartEdgePtr pedge)
  {
    CodeLocObjectPtr co = boost::dynamic_pointer_cast<CodeLocObject>(o);
    if(co) return mayEqual(co, pedge);
    else   return false;
  }
  
  bool mustEqual(AbstractObjectPtr o, PartEdgePtr pedge)
  {
    CodeLocObjectPtr co = boost::dynamic_pointer_cast<CodeLocObject>(o);
    if(co) return mustEqual(co, pedge);
    else   return false;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  virtual CodeLocObjectPtr copyCL() const=0;
  AbstractObjectPtr copyAO() const
  { return copyCL(); }
};

// Holds a pair of CodeLocObjectPtr (one for the expression object and another for the object in memory) and provides 
// basic functionality to accessing them easily
class CodeLocObjectPtrPair : public printable
{
public:
  CodeLocObjectPtr expr;
  CodeLocObjectPtr mem;
  CodeLocObjectPtrPair(CodeLocObjectPtr expr, CodeLocObjectPtr mem): expr(expr), mem(mem)
  {}
  
  CodeLocObjectPtrPair(const CodeLocObjectPtrPair& that): expr(that.expr), mem(that.mem)
  {}
  
  // Returns whether this object may/must be equal to o within the given Part p
  bool mayEqual(CodeLocObjectPtrPair that, PartEdgePtr pedge);
  bool mustEqual(CodeLocObjectPtrPair that, PartEdgePtr pedge);
  
  // Returns a copy of this object
  CodeLocObjectPtrPair copyCL() const;
  
  // pretty print for the object
  std::string str(std::string indent="");
  
  // Variant of the str method that can produce information specific to the current Part.
  // Useful since AbstractObjects can change from one Part to another.
  std::string strp(PartEdgePtr pedge, std::string indent="");
};

// The combination of multiple CodeLocObjects. Maintains multiple CodeLocObjects and responds to
//   API calls with the most or least accurate response that its constituent objects return, depending
//   on the value of the template parameter defaultMayEq (the default value that mayEqual would return
//   if any constituent MemLocObject returns this value).
// For practical purposes analyses should ensure that different instances of IntersectCodeLocObject 
//   are only compared if they include the same types of CodeLocObjects in the same order. Otherwise, 
//   the comparisons will be uselessly inaccurate.
template <bool defaultMayEq>
class CombinedCodeLocObject: public CodeLocObject
{
  public:
  std::list<CodeLocObjectPtr> codeLocs;
  
  CombinedCodeLocObject(CodeLocObjectPtr codeLoc);
  CombinedCodeLocObject(const std::list<CodeLocObjectPtr>& codeLocs);
  
  void add(CodeLocObjectPtr codeLoc);
  
  // Returns whether this object may/must be equal to o within the given Part p
  // These methods are private to prevent analyses from calling them directly.
  bool mayEqualCL(CodeLocObjectPtr o, PartEdgePtr pedge);
  bool mustEqualCL(CodeLocObjectPtr o, PartEdgePtr pedge);
  
  // Returns true if this object is live at the given part and false otherwise
  bool isLive(PartEdgePtr pedge) const;
  
  // Allocates a copy of this object and returns a pointer to it
  CodeLocObjectPtr copyCL() const;
  
  std::string str(std::string indent="");
};
typedef CombinedCodeLocObject<false> IntersectCodeLocObject;
typedef boost::shared_ptr<IntersectCodeLocObject> IntersectCodeLocObjectPtr;
typedef CombinedCodeLocObject<true> UnionCodeLocObject;
typedef boost::shared_ptr<UnionCodeLocObject> UnionCodeLocObjectPtr;

/* #######################
   ##### ValueObject ##### 
   ####################### */

class ValueObject;
typedef boost::shared_ptr<ValueObject> ValueObjectPtr;
extern ValueObjectPtr NULLValueObject;

class ValueObject : public AbstractObject
{ 
  public:
  // Returns whether this object may/must be equal to o within the given Part p
  virtual bool mayEqual(ValueObjectPtr o, PartEdgePtr pedge)=0;
  virtual bool mustEqual(ValueObjectPtr o, PartEdgePtr pedge)=0;
  
  // Returns true if this ValueObject corresponds to a concrete value that is statically-known
  virtual bool isConcrete()=0;
  // Returns the type of the concrete value (if there is one)
  virtual SgType* getConcreteType()=0;
  // Returns the concrete value (if there is one) as an SgValueExp, which allows callers to use
  // the normal ROSE mechanisms to decode it
  virtual boost::shared_ptr<SgValueExp> getConcreteValue()=0;
  
  // Returns true if this SgValueExp is convertible into a boolean
  static bool isValueBoolCompatible(boost::shared_ptr<SgValueExp> val);
  
  // Convert the value of the given SgValueExp, cast to a boolean
  static bool SgValue2Bool(boost::shared_ptr<SgValueExp> val);
  
  // Returns true if the two SgValueExps correspond to the same value when cast to the given type (if t!=NULL)
  static bool equalValueExp(SgValueExp* e1, SgValueExp* e2, SgType* t=NULL);
  
  // GB 2012-09-26 : Do we need to have AbstractTypeObjects to represent uncertainty about the type?
  //                 How can we support type uncertainly for MemLocObjects?
  
  bool mayEqual(AbstractObjectPtr o, PartEdgePtr pedge);
  bool mustEqual(AbstractObjectPtr o, PartEdgePtr pedge);
  
  // Returns true if this object is live at the given part and false otherwise.
  // Values are always live.
  bool isLive(PartEdgePtr pedge) const;
  
  // Allocates a copy of this object and returns a pointer to it
  virtual ValueObjectPtr copyV() const=0;
  AbstractObjectPtr copyAO() const;
};

// The combination of multiple ValueObjects. Maintains multiple ValueObjects and responds to
//   API calls with the most or least accurate response that its constituent objects return, depending
//   on the value of the template parameter defaultMayEq (the default value that mayEqual would return
//   if any constituent ValueObject returns this value).
// For practical purposes analyses should ensure that different instances of IntersectValueObject 
//   are only compared if they include the same types of ValueObjects in the same order. Otherwise, 
//   the comparisons will be uselessly inaccurate.
template <bool defaultMayEq>
class CombinedValueObject : public ValueObject
{
  public:
  std::list<ValueObjectPtr> vals;
  
  CombinedValueObject(ValueObjectPtr val);
  CombinedValueObject(const std::list<ValueObjectPtr>& vals);
  
  void add(ValueObjectPtr val);
  
  // Returns whether this object may/must be equal to o within the given Part p
  // These methods are private to prevent analyses from calling them directly.
  bool mayEqual(ValueObjectPtr o, PartEdgePtr pedge);
  bool mustEqual(ValueObjectPtr o, PartEdgePtr pedge);
  
  // Returns true if this ValueObject corresponds to a concrete value that is statically-known
  bool isConcrete();
  // Returns the type of the concrete value (if there is one)
  SgType* getConcreteType();
  // Returns the concrete value (if there is one) as an SgValueExp, which allows callers to use
  // the normal ROSE mechanisms to decode it
  boost::shared_ptr<SgValueExp> getConcreteValue();
  
  // Allocates a copy of this object and returns a pointer to it
  ValueObjectPtr copyV() const;
  
  std::string str(std::string indent="");
};
typedef CombinedValueObject<false> IntersectValueObject;
typedef boost::shared_ptr<IntersectValueObject> IntersectValueObjectPtr;
typedef CombinedValueObject<true> UnionValueObject;
typedef boost::shared_ptr<UnionValueObject> UnionValueObjectPtr;

/* ###########################################
   ##### Specific Types of MemLocObjects ##### 
   ########################################### */

//memory object that has no internal structure
class Scalar : public virtual MemLocObject
{
 public:
   // Equality relations:
   // Returns true if this object and that object may/must refer to the same scalar memory object.
   //virtual bool operator == (const Scalar& that) const;
   // Total order relations (implemented by interface):
   // Comparison operator to make it possible to provide a total order among all scalar objects.
   //virtual bool operator < (const Scalar& that) const; 
};
typedef boost::shared_ptr<Scalar> ScalarPtr;

// memory object to model function objects in memory
class FunctionMemLoc: public virtual MemLocObject
{
public:  
 
};
typedef boost::shared_ptr<FunctionMemLoc> FunctionMemLocPtr;

class LabeledAggregate;
typedef boost::shared_ptr<LabeledAggregate> LabeledAggregatePtr;
class LabeledAggregateField;
typedef boost::shared_ptr<LabeledAggregateField> LabeledAggregateFieldPtr;
class LabeledAggregateField
{
 public:
   virtual std::string getName(PartEdgePtr pedge); // field name
   virtual size_t getIndex(PartEdgePtr pedge); // The field's index within its parent object. The first field has index 0.

   virtual MemLocObjectPtr getField(PartEdgePtr pedge); // Pointer to an abstract description of the field
   //virtual void setField(MemLocObjectPtr f); // Pointer to an abstract description of the field

   virtual LabeledAggregatePtr getParent(PartEdgePtr pedge); // the parent obj this field belongs to
   //virtual void setParent(LabeledAggregatePtr p) ; // the parent obj this field belongs to

   //virtual std::string str(const std::string& indent); // pretty print for the object
   virtual std::string str(std::string indent=""); // pretty print for the object
   
   // Variant of the str method that can produce information specific to the current Part.
  // Useful since AbstractObjects can change from one Part to another.
  virtual std::string strp(PartEdgePtr pedge, std::string indent="")
  { return str(indent); }
};


// a memory object that contains a finite number of explicitly labeled memory objects, such as structs, classes and bitfields
class LabeledAggregate: public virtual MemLocObject
{
 public:
   // number of fields
   virtual size_t fieldCount(PartEdgePtr pedge);

   // Returns a list of field
   virtual std::list<LabeledAggregateFieldPtr> getElements(PartEdgePtr pedge) const; 
   // Returns true if this object and that object may/must refer to the same labeledAggregate memory object.
   //virtual bool operator == (const LabeledAggregate& that) const;
   //Total order relations (implemented by interface)
   //virtual bool operator < (const LabeledAggregate& that) const;
};

/*GB: Deprecating IndexSets and replacing them with ValueObjects.
//! A set of index values, could only have constant integer values or unknown values in this implementation.
class IndexSet : public printable
{
  public:
    enum Index_type {
      Integer_type = 0,
      Unknown_type 
    };

    Index_type getType() const {return type; };

    size_t getSize() {return 1;}; // Simple thing first

    IndexSet (Index_type t):type(t){} 
    virtual bool operator== (const IndexSet & other) const;
    virtual bool operator!= (const IndexSet & other) const;
    virtual bool mayEqual (const IndexSet & other, const Part& p)  const ;
    virtual bool mustEqual (const IndexSet & other, const Part& p) const ;
    virtual ~IndexSet();
    
    virtual std::string str(std::string indent)=0; // pretty print for the object
    //  cerr<<"Error. Direct call to base class (IndexSet)'s str() is not allowed."<<endl;
    //  assert (false);
    //  return "";
    // }
  private:
    Index_type type;
};
*/

// represents d-dimensional integral vectors. It encapsulates a variety of abstract representations for such vectors 
// such as polyhedral constraints and strided indexes.
// TODO: we support a single multi-dimensional index for now
class IndexVector;
typedef boost::shared_ptr<IndexVector> IndexVectorPtr;
class IndexVector
{
 public:
   // the index vector's length
   size_t getSize(PartEdgePtr pedge);
   //virtual std::string str(const std::string& indent);
   virtual std::string str(std::string indent); // pretty print for the object
   // equal operator
   virtual bool mayEqual (IndexVectorPtr other, PartEdgePtr pedge);
   virtual bool mustEqual (IndexVectorPtr other, PartEdgePtr pedge);
};

#if 0 // Still not clear if users will get confused by this class
// A class to summarize overlapped semantics for C pointers and Arrays
// Recommended to be used in C/C++ where pointers and arrays sometimes can be used interchangeably. 
class PointerOrArray: public MemLocObject
{
 public:
 // Array side of interfaces ---------
   // Returns a memory object that corresponds to all the elements in the given array
   virtual MemLocObjectPtr getElements();
   // Returns the memory object that corresponds to the elements described by the given abstract index, 
   // which represents one or more indexes within the array
   virtual MemLocObjectPtr getElements(IndexVector* ai);

   // number of dimensions of the array
   virtual size_t getNumDims();

// Pointer side of interfaces ---------
    // used for a pointer to non-array
   virtual MemLocObjectPtr getDereference () const;
 
   //virtual bool operator == (const ObjSet & that) const;
   //virtual bool operator < (const ObjSet & that) const;
};
#endif 
// Some programming languages don't have the concept of pointers. We provide explicit support for Array
class Array: public virtual MemLocObject
{
 public:
   // Returns a memory object that corresponds to all the elements in the given array
   virtual MemLocObjectPtr getElements(PartEdgePtr pedge);
   // Returns the memory object that corresponds to the elements described by the given abstract index, 
   // which represents one or more indexes within the array
   virtual MemLocObjectPtr getElements(IndexVectorPtr ai, PartEdgePtr pedge) ;

   // number of dimensions of the array
   virtual size_t getNumDims(PartEdgePtr pedge);

   //--- pointer like semantics
   // support dereference of array object, similar to the dereference of pointer
   // Return the element object: array[0]
   virtual MemLocObjectPtr getDereference(PartEdgePtr pedge);
   //virtual bool operator == (const ObjSet & that) const;
   //virtual bool operator < (const ObjSet & that) const;
};

class Pointer: public virtual MemLocObject
{
 public:
   virtual MemLocObjectPtr getDereference(PartEdgePtr pedge) ;
   // Returns true if this object and that object may/must refer to the same pointer memory object.
   //virtual bool operator == (const Pointer & that) const;
   //virtual bool operator < (const Pointer & that) const;
   //
   //--- array like semantics
    // Returns a memory object that corresponds to all the elements in the given array
   //virtual MemLocObject* getElements() ;
   // which represents one or more indexes within the array
   //virtual MemLocObject* getElements(IndexVector* ai) ;
   // number of dimensions of the array
   //virtual size_t getNumDims() ;  
};

/* ##################################################
   ##### Specific Types of CombinedMemLocObject ##### 
   ################################################## */

//memory object that has no internal structure
template <bool defaultMayEq>
class CombinedScalar : public virtual CombinedMemLocObject<defaultMayEq>, public virtual Scalar
{
  /*private:
  CombinedScalar(const std::list<MemLocObjectPtr>& memLocs) : CombinedMemLocObject<defaultMayEq>(memLocs) {}
  
  public:
  // Creates a new CombinedScalar when called by CombinedMemLocObject::create. It is assumed that all the 
  // sub-objects have type Scalar.
  static boost::shared_ptr<CombinedScalar<defaultMayEq> > create(const std::list<MemLocObjectPtr>& memLocs, PartEdgePtr pedge)
  { return boost::make_shared<CombinedScalar<defaultMayEq> >(memLocs); }*/
  public:
  CombinedScalar(const std::list<MemLocObjectPtr>& memLocs);
  
  std::string str(std::string indent); // pretty print for the object
  std::string strp(PartEdgePtr pedge, std::string indent="");
};

// memory object to model function objects in memory
template <bool defaultMayEq>
class CombinedFunctionMemLoc: public virtual CombinedMemLocObject<defaultMayEq>, public virtual FunctionMemLoc
{
  /*private:
  CombinedFunctionMemLoc(const std::list<MemLocObjectPtr>& memLocs) : CombinedMemLocObject<defaultMayEq>(memLocs) {}
  public:
  // Creates a new CombinedFunctionMemLoc when called by CombinedMemLocObject::create. It is assumed that all the 
  // sub-objects have type FunctionMemLoc.
  static boost::shared_ptr<CombinedFunctionMemLoc<defaultMayEq> > create(const std::list<MemLocObjectPtr>& memLocs, PartEdgePtr pedge)
  { return boost::make_shared<CombinedFunctionMemLoc<defaultMayEq> >(memLocs); }*/
  public:
  CombinedFunctionMemLoc(const std::list<MemLocObjectPtr>& memLocs);
  
  std::string str(std::string indent); // pretty print for the object
  std::string strp(PartEdgePtr pedge, std::string indent="");
};

template <bool defaultMayEq>
class CombinedLabeledAggregateField : public LabeledAggregateField
{
  private:
  //std::string name;  // This field's string name
  //size_t index; // This field's index
  //boost::shared_ptr<CombinedMemLocObject<defaultMayEq> > field; // The combined object that includes all of the sub-fields
  // List of sub-fields of this combined field
  std::list<LabeledAggregateFieldPtr> fields;
  //LabeledAggregatePtr parent; // The Labeled Aggregate that contains this field
  //std::string strRep; // this object's string representation
  
  /*CombinedLabeledAggregateField(std::string name, size_t index, std::list<LabeledAggregateFieldPtr> fields, //boost::shared_ptr<CombinedMemLocObject<defaultMayEq> > field, 
                                LabeledAggregatePtr parent);*/
  
  public:
  /*
  // Creates a new CombinedLabeledAggregateField when called by createCombinedLabeledAggregate(). It is assumed that all the 
  // sub-objects have type LabeledAggregateField. The function returns a CombinedLabeledAggregate if they also 
  // have the same internal structure and a NULL shared_ptr otherwise.
  static boost::shared_ptr<CombinedLabeledAggregateField<defaultMayEq> > create(
                                          const std::list<LabeledAggregateFieldPtr>& fields, 
                                          LabeledAggregatePtr parent, PartEdgePtr pedge);*/
  
  CombinedLabeledAggregateField(const std::list<LabeledAggregateFieldPtr>& fields);
  
  public:
  std::string getName(PartEdgePtr pedge); // field name
  size_t getIndex(PartEdgePtr pedge); // The field's index within its parent object. The first field has index 0.

  MemLocObjectPtr getField(PartEdgePtr pedge); // Pointer to an abstract description of the field

  LabeledAggregatePtr getParent(PartEdgePtr pedge); // the parent obj this field belongs to

  std::string strp(PartEdgePtr pedge, std::string indent="");
  std::string str(std::string indent); // pretty print for the object
};

// a memory object that contains a finite number of explicitly labeled memory objects, such as structs, classes and bitfields
template <bool defaultMayEq>
class CombinedLabeledAggregate: public virtual CombinedMemLocObject<defaultMayEq>, public virtual LabeledAggregate
{
  private:
  /*int combinedFieldCount;
  std::list<boost::shared_ptr<CombinedLabeledAggregateField<defaultMayEq> > > combinedFields;
  std::string strRep;
  
  CombinedLabeledAggregate(size_t combinedFieldCount, 
                           std::list<boost::shared_ptr<CombinedLabeledAggregateField<defaultMayEq> > > combinedFields,
                           std::string strRep);*/
  public:
  // Creates a new CombinedLabeledAggregate when called by CombinedMemLocObject::create. It is assumed that all the 
  // sub-objects have type LabeledAggregate. The function returns a CombinedLabeledAggregate if they also 
  // have the same internal structure and a generic CombinedMemLocObject instance otherwise.
  //static boost::shared_ptr<CombinedMemLocObject<defaultMayEq> > create(const std::list<MemLocObjectPtr>& memLocs, PartEdgePtr pedge);
    
  std::list<LabeledAggregatePtr> labAggrs;
  CombinedLabeledAggregate(const std::list<MemLocObjectPtr>& memLocs);
  
  // Number of fields
  size_t fieldCount(PartEdgePtr pedge);

  // Returns a list of field
  std::list<LabeledAggregateFieldPtr> getElements(PartEdgePtr pedge) const; 
  
  std::string strp(PartEdgePtr pedge, std::string indent="");
  std::string str(std::string indent); // pretty print for the object
};

// GB 2012-10-19 - It doesn't appear that we need CombinedIndexVectors since the IndexVectors passed to getElements()
//                 are going to be CombinedValues, not CombinedIndexVectors
/*
// represents d-dimensional integral vectors. It encapsulates a variety of abstract representations for such vectors 
// such as polyhedral constraints and strided indexes.
// TODO: we support a single multi-dimensional index for now
template <bool defaultMayEq>
class CombinedIndexVector
{
  private:
  std::list<IndexVectorPtr> ivectors;
  size_t combinedSize;
  
  CombinedIndexVector(const std::list<IndexVectorPtr>& ivectors, size_t combinedSize);
  
  public:
  // Creates a new CombinedIndexVector when called by createCombinedArray. It is assumed that all the 
  // sub-objects have type CombinedIndexVector. The function returns a CombinedIndexVector if they also 
  // have the same internal structure and NULL otherwise.
  boost::shared_ptr<CombinedIndexVector<defaultMayEq> > createCombinedIndexVector(const std::list<IndexVectorPtr>& ivectors);
    
   // the index vector's length
   size_t getSize();
   
   // pretty print for the object
   std::string str(std::string indent); 
   
   // equal operator
   bool mayEqual (IndexVectorPtr other, PartEdgePtr pedge);
   bool mustEqual (IndexVectorPtr other, PartEdgePtr pedge);
};*/

// Some programming languages don't have the concept of pointers. We provide explicit support for Array
template <bool defaultMayEq>
class CombinedArray: public virtual CombinedMemLocObject<defaultMayEq>, public virtual Array
{
  private:
  //size_t combinedDims;
  std::list<ArrayPtr> arrays;
  
  //CombinedArray(size_t combinedDims, const std::list<MemLocObjectPtr>& arrays);
  
  public:
  /*// Creates a new CombinedArray when called by CombinedMemLocObject::create. It is assumed that all the 
  // sub-objects have type Array. The function returns a CombinedArray if they also 
  // have the same internal structure and a generic CombinedMemLocObject instance otherwise.
  static boost::shared_ptr<CombinedMemLocObject<defaultMayEq> > create(const std::list<MemLocObjectPtr>& memLocs, PartEdgePtr pedge);*/
    
  CombinedArray(const std::list<MemLocObjectPtr>& memLocs);
  
  // Returns a memory object that corresponds to all the elements in the given array
  MemLocObjectPtr getElements(PartEdgePtr pedge);
  // Returns the memory object that corresponds to the elements described by the given abstract index, 
  // which represents one or more indexes within the array
  MemLocObjectPtr getElements(IndexVectorPtr ai, PartEdgePtr pedge) ;

  // number of dimensions of the array
  size_t getNumDims(PartEdgePtr pedge);

  //--- pointer like semantics
  // support dereference of array object, similar to the dereference of pointer
  // Return the element object: array[0]
  MemLocObjectPtr getDereference(PartEdgePtr pedge);
  
  std::string strp(PartEdgePtr pedge, std::string indent="");
  std::string str(std::string indent); // pretty print for the object
};

template <bool defaultMayEq>
class CombinedPointer: public virtual CombinedMemLocObject<defaultMayEq>, public virtual Pointer
{
  std::list<PointerPtr> pointers;
  /*private:
  CombinedPointer(const std::list<MemLocObjectPtr>& memLocs);
 
  public:
  // Creates a new CombinedPointer when called by CombinedMemLocObject::create. It is assumed that all the 
  // sub-objects have type Pointer.
  static boost::shared_ptr<CombinedPointer<defaultMayEq> > create(const std::list<MemLocObjectPtr>& memLocs, PartEdgePtr pedge);*/
  public:
  CombinedPointer(const std::list<MemLocObjectPtr>& memLocs);
  
  MemLocObjectPtr getDereference(PartEdgePtr pedge);
  
  std::string strp(PartEdgePtr pedge, std::string indent="");
  std::string str(std::string indent); // pretty print for the object
};


}; // namespace dataflow

#endif
