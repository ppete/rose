#pragma once
#include "abstract_object.h"

namespace dataflow {
class EqualFunctor {
  public: 
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2, PartEdgePtr pedge)=0;// { return * obj1 == * obj2; };
  };
  
  class MayEqualFunctor : public EqualFunctor {
  protected:
    bool mayEqual(AbstractObjectPtr objPtr1, AbstractObjectPtr objPtr2, PartEdgePtr pedge);

  public:
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2, PartEdgePtr pedge) { 
      // Using may equal
      return mayEqual(obj1, obj2, pedge); 
    };
  };

  class MustEqualFunctor : public EqualFunctor {
  protected:
    bool mustEqual(AbstractObjectPtr objPtr1, AbstractObjectPtr objPtr2, PartEdgePtr pedge);
  
  public:
    virtual bool operator()(AbstractObjectPtr obj1, AbstractObjectPtr obj2, PartEdgePtr pedge) { 
      // Using must equal
      return mustEqual(obj1, obj2, pedge); 
    };
  };
    
  typedef boost::shared_ptr<EqualFunctor> EqualFunctorPtr;
}; // namespace dataflow