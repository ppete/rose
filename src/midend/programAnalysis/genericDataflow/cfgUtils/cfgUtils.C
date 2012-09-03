#include "cfgUtils.h"
#include <stdlib.h>
#include <time.h>
#include <list>
using std::list;
#include <set>
using std::set;
#include <string> 
using std::string;
#include <utility>
using std::pair;
#include <iostream>
using std::cout;
#include <boost/make_shared.hpp>
#include "partitions.h"

namespace cfgUtils
{
  SgProject* project;

  // =true if initCFGUtils has been called and =false otherwise
  static bool CFGinitialized=false;

  // initializes the cfgUtils module
  void initCFGUtils(SgProject* project_arg)
  {
    // if the cfgUtils has not been initialized
    if(project==NULL)
    {
      project = project_arg;
      srand(time(NULL));
    }
    else
      ROSE_ASSERT(project==project_arg);

    CFGinitialized=true;
  }

  SgProject* getProject()
  {
    return project;
  }
// returns whether a given AST node that represents a constant is an integer and
// sets val to be the numeric value of that integer (all integer types are included
// but not floating point, characters, etc.)
bool IsConstInt(const SgExpression* rhs, long &val)
{
  //    printf("rhs = %s: %s\n", rhs->unparseToString().c_str(), rhs->class_name().c_str());

  /*SgCastExp* cast;
    if(cast = isSgCastExp(rhs))
    {
    printf("cast = %s: %s\n", cast->get_type()->unparseToString().c_str(), cast->get_type()->class_name().c_str());
    }*/

  switch(rhs->variantT())
  {
    case V_SgIntVal:
      {
        val = isSgIntVal(rhs)->get_value();
        return true;
      }
    case V_SgLongIntVal:
      {
        val = isSgLongIntVal(rhs)->get_value();
        return true;
      }
    case V_SgLongLongIntVal:
      {
        val = isSgLongLongIntVal(rhs)->get_value();
        return true;
      }
    case V_SgShortVal:
      {
        val = isSgShortVal(rhs)->get_value();
        return true;
      }
    case V_SgUnsignedIntVal:
      {
        val = isSgUnsignedIntVal(rhs)->get_value();
        return true;
      }
    case V_SgUnsignedLongVal:
      {
        val = isSgUnsignedLongVal(rhs)->get_value();
        return true;
      }
    case V_SgUnsignedLongLongIntVal:
      {
        val = isSgUnsignedLongLongIntVal(rhs)->get_value();
        return true;
      }
    case V_SgUnsignedShortVal:
      {
        val = isSgUnsignedShortVal(rhs)->get_value();
        return true;
      }
    default:
      {
        return false;
      }
  }
}

} /* namespace cfgUtils */

// Liao 10/7/2010, made a few functions' namespace explicit
// pulls off all the SgCastExps that may be wrapping the given expression, returning the expression that is being wrapped
const SgExpression* cfgUtils::unwrapCasts(const SgExpression* e)
{
  if(isSgCastExp(e))
  {
    return unwrapCasts(isSgCastExp(e)->get_operand());
  }
  else return e;
}

// returns the DataflowNode that represents that start of the CFG of the given function's body
dataflow::PartPtr cfgUtils::getFuncStartCFG(SgFunctionDefinition* func, bool (*f) (CFGNode) /*= defaultFilter*/ )
{
  //return DataflowNode(func->cfgForBeginning(), f);

  // Find the SgFunctionParameterList node by walking the CFG forwards from the function's start
  DataflowNode funcCFGStart(func->cfgForBeginning(), f);
  for(VirtualCFG::iterator it(funcCFGStart); it!=VirtualCFG::iterator::end(); it++)
  {
    if(isSgFunctionParameterList((*it).getNode()))
    {
      return (*it);
    }
  }
  // We should never get here
  ROSE_ASSERT(0);
}

// returns the DataflowNode that represents that end of the CFG of the given function's body
dataflow::PartPtr cfgUtils::getFuncEndCFG(SgFunctionDefinition* func, bool (*f) (CFGNode) /*= defaultFilter*/ )
{
  //return (DataflowNode) func->cfgForEnd();
  //return boost::make_shared<DataflowNode>(func->cfgForEnd(), f);
  return DataflowNode(func->cfgForEnd(), f);
}

// returns a string containing a unique name that is not otherwise used inside this project
string cfgUtils::genUniqueName()
{
  string name = "temp_";

  Rose_STL_Container<SgNode*> initNames = NodeQuery::querySubTree(project, V_SgInitializedName);
  for(Rose_STL_Container<SgNode*>::iterator it = initNames.begin(); it!= initNames.end(); it++)
  {
    SgInitializedName *curName;
    ROSE_ASSERT(curName = isSgInitializedName(*it));
    // while our chosen "unique" name conflicts with the current SgInitializedName
    // keep adding random numbers to the end of the the "unique" name until it becomes unique
    //          printf("SgInitializedName: name<%s> == curName->get_name().getString()<%s> = %d\n", name.c_str(), curName->get_name().getString().c_str(), name == curName->get_name().getString());
    while(name == curName->get_name().getString())
    {
      char num[2];
      num[0] = '0'+rand()%10;
      num[1] = 0;                       
      name = name + num;
    }
  }

  Rose_STL_Container<SgNode*> funcDecls = NodeQuery::querySubTree(project, V_SgFunctionDeclaration);
  for(Rose_STL_Container<SgNode*>::iterator it = funcDecls.begin(); it!= funcDecls.end(); it++)
  {
    SgFunctionDeclaration *curDecl;
    ROSE_ASSERT(curDecl = isSgFunctionDeclaration(*it));
    // while our chosen "unique" name conflicts with the current SgFunctionDeclaration
    // keep adding random numbers to the end of the the "unique" name until it becomes unique
    //          printf("SgFunctionDeclaration: name<%s> == curDecl->get_name().getString()<%s> = %d\n", name.c_str(), curDecl->get_name().getString().c_str(), name == curDecl->get_name().getString());
    while(name == curDecl->get_name().getString())
    {
      char num[2];
      snprintf(num, 2, "%s", (char*)(rand()%10));
      name = name + num;
    }
  }
  return name;
}

// returns the SgFunctionDeclaration for the function with the given name
SgFunctionDeclaration* cfgUtils::getFuncDecl(string name)
{
  Rose_STL_Container<SgNode*> funcDecls = NodeQuery::querySubTree(project, V_SgFunctionDeclaration);
  for(Rose_STL_Container<SgNode*>::iterator it = funcDecls.begin(); it!= funcDecls.end(); it++)
  {
    SgFunctionDeclaration *curDecl;
    ROSE_ASSERT(curDecl = isSgFunctionDeclaration(*it));
    // if we've found our function
    while(name == curDecl->get_name().getString())
    {
      return curDecl;
    }
  }
  return NULL;
}

// given a function's declaration, returns the function's definition.
// handles the case where decl->get_definition()==NULL
SgFunctionDefinition* cfgUtils::funcDeclToDef(SgFunctionDeclaration* decl)
{
  ROSE_ASSERT(CFGinitialized);
  if(decl->get_definition())
    return decl->get_definition();
  else
  {
    Rose_STL_Container<SgNode*> funcDefs = NodeQuery::querySubTree(project, V_SgFunctionDefinition);
    for(Rose_STL_Container<SgNode*>::iterator it = funcDefs.begin(); it!= funcDefs.end(); it++)
    {
      ROSE_ASSERT(isSgFunctionDefinition(*it));
      // if the current definition has the same mangled name as the function declaration, we've found it
      if(isSgFunctionDefinition(*it)->get_mangled_name() == decl->get_mangled_name())
        return isSgFunctionDefinition(*it);
    }
  }
  return NULL;
}


