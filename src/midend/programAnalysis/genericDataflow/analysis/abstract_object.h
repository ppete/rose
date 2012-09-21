#ifndef ABSTRACT_OBJECT_H
#define ABSTRACT_OBJECT_H

#include "rose.h"
#include "AnalysisDebuggingUtils.h"
#include "partitions.h"
#include <string>
#include <cstring>
#include <vector>

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
 * All actions on and queries of AbstractObjects are done in the context of some Part. This is manifested differently
 * in different scenarios.
 * AbstractObjects from prior analyses - pointers to these are used throughout client analyses and thus, they should
 *    not maintain a reference to a host Part. Since they come from completed analyses it is sufficient for callers
 *    to pass a Part into the call and for the response to be computed with respect to this part, based on the results
 *    of the prior analysis. For example, the liveness of a given MemLocObject at a given Part can be determined
 *    by looking at the lattice left behind at that Part by the live-dead analysis.
 * AbstractObjects being kept by current analysis - these are propagated in dataflow style throughout the CFG within
 *    a given analysis. The analysis' transfer functions should ensure that every time the meaning of an AbstractObject
 *    changes as a result of being propagated across Parts, this is reflected in the object's internal information 
 *    without maintaining an explicit dependence on the Part. This, however, is not a strict requirement since there
 *    may be syntactic information relevant to the meaning of the object that requires a reference to the origin Part.
 * Containers that include just objects from current analysis - like above, should maintain no reference to their 
 *    source part since it is not needed. Further, the typical use-case will be to have one copy of a container for 
 *    each Part, meaning that they can maintain their identity without explicitly knowing the part
 * Containers that include some of both types of objects (prior and current) - there should be a separate instance of
 *    these containers for each Part and each should maintain explicit reference to its host part. Thus, when it needs
 *    to provide the part to calls to functions within AbstractObjects from prior analyses, this part is always 
 *    available.
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
  virtual bool mayEqual(AbstractObjectPtr o, PartPtr p)=0;
  virtual bool mustEqual(AbstractObjectPtr o, PartPtr p)=0;
  
  // Returns true if this object is live at the given part and false otherwise
  virtual bool isLive(PartPtr p) const=0;
  
  // Allocates a copy of this object and returns a pointer to it
  virtual AbstractObjectPtr copyAO() const=0;

  /* Don't have good idea how to represent a finite number of options 
  virtual bool isFiniteSet()=0;
  virtual set<AbstractObj> getValueSet()=0;*/
  
  //virtual std::string str(const std::string& indent)=0;
  
  // Variant of the str method that can produce information specific to the current Part.
  // Useful since AbstractObjects can change from one Part to another.
  virtual std::string strp(PartPtr part, std::string indent="")
  { return str(indent); }
};


// Major types of abstract objects
class MemLocObject;
typedef boost::shared_ptr<MemLocObject> MemLocObjectPtr;

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

class MemLocObject : public AbstractObject
{ 
private:
  // Returns whether this object may/must be equal to o within the given Part p
  // These methods are private to prevent analyses from calling them directly.
  virtual bool mayEqualML(MemLocObjectPtr o, PartPtr p)=0;
  virtual bool mustEqualML(MemLocObjectPtr o, PartPtr p)=0;
  
public:
  // General version of mayEqual and mustEqual that implements may/must equality with respect to ExprObj
  // and uses the derived class' may/mustEqual check for all the other cases
  bool mayEqual(MemLocObjectPtr o, PartPtr p);
  bool mustEqual(MemLocObjectPtr o, PartPtr p);
  
  bool mayEqual(AbstractObjectPtr o, PartPtr p);
  bool mustEqual(AbstractObjectPtr o, PartPtr p);
  
  // Allocates a copy of this object and returns a pointer to it
  virtual MemLocObjectPtr copyML() const=0;
  AbstractObjectPtr copyAO() const
  { return copyML(); }
  
  static ScalarPtr isScalar(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<Scalar>(ml); }
  
  static FunctionMemLocPtr isFunctionMemLoc(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<FunctionMemLoc>(ml); }
  
  static LabeledAggregatePtr isLabeledAggregate(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<LabeledAggregate>(ml); }
  
  static ArrayPtr isArray(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<Array>(ml); }
  
  static PointerPtr isPointer(MemLocObjectPtr ml)
  { return boost::dynamic_pointer_cast<Pointer>(ml); }
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
  bool mayEqual(MemLocObjectPtrPair that, PartPtr p);
  bool mustEqual(MemLocObjectPtrPair that, PartPtr p);
  
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
  std::string strp(PartPtr part, std::string indent="");
};

class ValueObject;
typedef boost::shared_ptr<ValueObject> ValueObjectPtr;
class ValueObject : public AbstractObject
{ 
  public:
  // Returns whether this object may/must be equal to o within the given Part p
  virtual bool mayEqual(ValueObjectPtr o, PartPtr p)=0;
  virtual bool mustEqual(ValueObjectPtr o, PartPtr p)=0;
  
  bool mayEqual(AbstractObjectPtr o, PartPtr p)
  {
    ValueObjectPtr vo = boost::dynamic_pointer_cast<ValueObject>(o);
    if(vo) return mayEqual(vo, p);
    else   return false;
  }
  
  bool mustEqual(AbstractObjectPtr o, PartPtr p)
  {
    ValueObjectPtr vo = boost::dynamic_pointer_cast<ValueObject>(o);
    if(vo) return mustEqual(vo, p);
    else   return false;
  }
  
  // Returns true if this object is live at the given part and false otherwise.
  // Values are always live.
  bool isLive(PartPtr p) const
  { return true; }
  
  // Allocates a copy of this object and returns a pointer to it
  virtual ValueObjectPtr copyV() const=0;
  AbstractObjectPtr copyAO() const
  { return copyV(); }
};

class CodeLocObject;
typedef boost::shared_ptr<CodeLocObject> CodeLocObjectPtr;
class CodeLocObject : public AbstractObject
{ 
  public:
  // Returns whether this object may/must be equal to o within the given Part p
  virtual bool mayEqualCL(CodeLocObjectPtr o, PartPtr p)=0;
  virtual bool mustEqualCL(CodeLocObjectPtr o, PartPtr p)=0;
  
  // General version of mayEqual and mustEqual that implements may/must equality with respect to ExprObj
  // and uses the derived class' may/mustEqual check for all the other cases
  // GREG: Currently nothing interesting here since we don't support ExprObjs for CodeLocObjects
  bool mayEqual(CodeLocObjectPtr o, PartPtr p)
  {
    return mayEqualCL(o, p);
  }
  bool mustEqual(CodeLocObjectPtr o, PartPtr p)
  {
    return mustEqualCL(o, p);
  }
  
  bool mayEqual(AbstractObjectPtr o, PartPtr p)
  {
    CodeLocObjectPtr co = boost::dynamic_pointer_cast<CodeLocObject>(o);
    if(co) return mayEqual(co, p);
    else   return false;
  }
  
  bool mustEqual(AbstractObjectPtr o, PartPtr p)
  {
    CodeLocObjectPtr co = boost::dynamic_pointer_cast<CodeLocObject>(o);
    if(co) return mustEqual(co, p);
    else   return false;
  }
  
  // Allocates a copy of this object and returns a pointer to it
  virtual CodeLocObjectPtr copyCL() const=0;
  AbstractObjectPtr copyAO() const
  { return copyCL(); }
};

// Holds a pair of MemLocObjectPtr (one for the expression object and another for the object in memory) and provides 
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
  bool mayEqual(CodeLocObjectPtrPair that, PartPtr p);
  bool mustEqual(CodeLocObjectPtrPair that, PartPtr p);
  
  // Returns a copy of this object
  CodeLocObjectPtrPair copyCL() const;
  
  // pretty print for the object
  std::string str(std::string indent="");
  
  // Variant of the str method that can produce information specific to the current Part.
  // Useful since AbstractObjects can change from one Part to another.
  std::string strp(PartPtr part, std::string indent="");
};

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
   virtual std::string getName(); // field name
   virtual size_t getIndex(); // The field's index within its parent object. The first field has index 0.

   virtual MemLocObjectPtr getField(); // Pointer to an abstract description of the field
   virtual void setField(MemLocObjectPtr f); // Pointer to an abstract description of the field

   virtual LabeledAggregatePtr getParent(); // the parent obj this field belongs to
   virtual void setParent(LabeledAggregatePtr p) ; // the parent obj this field belongs to

   //virtual std::string str(const std::string& indent); // pretty print for the object
   virtual std::string str(std::string indent); // pretty print for the object
};


// a memory object that contains a finite number of explicitly labeled memory objects, such as structs, classes and bitfields
class LabeledAggregate: public virtual MemLocObject
{
 public:
   // number of fields
   virtual size_t fieldCount(PartPtr part);

   // Returns a list of field
   virtual std::vector<boost::shared_ptr<LabeledAggregateField> > getElements(PartPtr part) const; 
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
   size_t getSize();
   //virtual std::string str(const std::string& indent);
   virtual std::string str(std::string indent); // pretty print for the object
   // equal operator
   virtual bool mayEqual (IndexVectorPtr other, PartPtr part);
   virtual bool mustEqual (IndexVectorPtr other, PartPtr part);
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
   // Returns true if this pointer refers to the same abstract object as that pointer.
   virtual bool equalPoints(const PointerOrArray & that);
 
   //virtual bool operator == (const ObjSet & that) const;
   //virtual bool operator < (const ObjSet & that) const;
};
#endif 
// Some programming languages don't have the concept of pointers. We provide explicit support for Array
class Array: public virtual MemLocObject
{
 public:
   // Returns a memory object that corresponds to all the elements in the given array
   virtual MemLocObjectPtr getElements(PartPtr part);
   // Returns the memory object that corresponds to the elements described by the given abstract index, 
   // which represents one or more indexes within the array
   virtual MemLocObjectPtr getElements(IndexVectorPtr ai, PartPtr part) ;

   // number of dimensions of the array
   virtual size_t getNumDims(PartPtr part);

   //--- pointer like semantics
   // support dereference of array object, similar to the dereference of pointer
   // Return the element object: array[0]
   virtual MemLocObjectPtr getDereference(PartPtr part);
   //virtual bool operator == (const ObjSet & that) const;
   //virtual bool operator < (const ObjSet & that) const;
};

class Pointer: public virtual MemLocObject
{
 public:
   virtual MemLocObjectPtr getDereference(PartPtr part) ;
   // Returns true if this pointer refers to the same abstract object as that pointer.
   virtual bool equalPoints(const Pointer & that);
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

}; // namespace dataflow

#endif