// MACHINE GENERATED SOURCE FILE WITH ROSE (Grammar.h)--- DO NOT MODIFY!

#include "sage3basic.h"

#ifndef ROSE_USE_INTERNAL_FRONTEND_DEVELOPMENT
   #include "AST_FILE_IO.h"
#endif 
// The header file ("rose_config.h") should only be included by source files that require it.
#include "rose_config.h"

#if _MSC_VER
#define USE_CPP_NEW_DELETE_OPERATORS 0
#endif


using namespace std;

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNode::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNode -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 41 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSupport::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSupport -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 65 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 89 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgModifierNodes::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgModifierNodes -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_next,"next"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 114 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgConstVolatileModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgConstVolatileModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 138 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStorageModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStorageModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 162 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAccessModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAccessModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 186 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_opencl_vec_type,"opencl_vec_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 211 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUPC_AccessModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUPC_AccessModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 235 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSpecialFunctionModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSpecialFunctionModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 259 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgElaboratedTypeModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgElaboratedTypeModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 283 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLinkageModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLinkageModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 307 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBaseClassModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBaseClassModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 331 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 355 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDeclarationModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDeclarationModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 379 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOpenclAccessModeModifier::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOpenclAccessModeModifier -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 403 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgName::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgName -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 427 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSymbolTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSymbolTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     if(p_table==NULL)
        returnVector.push_back(pair<SgNode*,std::string>( NULL,"table"));
     else
     for ( rose_hash_multimap::const_iterator it_table= p_table->begin();it_table!= p_table->end(); ++it_table) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( it_table->second,std::string(it_table->first.str()) ) );
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 458 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAttribute::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAttribute -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 482 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPragma::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPragma -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 507 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBitAttribute::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBitAttribute -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 531 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFuncDecl_attr::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFuncDecl_attr -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 555 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClassDecl_attr::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClassDecl_attr -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 579 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
Sg_File_Info::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of Sg_File_Info -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 603 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFile::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFile -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 628 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSourceFile::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSourceFile -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_globalScope,"globalScope"));
     for ( SgModuleStatementPtrList::const_iterator source_module_list_iterator = p_module_list.begin() 
; source_module_list_iterator != p_module_list.end(); ++source_module_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_module_list_iterator,"module_list"));
        } 
     for ( SgTokenPtrList::const_iterator source_token_list_iterator = p_token_list.begin() 
; source_token_list_iterator != p_token_list.end(); ++source_token_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_token_list_iterator,"token_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_temp_holding_scope,"temp_holding_scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 665 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBinaryComposite::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBinaryComposite -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_genericFileList,"genericFileList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_interpretations,"interpretations"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 692 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnknownFile::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnknownFile -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_globalScope,"globalScope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 718 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgProject::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgProject -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_fileList_ptr,"fileList_ptr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_directoryList,"directoryList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 744 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOptions::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOptions -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 768 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnparse_Info::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnparse_Info -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declstatement_ptr,"declstatement_ptr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_current_context,"current_context"));
     for ( static SgTypePtrList::const_iterator source_structureTagProcessingList_iterator = p_structureTagProcessingList.begin() 
; source_structureTagProcessingList_iterator != p_structureTagProcessingList.end(); ++source_structureTagProcessingList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_structureTagProcessingList_iterator,"structureTagProcessingList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_current_namespace,"current_namespace"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_current_function_call,"current_function_call"));
          returnVector.push_back(pair<SgNode*,std::string>( p_current_scope,"current_scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_reference_node_for_qualification,"reference_node_for_qualification"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 808 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBaseClass::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBaseClass -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_class,"base_class"));
          returnVector.push_back(pair<SgNode*,std::string>( p_baseClassModifier,"baseClassModifier"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 834 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgExpBaseClass::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgExpBaseClass -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_class_exp,"base_class_exp"));
          returnVector.push_back(pair<SgNode*,std::string>( p_base_class,"base_class"));
          returnVector.push_back(pair<SgNode*,std::string>( p_baseClassModifier,"baseClassModifier"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 861 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypedefSeq::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypedefSeq -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgTypePtrList::const_iterator source_typedefs_iterator = p_typedefs.begin() 
; source_typedefs_iterator != p_typedefs.end(); ++source_typedefs_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_typedefs_iterator,"typedefs"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 890 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateParameter::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateParameter -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_defaultTypeParameter,"defaultTypeParameter"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_defaultExpressionParameter,"defaultExpressionParameter"));
          returnVector.push_back(pair<SgNode*,std::string>( p_templateDeclaration,"templateDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_defaultTemplateDeclarationParameter,"defaultTemplateDeclarationParameter"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 920 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateArgument::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateArgument -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_templateDeclaration,"templateDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 947 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDirectory::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDirectory -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_fileList,"fileList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_directoryList,"directoryList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 973 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFileList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFileList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgFilePtrList::const_iterator source_listOfFiles_iterator = p_listOfFiles.begin() 
; source_listOfFiles_iterator != p_listOfFiles.end(); ++source_listOfFiles_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_listOfFiles_iterator,"listOfFiles"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1002 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDirectoryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDirectoryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgDirectoryPtrList::const_iterator source_listOfDirectories_iterator = p_listOfDirectories.begin() 
; source_listOfDirectories_iterator != p_listOfDirectories.end(); ++source_listOfDirectories_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_listOfDirectories_iterator,"listOfDirectories"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1031 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionParameterTypeList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionParameterTypeList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgTypePtrList::const_iterator source_arguments_iterator = p_arguments.begin() 
; source_arguments_iterator != p_arguments.end(); ++source_arguments_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_arguments_iterator,"arguments"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1060 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgQualifiedName::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgQualifiedName -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1085 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateArgumentList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateArgumentList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgTemplateArgumentPtrList::const_iterator source_args_iterator = p_args.begin() 
; source_args_iterator != p_args.end(); ++source_args_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_args_iterator,"args"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1114 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateParameterList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateParameterList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgTemplateParameterPtrList::const_iterator source_args_iterator = p_args.begin() 
; source_args_iterator != p_args.end(); ++source_args_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_args_iterator,"args"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1143 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGraph::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGraph -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1167 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIncidenceDirectedGraph::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIncidenceDirectedGraph -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1191 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBidirectionalGraph::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBidirectionalGraph -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1215 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStringKeyedBidirectionalGraph::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStringKeyedBidirectionalGraph -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1239 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIntKeyedBidirectionalGraph::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIntKeyedBidirectionalGraph -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1263 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIncidenceUndirectedGraph::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIncidenceUndirectedGraph -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1287 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGraphNode::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGraphNode -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_SgNode,"SgNode"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1312 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGraphEdge::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGraphEdge -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_node_A,"node_A"));
          returnVector.push_back(pair<SgNode*,std::string>( p_node_B,"node_B"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1338 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDirectedGraphEdge::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDirectedGraphEdge -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_node_A,"node_A"));
          returnVector.push_back(pair<SgNode*,std::string>( p_node_B,"node_B"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1364 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUndirectedGraphEdge::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUndirectedGraphEdge -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_node_A,"node_A"));
          returnVector.push_back(pair<SgNode*,std::string>( p_node_B,"node_B"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1390 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGraphNodeList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGraphNodeList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1414 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGraphEdgeList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGraphEdgeList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1438 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1463 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNameGroup::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNameGroup -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1487 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDimensionObject::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDimensionObject -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_array,"array"));
          returnVector.push_back(pair<SgNode*,std::string>( p_shape,"shape"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1513 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFormatItem::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFormatItem -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_data,"data"));
          returnVector.push_back(pair<SgNode*,std::string>( p_format_item_list,"format_item_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1539 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFormatItemList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFormatItemList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgFormatItemPtrList::const_iterator source_format_item_list_iterator = p_format_item_list.begin() 
; source_format_item_list_iterator != p_format_item_list.end(); ++source_format_item_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_format_item_list_iterator,"format_item_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1568 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDataStatementGroup::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDataStatementGroup -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgDataStatementObjectPtrList::const_iterator source_object_list_iterator = p_object_list.begin() 
; source_object_list_iterator != p_object_list.end(); ++source_object_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_object_list_iterator,"object_list"));
        } 
     for ( SgDataStatementValuePtrList::const_iterator source_value_list_iterator = p_value_list.begin() 
; source_value_list_iterator != p_value_list.end(); ++source_value_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_value_list_iterator,"value_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1602 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDataStatementObject::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDataStatementObject -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_variableReference_list,"variableReference_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1627 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDataStatementValue::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDataStatementValue -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_initializer_list,"initializer_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_repeat_expression,"repeat_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_constant_expression,"constant_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1654 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1683 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeUnknown::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeUnknown -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1712 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeChar::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeChar -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1741 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeSignedChar::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeSignedChar -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1770 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeUnsignedChar::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeUnsignedChar -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1799 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeShort::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeShort -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1828 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeSignedShort::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeSignedShort -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1857 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeUnsignedShort::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeUnsignedShort -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1886 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeInt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeInt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1915 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeSignedInt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeSignedInt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1944 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeUnsignedInt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeUnsignedInt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 1973 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeLong::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeLong -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2002 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeSignedLong::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeSignedLong -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2031 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeUnsignedLong::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeUnsignedLong -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2060 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeVoid::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeVoid -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2089 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeGlobalVoid::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeGlobalVoid -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2118 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeWchar::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeWchar -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2147 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeFloat::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeFloat -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2176 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeDouble::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeDouble -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2205 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeLongLong::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeLongLong -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2234 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeSignedLongLong::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeSignedLongLong -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2263 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeUnsignedLongLong::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeUnsignedLongLong -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2292 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeLongDouble::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeLongDouble -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2321 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeString::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeString -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lengthExpression,"lengthExpression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2351 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeBool::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeBool -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2380 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPointerType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPointerType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2410 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPointerMemberType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPointerMemberType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_class_type,"class_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2441 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgReferenceType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgReferenceType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2471 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNamedType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNamedType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2501 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClassType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClassType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2531 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaParameterizedType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaParameterizedType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_raw_type,"raw_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_list,"type_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2563 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEnumType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEnumType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2593 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypedefType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypedefType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent_scope,"parent_scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2624 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgModifierType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgModifierType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2654 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_return_type,"return_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_orig_return_type,"orig_return_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_argument_list,"argument_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2686 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMemberFunctionType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMemberFunctionType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_class_type,"class_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_return_type,"return_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_orig_return_type,"orig_return_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_argument_list,"argument_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2719 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPartialFunctionType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPartialFunctionType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_class_type,"class_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_return_type,"return_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_orig_return_type,"orig_return_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_argument_list,"argument_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2752 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPartialFunctionModifierType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPartialFunctionModifierType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_class_type,"class_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_return_type,"return_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_orig_return_type,"orig_return_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_argument_list,"argument_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2785 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgArrayType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgArrayType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_index,"index"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dim_info,"dim_info"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2817 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeEllipse::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeEllipse -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2846 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2875 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgQualifiedNameType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgQualifiedNameType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2910 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeComplex::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeComplex -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2940 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeImaginary::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeImaginary -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2970 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeDefault::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeDefault -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 2999 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeCAFTeam::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeCAFTeam -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3028 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeCrayPointer::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeCrayPointer -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3057 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeLabel::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeLabel -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ref_to,"ref_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_ptr_to,"ptr_to"));
          returnVector.push_back(pair<SgNode*,std::string>( p_modifiers,"modifiers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_typedefs,"typedefs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_kind,"type_kind"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3086 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLocatedNode::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLocatedNode -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3112 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLocatedNodeSupport::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLocatedNodeSupport -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3138 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCommonBlockObject::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCommonBlockObject -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_variable_reference_list,"variable_reference_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3165 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgInitializedName::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgInitializedName -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_typeptr,"typeptr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_initptr,"initptr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_prev_decl_item,"prev_decl_item"));
          returnVector.push_back(pair<SgNode*,std::string>( p_declptr,"declptr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_storageModifier,"storageModifier"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3197 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgInterfaceBody::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgInterfaceBody -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_functionDeclaration,"functionDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3224 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgHeaderFileBody::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgHeaderFileBody -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3250 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgRenamePair::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgRenamePair -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3276 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3302 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpOrderedClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpOrderedClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3328 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpNowaitClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpNowaitClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3354 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpUntiedClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpUntiedClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3380 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpDefaultClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpDefaultClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3406 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpExpressionClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpExpressionClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3433 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpCollapseClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpCollapseClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3460 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpIfClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpIfClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3487 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpNumThreadsClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpNumThreadsClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3514 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpVariablesClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpVariablesClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3545 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpCopyprivateClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpCopyprivateClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3576 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpPrivateClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpPrivateClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3607 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpFirstprivateClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpFirstprivateClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3638 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpSharedClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpSharedClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3669 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpCopyinClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpCopyinClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3700 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpLastprivateClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpLastprivateClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3731 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpReductionClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpReductionClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3762 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpScheduleClause::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpScheduleClause -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_chunk_size,"chunk_size"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3789 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3816 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgScopeStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgScopeStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3845 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGlobal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGlobal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgDeclarationStatementPtrList::const_iterator source_declarations_iterator = p_declarations.begin() 
; source_declarations_iterator != p_declarations.end(); ++source_declarations_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_declarations_iterator,"declarations"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3879 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBasicBlock::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBasicBlock -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgStatementPtrList::const_iterator source_statements_iterator = p_statements.begin() 
; source_statements_iterator != p_statements.end(); ++source_statements_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_statements_iterator,"statements"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3913 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIfStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIfStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_conditional,"conditional"));
          returnVector.push_back(pair<SgNode*,std::string>( p_true_body,"true_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_false_body,"false_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_else_numeric_label,"else_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3947 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgForStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgForStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_for_init_stmt,"for_init_stmt"));
          returnVector.push_back(pair<SgNode*,std::string>( p_test,"test"));
          returnVector.push_back(pair<SgNode*,std::string>( p_increment,"increment"));
          returnVector.push_back(pair<SgNode*,std::string>( p_loop_body,"loop_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_else_body,"else_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 3981 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionDefinition::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionDefinition -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4011 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateFunctionDefinition::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateFunctionDefinition -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4041 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClassDefinition::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClassDefinition -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgDeclarationStatementPtrList::const_iterator source_members_iterator = p_members.begin() 
; source_members_iterator != p_members.end(); ++source_members_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_members_iterator,"members"));
        } 
     for ( SgBaseClassPtrList::const_iterator source_inheritances_iterator = p_inheritances.begin() 
; source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_inheritances_iterator,"inheritances"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4080 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateInstantiationDefn::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateInstantiationDefn -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgDeclarationStatementPtrList::const_iterator source_members_iterator = p_members.begin() 
; source_members_iterator != p_members.end(); ++source_members_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_members_iterator,"members"));
        } 
     for ( SgBaseClassPtrList::const_iterator source_inheritances_iterator = p_inheritances.begin() 
; source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_inheritances_iterator,"inheritances"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4119 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateClassDefinition::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateClassDefinition -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgDeclarationStatementPtrList::const_iterator source_members_iterator = p_members.begin() 
; source_members_iterator != p_members.end(); ++source_members_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_members_iterator,"members"));
        } 
     for ( SgBaseClassPtrList::const_iterator source_inheritances_iterator = p_inheritances.begin() 
; source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_inheritances_iterator,"inheritances"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4158 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgWhileStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgWhileStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_condition,"condition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_else_body,"else_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4191 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDoWhileStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDoWhileStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_condition,"condition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4222 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSwitchStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSwitchStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_item_selector,"item_selector"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4254 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCatchOptionStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCatchOptionStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_condition,"condition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_trystmt,"trystmt"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4286 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNamespaceDefinitionStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNamespaceDefinitionStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgDeclarationStatementPtrList::const_iterator source_declarations_iterator = p_declarations.begin() 
; source_declarations_iterator != p_declarations.end(); ++source_declarations_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_declarations_iterator,"declarations"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_namespaceDeclaration,"namespaceDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_previousNamepaceDefinition,"previousNamepaceDefinition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_nextNamepaceDefinition,"nextNamepaceDefinition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4323 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBlockDataStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBlockDataStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4353 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAssociateStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAssociateStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_variable_declaration,"variable_declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4384 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFortranDo::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFortranDo -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_initialization,"initialization"));
          returnVector.push_back(pair<SgNode*,std::string>( p_bound,"bound"));
          returnVector.push_back(pair<SgNode*,std::string>( p_increment,"increment"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4418 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFortranNonblockedDo::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFortranNonblockedDo -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_end_statement,"end_statement"));
          returnVector.push_back(pair<SgNode*,std::string>( p_initialization,"initialization"));
          returnVector.push_back(pair<SgNode*,std::string>( p_bound,"bound"));
          returnVector.push_back(pair<SgNode*,std::string>( p_increment,"increment"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4453 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgForAllStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgForAllStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_forall_header,"forall_header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4485 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcForAllStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcForAllStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_for_init_stmt,"for_init_stmt"));
          returnVector.push_back(pair<SgNode*,std::string>( p_test,"test"));
          returnVector.push_back(pair<SgNode*,std::string>( p_increment,"increment"));
          returnVector.push_back(pair<SgNode*,std::string>( p_affinity,"affinity"));
          returnVector.push_back(pair<SgNode*,std::string>( p_loop_body,"loop_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4519 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCAFWithTeamStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCAFWithTeamStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_teamId,"teamId"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4550 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaForEachStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaForEachStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_element,"element"));
          returnVector.push_back(pair<SgNode*,std::string>( p_collection,"collection"));
          returnVector.push_back(pair<SgNode*,std::string>( p_loop_body,"loop_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4582 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaLabelStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaLabelStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_statement,"statement"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type_table,"type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4612 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionTypeTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionTypeTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_function_type_table,"function_type_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4640 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDeclarationStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDeclarationStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4674 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionParameterList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionParameterList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgInitializedNamePtrList::const_iterator source_args_iterator = p_args.begin() 
; source_args_iterator != p_args.end(); ++source_args_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_args_iterator,"args"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4713 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVariableDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVariableDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_baseTypeDefiningDeclaration,"baseTypeDefiningDeclaration"));
     for ( SgInitializedNamePtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4753 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVariableDefinition::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVariableDefinition -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_vardefn,"vardefn"));
          returnVector.push_back(pair<SgNode*,std::string>( p_bitfield,"bitfield"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4789 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClinkageDeclarationStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClinkageDeclarationStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4823 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClinkageStartStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClinkageStartStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4857 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClinkageEndStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClinkageEndStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4891 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEnumDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEnumDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
     for ( SgInitializedNamePtrList::const_iterator source_enumerators_iterator = p_enumerators.begin() 
; source_enumerators_iterator != p_enumerators.end(); ++source_enumerators_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_enumerators_iterator,"enumerators"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4932 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_operands_iterator,"operands"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 4971 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAttributeSpecificationStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAttributeSpecificationStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parameter_list,"parameter_list"));
     for ( SgDataStatementGroupPtrList::const_iterator source_data_statement_group_list_iterator = p_data_statement_group_list.begin() 
; source_data_statement_group_list_iterator != p_data_statement_group_list.end(); ++source_data_statement_group_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_data_statement_group_list_iterator,"data_statement_group_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_bind_list,"bind_list"));
     for ( SgDimensionObjectPtrList::const_iterator source_dimension_object_list_iterator = p_dimension_object_list.begin() 
; source_dimension_object_list_iterator != p_dimension_object_list.end(); ++source_dimension_object_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_dimension_object_list_iterator,"dimension_object_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5017 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFormatStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFormatStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_format_item_list,"format_item_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5052 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgTemplateParameterPtrList::const_iterator source_templateParameters_iterator = p_templateParameters.begin() 
; source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_templateParameters_iterator,"templateParameters"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5092 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateClassDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateClassDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
     for ( SgTemplateParameterPtrList::const_iterator source_templateParameters_iterator = p_templateParameters.begin() 
; source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_templateParameters_iterator,"templateParameters"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5133 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateFunctionDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateFunctionDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
     for ( SgTemplateParameterPtrList::const_iterator source_templateParameters_iterator = p_templateParameters.begin() 
; source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_templateParameters_iterator,"templateParameters"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5174 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateMemberFunctionDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateMemberFunctionDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
     for ( SgTemplateParameterPtrList::const_iterator source_templateParameters_iterator = p_templateParameters.begin() 
; source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_templateParameters_iterator,"templateParameters"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5215 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateInstantiationDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateInstantiationDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5250 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUseStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUseStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgRenamePairPtrList::const_iterator source_rename_list_iterator = p_rename_list.begin() 
; source_rename_list_iterator != p_rename_list.end(); ++source_rename_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_rename_list_iterator,"rename_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_module,"module"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5290 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgParameterStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgParameterStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5324 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNamespaceDeclarationStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNamespaceDeclarationStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5359 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEquivalenceStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEquivalenceStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_equivalence_set_list,"equivalence_set_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5394 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgInterfaceStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgInterfaceStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgInterfaceBodyPtrList::const_iterator source_interface_body_list_iterator = p_interface_body_list.begin() 
; source_interface_body_list_iterator != p_interface_body_list.end(); ++source_interface_body_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_interface_body_list_iterator,"interface_body_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5434 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNamespaceAliasDeclarationStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNamespaceAliasDeclarationStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_namespaceDeclaration,"namespaceDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5469 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCommonBlock::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCommonBlock -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgCommonBlockObjectPtrList::const_iterator source_block_list_iterator = p_block_list.begin() 
; source_block_list_iterator != p_block_list.end(); ++source_block_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_block_list_iterator,"block_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5508 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypedefDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypedefDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_type,"base_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent_scope,"parent_scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5547 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStatementFunctionStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStatementFunctionStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_function,"function"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5583 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCtorInitializerList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCtorInitializerList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgInitializedNamePtrList::const_iterator source_ctors_iterator = p_ctors.begin() 
; source_ctors_iterator != p_ctors.end(); ++source_ctors_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_ctors_iterator,"ctors"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5622 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPragmaDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPragmaDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_pragma,"pragma"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5657 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUsingDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUsingDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_namespaceDeclaration,"namespaceDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5692 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClassDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClassDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5730 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateInstantiationDecl::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateInstantiationDecl -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_templateDeclaration,"templateDeclaration"));
     for ( SgTemplateArgumentPtrList::const_iterator source_templateArguments_iterator = p_templateArguments.begin() 
; source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_templateArguments_iterator,"templateArguments"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5774 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDerivedTypeStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDerivedTypeStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5813 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgModuleStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgModuleStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5852 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgImplicitStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgImplicitStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgInitializedNamePtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5891 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUsingDeclarationStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUsingDeclarationStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_initializedName,"initializedName"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5927 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNamelistStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNamelistStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgNameGroupPtrList::const_iterator source_group_list_iterator = p_group_list.begin() 
; source_group_list_iterator != p_group_list.end(); ++source_group_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_group_list_iterator,"group_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 5966 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgImportStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgImportStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgExpressionPtrList::const_iterator source_import_list_iterator = p_import_list.begin() 
; source_import_list_iterator != p_import_list.end(); ++source_import_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_import_list_iterator,"import_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6005 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parameterList,"parameterList"));
     for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_exceptionSpecification_iterator,"exceptionSpecification"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6049 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMemberFunctionDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMemberFunctionDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_CtorInitializerList,"CtorInitializerList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_associatedClassDeclaration,"associatedClassDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parameterList,"parameterList"));
     for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_exceptionSpecification_iterator,"exceptionSpecification"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6095 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateInstantiationMemberFunctionDecl::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateInstantiationMemberFunctionDecl -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_templateDeclaration,"templateDeclaration"));
     for ( SgTemplateArgumentPtrList::const_iterator source_templateArguments_iterator = p_templateArguments.begin() 
; source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_templateArguments_iterator,"templateArguments"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_CtorInitializerList,"CtorInitializerList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_associatedClassDeclaration,"associatedClassDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parameterList,"parameterList"));
     for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_exceptionSpecification_iterator,"exceptionSpecification"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6147 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateInstantiationFunctionDecl::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateInstantiationFunctionDecl -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_templateDeclaration,"templateDeclaration"));
     for ( SgTemplateArgumentPtrList::const_iterator source_templateArguments_iterator = p_templateArguments.begin() 
; source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_templateArguments_iterator,"templateArguments"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parameterList,"parameterList"));
     for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_exceptionSpecification_iterator,"exceptionSpecification"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6197 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgProgramHeaderStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgProgramHeaderStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parameterList,"parameterList"));
     for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_exceptionSpecification_iterator,"exceptionSpecification"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6242 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgProcedureHeaderStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgProcedureHeaderStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_result_name,"result_name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parameterList,"parameterList"));
     for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_exceptionSpecification_iterator,"exceptionSpecification"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6288 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEntryStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEntryStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_result_name,"result_name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parameterList,"parameterList"));
     for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_exceptionSpecification_iterator,"exceptionSpecification"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_decoratorList,"decoratorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definition,"definition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6333 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgContainsStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgContainsStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6367 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgC_PreprocessorDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgC_PreprocessorDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6401 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIncludeDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIncludeDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_headerFileBody,"headerFileBody"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6436 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDefineDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDefineDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6470 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUndefDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUndefDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6504 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIfdefDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIfdefDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6538 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIfndefDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIfndefDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6572 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIfDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIfDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6606 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDeadIfDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDeadIfDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6640 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgElseDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgElseDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6674 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgElseifDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgElseifDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6708 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEndifDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEndifDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6742 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLineDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLineDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6776 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgWarningDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgWarningDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6810 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgErrorDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgErrorDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6844 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEmptyDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEmptyDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6878 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIncludeNextDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIncludeNextDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6912 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIdentDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIdentDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6946 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLinemarkerDirectiveStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLinemarkerDirectiveStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 6980 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpThreadprivateStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpThreadprivateStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7019 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFortranIncludeLine::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFortranIncludeLine -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7053 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaImportStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaImportStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7087 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStmtDeclarationStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStmtDeclarationStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_statement,"statement"));
          returnVector.push_back(pair<SgNode*,std::string>( p_definingDeclaration,"definingDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_firstNondefiningDeclaration,"firstNondefiningDeclaration"));
     for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_qualifiedNameList_iterator,"qualifiedNameList"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7122 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgExprStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgExprStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7150 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLabelStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLabelStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_scope,"scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_statement,"statement"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7179 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCaseOptionStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCaseOptionStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_key,"key"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_key_range_end,"key_range_end"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7209 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTryStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTryStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_catch_statement_seq_root,"catch_statement_seq_root"));
          returnVector.push_back(pair<SgNode*,std::string>( p_else_body,"else_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_finally_body,"finally_body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7240 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDefaultOptionStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDefaultOptionStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7268 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBreakStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBreakStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7295 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgContinueStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgContinueStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7322 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgReturnStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgReturnStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7350 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGotoStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGotoStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_label,"label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_label_expression,"label_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7379 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSpawnStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSpawnStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_the_func,"the_func"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7407 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNullStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNullStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7434 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVariantStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVariantStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7461 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgForInitStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgForInitStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgStatementPtrList::const_iterator source_init_stmt_iterator = p_init_stmt.begin() 
; source_init_stmt_iterator != p_init_stmt.end(); ++source_init_stmt_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_init_stmt_iterator,"init_stmt"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7493 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCatchStatementSeq::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCatchStatementSeq -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgStatementPtrList::const_iterator source_catch_statement_seq_iterator = p_catch_statement_seq.begin() 
; source_catch_statement_seq_iterator != p_catch_statement_seq.end(); ++source_catch_statement_seq_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_catch_statement_seq_iterator,"catch_statement_seq"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7525 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStopOrPauseStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStopOrPauseStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_code,"code"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7553 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIOStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIOStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7585 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPrintStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPrintStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_format,"format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7618 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgReadStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgReadStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_format,"format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rec,"rec"));
          returnVector.push_back(pair<SgNode*,std::string>( p_end,"end"));
          returnVector.push_back(pair<SgNode*,std::string>( p_namelist,"namelist"));
          returnVector.push_back(pair<SgNode*,std::string>( p_advance,"advance"));
          returnVector.push_back(pair<SgNode*,std::string>( p_size,"size"));
          returnVector.push_back(pair<SgNode*,std::string>( p_eor,"eor"));
          returnVector.push_back(pair<SgNode*,std::string>( p_asynchronous,"asynchronous"));
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7658 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgWriteStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgWriteStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_format,"format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rec,"rec"));
          returnVector.push_back(pair<SgNode*,std::string>( p_namelist,"namelist"));
          returnVector.push_back(pair<SgNode*,std::string>( p_advance,"advance"));
          returnVector.push_back(pair<SgNode*,std::string>( p_asynchronous,"asynchronous"));
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7695 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOpenStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOpenStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_status,"status"));
          returnVector.push_back(pair<SgNode*,std::string>( p_access,"access"));
          returnVector.push_back(pair<SgNode*,std::string>( p_form,"form"));
          returnVector.push_back(pair<SgNode*,std::string>( p_recl,"recl"));
          returnVector.push_back(pair<SgNode*,std::string>( p_blank,"blank"));
          returnVector.push_back(pair<SgNode*,std::string>( p_position,"position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_action,"action"));
          returnVector.push_back(pair<SgNode*,std::string>( p_delim,"delim"));
          returnVector.push_back(pair<SgNode*,std::string>( p_pad,"pad"));
          returnVector.push_back(pair<SgNode*,std::string>( p_round,"round"));
          returnVector.push_back(pair<SgNode*,std::string>( p_sign,"sign"));
          returnVector.push_back(pair<SgNode*,std::string>( p_asynchronous,"asynchronous"));
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7740 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCloseStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCloseStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_status,"status"));
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7773 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgInquireStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgInquireStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_access,"access"));
          returnVector.push_back(pair<SgNode*,std::string>( p_form,"form"));
          returnVector.push_back(pair<SgNode*,std::string>( p_recl,"recl"));
          returnVector.push_back(pair<SgNode*,std::string>( p_blank,"blank"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exist,"exist"));
          returnVector.push_back(pair<SgNode*,std::string>( p_opened,"opened"));
          returnVector.push_back(pair<SgNode*,std::string>( p_number,"number"));
          returnVector.push_back(pair<SgNode*,std::string>( p_named,"named"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_sequential,"sequential"));
          returnVector.push_back(pair<SgNode*,std::string>( p_direct,"direct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_formatted,"formatted"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unformatted,"unformatted"));
          returnVector.push_back(pair<SgNode*,std::string>( p_nextrec,"nextrec"));
          returnVector.push_back(pair<SgNode*,std::string>( p_position,"position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_action,"action"));
          returnVector.push_back(pair<SgNode*,std::string>( p_read,"read"));
          returnVector.push_back(pair<SgNode*,std::string>( p_write,"write"));
          returnVector.push_back(pair<SgNode*,std::string>( p_readwrite,"readwrite"));
          returnVector.push_back(pair<SgNode*,std::string>( p_delim,"delim"));
          returnVector.push_back(pair<SgNode*,std::string>( p_pad,"pad"));
          returnVector.push_back(pair<SgNode*,std::string>( p_asynchronous,"asynchronous"));
          returnVector.push_back(pair<SgNode*,std::string>( p_decimal,"decimal"));
          returnVector.push_back(pair<SgNode*,std::string>( p_stream,"stream"));
          returnVector.push_back(pair<SgNode*,std::string>( p_size,"size"));
          returnVector.push_back(pair<SgNode*,std::string>( p_pending,"pending"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iolengthExp,"iolengthExp"));
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7833 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFlushStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFlushStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7865 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBackspaceStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBackspaceStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7897 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgRewindStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgRewindStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7929 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEndfileStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEndfileStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7961 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgWaitStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgWaitStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_io_stmt_list,"io_stmt_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unit,"unit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iostat,"iostat"));
          returnVector.push_back(pair<SgNode*,std::string>( p_err,"err"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iomsg,"iomsg"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 7993 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgWhereStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgWhereStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_condition,"condition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_elsewhere,"elsewhere"));
          returnVector.push_back(pair<SgNode*,std::string>( p_end_numeric_label,"end_numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8024 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgElseWhereStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgElseWhereStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_condition,"condition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_elsewhere,"elsewhere"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8054 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNullifyStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNullifyStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_pointer_list,"pointer_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8082 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgArithmeticIfStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgArithmeticIfStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_conditional,"conditional"));
          returnVector.push_back(pair<SgNode*,std::string>( p_less_label,"less_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_equal_label,"equal_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_greater_label,"greater_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8113 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAssignStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAssignStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_label,"label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_value,"value"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8142 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgComputedGotoStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgComputedGotoStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_labelList,"labelList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_label_index,"label_index"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8171 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAssignedGotoStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAssignedGotoStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_targets,"targets"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8199 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAllocateStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAllocateStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expr_list,"expr_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_stat_expression,"stat_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_errmsg_expression,"errmsg_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_expression,"source_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8230 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDeallocateStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDeallocateStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expr_list,"expr_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_stat_expression,"stat_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_errmsg_expression,"errmsg_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8260 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcNotifyStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcNotifyStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_notify_expression,"notify_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8288 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcWaitStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcWaitStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_wait_expression,"wait_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8316 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcBarrierStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcBarrierStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_barrier_expression,"barrier_expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8344 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcFenceStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcFenceStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8371 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpBarrierStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpBarrierStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8398 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpTaskwaitStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpTaskwaitStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8425 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpFlushStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpFlushStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_variables_iterator,"variables"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8457 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpBodyStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpBodyStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8485 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpAtomicStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpAtomicStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8513 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpMasterStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpMasterStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8541 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpOrderedStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpOrderedStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8569 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpCriticalStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpCriticalStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8597 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpSectionStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpSectionStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8625 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpWorkshareStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpWorkshareStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8653 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpClauseBodyStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpClauseBodyStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_clauses_iterator,"clauses"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8686 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpParallelStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpParallelStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_clauses_iterator,"clauses"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8719 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpSingleStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpSingleStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_clauses_iterator,"clauses"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8752 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpTaskStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpTaskStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_clauses_iterator,"clauses"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8785 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpForStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpForStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_clauses_iterator,"clauses"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8818 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpDoStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpDoStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_clauses_iterator,"clauses"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8851 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOmpSectionsStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOmpSectionsStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_clauses_iterator,"clauses"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8884 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSequenceStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSequenceStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8911 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgWithStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgWithStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8940 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPythonPrintStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPythonPrintStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_destination,"destination"));
          returnVector.push_back(pair<SgNode*,std::string>( p_values,"values"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8969 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPassStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPassStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 8996 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAssertStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAssertStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_test,"test"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exception_argument,"exception_argument"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9025 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgExecStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgExecStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_executable,"executable"));
          returnVector.push_back(pair<SgNode*,std::string>( p_globals,"globals"));
          returnVector.push_back(pair<SgNode*,std::string>( p_locals,"locals"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9055 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPythonGlobalStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPythonGlobalStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgInitializedNamePtrList::const_iterator source_names_iterator = p_names.begin() 
; source_names_iterator != p_names.end(); ++source_names_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_names_iterator,"names"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9087 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaThrowStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaThrowStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_throwOp,"throwOp"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9115 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaSynchronizedStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaSynchronizedStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_numeric_label,"numeric_label"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9144 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9171 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnaryOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnaryOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9200 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgExpressionRoot::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgExpressionRoot -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9229 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMinusOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMinusOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9258 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnaryAddOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnaryAddOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9287 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNotOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNotOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9316 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPointerDerefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPointerDerefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9345 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAddressOfOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAddressOfOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9374 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMinusMinusOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMinusMinusOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9403 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPlusPlusOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPlusPlusOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9432 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBitComplementOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBitComplementOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9461 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCastExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCastExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9491 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgThrowOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgThrowOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9520 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgRealPartOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgRealPartOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9549 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgImagPartOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgImagPartOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9578 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgConjugateOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgConjugateOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9607 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUserDefinedUnaryOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUserDefinedUnaryOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9637 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBinaryOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBinaryOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9668 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgArrowExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgArrowExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9699 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDotExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDotExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9730 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDotStarOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDotStarOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9761 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgArrowStarOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgArrowStarOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9792 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEqualityOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEqualityOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9823 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLessThanOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLessThanOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9854 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGreaterThanOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGreaterThanOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9885 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNotEqualOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNotEqualOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9916 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLessOrEqualOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLessOrEqualOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9947 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgGreaterOrEqualOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgGreaterOrEqualOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 9978 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAddOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAddOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10009 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSubtractOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSubtractOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10040 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMultiplyOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMultiplyOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10071 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDivideOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDivideOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10102 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIntegerDivideOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIntegerDivideOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10133 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgModOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgModOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10164 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAndOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAndOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10195 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgOrOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgOrOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10226 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBitXorOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBitXorOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10257 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBitAndOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBitAndOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10288 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBitOrOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBitOrOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10319 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCommaOpExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCommaOpExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10350 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLshiftOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLshiftOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10381 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgRshiftOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgRshiftOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10412 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPntrArrRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPntrArrRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10443 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgScopeOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgScopeOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10474 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10505 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgExponentiationOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgExponentiationOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10536 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaUnsignedRshiftOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaUnsignedRshiftOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10567 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgConcatenationOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgConcatenationOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10598 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPointerAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPointerAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10629 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUserDefinedBinaryOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUserDefinedBinaryOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10661 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCompoundAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCompoundAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10692 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPlusAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPlusAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10723 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMinusAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMinusAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10754 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAndAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAndAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10785 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIorAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIorAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10816 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMultAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMultAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10847 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDivAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDivAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10878 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgModAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgModAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10909 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgXorAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgXorAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10940 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLshiftAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLshiftAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 10971 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgRshiftAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgRshiftAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11002 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaUnsignedRshiftAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaUnsignedRshiftAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11033 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIntegerDivideAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIntegerDivideAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11064 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgExponentiationAssignOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgExponentiationAssignOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11095 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMembershipOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMembershipOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11126 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNonMembershipOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNonMembershipOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11157 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIsOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIsOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11188 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIsNotOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIsNotOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand_i,"lhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand_i,"rhs_operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11219 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgExprListExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgExprListExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgExpressionPtrList::const_iterator source_expressions_iterator = p_expressions.begin() 
; source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_expressions_iterator,"expressions"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11251 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgListExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgListExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgExpressionPtrList::const_iterator source_expressions_iterator = p_expressions.begin() 
; source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_expressions_iterator,"expressions"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11283 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTupleExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTupleExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgExpressionPtrList::const_iterator source_expressions_iterator = p_expressions.begin() 
; source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_expressions_iterator,"expressions"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11315 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVarRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVarRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11344 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClassNameRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClassNameRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11372 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_i,"symbol_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_function_type,"function_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11402 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMemberFunctionRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMemberFunctionRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_i,"symbol_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_function_type,"function_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11431 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgValueExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgValueExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11459 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgBoolValExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgBoolValExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11487 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStringVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStringVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11515 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgShortVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgShortVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11543 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCharVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCharVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11571 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnsignedCharVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnsignedCharVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11599 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgWcharVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgWcharVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11627 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnsignedShortVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnsignedShortVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11655 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIntVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIntVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11683 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEnumVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEnumVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11712 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnsignedIntVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnsignedIntVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11740 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLongIntVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLongIntVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11768 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLongLongIntVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLongLongIntVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11796 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnsignedLongLongIntVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnsignedLongLongIntVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11824 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnsignedLongVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnsignedLongVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11852 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFloatVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFloatVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11880 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDoubleVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDoubleVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11908 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLongDoubleVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLongDoubleVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11936 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgComplexVal::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgComplexVal -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_real_value,"real_value"));
          returnVector.push_back(pair<SgNode*,std::string>( p_imaginary_value,"imaginary_value"));
          returnVector.push_back(pair<SgNode*,std::string>( p_precisionType,"precisionType"));
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11967 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcThreads::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcThreads -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 11995 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcMythread::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcMythread -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_originalExpressionTree,"originalExpressionTree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12023 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCallExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCallExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_function,"function"));
          returnVector.push_back(pair<SgNode*,std::string>( p_args,"args"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12053 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionCallExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionCallExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_function,"function"));
          returnVector.push_back(pair<SgNode*,std::string>( p_args,"args"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12083 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSizeOfOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSizeOfOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_expr,"operand_expr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_type,"operand_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12113 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcLocalsizeofExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcLocalsizeofExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_type,"operand_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12143 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcBlocksizeofExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcBlocksizeofExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_type,"operand_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12173 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUpcElemsizeofExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUpcElemsizeofExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_type,"operand_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12203 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaInstanceOfOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaInstanceOfOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_expr,"operand_expr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_type,"operand_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12233 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSuperExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSuperExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_class_symbol,"class_symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12261 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypeIdOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypeIdOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_expr,"operand_expr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_type,"operand_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12291 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgConditionalExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgConditionalExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_conditional_exp,"conditional_exp"));
          returnVector.push_back(pair<SgNode*,std::string>( p_true_exp,"true_exp"));
          returnVector.push_back(pair<SgNode*,std::string>( p_false_exp,"false_exp"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12322 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNewExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNewExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_specified_type,"specified_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_placement_args,"placement_args"));
          returnVector.push_back(pair<SgNode*,std::string>( p_constructor_args,"constructor_args"));
          returnVector.push_back(pair<SgNode*,std::string>( p_builtin_args,"builtin_args"));
          returnVector.push_back(pair<SgNode*,std::string>( p_newOperatorDeclaration,"newOperatorDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12354 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDeleteExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDeleteExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_variable,"variable"));
          returnVector.push_back(pair<SgNode*,std::string>( p_deleteOperatorDeclaration,"deleteOperatorDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12383 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgThisExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgThisExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_class_symbol,"class_symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12411 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type_name,"type_name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12439 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgInitializer::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgInitializer -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12466 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAggregateInitializer::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAggregateInitializer -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_initializers,"initializers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12495 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCompoundInitializer::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCompoundInitializer -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_initializers,"initializers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12524 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgConstructorInitializer::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgConstructorInitializer -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_args,"args"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12554 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAssignInitializer::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAssignInitializer -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_i,"operand_i"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12583 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDesignatedInitializer::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDesignatedInitializer -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_designatorList,"designatorList"));
          returnVector.push_back(pair<SgNode*,std::string>( p_memberInit,"memberInit"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12612 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVarArgStartOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVarArgStartOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand,"lhs_operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand,"rhs_operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12642 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVarArgOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVarArgOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_expr,"operand_expr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12671 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVarArgEndOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVarArgEndOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_expr,"operand_expr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12700 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVarArgCopyOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVarArgCopyOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs_operand,"lhs_operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs_operand,"rhs_operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12730 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVarArgStartOneOperandOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVarArgStartOneOperandOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand_expr,"operand_expr"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12759 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNullExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNullExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12786 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVariantExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVariantExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12813 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSubscriptExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSubscriptExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lowerBound,"lowerBound"));
          returnVector.push_back(pair<SgNode*,std::string>( p_upperBound,"upperBound"));
          returnVector.push_back(pair<SgNode*,std::string>( p_stride,"stride"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12843 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgColonShapeExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgColonShapeExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12870 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsteriskShapeExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsteriskShapeExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12897 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgImpliedDo::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgImpliedDo -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_do_var_initialization,"do_var_initialization"));
          returnVector.push_back(pair<SgNode*,std::string>( p_last_val,"last_val"));
          returnVector.push_back(pair<SgNode*,std::string>( p_increment,"increment"));
          returnVector.push_back(pair<SgNode*,std::string>( p_object_list,"object_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_implied_do_scope,"implied_do_scope"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12929 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIOItemExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIOItemExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_io_item,"io_item"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12957 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStatementExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStatementExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_statement,"statement"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 12985 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13013 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLabelRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLabelRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13041 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgActualArgumentExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgActualArgumentExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13069 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgUnknownArrayOrFunctionReference::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgUnknownArrayOrFunctionReference -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_named_reference,"named_reference"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_list,"expression_list"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13098 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgPseudoDestructorRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgPseudoDestructorRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_object_type,"object_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_expression_type,"expression_type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13127 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCAFCoExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCAFCoExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_teamId,"teamId"));
          returnVector.push_back(pair<SgNode*,std::string>( p_teamRank,"teamRank"));
          returnVector.push_back(pair<SgNode*,std::string>( p_referData,"referData"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13157 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCudaKernelCallExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCudaKernelCallExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_function,"function"));
          returnVector.push_back(pair<SgNode*,std::string>( p_args,"args"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exec_config,"exec_config"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13187 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCudaKernelExecConfig::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCudaKernelExecConfig -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_grid,"grid"));
          returnVector.push_back(pair<SgNode*,std::string>( p_blocks,"blocks"));
          returnVector.push_back(pair<SgNode*,std::string>( p_shared,"shared"));
          returnVector.push_back(pair<SgNode*,std::string>( p_stream,"stream"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13218 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLambdaRefExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLambdaRefExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_functionDeclaration,"functionDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13246 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDictionaryExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDictionaryExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgKeyDatumPairPtrList::const_iterator source_key_datum_pairs_iterator = p_key_datum_pairs.begin() 
; source_key_datum_pairs_iterator != p_key_datum_pairs.end(); ++source_key_datum_pairs_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_key_datum_pairs_iterator,"key_datum_pairs"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13278 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgKeyDatumPair::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgKeyDatumPair -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_key,"key"));
          returnVector.push_back(pair<SgNode*,std::string>( p_datum,"datum"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13307 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgComprehension::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgComprehension -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_target,"target"));
          returnVector.push_back(pair<SgNode*,std::string>( p_iter,"iter"));
          returnVector.push_back(pair<SgNode*,std::string>( p_filters,"filters"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13337 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgListComprehension::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgListComprehension -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_element,"element"));
          returnVector.push_back(pair<SgNode*,std::string>( p_generators,"generators"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13366 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSetComprehension::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSetComprehension -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_element,"element"));
          returnVector.push_back(pair<SgNode*,std::string>( p_generators,"generators"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13395 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDictionaryComprehension::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDictionaryComprehension -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_element,"element"));
          returnVector.push_back(pair<SgNode*,std::string>( p_generators,"generators"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13424 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNaryOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNaryOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_operands_iterator,"operands"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13456 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNaryBooleanOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNaryBooleanOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_operands_iterator,"operands"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13488 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNaryComparisonOp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNaryComparisonOp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_operands_iterator,"operands"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13520 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgStringConversion::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgStringConversion -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_expression,"expression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13548 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgYieldExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgYieldExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_value,"value"));
          returnVector.push_back(pair<SgNode*,std::string>( p_operatorPosition,"operatorPosition"));
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13576 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgToken::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgToken -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_startOfConstruct,"startOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_endOfConstruct,"endOfConstruct"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13602 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13626 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgVariableSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgVariableSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13651 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13676 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgMemberFunctionSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgMemberFunctionSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13701 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgRenameSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgRenameSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_original_symbol,"original_symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13727 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgFunctionTypeSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgFunctionTypeSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13752 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgClassSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgClassSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13777 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTemplateSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTemplateSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13802 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEnumSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEnumSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13827 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgEnumFieldSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgEnumFieldSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13852 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgTypedefSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgTypedefSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13877 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgLabelSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgLabelSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_fortran_statement,"fortran_statement"));
          returnVector.push_back(pair<SgNode*,std::string>( p_fortran_alternate_return_parameter,"fortran_alternate_return_parameter"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13904 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgDefaultSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgDefaultSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13929 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgNamespaceSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgNamespaceSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_aliasDeclaration,"aliasDeclaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13955 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgIntrinsicSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgIntrinsicSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 13980 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgModuleSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgModuleSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14005 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgInterfaceSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgInterfaceSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14030 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgCommonSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgCommonSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14055 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAliasSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAliasSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_alias,"alias"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14080 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryAddressSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryAddressSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_address,"address"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14105 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryDataSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryDataSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_address,"address"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14130 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgJavaLabelSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgJavaLabelSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_declaration,"declaration"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14155 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNode::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNode -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14179 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmStatement::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmStatement -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14203 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmFunction::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmFunction -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmStatementPtrList::const_iterator source_statementList_iterator = p_statementList.begin() 
; source_statementList_iterator != p_statementList.end(); ++source_statementList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_statementList_iterator,"statementList"));
        } 
     for ( SgAsmStatementPtrList::const_iterator source_dest_iterator = p_dest.begin() 
; source_dest_iterator != p_dest.end(); ++source_dest_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_dest_iterator,"dest"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol_table,"symbol_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14238 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBlock::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBlock -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmStatementPtrList::const_iterator source_statementList_iterator = p_statementList.begin() 
; source_statementList_iterator != p_statementList.end(); ++source_statementList_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_statementList_iterator,"statementList"));
        } 
     for ( SgAsmIntegerValuePtrList::const_iterator source_successors_iterator = p_successors.begin() 
; source_successors_iterator != p_successors.end(); ++source_successors_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_successors_iterator,"successors"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_immediate_dominator,"immediate_dominator"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14273 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmInstruction::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmInstruction -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operandList,"operandList"));
     for ( SgAsmStatementPtrList::const_iterator source_sources_iterator = p_sources.begin() 
; source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_sources_iterator,"sources"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14303 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmx86Instruction::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmx86Instruction -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operandList,"operandList"));
     for ( SgAsmStatementPtrList::const_iterator source_sources_iterator = p_sources.begin() 
; source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_sources_iterator,"sources"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14333 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmArmInstruction::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmArmInstruction -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operandList,"operandList"));
     for ( SgAsmStatementPtrList::const_iterator source_sources_iterator = p_sources.begin() 
; source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_sources_iterator,"sources"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14363 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPowerpcInstruction::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPowerpcInstruction -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operandList,"operandList"));
     for ( SgAsmStatementPtrList::const_iterator source_sources_iterator = p_sources.begin() 
; source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_sources_iterator,"sources"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14393 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmStaticData::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmStaticData -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14417 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14441 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14467 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmIntegerValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmIntegerValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_node,"base_node"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14494 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmByteValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmByteValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_node,"base_node"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14521 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmWordValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmWordValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_node,"base_node"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14548 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDoubleWordValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDoubleWordValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_node,"base_node"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14575 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmQuadWordValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmQuadWordValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_base_node,"base_node"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14602 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmSingleFloatValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmSingleFloatValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14628 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDoubleFloatValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDoubleFloatValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14654 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmVectorValueExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmVectorValueExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_unfolded_expression_tree,"unfolded_expression_tree"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbol,"symbol"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14681 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14707 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryAdd::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryAdd -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14733 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinarySubtract::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinarySubtract -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14759 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryMultiply::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryMultiply -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14785 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryDivide::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryDivide -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14811 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryMod::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryMod -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14837 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryAddPreupdate::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryAddPreupdate -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14863 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinarySubtractPreupdate::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinarySubtractPreupdate -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14889 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryAddPostupdate::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryAddPostupdate -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14915 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinarySubtractPostupdate::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinarySubtractPostupdate -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14941 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryLsl::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryLsl -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14967 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryLsr::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryLsr -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 14993 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryAsr::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryAsr -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15019 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBinaryRor::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBinaryRor -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_lhs,"lhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rhs,"rhs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15045 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmUnaryExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmUnaryExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand,"operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15070 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmUnaryPlus::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmUnaryPlus -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand,"operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15095 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmUnaryMinus::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmUnaryMinus -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand,"operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15120 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmUnaryRrx::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmUnaryRrx -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand,"operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15145 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmUnaryArmSpecialRegisterList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmUnaryArmSpecialRegisterList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_operand,"operand"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15170 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmMemoryReferenceExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmMemoryReferenceExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_address,"address"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment,"segment"));
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15197 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmRegisterReferenceExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmRegisterReferenceExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15222 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmx86RegisterReferenceExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmx86RegisterReferenceExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15247 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmArmRegisterReferenceExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmArmRegisterReferenceExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15272 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPowerpcRegisterReferenceExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPowerpcRegisterReferenceExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_type,"type"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15297 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmControlFlagsExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmControlFlagsExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15321 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmCommonSubExpression::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmCommonSubExpression -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_subexpression,"subexpression"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15346 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmExprListExp::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmExprListExp -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmExpressionPtrList::const_iterator source_expressions_iterator = p_expressions.begin() 
; source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_expressions_iterator,"expressions"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15375 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmInterpretation::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmInterpretation -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_dwarf_info,"dwarf_info"));
          returnVector.push_back(pair<SgNode*,std::string>( p_headers,"headers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_global_block,"global_block"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15402 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmOperandList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmOperandList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_operands_iterator,"operands"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15431 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15455 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmTypeByte::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmTypeByte -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15479 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmTypeWord::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmTypeWord -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15503 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmTypeDoubleWord::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmTypeDoubleWord -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15527 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmTypeQuadWord::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmTypeQuadWord -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15551 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmTypeDoubleQuadWord::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmTypeDoubleQuadWord -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15575 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmType80bitFloat::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmType80bitFloat -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15599 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmType128bitFloat::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmType128bitFloat -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15623 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmTypeSingleFloat::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmTypeSingleFloat -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15647 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmTypeDoubleFloat::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmTypeDoubleFloat -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15671 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmTypeVector::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmTypeVector -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_elementType,"elementType"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15696 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmExecutableFileFormat::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmExecutableFileFormat -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15720 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericDLL::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericDLL -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15745 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericFormat::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericFormat -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15769 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericDLLList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericDLLList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmGenericDLLPtrList::const_iterator source_dlls_iterator = p_dlls.begin() 
; source_dlls_iterator != p_dlls.end(); ++source_dlls_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_dlls_iterator,"dlls"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15798 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfEHFrameEntryFD::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfEHFrameEntryFD -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15822 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericFile::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericFile -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_headers,"headers"));
          returnVector.push_back(pair<SgNode*,std::string>( p_holes,"holes"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15848 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15875 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericHeader::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericHeader -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_exec_format,"exec_format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dlls,"dlls"));
          returnVector.push_back(pair<SgNode*,std::string>( p_sections,"sections"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15905 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEFileHeader::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEFileHeader -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_rvasize_pairs,"rvasize_pairs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_table,"section_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_coff_symtab,"coff_symtab"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exec_format,"exec_format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dlls,"dlls"));
          returnVector.push_back(pair<SgNode*,std::string>( p_sections,"sections"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15938 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLEFileHeader::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLEFileHeader -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_dos2_header,"dos2_header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_table,"section_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_page_table,"page_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_resname_table,"resname_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_nonresname_table,"nonresname_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_entry_table,"entry_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_reloc_table,"reloc_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exec_format,"exec_format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dlls,"dlls"));
          returnVector.push_back(pair<SgNode*,std::string>( p_sections,"sections"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 15975 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNEFileHeader::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNEFileHeader -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_dos2_header,"dos2_header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_table,"section_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_resname_table,"resname_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_nonresname_table,"nonresname_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_module_table,"module_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_entry_table,"entry_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exec_format,"exec_format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dlls,"dlls"));
          returnVector.push_back(pair<SgNode*,std::string>( p_sections,"sections"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16011 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDOSFileHeader::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDOSFileHeader -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_relocs,"relocs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_rm_section,"rm_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exec_format,"exec_format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dlls,"dlls"));
          returnVector.push_back(pair<SgNode*,std::string>( p_sections,"sections"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16043 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfFileHeader::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfFileHeader -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_section_table,"section_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_table,"segment_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exec_format,"exec_format"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dlls,"dlls"));
          returnVector.push_back(pair<SgNode*,std::string>( p_sections,"sections"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16075 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16105 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymbolSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymbolSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_symbols,"symbols"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16136 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfRelocSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfRelocSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_target_section,"target_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_entries,"entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16168 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfDynamicSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfDynamicSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_entries,"entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16199 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfStringSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfStringSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_strtab,"strtab"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16230 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfNoteSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfNoteSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_entries,"entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16261 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfEHFrameSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfEHFrameSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_ci_entries,"ci_entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16292 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_entries,"entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16323 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverDefinedSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverDefinedSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_entries,"entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16354 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverNeededSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverNeededSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_entries,"entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_linked_section,"linked_section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_segment_entry,"segment_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16385 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSectionTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSectionTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16412 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSegmentTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSegmentTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16439 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPESection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPESection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16467 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEImportSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEImportSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_import_directories,"import_directories"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16496 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEExportSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEExportSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_export_dir,"export_dir"));
          returnVector.push_back(pair<SgNode*,std::string>( p_exports,"exports"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16526 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEStringSection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEStringSection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_strtab,"strtab"));
          returnVector.push_back(pair<SgNode*,std::string>( p_section_entry,"section_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16555 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPESectionTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPESectionTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16582 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDOSExtendedHeader::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDOSExtendedHeader -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16609 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmCoffSymbolTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmCoffSymbolTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_strtab,"strtab"));
          returnVector.push_back(pair<SgNode*,std::string>( p_symbols,"symbols"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16638 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNESection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNESection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_st_entry,"st_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_reloc_table,"reloc_table"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16667 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNESectionTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNESectionTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16694 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNENameTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNENameTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16721 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNEModuleTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNEModuleTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_strtab,"strtab"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16749 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNEStringTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNEStringTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16776 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNEEntryTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNEEntryTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmNEEntryPointPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16808 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNERelocTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNERelocTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmNERelocEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16840 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLESection::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLESection -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_st_entry,"st_entry"));
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16868 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLESectionTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLESectionTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16895 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLENameTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLENameTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16922 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLEPageTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLEPageTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmLEPageTableEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16954 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLEEntryTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLEEntryTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmLEEntryPointPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 16986 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLERelocTable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLERelocTable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmLERelocEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_file,"file"));
          returnVector.push_back(pair<SgNode*,std::string>( p_header,"header"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17018 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_bound,"bound"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17044 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmCoffSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmCoffSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_bound,"bound"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17070 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymbol::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymbol -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_bound,"bound"));
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17096 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericStrtab::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericStrtab -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_container,"container"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dont_free,"dont_free"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17122 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfStrtab::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfStrtab -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_container,"container"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dont_free,"dont_free"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17148 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmCoffStrtab::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmCoffStrtab -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_container,"container"));
          returnVector.push_back(pair<SgNode*,std::string>( p_dont_free,"dont_free"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17174 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericSymbolList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericSymbolList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmGenericSymbolPtrList::const_iterator source_symbols_iterator = p_symbols.begin() 
; source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_symbols_iterator,"symbols"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17203 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericSectionList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericSectionList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmGenericSectionPtrList::const_iterator source_sections_iterator = p_sections.begin() 
; source_sections_iterator != p_sections.end(); ++source_sections_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_sections_iterator,"sections"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17232 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericHeaderList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericHeaderList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmGenericHeaderPtrList::const_iterator source_headers_iterator = p_headers.begin() 
; source_headers_iterator != p_headers.end(); ++source_headers_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_headers_iterator,"headers"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17261 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericString::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericString -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17285 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmBasicString::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmBasicString -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17309 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmStoredString::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmStoredString -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_storage,"storage"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17334 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSectionTableEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSectionTableEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17358 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSegmentTableEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSegmentTableEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17382 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymbolList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymbolList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfSymbolPtrList::const_iterator source_symbols_iterator = p_symbols.begin() 
; source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_symbols_iterator,"symbols"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17411 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfRelocEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfRelocEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17435 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfRelocEntryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfRelocEntryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfRelocEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17464 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEExportEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEExportEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_forwarder,"forwarder"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17490 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEExportEntryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEExportEntryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmPEExportEntryPtrList::const_iterator source_exports_iterator = p_exports.begin() 
; source_exports_iterator != p_exports.end(); ++source_exports_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_exports_iterator,"exports"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17519 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfDynamicEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfDynamicEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17544 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfDynamicEntryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfDynamicEntryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfDynamicEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17573 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSegmentTableEntryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSegmentTableEntryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfSegmentTableEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17602 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmStringStorage::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmStringStorage -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_strtab,"strtab"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17627 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfNoteEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfNoteEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17652 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfNoteEntryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfNoteEntryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfNoteEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17681 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17705 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverEntryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverEntryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfSymverEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17734 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverDefinedEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverDefinedEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_entries,"entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17759 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverDefinedEntryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverDefinedEntryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfSymverDefinedEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17788 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverDefinedAux::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverDefinedAux -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17813 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverDefinedAuxList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverDefinedAuxList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfSymverDefinedAuxPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17842 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverNeededEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverNeededEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_file_name,"file_name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_entries,"entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17868 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverNeededEntryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverNeededEntryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfSymverNeededEntryPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17897 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverNeededAux::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverNeededAux -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17922 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfSymverNeededAuxList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfSymverNeededAuxList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfSymverNeededAuxPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17951 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEImportDirectory::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEImportDirectory -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_dll_name,"dll_name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_imports,"imports"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 17977 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPESectionTableEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPESectionTableEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18001 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEExportDirectory::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEExportDirectory -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18026 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPERVASizePair::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPERVASizePair -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_section,"section"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18051 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmCoffSymbolList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmCoffSymbolList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmCoffSymbolPtrList::const_iterator source_symbols_iterator = p_symbols.begin() 
; source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_symbols_iterator,"symbols"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18080 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPERVASizePairList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPERVASizePairList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmPERVASizePairPtrList::const_iterator source_pairs_iterator = p_pairs.begin() 
; source_pairs_iterator != p_pairs.end(); ++source_pairs_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_pairs_iterator,"pairs"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18109 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfEHFrameEntryCI::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfEHFrameEntryCI -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_fd_entries,"fd_entries"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18134 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEImportDirectoryList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEImportDirectoryList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmPEImportDirectoryPtrList::const_iterator source_vector_iterator = p_vector.begin() 
; source_vector_iterator != p_vector.end(); ++source_vector_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_vector_iterator,"vector"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18163 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNEEntryPoint::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNEEntryPoint -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18187 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNERelocEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNERelocEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18211 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmNESectionTableEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmNESectionTableEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18235 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfEHFrameEntryCIList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfEHFrameEntryCIList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfEHFrameEntryCIPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18264 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLEPageTableEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLEPageTableEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18288 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLEEntryPoint::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLEEntryPoint -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmLEEntryPointPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18317 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmLESectionTableEntry::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmLESectionTableEntry -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18341 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmElfEHFrameEntryFDList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmElfEHFrameEntryFDList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmElfEHFrameEntryFDPtrList::const_iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_entries_iterator,"entries"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18370 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfInformation::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfInformation -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18394 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfMacro::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfMacro -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18418 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfMacroList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfMacroList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmDwarfMacroPtrList::const_iterator source_macro_list_iterator = p_macro_list.begin() 
; source_macro_list_iterator != p_macro_list.end(); ++source_macro_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_macro_list_iterator,"macro_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18447 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfLine::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfLine -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18471 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfLineList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfLineList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmDwarfLinePtrList::const_iterator source_line_list_iterator = p_line_list.begin() 
; source_line_list_iterator != p_line_list.end(); ++source_line_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_line_list_iterator,"line_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18500 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfCompilationUnitList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfCompilationUnitList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmDwarfCompilationUnitPtrList::const_iterator source_cu_list_iterator = p_cu_list.begin() 
; source_cu_list_iterator != p_cu_list.end(); ++source_cu_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_cu_list_iterator,"cu_list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18529 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfConstruct::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfConstruct -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18554 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfArrayType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfArrayType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18580 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfClassType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfClassType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18606 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfEntryPoint::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfEntryPoint -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18631 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfEnumerationType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfEnumerationType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18657 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfFormalParameter::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfFormalParameter -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18682 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfImportedDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfImportedDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18707 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfLabel::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfLabel -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18732 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfLexicalBlock::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfLexicalBlock -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18758 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfMember::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfMember -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18783 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfPointerType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfPointerType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18808 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfReferenceType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfReferenceType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18833 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfCompilationUnit::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfCompilationUnit -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_line_info,"line_info"));
          returnVector.push_back(pair<SgNode*,std::string>( p_language_constructs,"language_constructs"));
          returnVector.push_back(pair<SgNode*,std::string>( p_macro_info,"macro_info"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18861 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfStringType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfStringType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18886 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfStructureType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfStructureType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18912 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfSubroutineType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfSubroutineType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18938 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfTypedef::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfTypedef -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18963 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfUnionType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfUnionType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 18989 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfUnspecifiedParameters::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfUnspecifiedParameters -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19014 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfVariant::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfVariant -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19039 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfCommonBlock::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfCommonBlock -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19065 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfCommonInclusion::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfCommonInclusion -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19090 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfInheritance::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfInheritance -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19115 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfInlinedSubroutine::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfInlinedSubroutine -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19141 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfModule::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfModule -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19166 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfPtrToMemberType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfPtrToMemberType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19191 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfSetType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfSetType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19216 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfSubrangeType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfSubrangeType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19241 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfWithStmt::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfWithStmt -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19266 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfAccessDeclaration::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfAccessDeclaration -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19291 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfBaseType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfBaseType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19316 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfCatchBlock::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfCatchBlock -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19341 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfConstType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfConstType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19366 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfConstant::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfConstant -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19391 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfEnumerator::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfEnumerator -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19416 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfFileType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfFileType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19441 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfFriend::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfFriend -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19466 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfNamelist::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfNamelist -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19491 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfNamelistItem::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfNamelistItem -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19516 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfPackedType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfPackedType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19541 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfSubprogram::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfSubprogram -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19567 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfTemplateTypeParameter::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfTemplateTypeParameter -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19592 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfTemplateValueParameter::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfTemplateValueParameter -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19617 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfThrownType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfThrownType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19642 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfTryBlock::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfTryBlock -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19667 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfVariantPart::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfVariantPart -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19692 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfVariable::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfVariable -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19717 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfVolatileType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfVolatileType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19742 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfDwarfProcedure::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfDwarfProcedure -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19767 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfRestrictType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfRestrictType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19792 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfInterfaceType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfInterfaceType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19817 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfNamespace::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfNamespace -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_body,"body"));
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19843 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfImportedModule::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfImportedModule -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19868 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfUnspecifiedType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfUnspecifiedType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19893 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfPartialUnit::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfPartialUnit -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19918 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfImportedUnit::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfImportedUnit -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19943 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfMutableType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfMutableType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19968 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfCondition::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfCondition -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 19993 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfSharedType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfSharedType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20018 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfFormatLabel::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfFormatLabel -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20043 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfFunctionTemplate::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfFunctionTemplate -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20068 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfClassTemplate::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfClassTemplate -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20093 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfUpcSharedType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfUpcSharedType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20118 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfUpcStrictType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfUpcStrictType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20143 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfUpcRelaxedType::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfUpcRelaxedType -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20168 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfUnknownConstruct::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfUnknownConstruct -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_source_position,"source_position"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20193 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmDwarfConstructList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmDwarfConstructList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmDwarfConstructPtrList::const_iterator source_list_iterator = p_list.begin() 
; source_list_iterator != p_list.end(); ++source_list_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_list_iterator,"list"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20222 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEImportItem::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEImportItem -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
          returnVector.push_back(pair<SgNode*,std::string>( p_name,"name"));
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20247 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmPEImportItemList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmPEImportItemList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmPEImportItemPtrList::const_iterator source_vector_iterator = p_vector.begin() 
; source_vector_iterator != p_vector.end(); ++source_vector_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_vector_iterator,"vector"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20276 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmInterpretationList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmInterpretationList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmInterpretationPtrList::const_iterator source_interpretations_iterator = p_interpretations.begin() 
; source_interpretations_iterator != p_interpretations.end(); ++source_interpretations_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_interpretations_iterator,"interpretations"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }

/* #line 20305 "../../../src/frontend/SageIII//Cxx_GrammarReturnDataMemberPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

std::vector<std::pair<SgNode*,std::string> >
SgAsmGenericFileList::returnDataMemberPointers() const
   {
     ROSE_ASSERT(this != NULL);

  // ------------ checking pointers of SgAsmGenericFileList -------------------
     if (p_freepointer != AST_FileIO::IS_VALID_POINTER() )
        {
          printf ("Error: In node = %s at %p p_freepointer = %p \n",class_name().c_str(),this,p_freepointer);
        }
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

     std::vector<std::pair<SgNode*,std::string> > returnVector;
     for ( SgAsmGenericFilePtrList::const_iterator source_files_iterator = p_files.begin() 
; source_files_iterator != p_files.end(); ++source_files_iterator) 
        { 
          returnVector.push_back(pair<SgNode*,std::string>( *source_files_iterator,"files"));
        } 
          returnVector.push_back(pair<SgNode*,std::string>( p_parent,"parent"));
     return returnVector;

/* #line 15 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarReturnDataMemberPointers.macro" */

   }


