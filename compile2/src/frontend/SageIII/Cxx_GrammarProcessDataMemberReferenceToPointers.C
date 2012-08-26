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

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNode::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNode -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 33 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSupport::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSupport -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 49 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 65 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgModifierNodes::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgModifierNodes -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_next,SgName("next"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 82 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgConstVolatileModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgConstVolatileModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 98 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStorageModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStorageModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 114 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAccessModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAccessModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 130 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_opencl_vec_type,SgName("opencl_vec_type"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 147 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUPC_AccessModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUPC_AccessModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 163 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSpecialFunctionModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSpecialFunctionModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 179 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgElaboratedTypeModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgElaboratedTypeModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 195 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLinkageModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLinkageModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 211 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBaseClassModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBaseClassModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 227 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 243 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDeclarationModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDeclarationModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 259 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOpenclAccessModeModifier::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOpenclAccessModeModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 275 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgName::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgName -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 291 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSymbolTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSymbolTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          if (p_table == NULL)
        {
        }
     else
        {
          for ( rose_hash_multimap::iterator it_table= p_table->begin(); it_table!= p_table->end(); ++it_table)
             {
               handler->apply(it_table->second, it_table->first, false);
             }
        }
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 317 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAttribute::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAttribute -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 333 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPragma::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPragma -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 350 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBitAttribute::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBitAttribute -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 366 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFuncDecl_attr::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFuncDecl_attr -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 382 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClassDecl_attr::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClassDecl_attr -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 398 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
Sg_File_Info::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of Sg_File_Info -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 414 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFile::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFile -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 431 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSourceFile::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSourceFile -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_globalScope,SgName("globalScope"), true);
     for ( SgModuleStatementPtrList::iterator source_module_list_iterator = p_module_list.begin() 
; source_module_list_iterator != p_module_list.end(); ++source_module_list_iterator) 
        { 
          handler->apply(*source_module_list_iterator,SgName("module_list"), false);
        } 
     for ( SgTokenPtrList::iterator source_token_list_iterator = p_token_list.begin() 
; source_token_list_iterator != p_token_list.end(); ++source_token_list_iterator) 
        { 
          handler->apply(*source_token_list_iterator,SgName("token_list"), false);
        } 
          handler->apply(p_temp_holding_scope,SgName("temp_holding_scope"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 460 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBinaryComposite::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBinaryComposite -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_genericFileList,SgName("genericFileList"), true);
          handler->apply(p_interpretations,SgName("interpretations"), true);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 479 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnknownFile::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnknownFile -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_globalScope,SgName("globalScope"), true);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 497 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgProject::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgProject -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_fileList_ptr,SgName("fileList_ptr"), true);
          handler->apply(p_directoryList,SgName("directoryList"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 515 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOptions::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOptions -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 531 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnparse_Info::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnparse_Info -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declstatement_ptr,SgName("declstatement_ptr"), false);
          handler->apply(p_current_context,SgName("current_context"), false);
     for ( static SgTypePtrList::iterator source_structureTagProcessingList_iterator = p_structureTagProcessingList.begin() 
; source_structureTagProcessingList_iterator != p_structureTagProcessingList.end(); ++source_structureTagProcessingList_iterator) 
        { 
          handler->apply(*source_structureTagProcessingList_iterator,SgName("structureTagProcessingList"), false);
        } 
          handler->apply(p_current_namespace,SgName("current_namespace"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_current_function_call,SgName("current_function_call"), false);
          handler->apply(p_current_scope,SgName("current_scope"), false);
          handler->apply(p_reference_node_for_qualification,SgName("reference_node_for_qualification"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 563 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBaseClass::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBaseClass -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_class,SgName("base_class"), true);
          handler->apply(p_baseClassModifier,SgName("baseClassModifier"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 581 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgExpBaseClass::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgExpBaseClass -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_class_exp,SgName("base_class_exp"), true);
          handler->apply(p_base_class,SgName("base_class"), true);
          handler->apply(p_baseClassModifier,SgName("baseClassModifier"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 600 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypedefSeq::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypedefSeq -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgTypePtrList::iterator source_typedefs_iterator = p_typedefs.begin() 
; source_typedefs_iterator != p_typedefs.end(); ++source_typedefs_iterator) 
        { 
          handler->apply(*source_typedefs_iterator,SgName("typedefs"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 621 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateParameter::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateParameter -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_defaultTypeParameter,SgName("defaultTypeParameter"), false);
          handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_defaultExpressionParameter,SgName("defaultExpressionParameter"), true);
          handler->apply(p_templateDeclaration,SgName("templateDeclaration"), true);
          handler->apply(p_defaultTemplateDeclarationParameter,SgName("defaultTemplateDeclarationParameter"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 643 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateArgument::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateArgument -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_templateDeclaration,SgName("templateDeclaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 662 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDirectory::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDirectory -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_fileList,SgName("fileList"), true);
          handler->apply(p_directoryList,SgName("directoryList"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 680 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFileList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFileList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgFilePtrList::iterator source_listOfFiles_iterator = p_listOfFiles.begin() 
; source_listOfFiles_iterator != p_listOfFiles.end(); ++source_listOfFiles_iterator) 
        { 
          handler->apply(*source_listOfFiles_iterator,SgName("listOfFiles"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 701 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDirectoryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDirectoryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgDirectoryPtrList::iterator source_listOfDirectories_iterator = p_listOfDirectories.begin() 
; source_listOfDirectories_iterator != p_listOfDirectories.end(); ++source_listOfDirectories_iterator) 
        { 
          handler->apply(*source_listOfDirectories_iterator,SgName("listOfDirectories"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 722 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionParameterTypeList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionParameterTypeList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgTypePtrList::iterator source_arguments_iterator = p_arguments.begin() 
; source_arguments_iterator != p_arguments.end(); ++source_arguments_iterator) 
        { 
          handler->apply(*source_arguments_iterator,SgName("arguments"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 743 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgQualifiedName::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgQualifiedName -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 760 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateArgumentList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateArgumentList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgTemplateArgumentPtrList::iterator source_args_iterator = p_args.begin() 
; source_args_iterator != p_args.end(); ++source_args_iterator) 
        { 
          handler->apply(*source_args_iterator,SgName("args"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 781 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateParameterList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateParameterList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgTemplateParameterPtrList::iterator source_args_iterator = p_args.begin() 
; source_args_iterator != p_args.end(); ++source_args_iterator) 
        { 
          handler->apply(*source_args_iterator,SgName("args"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 802 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGraph::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 818 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIncidenceDirectedGraph::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIncidenceDirectedGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 834 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBidirectionalGraph::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBidirectionalGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 850 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStringKeyedBidirectionalGraph::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStringKeyedBidirectionalGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 866 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIntKeyedBidirectionalGraph::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIntKeyedBidirectionalGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 882 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIncidenceUndirectedGraph::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIncidenceUndirectedGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 898 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGraphNode::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGraphNode -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_SgNode,SgName("SgNode"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 915 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGraphEdge::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGraphEdge -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_node_A,SgName("node_A"), false);
          handler->apply(p_node_B,SgName("node_B"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 933 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDirectedGraphEdge::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDirectedGraphEdge -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_node_A,SgName("node_A"), false);
          handler->apply(p_node_B,SgName("node_B"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 951 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUndirectedGraphEdge::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUndirectedGraphEdge -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_node_A,SgName("node_A"), false);
          handler->apply(p_node_B,SgName("node_B"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 969 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGraphNodeList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGraphNodeList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 985 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGraphEdgeList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGraphEdgeList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1001 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1018 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNameGroup::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNameGroup -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1034 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDimensionObject::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDimensionObject -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_array,SgName("array"), false);
          handler->apply(p_shape,SgName("shape"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1052 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFormatItem::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFormatItem -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_data,SgName("data"), false);
          handler->apply(p_format_item_list,SgName("format_item_list"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1070 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFormatItemList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFormatItemList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgFormatItemPtrList::iterator source_format_item_list_iterator = p_format_item_list.begin() 
; source_format_item_list_iterator != p_format_item_list.end(); ++source_format_item_list_iterator) 
        { 
          handler->apply(*source_format_item_list_iterator,SgName("format_item_list"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1091 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDataStatementGroup::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDataStatementGroup -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgDataStatementObjectPtrList::iterator source_object_list_iterator = p_object_list.begin() 
; source_object_list_iterator != p_object_list.end(); ++source_object_list_iterator) 
        { 
          handler->apply(*source_object_list_iterator,SgName("object_list"), false);
        } 
     for ( SgDataStatementValuePtrList::iterator source_value_list_iterator = p_value_list.begin() 
; source_value_list_iterator != p_value_list.end(); ++source_value_list_iterator) 
        { 
          handler->apply(*source_value_list_iterator,SgName("value_list"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1117 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDataStatementObject::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDataStatementObject -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_variableReference_list,SgName("variableReference_list"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1134 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDataStatementValue::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDataStatementValue -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_initializer_list,SgName("initializer_list"), false);
          handler->apply(p_repeat_expression,SgName("repeat_expression"), false);
          handler->apply(p_constant_expression,SgName("constant_expression"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1153 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1174 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeUnknown::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeUnknown -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1195 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeChar::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeChar -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1216 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeSignedChar::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeSignedChar -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1237 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeUnsignedChar::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeUnsignedChar -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1258 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeShort::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeShort -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1279 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeSignedShort::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeSignedShort -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1300 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeUnsignedShort::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeUnsignedShort -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1321 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeInt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeInt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1342 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeSignedInt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeSignedInt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1363 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeUnsignedInt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeUnsignedInt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1384 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeLong::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1405 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeSignedLong::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeSignedLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1426 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeUnsignedLong::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeUnsignedLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1447 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeVoid::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeVoid -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1468 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeGlobalVoid::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeGlobalVoid -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1489 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeWchar::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeWchar -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1510 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeFloat::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1531 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeDouble::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeDouble -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1552 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeLongLong::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeLongLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1573 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeSignedLongLong::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeSignedLongLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1594 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeUnsignedLongLong::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeUnsignedLongLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1615 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeLongDouble::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeLongDouble -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1636 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeString::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeString -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lengthExpression,SgName("lengthExpression"), true);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1658 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeBool::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeBool -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1679 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPointerType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPointerType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_type,SgName("base_type"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1701 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPointerMemberType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPointerMemberType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_class_type,SgName("class_type"), false);
          handler->apply(p_base_type,SgName("base_type"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1724 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgReferenceType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgReferenceType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_type,SgName("base_type"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1746 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNamedType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNamedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1768 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClassType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClassType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1790 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaParameterizedType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaParameterizedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_raw_type,SgName("raw_type"), false);
          handler->apply(p_type_list,SgName("type_list"), false);
          handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1814 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEnumType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEnumType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1836 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypedefType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypedefType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent_scope,SgName("parent_scope"), false);
          handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1859 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgModifierType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgModifierType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_type,SgName("base_type"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1881 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_return_type,SgName("return_type"), true);
          handler->apply(p_orig_return_type,SgName("orig_return_type"), true);
          handler->apply(p_argument_list,SgName("argument_list"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1905 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMemberFunctionType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMemberFunctionType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_class_type,SgName("class_type"), false);
          handler->apply(p_return_type,SgName("return_type"), true);
          handler->apply(p_orig_return_type,SgName("orig_return_type"), true);
          handler->apply(p_argument_list,SgName("argument_list"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1930 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPartialFunctionType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPartialFunctionType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_class_type,SgName("class_type"), false);
          handler->apply(p_return_type,SgName("return_type"), true);
          handler->apply(p_orig_return_type,SgName("orig_return_type"), true);
          handler->apply(p_argument_list,SgName("argument_list"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1955 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPartialFunctionModifierType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPartialFunctionModifierType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_class_type,SgName("class_type"), false);
          handler->apply(p_return_type,SgName("return_type"), true);
          handler->apply(p_orig_return_type,SgName("orig_return_type"), true);
          handler->apply(p_argument_list,SgName("argument_list"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 1980 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgArrayType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgArrayType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_type,SgName("base_type"), false);
          handler->apply(p_index,SgName("index"), true);
          handler->apply(p_dim_info,SgName("dim_info"), true);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2004 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeEllipse::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeEllipse -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2025 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2046 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgQualifiedNameType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgQualifiedNameType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_type,SgName("base_type"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2073 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeComplex::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeComplex -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_type,SgName("base_type"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2095 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeImaginary::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeImaginary -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_type,SgName("base_type"), false);
          handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2117 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeDefault::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeDefault -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2138 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeCAFTeam::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeCAFTeam -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2159 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeCrayPointer::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeCrayPointer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2180 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeLabel::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeLabel -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ref_to,SgName("ref_to"), true);
          handler->apply(p_ptr_to,SgName("ptr_to"), true);
          handler->apply(p_modifiers,SgName("modifiers"), true);
          handler->apply(p_typedefs,SgName("typedefs"), true);
          handler->apply(p_type_kind,SgName("type_kind"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2201 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLocatedNode::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLocatedNode -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2219 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLocatedNodeSupport::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLocatedNodeSupport -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2237 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCommonBlockObject::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCommonBlockObject -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_variable_reference_list,SgName("variable_reference_list"), true);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2256 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgInitializedName::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgInitializedName -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_typeptr,SgName("typeptr"), false);
          handler->apply(p_initptr,SgName("initptr"), true);
          handler->apply(p_prev_decl_item,SgName("prev_decl_item"), false);
          handler->apply(p_declptr,SgName("declptr"), false);
          handler->apply(p_storageModifier,SgName("storageModifier"), false);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2280 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgInterfaceBody::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgInterfaceBody -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_functionDeclaration,SgName("functionDeclaration"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2299 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgHeaderFileBody::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgHeaderFileBody -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2317 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgRenamePair::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgRenamePair -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2335 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2353 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpOrderedClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpOrderedClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2371 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpNowaitClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpNowaitClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2389 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpUntiedClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpUntiedClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2407 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpDefaultClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpDefaultClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2425 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpExpressionClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpExpressionClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2444 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpCollapseClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpCollapseClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2463 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpIfClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpIfClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2482 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpNumThreadsClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpNumThreadsClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2501 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpVariablesClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpVariablesClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2524 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpCopyprivateClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpCopyprivateClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2547 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpPrivateClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpPrivateClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2570 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpFirstprivateClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpFirstprivateClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2593 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpSharedClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpSharedClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2616 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpCopyinClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpCopyinClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2639 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpLastprivateClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpLastprivateClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2662 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpReductionClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpReductionClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2685 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpScheduleClause::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpScheduleClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_chunk_size,SgName("chunk_size"), true);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2704 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2723 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgScopeStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgScopeStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2744 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGlobal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGlobal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgDeclarationStatementPtrList::iterator source_declarations_iterator = p_declarations.begin() 
; source_declarations_iterator != p_declarations.end(); ++source_declarations_iterator) 
        { 
          handler->apply(*source_declarations_iterator,SgName("declarations"), true);
        } 
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2770 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBasicBlock::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBasicBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgStatementPtrList::iterator source_statements_iterator = p_statements.begin() 
; source_statements_iterator != p_statements.end(); ++source_statements_iterator) 
        { 
          handler->apply(*source_statements_iterator,SgName("statements"), true);
        } 
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2796 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIfStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIfStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_conditional,SgName("conditional"), true);
          handler->apply(p_true_body,SgName("true_body"), true);
          handler->apply(p_false_body,SgName("false_body"), true);
          handler->apply(p_else_numeric_label,SgName("else_numeric_label"), false);
          handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2822 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgForStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgForStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_for_init_stmt,SgName("for_init_stmt"), true);
          handler->apply(p_test,SgName("test"), true);
          handler->apply(p_increment,SgName("increment"), true);
          handler->apply(p_loop_body,SgName("loop_body"), true);
          handler->apply(p_else_body,SgName("else_body"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2848 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionDefinition::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2870 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateFunctionDefinition::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateFunctionDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2892 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClassDefinition::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClassDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgDeclarationStatementPtrList::iterator source_members_iterator = p_members.begin() 
; source_members_iterator != p_members.end(); ++source_members_iterator) 
        { 
          handler->apply(*source_members_iterator,SgName("members"), true);
        } 
     for ( SgBaseClassPtrList::iterator source_inheritances_iterator = p_inheritances.begin() 
; source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
        { 
          handler->apply(*source_inheritances_iterator,SgName("inheritances"), false);
        } 
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2923 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateInstantiationDefn::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateInstantiationDefn -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgDeclarationStatementPtrList::iterator source_members_iterator = p_members.begin() 
; source_members_iterator != p_members.end(); ++source_members_iterator) 
        { 
          handler->apply(*source_members_iterator,SgName("members"), true);
        } 
     for ( SgBaseClassPtrList::iterator source_inheritances_iterator = p_inheritances.begin() 
; source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
        { 
          handler->apply(*source_inheritances_iterator,SgName("inheritances"), false);
        } 
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2954 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateClassDefinition::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateClassDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgDeclarationStatementPtrList::iterator source_members_iterator = p_members.begin() 
; source_members_iterator != p_members.end(); ++source_members_iterator) 
        { 
          handler->apply(*source_members_iterator,SgName("members"), true);
        } 
     for ( SgBaseClassPtrList::iterator source_inheritances_iterator = p_inheritances.begin() 
; source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
        { 
          handler->apply(*source_inheritances_iterator,SgName("inheritances"), false);
        } 
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 2985 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgWhileStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgWhileStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_condition,SgName("condition"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_else_body,SgName("else_body"), true);
          handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3010 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDoWhileStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDoWhileStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_condition,SgName("condition"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3033 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSwitchStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSwitchStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_item_selector,SgName("item_selector"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3057 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCatchOptionStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCatchOptionStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_condition,SgName("condition"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_trystmt,SgName("trystmt"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3081 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNamespaceDefinitionStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNamespaceDefinitionStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgDeclarationStatementPtrList::iterator source_declarations_iterator = p_declarations.begin() 
; source_declarations_iterator != p_declarations.end(); ++source_declarations_iterator) 
        { 
          handler->apply(*source_declarations_iterator,SgName("declarations"), true);
        } 
          handler->apply(p_namespaceDeclaration,SgName("namespaceDeclaration"), false);
          handler->apply(p_previousNamepaceDefinition,SgName("previousNamepaceDefinition"), false);
          handler->apply(p_nextNamepaceDefinition,SgName("nextNamepaceDefinition"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3110 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBlockDataStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBlockDataStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3132 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAssociateStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAssociateStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_variable_declaration,SgName("variable_declaration"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3155 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFortranDo::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFortranDo -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_initialization,SgName("initialization"), true);
          handler->apply(p_bound,SgName("bound"), true);
          handler->apply(p_increment,SgName("increment"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3181 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFortranNonblockedDo::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFortranNonblockedDo -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_end_statement,SgName("end_statement"), false);
          handler->apply(p_initialization,SgName("initialization"), true);
          handler->apply(p_bound,SgName("bound"), true);
          handler->apply(p_increment,SgName("increment"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3208 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgForAllStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgForAllStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_forall_header,SgName("forall_header"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3232 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcForAllStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcForAllStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_for_init_stmt,SgName("for_init_stmt"), true);
          handler->apply(p_test,SgName("test"), true);
          handler->apply(p_increment,SgName("increment"), true);
          handler->apply(p_affinity,SgName("affinity"), true);
          handler->apply(p_loop_body,SgName("loop_body"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3258 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCAFWithTeamStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCAFWithTeamStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_teamId,SgName("teamId"), false);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3281 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaForEachStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaForEachStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_element,SgName("element"), true);
          handler->apply(p_collection,SgName("collection"), true);
          handler->apply(p_loop_body,SgName("loop_body"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3305 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaLabelStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaLabelStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_statement,SgName("statement"), true);
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_type_table,SgName("type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3327 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionTypeTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionTypeTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_function_type_table,SgName("function_type_table"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3347 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDeclarationStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3373 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionParameterList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionParameterList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgInitializedNamePtrList::iterator source_args_iterator = p_args.begin() 
; source_args_iterator != p_args.end(); ++source_args_iterator) 
        { 
          handler->apply(*source_args_iterator,SgName("args"), true);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3404 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVariableDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVariableDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_baseTypeDefiningDeclaration,SgName("baseTypeDefiningDeclaration"), true);
     for ( SgInitializedNamePtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3436 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVariableDefinition::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVariableDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_vardefn,SgName("vardefn"), true);
          handler->apply(p_bitfield,SgName("bitfield"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3464 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClinkageDeclarationStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClinkageDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3490 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClinkageStartStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClinkageStartStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3516 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClinkageEndStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClinkageEndStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3542 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEnumDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEnumDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
     for ( SgInitializedNamePtrList::iterator source_enumerators_iterator = p_enumerators.begin() 
; source_enumerators_iterator != p_enumerators.end(); ++source_enumerators_iterator) 
        { 
          handler->apply(*source_enumerators_iterator,SgName("enumerators"), true);
        } 
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3575 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgExpressionPtrList::iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          handler->apply(*source_operands_iterator,SgName("operands"), true);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3606 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAttributeSpecificationStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAttributeSpecificationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parameter_list,SgName("parameter_list"), false);
     for ( SgDataStatementGroupPtrList::iterator source_data_statement_group_list_iterator = p_data_statement_group_list.begin() 
; source_data_statement_group_list_iterator != p_data_statement_group_list.end(); ++source_data_statement_group_list_iterator) 
        { 
          handler->apply(*source_data_statement_group_list_iterator,SgName("data_statement_group_list"), false);
        } 
          handler->apply(p_bind_list,SgName("bind_list"), false);
     for ( SgDimensionObjectPtrList::iterator source_dimension_object_list_iterator = p_dimension_object_list.begin() 
; source_dimension_object_list_iterator != p_dimension_object_list.end(); ++source_dimension_object_list_iterator) 
        { 
          handler->apply(*source_dimension_object_list_iterator,SgName("dimension_object_list"), false);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3644 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFormatStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFormatStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_format_item_list,SgName("format_item_list"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3671 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgTemplateParameterPtrList::iterator source_templateParameters_iterator = p_templateParameters.begin() 
; source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
        { 
          handler->apply(*source_templateParameters_iterator,SgName("templateParameters"), false);
        } 
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3703 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateClassDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateClassDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definition,SgName("definition"), true);
     for ( SgTemplateParameterPtrList::iterator source_templateParameters_iterator = p_templateParameters.begin() 
; source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
        { 
          handler->apply(*source_templateParameters_iterator,SgName("templateParameters"), false);
        } 
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3736 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateFunctionDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateFunctionDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definition,SgName("definition"), true);
     for ( SgTemplateParameterPtrList::iterator source_templateParameters_iterator = p_templateParameters.begin() 
; source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
        { 
          handler->apply(*source_templateParameters_iterator,SgName("templateParameters"), false);
        } 
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3769 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateMemberFunctionDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateMemberFunctionDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definition,SgName("definition"), true);
     for ( SgTemplateParameterPtrList::iterator source_templateParameters_iterator = p_templateParameters.begin() 
; source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
        { 
          handler->apply(*source_templateParameters_iterator,SgName("templateParameters"), false);
        } 
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3802 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateInstantiationDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateInstantiationDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3829 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUseStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUseStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgRenamePairPtrList::iterator source_rename_list_iterator = p_rename_list.begin() 
; source_rename_list_iterator != p_rename_list.end(); ++source_rename_list_iterator) 
        { 
          handler->apply(*source_rename_list_iterator,SgName("rename_list"), true);
        } 
          handler->apply(p_module,SgName("module"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3861 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgParameterStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgParameterStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3887 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNamespaceDeclarationStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNamespaceDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3914 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEquivalenceStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEquivalenceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_equivalence_set_list,SgName("equivalence_set_list"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3941 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgInterfaceStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgInterfaceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgInterfaceBodyPtrList::iterator source_interface_body_list_iterator = p_interface_body_list.begin() 
; source_interface_body_list_iterator != p_interface_body_list.end(); ++source_interface_body_list_iterator) 
        { 
          handler->apply(*source_interface_body_list_iterator,SgName("interface_body_list"), true);
        } 
          handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 3973 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNamespaceAliasDeclarationStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNamespaceAliasDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_namespaceDeclaration,SgName("namespaceDeclaration"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4000 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCommonBlock::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCommonBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgCommonBlockObjectPtrList::iterator source_block_list_iterator = p_block_list.begin() 
; source_block_list_iterator != p_block_list.end(); ++source_block_list_iterator) 
        { 
          handler->apply(*source_block_list_iterator,SgName("block_list"), true);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4031 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypedefDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypedefDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_type,SgName("base_type"), false);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent_scope,SgName("parent_scope"), false);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4062 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStatementFunctionStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStatementFunctionStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_function,SgName("function"), true);
          handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4090 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCtorInitializerList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCtorInitializerList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgInitializedNamePtrList::iterator source_ctors_iterator = p_ctors.begin() 
; source_ctors_iterator != p_ctors.end(); ++source_ctors_iterator) 
        { 
          handler->apply(*source_ctors_iterator,SgName("ctors"), true);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4121 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPragmaDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPragmaDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_pragma,SgName("pragma"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4148 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUsingDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUsingDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_namespaceDeclaration,SgName("namespaceDeclaration"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4175 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClassDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClassDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4205 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateInstantiationDecl::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateInstantiationDecl -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_templateDeclaration,SgName("templateDeclaration"), false);
     for ( SgTemplateArgumentPtrList::iterator source_templateArguments_iterator = p_templateArguments.begin() 
; source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
        { 
          handler->apply(*source_templateArguments_iterator,SgName("templateArguments"), false);
        } 
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4241 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDerivedTypeStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDerivedTypeStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4272 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgModuleStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgModuleStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4303 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgImplicitStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgImplicitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgInitializedNamePtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4334 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUsingDeclarationStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUsingDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), false);
          handler->apply(p_initializedName,SgName("initializedName"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4362 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNamelistStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNamelistStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgNameGroupPtrList::iterator source_group_list_iterator = p_group_list.begin() 
; source_group_list_iterator != p_group_list.end(); ++source_group_list_iterator) 
        { 
          handler->apply(*source_group_list_iterator,SgName("group_list"), false);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4393 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgImportStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgImportStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgExpressionPtrList::iterator source_import_list_iterator = p_import_list.begin() 
; source_import_list_iterator != p_import_list.end(); ++source_import_list_iterator) 
        { 
          handler->apply(*source_import_list_iterator,SgName("import_list"), false);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4424 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parameterList,SgName("parameterList"), true);
     for ( SgTypePtrList::iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          handler->apply(*source_exceptionSpecification_iterator,SgName("exceptionSpecification"), false);
        } 
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4460 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMemberFunctionDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMemberFunctionDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_CtorInitializerList,SgName("CtorInitializerList"), true);
          handler->apply(p_associatedClassDeclaration,SgName("associatedClassDeclaration"), false);
          handler->apply(p_parameterList,SgName("parameterList"), true);
     for ( SgTypePtrList::iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          handler->apply(*source_exceptionSpecification_iterator,SgName("exceptionSpecification"), false);
        } 
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4498 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateInstantiationMemberFunctionDecl::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateInstantiationMemberFunctionDecl -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_templateDeclaration,SgName("templateDeclaration"), false);
     for ( SgTemplateArgumentPtrList::iterator source_templateArguments_iterator = p_templateArguments.begin() 
; source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
        { 
          handler->apply(*source_templateArguments_iterator,SgName("templateArguments"), false);
        } 
          handler->apply(p_CtorInitializerList,SgName("CtorInitializerList"), true);
          handler->apply(p_associatedClassDeclaration,SgName("associatedClassDeclaration"), false);
          handler->apply(p_parameterList,SgName("parameterList"), true);
     for ( SgTypePtrList::iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          handler->apply(*source_exceptionSpecification_iterator,SgName("exceptionSpecification"), false);
        } 
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4542 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateInstantiationFunctionDecl::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateInstantiationFunctionDecl -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_templateDeclaration,SgName("templateDeclaration"), false);
     for ( SgTemplateArgumentPtrList::iterator source_templateArguments_iterator = p_templateArguments.begin() 
; source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
        { 
          handler->apply(*source_templateArguments_iterator,SgName("templateArguments"), false);
        } 
          handler->apply(p_parameterList,SgName("parameterList"), true);
     for ( SgTypePtrList::iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          handler->apply(*source_exceptionSpecification_iterator,SgName("exceptionSpecification"), false);
        } 
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4584 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgProgramHeaderStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgProgramHeaderStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_parameterList,SgName("parameterList"), true);
     for ( SgTypePtrList::iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          handler->apply(*source_exceptionSpecification_iterator,SgName("exceptionSpecification"), false);
        } 
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4621 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgProcedureHeaderStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgProcedureHeaderStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_result_name,SgName("result_name"), true);
          handler->apply(p_parameterList,SgName("parameterList"), true);
     for ( SgTypePtrList::iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          handler->apply(*source_exceptionSpecification_iterator,SgName("exceptionSpecification"), false);
        } 
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4659 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEntryStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEntryStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_result_name,SgName("result_name"), true);
          handler->apply(p_parameterList,SgName("parameterList"), true);
     for ( SgTypePtrList::iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin() 
; source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
        { 
          handler->apply(*source_exceptionSpecification_iterator,SgName("exceptionSpecification"), false);
        } 
          handler->apply(p_decoratorList,SgName("decoratorList"), true);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_definition,SgName("definition"), true);
          handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4696 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgContainsStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgContainsStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4722 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgC_PreprocessorDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgC_PreprocessorDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4748 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIncludeDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIncludeDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_headerFileBody,SgName("headerFileBody"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4775 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDefineDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDefineDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4801 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUndefDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUndefDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4827 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIfdefDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIfdefDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4853 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIfndefDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIfndefDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4879 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIfDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIfDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4905 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDeadIfDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDeadIfDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4931 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgElseDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgElseDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4957 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgElseifDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgElseifDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 4983 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEndifDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEndifDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5009 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLineDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLineDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5035 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgWarningDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgWarningDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5061 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgErrorDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgErrorDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5087 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEmptyDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEmptyDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5113 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIncludeNextDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIncludeNextDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5139 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIdentDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIdentDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5165 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLinemarkerDirectiveStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLinemarkerDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5191 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpThreadprivateStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpThreadprivateStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5222 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFortranIncludeLine::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFortranIncludeLine -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5248 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaImportStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaImportStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5274 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStmtDeclarationStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStmtDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_statement,SgName("statement"), true);
          handler->apply(p_definingDeclaration,SgName("definingDeclaration"), false);
          handler->apply(p_firstNondefiningDeclaration,SgName("firstNondefiningDeclaration"), false);
     for ( SgQualifiedNamePtrList::iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin() 
; source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
        { 
          handler->apply(*source_qualifiedNameList_iterator,SgName("qualifiedNameList"), false);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5301 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgExprStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgExprStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5321 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLabelStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLabelStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_scope,SgName("scope"), false);
          handler->apply(p_statement,SgName("statement"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5342 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCaseOptionStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCaseOptionStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_key,SgName("key"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_key_range_end,SgName("key_range_end"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5364 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTryStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTryStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_catch_statement_seq_root,SgName("catch_statement_seq_root"), true);
          handler->apply(p_else_body,SgName("else_body"), true);
          handler->apply(p_finally_body,SgName("finally_body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5387 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDefaultOptionStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDefaultOptionStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5407 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBreakStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBreakStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5426 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgContinueStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgContinueStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5445 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgReturnStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgReturnStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5465 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGotoStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGotoStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_label,SgName("label"), false);
          handler->apply(p_label_expression,SgName("label_expression"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5486 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSpawnStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSpawnStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_the_func,SgName("the_func"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5506 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNullStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNullStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5525 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVariantStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVariantStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5544 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgForInitStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgForInitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgStatementPtrList::iterator source_init_stmt_iterator = p_init_stmt.begin() 
; source_init_stmt_iterator != p_init_stmt.end(); ++source_init_stmt_iterator) 
        { 
          handler->apply(*source_init_stmt_iterator,SgName("init_stmt"), true);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5568 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCatchStatementSeq::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCatchStatementSeq -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgStatementPtrList::iterator source_catch_statement_seq_iterator = p_catch_statement_seq.begin() 
; source_catch_statement_seq_iterator != p_catch_statement_seq.end(); ++source_catch_statement_seq_iterator) 
        { 
          handler->apply(*source_catch_statement_seq_iterator,SgName("catch_statement_seq"), true);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5592 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStopOrPauseStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStopOrPauseStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_code,SgName("code"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5612 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIOStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIOStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5636 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPrintStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPrintStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_format,SgName("format"), true);
          handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5661 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgReadStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgReadStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_format,SgName("format"), true);
          handler->apply(p_rec,SgName("rec"), true);
          handler->apply(p_end,SgName("end"), true);
          handler->apply(p_namelist,SgName("namelist"), true);
          handler->apply(p_advance,SgName("advance"), true);
          handler->apply(p_size,SgName("size"), true);
          handler->apply(p_eor,SgName("eor"), true);
          handler->apply(p_asynchronous,SgName("asynchronous"), true);
          handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5693 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgWriteStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgWriteStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_format,SgName("format"), true);
          handler->apply(p_rec,SgName("rec"), true);
          handler->apply(p_namelist,SgName("namelist"), true);
          handler->apply(p_advance,SgName("advance"), true);
          handler->apply(p_asynchronous,SgName("asynchronous"), true);
          handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5722 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOpenStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOpenStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), true);
          handler->apply(p_status,SgName("status"), true);
          handler->apply(p_access,SgName("access"), true);
          handler->apply(p_form,SgName("form"), true);
          handler->apply(p_recl,SgName("recl"), true);
          handler->apply(p_blank,SgName("blank"), true);
          handler->apply(p_position,SgName("position"), true);
          handler->apply(p_action,SgName("action"), true);
          handler->apply(p_delim,SgName("delim"), true);
          handler->apply(p_pad,SgName("pad"), true);
          handler->apply(p_round,SgName("round"), true);
          handler->apply(p_sign,SgName("sign"), true);
          handler->apply(p_asynchronous,SgName("asynchronous"), true);
          handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5759 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCloseStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCloseStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_status,SgName("status"), true);
          handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5784 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgInquireStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgInquireStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_access,SgName("access"), false);
          handler->apply(p_form,SgName("form"), false);
          handler->apply(p_recl,SgName("recl"), false);
          handler->apply(p_blank,SgName("blank"), false);
          handler->apply(p_exist,SgName("exist"), false);
          handler->apply(p_opened,SgName("opened"), false);
          handler->apply(p_number,SgName("number"), false);
          handler->apply(p_named,SgName("named"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_sequential,SgName("sequential"), false);
          handler->apply(p_direct,SgName("direct"), false);
          handler->apply(p_formatted,SgName("formatted"), false);
          handler->apply(p_unformatted,SgName("unformatted"), false);
          handler->apply(p_nextrec,SgName("nextrec"), false);
          handler->apply(p_position,SgName("position"), false);
          handler->apply(p_action,SgName("action"), false);
          handler->apply(p_read,SgName("read"), false);
          handler->apply(p_write,SgName("write"), false);
          handler->apply(p_readwrite,SgName("readwrite"), false);
          handler->apply(p_delim,SgName("delim"), false);
          handler->apply(p_pad,SgName("pad"), false);
          handler->apply(p_asynchronous,SgName("asynchronous"), false);
          handler->apply(p_decimal,SgName("decimal"), false);
          handler->apply(p_stream,SgName("stream"), false);
          handler->apply(p_size,SgName("size"), false);
          handler->apply(p_pending,SgName("pending"), false);
          handler->apply(p_iolengthExp,SgName("iolengthExp"), false);
          handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5836 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFlushStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFlushStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5860 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBackspaceStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBackspaceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5884 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgRewindStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgRewindStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5908 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEndfileStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEndfileStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5932 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgWaitStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgWaitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_io_stmt_list,SgName("io_stmt_list"), true);
          handler->apply(p_unit,SgName("unit"), true);
          handler->apply(p_iostat,SgName("iostat"), true);
          handler->apply(p_err,SgName("err"), true);
          handler->apply(p_iomsg,SgName("iomsg"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5956 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgWhereStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgWhereStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_condition,SgName("condition"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_elsewhere,SgName("elsewhere"), true);
          handler->apply(p_end_numeric_label,SgName("end_numeric_label"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 5979 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgElseWhereStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgElseWhereStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_condition,SgName("condition"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_elsewhere,SgName("elsewhere"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6001 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNullifyStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNullifyStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_pointer_list,SgName("pointer_list"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6021 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgArithmeticIfStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgArithmeticIfStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_conditional,SgName("conditional"), true);
          handler->apply(p_less_label,SgName("less_label"), false);
          handler->apply(p_equal_label,SgName("equal_label"), false);
          handler->apply(p_greater_label,SgName("greater_label"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6044 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAssignStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAssignStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_label,SgName("label"), false);
          handler->apply(p_value,SgName("value"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6065 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgComputedGotoStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgComputedGotoStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_labelList,SgName("labelList"), true);
          handler->apply(p_label_index,SgName("label_index"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6086 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAssignedGotoStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAssignedGotoStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_targets,SgName("targets"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6106 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAllocateStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAllocateStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expr_list,SgName("expr_list"), true);
          handler->apply(p_stat_expression,SgName("stat_expression"), true);
          handler->apply(p_errmsg_expression,SgName("errmsg_expression"), true);
          handler->apply(p_source_expression,SgName("source_expression"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6129 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDeallocateStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDeallocateStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expr_list,SgName("expr_list"), true);
          handler->apply(p_stat_expression,SgName("stat_expression"), true);
          handler->apply(p_errmsg_expression,SgName("errmsg_expression"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6151 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcNotifyStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcNotifyStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_notify_expression,SgName("notify_expression"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6171 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcWaitStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcWaitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_wait_expression,SgName("wait_expression"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6191 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcBarrierStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcBarrierStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_barrier_expression,SgName("barrier_expression"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6211 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcFenceStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcFenceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6230 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpBarrierStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpBarrierStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6249 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpTaskwaitStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpTaskwaitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6268 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpFlushStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpFlushStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgVarRefExpPtrList::iterator source_variables_iterator = p_variables.begin() 
; source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
        { 
          handler->apply(*source_variables_iterator,SgName("variables"), true);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6292 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpBodyStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpBodyStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6312 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpAtomicStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpAtomicStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6332 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpMasterStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpMasterStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6352 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpOrderedStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpOrderedStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6372 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpCriticalStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpCriticalStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6392 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpSectionStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpSectionStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6412 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpWorkshareStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpWorkshareStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6432 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpClauseBodyStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpClauseBodyStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgOmpClausePtrList::iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          handler->apply(*source_clauses_iterator,SgName("clauses"), true);
        } 
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6457 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpParallelStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpParallelStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgOmpClausePtrList::iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          handler->apply(*source_clauses_iterator,SgName("clauses"), true);
        } 
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6482 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpSingleStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpSingleStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgOmpClausePtrList::iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          handler->apply(*source_clauses_iterator,SgName("clauses"), true);
        } 
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6507 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpTaskStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpTaskStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgOmpClausePtrList::iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          handler->apply(*source_clauses_iterator,SgName("clauses"), true);
        } 
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6532 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpForStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpForStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgOmpClausePtrList::iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          handler->apply(*source_clauses_iterator,SgName("clauses"), true);
        } 
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6557 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpDoStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpDoStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgOmpClausePtrList::iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          handler->apply(*source_clauses_iterator,SgName("clauses"), true);
        } 
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6582 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOmpSectionsStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOmpSectionsStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgOmpClausePtrList::iterator source_clauses_iterator = p_clauses.begin() 
; source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
        { 
          handler->apply(*source_clauses_iterator,SgName("clauses"), true);
        } 
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6607 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSequenceStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSequenceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6626 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgWithStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgWithStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6647 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPythonPrintStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPythonPrintStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_destination,SgName("destination"), true);
          handler->apply(p_values,SgName("values"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6668 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPassStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPassStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6687 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAssertStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAssertStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_test,SgName("test"), true);
          handler->apply(p_exception_argument,SgName("exception_argument"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6708 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgExecStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgExecStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_executable,SgName("executable"), true);
          handler->apply(p_globals,SgName("globals"), true);
          handler->apply(p_locals,SgName("locals"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6730 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPythonGlobalStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPythonGlobalStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgInitializedNamePtrList::iterator source_names_iterator = p_names.begin() 
; source_names_iterator != p_names.end(); ++source_names_iterator) 
        { 
          handler->apply(*source_names_iterator,SgName("names"), true);
        } 
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6754 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaThrowStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaThrowStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_throwOp,SgName("throwOp"), false);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6774 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaSynchronizedStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaSynchronizedStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_body,SgName("body"), true);
          handler->apply(p_numeric_label,SgName("numeric_label"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6795 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6814 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnaryOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6835 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgExpressionRoot::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgExpressionRoot -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6856 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMinusOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMinusOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6877 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnaryAddOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnaryAddOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6898 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNotOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNotOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6919 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPointerDerefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPointerDerefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6940 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAddressOfOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAddressOfOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6961 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMinusMinusOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMinusMinusOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 6982 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPlusPlusOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPlusPlusOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7003 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBitComplementOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBitComplementOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7024 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCastExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCastExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7046 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgThrowOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgThrowOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7067 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgRealPartOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgRealPartOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7088 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgImagPartOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgImagPartOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7109 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgConjugateOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgConjugateOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7130 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUserDefinedUnaryOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUserDefinedUnaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7152 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBinaryOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBinaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7175 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgArrowExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgArrowExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7198 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDotExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDotExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7221 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDotStarOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDotStarOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7244 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgArrowStarOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgArrowStarOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7267 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEqualityOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEqualityOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7290 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLessThanOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLessThanOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7313 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGreaterThanOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGreaterThanOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7336 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNotEqualOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNotEqualOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7359 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLessOrEqualOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLessOrEqualOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7382 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgGreaterOrEqualOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgGreaterOrEqualOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7405 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAddOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAddOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7428 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSubtractOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSubtractOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7451 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMultiplyOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMultiplyOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7474 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDivideOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDivideOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7497 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIntegerDivideOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIntegerDivideOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7520 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgModOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgModOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7543 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAndOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAndOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7566 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgOrOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgOrOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7589 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBitXorOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBitXorOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7612 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBitAndOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBitAndOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7635 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBitOrOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBitOrOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7658 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCommaOpExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCommaOpExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7681 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLshiftOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLshiftOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7704 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgRshiftOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgRshiftOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7727 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPntrArrRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPntrArrRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7750 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgScopeOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgScopeOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7773 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7796 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgExponentiationOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgExponentiationOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7819 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaUnsignedRshiftOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaUnsignedRshiftOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7842 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgConcatenationOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgConcatenationOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7865 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPointerAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPointerAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7888 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUserDefinedBinaryOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUserDefinedBinaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7912 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCompoundAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCompoundAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7935 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPlusAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPlusAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7958 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMinusAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMinusAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 7981 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAndAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAndAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8004 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIorAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIorAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8027 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMultAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMultAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8050 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDivAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDivAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8073 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgModAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgModAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8096 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgXorAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgXorAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8119 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLshiftAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLshiftAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8142 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgRshiftAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgRshiftAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8165 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaUnsignedRshiftAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaUnsignedRshiftAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8188 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIntegerDivideAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIntegerDivideAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8211 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgExponentiationAssignOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgExponentiationAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8234 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMembershipOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMembershipOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8257 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNonMembershipOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNonMembershipOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8280 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIsOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIsOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8303 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIsNotOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIsNotOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand_i,SgName("lhs_operand_i"), true);
          handler->apply(p_rhs_operand_i,SgName("rhs_operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8326 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgExprListExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgExprListExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgExpressionPtrList::iterator source_expressions_iterator = p_expressions.begin() 
; source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
        { 
          handler->apply(*source_expressions_iterator,SgName("expressions"), true);
        } 
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8350 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgListExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgListExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgExpressionPtrList::iterator source_expressions_iterator = p_expressions.begin() 
; source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
        { 
          handler->apply(*source_expressions_iterator,SgName("expressions"), true);
        } 
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8374 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTupleExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTupleExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgExpressionPtrList::iterator source_expressions_iterator = p_expressions.begin() 
; source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
        { 
          handler->apply(*source_expressions_iterator,SgName("expressions"), true);
        } 
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8398 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVarRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVarRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8419 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClassNameRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClassNameRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8439 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbol_i,SgName("symbol_i"), false);
          handler->apply(p_function_type,SgName("function_type"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8461 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMemberFunctionRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMemberFunctionRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbol_i,SgName("symbol_i"), false);
          handler->apply(p_function_type,SgName("function_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8482 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgValueExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgValueExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8502 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgBoolValExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgBoolValExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8522 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStringVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStringVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8542 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgShortVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgShortVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8562 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCharVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCharVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8582 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnsignedCharVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnsignedCharVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8602 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgWcharVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgWcharVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8622 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnsignedShortVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnsignedShortVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8642 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIntVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8662 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEnumVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEnumVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8683 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnsignedIntVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnsignedIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8703 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLongIntVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLongIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8723 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLongLongIntVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLongLongIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8743 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnsignedLongLongIntVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnsignedLongLongIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8763 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnsignedLongVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnsignedLongVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8783 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFloatVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFloatVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8803 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDoubleVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDoubleVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8823 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLongDoubleVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLongDoubleVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8843 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgComplexVal::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgComplexVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_real_value,SgName("real_value"), true);
          handler->apply(p_imaginary_value,SgName("imaginary_value"), true);
          handler->apply(p_precisionType,SgName("precisionType"), false);
          handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8866 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcThreads::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcThreads -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8886 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcMythread::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcMythread -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_originalExpressionTree,SgName("originalExpressionTree"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8906 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCallExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCallExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_function,SgName("function"), true);
          handler->apply(p_args,SgName("args"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8928 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionCallExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionCallExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_function,SgName("function"), true);
          handler->apply(p_args,SgName("args"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8950 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSizeOfOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSizeOfOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_expr,SgName("operand_expr"), true);
          handler->apply(p_operand_type,SgName("operand_type"), false);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8972 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcLocalsizeofExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcLocalsizeofExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_operand_type,SgName("operand_type"), false);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 8994 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcBlocksizeofExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcBlocksizeofExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_operand_type,SgName("operand_type"), false);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9016 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUpcElemsizeofExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUpcElemsizeofExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_operand_type,SgName("operand_type"), false);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9038 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaInstanceOfOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaInstanceOfOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_expr,SgName("operand_expr"), true);
          handler->apply(p_operand_type,SgName("operand_type"), false);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9060 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSuperExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSuperExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_class_symbol,SgName("class_symbol"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9080 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypeIdOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypeIdOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_expr,SgName("operand_expr"), true);
          handler->apply(p_operand_type,SgName("operand_type"), false);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9102 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgConditionalExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgConditionalExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_conditional_exp,SgName("conditional_exp"), true);
          handler->apply(p_true_exp,SgName("true_exp"), true);
          handler->apply(p_false_exp,SgName("false_exp"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9125 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNewExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNewExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_specified_type,SgName("specified_type"), false);
          handler->apply(p_placement_args,SgName("placement_args"), true);
          handler->apply(p_constructor_args,SgName("constructor_args"), true);
          handler->apply(p_builtin_args,SgName("builtin_args"), true);
          handler->apply(p_newOperatorDeclaration,SgName("newOperatorDeclaration"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9149 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDeleteExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDeleteExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_variable,SgName("variable"), true);
          handler->apply(p_deleteOperatorDeclaration,SgName("deleteOperatorDeclaration"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9170 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgThisExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgThisExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_class_symbol,SgName("class_symbol"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9190 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type_name,SgName("type_name"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9210 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgInitializer::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9229 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAggregateInitializer::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAggregateInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_initializers,SgName("initializers"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9250 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCompoundInitializer::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCompoundInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_initializers,SgName("initializers"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9271 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgConstructorInitializer::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgConstructorInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), false);
          handler->apply(p_args,SgName("args"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9293 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAssignInitializer::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAssignInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_i,SgName("operand_i"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9314 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDesignatedInitializer::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDesignatedInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_designatorList,SgName("designatorList"), true);
          handler->apply(p_memberInit,SgName("memberInit"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9335 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVarArgStartOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVarArgStartOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand,SgName("lhs_operand"), true);
          handler->apply(p_rhs_operand,SgName("rhs_operand"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9357 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVarArgOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVarArgOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_expr,SgName("operand_expr"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9378 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVarArgEndOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVarArgEndOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_expr,SgName("operand_expr"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9399 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVarArgCopyOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVarArgCopyOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs_operand,SgName("lhs_operand"), true);
          handler->apply(p_rhs_operand,SgName("rhs_operand"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9421 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVarArgStartOneOperandOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVarArgStartOneOperandOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand_expr,SgName("operand_expr"), true);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9442 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNullExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNullExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9461 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVariantExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVariantExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9480 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSubscriptExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSubscriptExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lowerBound,SgName("lowerBound"), true);
          handler->apply(p_upperBound,SgName("upperBound"), true);
          handler->apply(p_stride,SgName("stride"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9502 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgColonShapeExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgColonShapeExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9521 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsteriskShapeExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsteriskShapeExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9540 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgImpliedDo::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgImpliedDo -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_do_var_initialization,SgName("do_var_initialization"), true);
          handler->apply(p_last_val,SgName("last_val"), true);
          handler->apply(p_increment,SgName("increment"), true);
          handler->apply(p_object_list,SgName("object_list"), true);
          handler->apply(p_implied_do_scope,SgName("implied_do_scope"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9564 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIOItemExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIOItemExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_io_item,SgName("io_item"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9584 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStatementExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStatementExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_statement,SgName("statement"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9604 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9624 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLabelRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLabelRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9644 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgActualArgumentExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgActualArgumentExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9664 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgUnknownArrayOrFunctionReference::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgUnknownArrayOrFunctionReference -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_named_reference,SgName("named_reference"), true);
          handler->apply(p_expression_list,SgName("expression_list"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9685 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgPseudoDestructorRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgPseudoDestructorRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_object_type,SgName("object_type"), false);
          handler->apply(p_expression_type,SgName("expression_type"), false);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9706 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCAFCoExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCAFCoExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_teamId,SgName("teamId"), false);
          handler->apply(p_teamRank,SgName("teamRank"), false);
          handler->apply(p_referData,SgName("referData"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9728 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCudaKernelCallExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCudaKernelCallExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_function,SgName("function"), true);
          handler->apply(p_args,SgName("args"), true);
          handler->apply(p_exec_config,SgName("exec_config"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9750 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCudaKernelExecConfig::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCudaKernelExecConfig -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_grid,SgName("grid"), true);
          handler->apply(p_blocks,SgName("blocks"), true);
          handler->apply(p_shared,SgName("shared"), true);
          handler->apply(p_stream,SgName("stream"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9773 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLambdaRefExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLambdaRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_functionDeclaration,SgName("functionDeclaration"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9793 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDictionaryExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDictionaryExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgKeyDatumPairPtrList::iterator source_key_datum_pairs_iterator = p_key_datum_pairs.begin() 
; source_key_datum_pairs_iterator != p_key_datum_pairs.end(); ++source_key_datum_pairs_iterator) 
        { 
          handler->apply(*source_key_datum_pairs_iterator,SgName("key_datum_pairs"), true);
        } 
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9817 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgKeyDatumPair::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgKeyDatumPair -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_key,SgName("key"), true);
          handler->apply(p_datum,SgName("datum"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9838 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgComprehension::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgComprehension -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_target,SgName("target"), true);
          handler->apply(p_iter,SgName("iter"), true);
          handler->apply(p_filters,SgName("filters"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9860 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgListComprehension::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgListComprehension -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_element,SgName("element"), true);
          handler->apply(p_generators,SgName("generators"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9881 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSetComprehension::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSetComprehension -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_element,SgName("element"), true);
          handler->apply(p_generators,SgName("generators"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9902 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDictionaryComprehension::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDictionaryComprehension -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_element,SgName("element"), true);
          handler->apply(p_generators,SgName("generators"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9923 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNaryOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgExpressionPtrList::iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          handler->apply(*source_operands_iterator,SgName("operands"), true);
        } 
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9947 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNaryBooleanOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNaryBooleanOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgExpressionPtrList::iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          handler->apply(*source_operands_iterator,SgName("operands"), true);
        } 
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9971 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNaryComparisonOp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNaryComparisonOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgExpressionPtrList::iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          handler->apply(*source_operands_iterator,SgName("operands"), true);
        } 
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 9995 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgStringConversion::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgStringConversion -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_expression,SgName("expression"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10015 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgYieldExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgYieldExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_value,SgName("value"), true);
          handler->apply(p_operatorPosition,SgName("operatorPosition"), false);
          handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10035 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgToken::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgToken -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_startOfConstruct,SgName("startOfConstruct"), false);
          handler->apply(p_endOfConstruct,SgName("endOfConstruct"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10053 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10069 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgVariableSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgVariableSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10086 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10103 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgMemberFunctionSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgMemberFunctionSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10120 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgRenameSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgRenameSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_original_symbol,SgName("original_symbol"), true);
          handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10138 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgFunctionTypeSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgFunctionTypeSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10155 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgClassSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgClassSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10172 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTemplateSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTemplateSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10189 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEnumSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEnumSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10206 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgEnumFieldSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgEnumFieldSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10223 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgTypedefSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgTypedefSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10240 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgLabelSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgLabelSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_fortran_statement,SgName("fortran_statement"), false);
          handler->apply(p_fortran_alternate_return_parameter,SgName("fortran_alternate_return_parameter"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10259 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgDefaultSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgDefaultSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10276 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgNamespaceSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgNamespaceSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_aliasDeclaration,SgName("aliasDeclaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10294 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgIntrinsicSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgIntrinsicSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10311 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgModuleSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgModuleSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10328 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgInterfaceSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgInterfaceSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10345 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgCommonSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgCommonSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10362 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAliasSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAliasSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_alias,SgName("alias"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10379 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryAddressSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryAddressSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_address,SgName("address"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10396 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryDataSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryDataSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_address,SgName("address"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10413 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgJavaLabelSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgJavaLabelSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_declaration,SgName("declaration"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10430 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNode::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNode -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10446 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmStatement::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10462 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmFunction::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmFunction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmStatementPtrList::iterator source_statementList_iterator = p_statementList.begin() 
; source_statementList_iterator != p_statementList.end(); ++source_statementList_iterator) 
        { 
          handler->apply(*source_statementList_iterator,SgName("statementList"), true);
        } 
     for ( SgAsmStatementPtrList::iterator source_dest_iterator = p_dest.begin() 
; source_dest_iterator != p_dest.end(); ++source_dest_iterator) 
        { 
          handler->apply(*source_dest_iterator,SgName("dest"), false);
        } 
          handler->apply(p_symbol_table,SgName("symbol_table"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10489 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBlock::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmStatementPtrList::iterator source_statementList_iterator = p_statementList.begin() 
; source_statementList_iterator != p_statementList.end(); ++source_statementList_iterator) 
        { 
          handler->apply(*source_statementList_iterator,SgName("statementList"), true);
        } 
     for ( SgAsmIntegerValuePtrList::iterator source_successors_iterator = p_successors.begin() 
; source_successors_iterator != p_successors.end(); ++source_successors_iterator) 
        { 
          handler->apply(*source_successors_iterator,SgName("successors"), false);
        } 
          handler->apply(p_immediate_dominator,SgName("immediate_dominator"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10516 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmInstruction::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmInstruction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operandList,SgName("operandList"), true);
     for ( SgAsmStatementPtrList::iterator source_sources_iterator = p_sources.begin() 
; source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
        { 
          handler->apply(*source_sources_iterator,SgName("sources"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10538 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmx86Instruction::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmx86Instruction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operandList,SgName("operandList"), true);
     for ( SgAsmStatementPtrList::iterator source_sources_iterator = p_sources.begin() 
; source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
        { 
          handler->apply(*source_sources_iterator,SgName("sources"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10560 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmArmInstruction::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmArmInstruction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operandList,SgName("operandList"), true);
     for ( SgAsmStatementPtrList::iterator source_sources_iterator = p_sources.begin() 
; source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
        { 
          handler->apply(*source_sources_iterator,SgName("sources"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10582 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPowerpcInstruction::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPowerpcInstruction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operandList,SgName("operandList"), true);
     for ( SgAsmStatementPtrList::iterator source_sources_iterator = p_sources.begin() 
; source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
        { 
          handler->apply(*source_sources_iterator,SgName("sources"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10604 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmStaticData::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmStaticData -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10620 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10636 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10654 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmIntegerValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmIntegerValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_node,SgName("base_node"), false);
          handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10673 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmByteValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmByteValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_node,SgName("base_node"), false);
          handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10692 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmWordValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmWordValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_node,SgName("base_node"), false);
          handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10711 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDoubleWordValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDoubleWordValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_node,SgName("base_node"), false);
          handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10730 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmQuadWordValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmQuadWordValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_base_node,SgName("base_node"), false);
          handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10749 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmSingleFloatValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmSingleFloatValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10767 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDoubleFloatValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDoubleFloatValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10785 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmVectorValueExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmVectorValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_unfolded_expression_tree,SgName("unfolded_expression_tree"), true);
          handler->apply(p_symbol,SgName("symbol"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10804 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10822 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryAdd::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryAdd -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10840 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinarySubtract::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinarySubtract -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10858 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryMultiply::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryMultiply -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10876 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryDivide::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryDivide -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10894 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryMod::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryMod -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10912 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryAddPreupdate::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryAddPreupdate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10930 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinarySubtractPreupdate::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinarySubtractPreupdate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10948 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryAddPostupdate::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryAddPostupdate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10966 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinarySubtractPostupdate::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinarySubtractPostupdate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 10984 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryLsl::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryLsl -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11002 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryLsr::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryLsr -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11020 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryAsr::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryAsr -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11038 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBinaryRor::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBinaryRor -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_lhs,SgName("lhs"), true);
          handler->apply(p_rhs,SgName("rhs"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11056 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmUnaryExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmUnaryExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand,SgName("operand"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11073 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmUnaryPlus::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmUnaryPlus -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand,SgName("operand"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11090 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmUnaryMinus::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmUnaryMinus -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand,SgName("operand"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11107 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmUnaryRrx::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmUnaryRrx -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand,SgName("operand"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11124 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmUnaryArmSpecialRegisterList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmUnaryArmSpecialRegisterList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_operand,SgName("operand"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11141 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmMemoryReferenceExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmMemoryReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_address,SgName("address"), true);
          handler->apply(p_segment,SgName("segment"), true);
          handler->apply(p_type,SgName("type"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11160 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmRegisterReferenceExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmRegisterReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11177 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmx86RegisterReferenceExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmx86RegisterReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11194 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmArmRegisterReferenceExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmArmRegisterReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11211 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPowerpcRegisterReferenceExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPowerpcRegisterReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_type,SgName("type"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11228 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmControlFlagsExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmControlFlagsExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11244 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmCommonSubExpression::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmCommonSubExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_subexpression,SgName("subexpression"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11261 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmExprListExp::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmExprListExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmExpressionPtrList::iterator source_expressions_iterator = p_expressions.begin() 
; source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
        { 
          handler->apply(*source_expressions_iterator,SgName("expressions"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11282 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmInterpretation::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmInterpretation -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_dwarf_info,SgName("dwarf_info"), true);
          handler->apply(p_headers,SgName("headers"), false);
          handler->apply(p_global_block,SgName("global_block"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11301 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmOperandList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmOperandList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmExpressionPtrList::iterator source_operands_iterator = p_operands.begin() 
; source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
        { 
          handler->apply(*source_operands_iterator,SgName("operands"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11322 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11338 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmTypeByte::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmTypeByte -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11354 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmTypeWord::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmTypeWord -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11370 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmTypeDoubleWord::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmTypeDoubleWord -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11386 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmTypeQuadWord::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmTypeQuadWord -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11402 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmTypeDoubleQuadWord::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmTypeDoubleQuadWord -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11418 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmType80bitFloat::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmType80bitFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11434 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmType128bitFloat::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmType128bitFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11450 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmTypeSingleFloat::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmTypeSingleFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11466 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmTypeDoubleFloat::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmTypeDoubleFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11482 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmTypeVector::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmTypeVector -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_elementType,SgName("elementType"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11499 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmExecutableFileFormat::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmExecutableFileFormat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11515 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericDLL::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericDLL -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11532 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericFormat::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericFormat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11548 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericDLLList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericDLLList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmGenericDLLPtrList::iterator source_dlls_iterator = p_dlls.begin() 
; source_dlls_iterator != p_dlls.end(); ++source_dlls_iterator) 
        { 
          handler->apply(*source_dlls_iterator,SgName("dlls"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11569 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfEHFrameEntryFD::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfEHFrameEntryFD -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11585 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericFile::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericFile -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_headers,SgName("headers"), true);
          handler->apply(p_holes,SgName("holes"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11603 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11622 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericHeader::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_exec_format,SgName("exec_format"), true);
          handler->apply(p_dlls,SgName("dlls"), true);
          handler->apply(p_sections,SgName("sections"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11644 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEFileHeader::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_rvasize_pairs,SgName("rvasize_pairs"), true);
          handler->apply(p_section_table,SgName("section_table"), false);
          handler->apply(p_coff_symtab,SgName("coff_symtab"), false);
          handler->apply(p_exec_format,SgName("exec_format"), true);
          handler->apply(p_dlls,SgName("dlls"), true);
          handler->apply(p_sections,SgName("sections"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11669 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLEFileHeader::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLEFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_dos2_header,SgName("dos2_header"), true);
          handler->apply(p_section_table,SgName("section_table"), false);
          handler->apply(p_page_table,SgName("page_table"), true);
          handler->apply(p_resname_table,SgName("resname_table"), true);
          handler->apply(p_nonresname_table,SgName("nonresname_table"), true);
          handler->apply(p_entry_table,SgName("entry_table"), true);
          handler->apply(p_reloc_table,SgName("reloc_table"), true);
          handler->apply(p_exec_format,SgName("exec_format"), true);
          handler->apply(p_dlls,SgName("dlls"), true);
          handler->apply(p_sections,SgName("sections"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11698 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNEFileHeader::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNEFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_dos2_header,SgName("dos2_header"), true);
          handler->apply(p_section_table,SgName("section_table"), false);
          handler->apply(p_resname_table,SgName("resname_table"), true);
          handler->apply(p_nonresname_table,SgName("nonresname_table"), true);
          handler->apply(p_module_table,SgName("module_table"), true);
          handler->apply(p_entry_table,SgName("entry_table"), true);
          handler->apply(p_exec_format,SgName("exec_format"), true);
          handler->apply(p_dlls,SgName("dlls"), true);
          handler->apply(p_sections,SgName("sections"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11726 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDOSFileHeader::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDOSFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_relocs,SgName("relocs"), true);
          handler->apply(p_rm_section,SgName("rm_section"), false);
          handler->apply(p_exec_format,SgName("exec_format"), true);
          handler->apply(p_dlls,SgName("dlls"), true);
          handler->apply(p_sections,SgName("sections"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11750 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfFileHeader::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_section_table,SgName("section_table"), false);
          handler->apply(p_segment_table,SgName("segment_table"), false);
          handler->apply(p_exec_format,SgName("exec_format"), true);
          handler->apply(p_dlls,SgName("dlls"), true);
          handler->apply(p_sections,SgName("sections"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11774 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11796 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymbolSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymbolSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_symbols,SgName("symbols"), true);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11819 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfRelocSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfRelocSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_target_section,SgName("target_section"), false);
          handler->apply(p_entries,SgName("entries"), true);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11843 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfDynamicSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfDynamicSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_entries,SgName("entries"), true);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11866 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfStringSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfStringSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_strtab,SgName("strtab"), false);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11889 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfNoteSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfNoteSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_entries,SgName("entries"), true);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11912 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfEHFrameSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfEHFrameSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_ci_entries,SgName("ci_entries"), true);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11935 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_entries,SgName("entries"), true);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11958 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverDefinedSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_entries,SgName("entries"), true);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 11981 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverNeededSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverNeededSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_entries,SgName("entries"), true);
          handler->apply(p_linked_section,SgName("linked_section"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_segment_entry,SgName("segment_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12004 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSectionTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSectionTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12023 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSegmentTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSegmentTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12042 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPESection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPESection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12062 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEImportSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEImportSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_import_directories,SgName("import_directories"), true);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12083 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEExportSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEExportSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_export_dir,SgName("export_dir"), true);
          handler->apply(p_exports,SgName("exports"), true);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12105 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEStringSection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEStringSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_strtab,SgName("strtab"), false);
          handler->apply(p_section_entry,SgName("section_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12126 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPESectionTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPESectionTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12145 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDOSExtendedHeader::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDOSExtendedHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12164 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmCoffSymbolTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmCoffSymbolTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_strtab,SgName("strtab"), false);
          handler->apply(p_symbols,SgName("symbols"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12185 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNESection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNESection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_st_entry,SgName("st_entry"), true);
          handler->apply(p_reloc_table,SgName("reloc_table"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12206 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNESectionTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNESectionTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12225 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNENameTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNENameTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12244 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNEModuleTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNEModuleTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_strtab,SgName("strtab"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12264 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNEStringTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNEStringTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12283 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNEEntryTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNEEntryTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmNEEntryPointPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12307 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNERelocTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNERelocTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmNERelocEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12331 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLESection::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLESection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_st_entry,SgName("st_entry"), true);
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12351 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLESectionTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLESectionTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12370 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLENameTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLENameTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12389 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLEPageTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLEPageTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmLEPageTableEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12413 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLEEntryTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLEEntryTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmLEEntryPointPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12437 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLERelocTable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLERelocTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmLERelocEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_file,SgName("file"), false);
          handler->apply(p_header,SgName("header"), false);
          handler->apply(p_name,SgName("name"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12461 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_bound,SgName("bound"), false);
          handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12479 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmCoffSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmCoffSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_bound,SgName("bound"), false);
          handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12497 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymbol::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_bound,SgName("bound"), false);
          handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12515 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericStrtab::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericStrtab -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_container,SgName("container"), false);
          handler->apply(p_dont_free,SgName("dont_free"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12533 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfStrtab::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfStrtab -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_container,SgName("container"), false);
          handler->apply(p_dont_free,SgName("dont_free"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12551 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmCoffStrtab::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmCoffStrtab -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_container,SgName("container"), false);
          handler->apply(p_dont_free,SgName("dont_free"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12569 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericSymbolList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericSymbolList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmGenericSymbolPtrList::iterator source_symbols_iterator = p_symbols.begin() 
; source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
        { 
          handler->apply(*source_symbols_iterator,SgName("symbols"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12590 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericSectionList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericSectionList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmGenericSectionPtrList::iterator source_sections_iterator = p_sections.begin() 
; source_sections_iterator != p_sections.end(); ++source_sections_iterator) 
        { 
          handler->apply(*source_sections_iterator,SgName("sections"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12611 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericHeaderList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericHeaderList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmGenericHeaderPtrList::iterator source_headers_iterator = p_headers.begin() 
; source_headers_iterator != p_headers.end(); ++source_headers_iterator) 
        { 
          handler->apply(*source_headers_iterator,SgName("headers"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12632 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericString::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericString -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12648 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmBasicString::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmBasicString -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12664 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmStoredString::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmStoredString -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_storage,SgName("storage"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12681 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSectionTableEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSectionTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12697 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSegmentTableEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSegmentTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12713 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymbolList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymbolList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfSymbolPtrList::iterator source_symbols_iterator = p_symbols.begin() 
; source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
        { 
          handler->apply(*source_symbols_iterator,SgName("symbols"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12734 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfRelocEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfRelocEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12750 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfRelocEntryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfRelocEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfRelocEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12771 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEExportEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEExportEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_name,SgName("name"), true);
          handler->apply(p_forwarder,SgName("forwarder"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12789 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEExportEntryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEExportEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmPEExportEntryPtrList::iterator source_exports_iterator = p_exports.begin() 
; source_exports_iterator != p_exports.end(); ++source_exports_iterator) 
        { 
          handler->apply(*source_exports_iterator,SgName("exports"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12810 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfDynamicEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfDynamicEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12827 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfDynamicEntryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfDynamicEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfDynamicEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12848 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSegmentTableEntryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSegmentTableEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfSegmentTableEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12869 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmStringStorage::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmStringStorage -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_strtab,SgName("strtab"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12886 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfNoteEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfNoteEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12903 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfNoteEntryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfNoteEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfNoteEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12924 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12940 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverEntryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfSymverEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12961 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverDefinedEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_entries,SgName("entries"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12978 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverDefinedEntryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfSymverDefinedEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 12999 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverDefinedAux::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedAux -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13016 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverDefinedAuxList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedAuxList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfSymverDefinedAuxPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13037 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverNeededEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverNeededEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_file_name,SgName("file_name"), true);
          handler->apply(p_entries,SgName("entries"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13055 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverNeededEntryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverNeededEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfSymverNeededEntryPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13076 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverNeededAux::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverNeededAux -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13093 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfSymverNeededAuxList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfSymverNeededAuxList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfSymverNeededAuxPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13114 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEImportDirectory::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEImportDirectory -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_dll_name,SgName("dll_name"), true);
          handler->apply(p_imports,SgName("imports"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13132 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPESectionTableEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPESectionTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13148 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEExportDirectory::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEExportDirectory -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13165 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPERVASizePair::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPERVASizePair -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_section,SgName("section"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13182 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmCoffSymbolList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmCoffSymbolList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmCoffSymbolPtrList::iterator source_symbols_iterator = p_symbols.begin() 
; source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
        { 
          handler->apply(*source_symbols_iterator,SgName("symbols"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13203 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPERVASizePairList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPERVASizePairList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmPERVASizePairPtrList::iterator source_pairs_iterator = p_pairs.begin() 
; source_pairs_iterator != p_pairs.end(); ++source_pairs_iterator) 
        { 
          handler->apply(*source_pairs_iterator,SgName("pairs"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13224 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfEHFrameEntryCI::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfEHFrameEntryCI -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_fd_entries,SgName("fd_entries"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13241 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEImportDirectoryList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEImportDirectoryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmPEImportDirectoryPtrList::iterator source_vector_iterator = p_vector.begin() 
; source_vector_iterator != p_vector.end(); ++source_vector_iterator) 
        { 
          handler->apply(*source_vector_iterator,SgName("vector"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13262 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNEEntryPoint::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNEEntryPoint -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13278 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNERelocEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNERelocEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13294 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmNESectionTableEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmNESectionTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13310 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfEHFrameEntryCIList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfEHFrameEntryCIList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfEHFrameEntryCIPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13331 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLEPageTableEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLEPageTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13347 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLEEntryPoint::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLEEntryPoint -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmLEEntryPointPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13368 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmLESectionTableEntry::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmLESectionTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13384 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmElfEHFrameEntryFDList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmElfEHFrameEntryFDList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmElfEHFrameEntryFDPtrList::iterator source_entries_iterator = p_entries.begin() 
; source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
        { 
          handler->apply(*source_entries_iterator,SgName("entries"), false);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13405 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfInformation::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfInformation -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13421 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfMacro::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfMacro -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13437 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfMacroList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfMacroList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmDwarfMacroPtrList::iterator source_macro_list_iterator = p_macro_list.begin() 
; source_macro_list_iterator != p_macro_list.end(); ++source_macro_list_iterator) 
        { 
          handler->apply(*source_macro_list_iterator,SgName("macro_list"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13458 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfLine::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfLine -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13474 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfLineList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfLineList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmDwarfLinePtrList::iterator source_line_list_iterator = p_line_list.begin() 
; source_line_list_iterator != p_line_list.end(); ++source_line_list_iterator) 
        { 
          handler->apply(*source_line_list_iterator,SgName("line_list"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13495 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfCompilationUnitList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfCompilationUnitList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmDwarfCompilationUnitPtrList::iterator source_cu_list_iterator = p_cu_list.begin() 
; source_cu_list_iterator != p_cu_list.end(); ++source_cu_list_iterator) 
        { 
          handler->apply(*source_cu_list_iterator,SgName("cu_list"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13516 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfConstruct::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfConstruct -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13533 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfArrayType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfArrayType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13551 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfClassType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfClassType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13569 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfEntryPoint::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfEntryPoint -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13586 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfEnumerationType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfEnumerationType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13604 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfFormalParameter::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfFormalParameter -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13621 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfImportedDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfImportedDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13638 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfLabel::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfLabel -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13655 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfLexicalBlock::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfLexicalBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13673 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfMember::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfMember -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13690 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfPointerType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfPointerType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13707 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfReferenceType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfReferenceType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13724 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfCompilationUnit::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfCompilationUnit -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_line_info,SgName("line_info"), true);
          handler->apply(p_language_constructs,SgName("language_constructs"), true);
          handler->apply(p_macro_info,SgName("macro_info"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13744 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfStringType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfStringType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13761 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfStructureType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfStructureType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13779 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfSubroutineType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfSubroutineType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13797 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfTypedef::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfTypedef -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13814 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfUnionType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfUnionType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13832 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfUnspecifiedParameters::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfUnspecifiedParameters -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13849 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfVariant::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfVariant -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13866 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfCommonBlock::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfCommonBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13884 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfCommonInclusion::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfCommonInclusion -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13901 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfInheritance::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfInheritance -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13918 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfInlinedSubroutine::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfInlinedSubroutine -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13936 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfModule::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfModule -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13953 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfPtrToMemberType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfPtrToMemberType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13970 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfSetType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfSetType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 13987 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfSubrangeType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfSubrangeType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14004 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfWithStmt::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfWithStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14021 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfAccessDeclaration::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfAccessDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14038 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfBaseType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfBaseType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14055 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfCatchBlock::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfCatchBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14072 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfConstType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfConstType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14089 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfConstant::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfConstant -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14106 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfEnumerator::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfEnumerator -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14123 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfFileType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfFileType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14140 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfFriend::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfFriend -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14157 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfNamelist::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfNamelist -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14174 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfNamelistItem::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfNamelistItem -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14191 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfPackedType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfPackedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14208 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfSubprogram::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfSubprogram -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14226 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfTemplateTypeParameter::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfTemplateTypeParameter -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14243 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfTemplateValueParameter::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfTemplateValueParameter -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14260 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfThrownType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfThrownType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14277 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfTryBlock::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfTryBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14294 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfVariantPart::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfVariantPart -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14311 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfVariable::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfVariable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14328 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfVolatileType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfVolatileType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14345 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfDwarfProcedure::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfDwarfProcedure -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14362 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfRestrictType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfRestrictType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14379 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfInterfaceType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfInterfaceType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14396 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfNamespace::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfNamespace -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_body,SgName("body"), true);
          handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14414 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfImportedModule::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfImportedModule -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14431 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfUnspecifiedType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfUnspecifiedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14448 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfPartialUnit::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfPartialUnit -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14465 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfImportedUnit::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfImportedUnit -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14482 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfMutableType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfMutableType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14499 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfCondition::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfCondition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14516 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfSharedType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfSharedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14533 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfFormatLabel::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfFormatLabel -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14550 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfFunctionTemplate::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfFunctionTemplate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14567 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfClassTemplate::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfClassTemplate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14584 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfUpcSharedType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfUpcSharedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14601 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfUpcStrictType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfUpcStrictType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14618 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfUpcRelaxedType::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfUpcRelaxedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14635 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfUnknownConstruct::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfUnknownConstruct -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_source_position,SgName("source_position"), false);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14652 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmDwarfConstructList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmDwarfConstructList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmDwarfConstructPtrList::iterator source_list_iterator = p_list.begin() 
; source_list_iterator != p_list.end(); ++source_list_iterator) 
        { 
          handler->apply(*source_list_iterator,SgName("list"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14673 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEImportItem::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEImportItem -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

               handler->apply(p_name,SgName("name"), true);
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14690 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmPEImportItemList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmPEImportItemList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmPEImportItemPtrList::iterator source_vector_iterator = p_vector.begin() 
; source_vector_iterator != p_vector.end(); ++source_vector_iterator) 
        { 
          handler->apply(*source_vector_iterator,SgName("vector"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14711 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmInterpretationList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmInterpretationList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmInterpretationPtrList::iterator source_interpretations_iterator = p_interpretations.begin() 
; source_interpretations_iterator != p_interpretations.end(); ++source_interpretations_iterator) 
        { 
          handler->apply(*source_interpretations_iterator,SgName("interpretations"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }

/* #line 14732 "../../../src/frontend/SageIII//Cxx_GrammarProcessDataMemberReferenceToPointers.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

void
SgAsmGenericFileList::processDataMemberReferenceToPointers(ReferenceToPointerHandler* handler)
   {
  // ------------ checking pointers of SgAsmGenericFileList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );

          for ( SgAsmGenericFilePtrList::iterator source_files_iterator = p_files.begin() 
; source_files_iterator != p_files.end(); ++source_files_iterator) 
        { 
          handler->apply(*source_files_iterator,SgName("files"), true);
        } 
          handler->apply(p_parent,SgName("parent"), false);

/* #line 9 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarProcessDataMemberReferenceToPointers.macro" */

   }


