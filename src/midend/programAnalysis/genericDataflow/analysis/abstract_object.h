#ifndef ABSTRACT_OBJECT_H
#define ABSTRACT_OBJECT_H

#include "rose.h"
#include "AnalysisDebuggingUtils.h"
#include <string>
#include <cstring>
#include <vector>

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
  virtual bool mayEqual(AbstractObjectPtr o) const=0;
  virtual bool mustEqual(AbstractObjectPtr o) const=0;

  /* Don't have good idea how to represent a finite number of options 
  virtual bool isFiniteSet()=0;
  virtual set<AbstractObj> getValueSet()=0;*/
  
  //virtual std::string str(const std::string& indent)=0;
};


// Major types of abstract objects
class MemLocObject;
typedef boost::shared_ptr<MemLocObject> MemLocObjectPtr;
class MemLocObject : public AbstractObject
{ 
  public:
  virtual bool mayEqual(MemLocObjectPtr o) const=0;
  virtual bool mustEqual(MemLocObjectPtr o) const=0;
  
  bool mayEqual(AbstractObjectPtr o) const
  {
    try {
      //const MemLocObject & mo = dynamic_cast <const MemLocObject&> (o);
      MemLocObjectPtr mo = boost::dynamic_pointer_cast<MemLocObject>(o);
      return mayEqual(mo);
    } catch (std::bad_cast & bc) {
      return false;
    }
  }
  
  bool mustEqual(AbstractObjectPtr o) const
  {
    try {
      //const MemLocObject & mo = dynamic_cast <const MemLocObject&> (o);
      MemLocObjectPtr mo = boost::dynamic_pointer_cast<MemLocObject>(o);
      return mustEqual(mo);
    } catch (std::bad_cast & bc) {
      return false;
    }
  }
};

class ValueObject;
typedef boost::shared_ptr<ValueObject> ValueObjectPtr;
class ValueObject : public AbstractObject
{ 
  public:
  virtual bool mayEqual(ValueObjectPtr o) const=0;
  virtual bool mustEqual(ValueObjectPtr o) const=0;
  
  bool mayEqual(AbstractObjectPtr o) const
  {
    try {
      //const ValueObject & vo = dynamic_cast <const ValueObject&> (o);
      ValueObjectPtr vo = boost::dynamic_pointer_cast<ValueObject>(o);
      return mayEqual(vo);
    } catch (std::bad_cast & bc) {
      return false;
    }
  }
  
  bool mustEqual(AbstractObjectPtr o) const
  {
    try {
      //const ValueObject & vo = dynamic_cast <const ValueObject&> (o);
      ValueObjectPtr vo = boost::dynamic_pointer_cast<ValueObject>(o);
      return mustEqual(vo);
    } catch (std::bad_cast & bc) {
      return false;
    }
  }
};

class CodeLocObject;
typedef boost::shared_ptr<CodeLocObject> CodeLocObjectPtr;
class CodeLocObject : public AbstractObject
{ 
  public:
  virtual bool mayEqual(CodeLocObjectPtr o) const=0;
  virtual bool mustEqual(CodeLocObjectPtr o) const=0;
  
  bool mayEqual(AbstractObjectPtr o) const
  {
    try {
      //const CodeLocObject & co = dynamic_cast <const CodeLocObject&> (o);
      CodeLocObjectPtr co = boost::dynamic_pointer_cast<CodeLocObject>(o);
      return mayEqual(co);
    } catch (std::bad_cast & bc) {
      return false;
    }
  }
  
  bool mustEqual(AbstractObjectPtr o) const
  {
    try {
      //const CodeLocObject & co = dynamic_cast <const CodeLocObject&> (o);
      CodeLocObjectPtr co = boost::dynamic_pointer_cast<CodeLocObject>(o);
      return mustEqual(co);
    } catch (std::bad_cast & bc) {
      return false;
    }
  }
};

//memory object that has no internal structure
class Scalar : public MemLocObject
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
class FunctionMemLoc: public MemLocObject
{
public:  
 
};

class LabeledAggregate;
typedef boost::shared_ptr<LabeledAggregate> LabeledAggregatePtr;
class LabeledAggregateField;
typedef boost::shared_ptr<LabeledAggregateField> LabeledAggregateFieldPtr;
class LabeledAggregateField
{
 public:
   virtual std::string getName(); // field name
   virtual size_t getIndex(); // The field's index within its parent object. The first field has index 0.

   virtual boost::shared_ptr<MemLocObject> getField(); // Pointer to an abstract description of the field
   virtual void setField(boost::shared_ptr<MemLocObject> f); // Pointer to an abstract description of the field

   virtual LabeledAggregatePtr getParent(); // the parent obj this field belongs to
   virtual void setParent(LabeledAggregatePtr p) ; // the parent obj this field belongs to

   //virtual std::string str(const std::string& indent); // pretty print for the object
   virtual std::string str(std::string indent); // pretty print for the object
};


// a memory object that contains a finite number of explicitly labeled memory objects, such as structs, classes and bitfields
class LabeledAggregate: public MemLocObject
{
 public:
   // number of fields
   virtual size_t fieldCount();

   // Returns a list of field
   virtual std::vector<boost::shared_ptr<LabeledAggregateField> > getElements() const; 
   // Returns true if this object and that object may/must refer to the same labeledAggregate memory object.
   //virtual bool operator == (const LabeledAggregate& that) const;
   //Total order relations (implemented by interface)
   //virtual bool operator < (const LabeledAggregate& that) const;
};

// represents d-dimensional integral vectors. It encapsulates a variety of abstract representations for such vectors 
// such as polyhedral constraints and strided indexes.
// TODO: we support a single multi-dimensional index for now
class IndexVector
{
 public:
   // the index vector's length
   size_t getSize();
   //virtual std::string str(const std::string& indent);
   virtual std::string str(std::string indent); // pretty print for the object
   // equal operator
   virtual bool operator == (const IndexVector & other) const;
   virtual bool operator != (const IndexVector & other) const { return !(*this == other); }
   virtual bool mayEqual (const IndexVector & other) const;
   virtual bool mustEqual (const IndexVector & other) const;
};

#if 0 // Still not clear if users will get confused by this class
// A class to summarize overlapped semantics for C pointers and Arrays
// Recommended to be used in C/C++ where pointers and arrays sometimes can be used interchangeably. 
class PointerOrArray: public MemLocObject
{
 public:
 // Array side of interfaces ---------
   // Returns a memory object that corresponds to all the elements in the given array
   virtual boost::shared_ptr<MemLocObject> getElements();
   // Returns the memory object that corresponds to the elements described by the given abstract index, 
   // which represents one or more indexes within the array
   virtual boost::shared_ptr<MemLocObject> getElements(IndexVector* ai);

   // number of dimensions of the array
   virtual size_t getNumDims();

// Pointer side of interfaces ---------
    // used for a pointer to non-array
   virtual boost::shared_ptr<MemLocObject> getDereference () const;
   // Returns true if this pointer refers to the same abstract object as that pointer.
   virtual bool equalPoints(const PointerOrArray & that);
 
   //virtual bool operator == (const ObjSet & that) const;
   //virtual bool operator < (const ObjSet & that) const;
};
#endif 
// Some programming languages don't have the concept of pointers. We provide explicit support for Array
class Array: public MemLocObject
{
 public:
   // Returns a memory object that corresponds to all the elements in the given array
   virtual boost::shared_ptr<MemLocObject> getElements() ;
   // Returns the memory object that corresponds to the elements described by the given abstract index, 
   // which represents one or more indexes within the array
   virtual boost::shared_ptr<MemLocObject> getElements(IndexVector* ai) ;

   // number of dimensions of the array
   virtual size_t getNumDims();

   //--- pointer like semantics
   // support dereference of array object, similar to the dereference of pointer
   // Return the element object: array[0]
   virtual boost::shared_ptr<MemLocObject> getDereference();
   //virtual bool operator == (const ObjSet & that) const;
   //virtual bool operator < (const ObjSet & that) const;
};
typedef boost::shared_ptr<Array> ArrayPtr;

class Pointer: public MemLocObject
{
 public:
   virtual boost::shared_ptr<MemLocObject> getDereference() ;
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
typedef boost::shared_ptr<Pointer> PointerPtr;

}; // namespace dataflow

#endif