#pragma once
#include "abstract_object.h"

namespace dataflow {
class EqualFunctor {
  public: 
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2, PartPtr p)=0;// { return * obj1 == * obj2; };
  };
  
  class MayEqualFunctor : public EqualFunctor {
  protected:
    bool mayEqual(AbstractObjectPtr objPtr1, AbstractObjectPtr objPtr2, PartPtr p);

  public:
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2, PartPtr p) { 
      // Using may equal
      return mayEqual(obj1, obj2, p); 
    };
  };

  class MustEqualFunctor : public EqualFunctor {
  protected:
    bool mustEqual(AbstractObjectPtr objPtr1, AbstractObjectPtr objPtr2, PartPtr p);
  
  public:
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2, PartPtr p) { 
      // Using must equal
      return mustEqual(obj1, obj2, p); 
    };
  };
    
  typedef boost::shared_ptr<EqualFunctor> EqualFunctorPtr;
}; // namespace dataflow