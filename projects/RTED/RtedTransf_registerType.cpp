#include <rose.h>
#include <string>
#include "RtedSymbols.h"
#include "DataStructures.h"
#include "RtedTransformation.h"


using namespace std;
using namespace SageInterface;
using namespace SageBuilder;


void RtedTransformation::visit_isClassDefinition(SgClassDefinition* cdef) {
  cerr << "Found class definition : " << cdef->unparseToString() << endl;
  vector<RtedClassElement*> elements;

  Rose_STL_Container<SgDeclarationStatement*> members = cdef->get_members();
  Rose_STL_Container<SgDeclarationStatement*>::const_iterator itMem = members.begin();
  for (;itMem!=members.end();++itMem) {
    SgDeclarationStatement* sgElement = *itMem;
    RtedClassElement* el = new RtedClassElement("name","type",sgElement);
    //if (isSgVariableDeclaration(sgElement))
    //	cerr << " SYMBOL VAR DECL : " << sgElement->unparseToString() <<
	//	SageInterface::getFirstVarSym(isSgVariableDeclaration(sgElement)) << endl;
    elements.push_back(el);
  }

  RtedClassDefinition* cd = new RtedClassDefinition(cdef,
						    "name", 
						    elements.size(),
						    sizeof(cdef),
						    elements);
  std::map<SgClassDefinition*,RtedClassDefinition*>::const_iterator it =
    class_definitions.find(cdef);
  if (it==class_definitions.end())
    class_definitions[cdef]=cd;
}


void RtedTransformation::insertRegisterTypeCall(RtedClassDefinition* rtedClass
						) {
  ROSE_ASSERT(rtedClass);
  SgStatement* stmt = mainFirst;

  if (isSgStatement(stmt)) {
    SgScopeStatement* scope = stmt->get_scope();
    string name = rtedClass->manglClassName;

    ROSE_ASSERT(scope);
    if (isSgBasicBlock(scope)) {
      // insert new stmt before first Statement in main
  
      /*
      //instrumented calls for all defined structs/classes:
      RTSI_registerType("A", //name of class
      sizeof(A),
      "b", "SgInt", offsetof(A,b)
      "c", "SgChar",offsetof(A,c) ); //for each member the name ,type and offset

      RTSI_registerType("B", sizeof(B), 
      "instanceOfA", "A", offsetof(B,instanceOfA),
      "d", "SgDouble", offsetof(B,d) );
      */

      int elements = rtedClass->nrOfElements; // elements passed to function
      elements*=3; // for each element pass name, type and offset
      elements+=2; // ClassName and sizeOfClass
      SgExpression* nrElements = buildIntVal(elements);

      SgExpression* sizeOfClass = buildUnsignedLongLongIntVal(rtedClass->sizeClass); 


      SgExprListExp* arg_list = buildExprListExp();
      appendExpression(arg_list, nrElements);
      appendExpression(arg_list, buildString(name));
      appendExpression(arg_list, sizeOfClass);
      
      // go through each element and add name, type and offset
      std::vector<RtedClassElement*> elementsC = rtedClass->elements;
      std::vector<RtedClassElement*>::const_iterator itClass = elementsC.begin();
      for (;itClass!=elementsC.end();++itClass) {
			  RtedClassElement* element = *itClass;
			  const char* manglElementName = element->manglElementName;
			  const char* elementType= element->elementType;
			  SgDeclarationStatement* sgElement = element->sgElement;
			  //SgExpression* sgElementCopy = deepCopy(sgElement);
			  SgExpression* elemName = buildString(manglElementName);
			  SgExpression* elemType = buildString(elementType);
	  // build a function call for offsetof(A,d);
	      appendExpression(arg_list, elemName);
	      appendExpression(arg_list, elemType);

	  // build  (size_t )(&( *((struct A *)0)).x);
			  ROSE_ASSERT(rtedClass->classDef);
	     // cerr << " Type: " <<  rtedClass->classDef->get_declaration()->get_type()->class_name() << endl;
	      SgExpression* nullPointer = buildCastExp(buildIntVal(0),
	    		  buildPointerType(rtedClass->classDef->get_declaration()->get_type()));
	      SgExpression* derefPointer = buildPointerDerefExp(nullPointer);
	      SgVariableDeclaration* varDecl =	isSgVariableDeclaration(sgElement);
		  if (varDecl) {
			  SgVarRefExp* varref = buildVarRefExp(varDecl);
			  SgExpression* dotExp = buildDotExp(derefPointer,varref);
			  SgExpression* andOp = buildAddressOfOp(dotExp);
			  SgExpression* castOp = buildCastExp(andOp, size_t_member);
			  appendExpression(arg_list, castOp);
			  //}
		  } else {
			  cerr << " Declarationstatement not handled : " << sgElement->class_name() << endl;

		  }
      }


      ROSE_ASSERT(roseRegisterTypeCall);
      //cerr << " >>>>>>>> Symbol Member: " << symbolName2 << endl;
      SgFunctionRefExp* memRef_r = buildFunctionRefExp(  roseRegisterTypeCall);
      SgFunctionCallExp* funcCallExp = buildFunctionCallExp(memRef_r,
							    arg_list);
      SgExprStatement* exprStmt = buildExprStatement(funcCallExp);
      insertStatementBefore(isSgStatement(stmt), exprStmt);

    }
    else {
      cerr
	<< "RuntimeInstrumentation :: Surrounding Block is not Block! : "
	<< name << " : " << scope->class_name() << endl;
      ROSE_ASSERT(false);
    }
  } else {
    cerr
      << "RuntimeInstrumentation :: Surrounding Statement could not be found! "
      << stmt->class_name() << endl;
    ROSE_ASSERT(false);
  }

}
