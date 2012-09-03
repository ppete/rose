#ifndef CFGUTILS_H
#define CFGUTILS_H

#include "genericDataflowCommon.h" // for quad typedefs
#include "VirtualCFGIterator.h"
#include "DataflowCFG.h"
#include "partitions.h"
//#include "DataflowCFG.cfgToDot.h"

#include <set>
#include <string>

namespace cfgUtils
{
  extern SgProject* project;

  // initializes the cfgUtils module
  void initCFGUtils(SgProject* project_arg);

  SgProject* getProject();

 // returns whether a given AST node that represents a constant is an integer and
  // sets *val to be the numeric value of that integer (all integer types are included
  // but not floating point, characters, etc.)
  bool IsConstInt (const SgExpression* rhs, long &val);

  // pulls off all the SgCastExps that may be wrapping the given expression, returning the expression that is being wrapped
  const SgExpression* unwrapCasts(const SgExpression* e);

  // returns the DataflowNode that represents that start of the CFG of the given function's body
  dataflow::PartPtr getFuncStartCFG(SgFunctionDefinition* func, bool (*f) (CFGNode) = defaultFilter );

  // returns the DataflowNode that represents that end of the CFG of the given function's body
  dataflow::PartPtr getFuncEndCFG(SgFunctionDefinition* func, bool (*f) (CFGNode) = defaultFilter);

  // returns a string containing a unique name that is not otherwise used inside this project
  std::string genUniqueName();

  // returns the SgFunctionDeclaration for the function with the given name
  SgFunctionDeclaration* getFuncDecl(std::string name);

  // given a function's declaration, returns the function's definition.
  // handles the case where decl->get_definition()==NULL
  SgFunctionDefinition* funcDeclToDef(SgFunctionDeclaration* decl);

}

#endif
