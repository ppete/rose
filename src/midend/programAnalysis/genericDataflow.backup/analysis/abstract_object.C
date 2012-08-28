#include "abstract_object.h"
#include <iostream>

using namespace std;

namespace dataflow
{
std::vector<boost::shared_ptr<LabeledAggregateField> > LabeledAggregate::getElements() const 
{
  std::vector<boost::shared_ptr<LabeledAggregateField> > rt;
  cerr<<"Error. Direct call to base class's getElements() is not allowed."<<endl;
  ROSE_ASSERT (false);
  return rt;
}

size_t LabeledAggregate::fieldCount()
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
std::string LabeledAggregateField::getName()
{
 cerr<<"Error. Direct call to base class's getName() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return "";  
}

boost::shared_ptr<MemLocObject> LabeledAggregateField::getField()
{

 cerr<<"Error. Direct call to base class's getField() is not allowed."<<endl;
 ROSE_ASSERT (false);
 boost::shared_ptr<MemLocObject> p;
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

void LabeledAggregateField::setField(boost::shared_ptr<MemLocObject> f)
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
//std::string IndexVector::str(const string& indent)
// pretty print for the object
std::string IndexVector::str(std::string indent)
{
 cerr<<"Error. Direct call to base class (IndexVector)'s str() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return "";  
}
bool IndexVector::operator ==( const IndexVector & other) const
{
 cerr<<"Error. Direct call to base class (IndexVector)'s operator==() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return false;  
}
bool IndexVector::mayEqual (const IndexVector & other) const
{
 cerr<<"Error. Direct call to base class (IndexVector)'s operator==() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return false;  
}
bool IndexVector::mustEqual (const IndexVector & other) const
{
 cerr<<"Error. Direct call to base class (IndexVector)'s operator==() is not allowed."<<endl;
 ROSE_ASSERT (false);
 return false;  
}

boost::shared_ptr<MemLocObject> Array::getElements()
{
  cerr<<"Error. Direct call to base class (Array)'s getElements() is not allowed."<<endl;
  ROSE_ASSERT (false);
  boost::shared_ptr<MemLocObject> p;
  return p;  
}

boost::shared_ptr<MemLocObject> Array::getElements(IndexVector* ai)
{
  cerr<<"Error. Direct call to base class (Array)'s getElements(IndexVector* ai) is not allowed."<<endl;
  ROSE_ASSERT (false);
  boost::shared_ptr<MemLocObject> p;
  return p;
}

size_t Array::getNumDims()
{
  cerr<<"Error. Direct call to base class (Array)'s getNumDims( ) is not allowed."<<endl;
  ROSE_ASSERT (false);
  return 0;
}

boost::shared_ptr<MemLocObject> Array::getDereference()
{
  cerr<<"Error. Direct call to base class (Array)'s getDereference( ) is not allowed."<<endl;
  ROSE_ASSERT (false);
  boost::shared_ptr<MemLocObject> p;
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
boost::shared_ptr<MemLocObject> Pointer::getDereference()
{
  cerr<<"Error. Direct call to base class (Pointer)'s getDereference( ) is not allowed."<<endl;
  ROSE_ASSERT (false);
  boost::shared_ptr<MemLocObject> p;
  return p;
}

bool Pointer::equalPoints( const Pointer & that)
{
  cerr<<"Error. Direct call to base class (Pointer)'s equalPoints( ) is not allowed."<<endl;
  ROSE_ASSERT (false);
  return false;
}

}; // namespace dataflow
