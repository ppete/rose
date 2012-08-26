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

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNode::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNode -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 33 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSupport::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSupport -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 49 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 65 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgModifierNodes::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgModifierNodes -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_next == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 82 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgConstVolatileModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgConstVolatileModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 98 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStorageModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStorageModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 114 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAccessModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAccessModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 130 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_opencl_vec_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 147 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUPC_AccessModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUPC_AccessModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 163 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSpecialFunctionModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSpecialFunctionModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 179 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgElaboratedTypeModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgElaboratedTypeModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 195 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLinkageModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLinkageModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 211 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBaseClassModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBaseClassModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 227 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 243 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDeclarationModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDeclarationModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 259 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOpenclAccessModeModifier::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOpenclAccessModeModifier -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 275 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgName::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgName -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 291 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSymbolTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSymbolTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_table == NULL )
          indexCounter++;
       else
          for ( rose_hash_multimap::const_iterator it_table= p_table->begin(); it_table != p_table->end(); ++it_table) 
             {
               if ( it_table->second == childNode ) { return indexCounter; } indexCounter++;
             }
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 314 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAttribute::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAttribute -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 330 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPragma::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPragma -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 347 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBitAttribute::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBitAttribute -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 363 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFuncDecl_attr::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFuncDecl_attr -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 379 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClassDecl_attr::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClassDecl_attr -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 395 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
Sg_File_Info::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of Sg_File_Info -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 411 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFile::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFile -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 428 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSourceFile::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSourceFile -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_globalScope == childNode ) { return indexCounter; } indexCounter++;
          for ( SgModuleStatementPtrList::const_iterator source_module_list_iterator = p_module_list.begin(); source_module_list_iterator != p_module_list.end(); ++source_module_list_iterator) 
             { 
               if ( *source_module_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
          for ( SgTokenPtrList::const_iterator source_token_list_iterator = p_token_list.begin(); source_token_list_iterator != p_token_list.end(); ++source_token_list_iterator) 
             { 
               if ( *source_token_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_temp_holding_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 455 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBinaryComposite::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBinaryComposite -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_genericFileList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_interpretations == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 474 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnknownFile::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnknownFile -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_globalScope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 492 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgProject::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgProject -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_fileList_ptr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_directoryList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 510 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOptions::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOptions -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 526 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnparse_Info::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnparse_Info -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declstatement_ptr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_current_context == childNode ) { return indexCounter; } indexCounter++;
          for ( static SgTypePtrList::const_iterator source_structureTagProcessingList_iterator = p_structureTagProcessingList.begin(); source_structureTagProcessingList_iterator != p_structureTagProcessingList.end(); ++source_structureTagProcessingList_iterator) 
             { 
               if ( *source_structureTagProcessingList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_current_namespace == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_current_function_call == childNode ) { return indexCounter; } indexCounter++;
     if ( p_current_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_reference_node_for_qualification == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 556 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBaseClass::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBaseClass -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_class == childNode ) { return indexCounter; } indexCounter++;
     if ( p_baseClassModifier == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 574 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgExpBaseClass::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgExpBaseClass -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_class_exp == childNode ) { return indexCounter; } indexCounter++;
     if ( p_base_class == childNode ) { return indexCounter; } indexCounter++;
     if ( p_baseClassModifier == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 593 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypedefSeq::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypedefSeq -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgTypePtrList::const_iterator source_typedefs_iterator = p_typedefs.begin(); source_typedefs_iterator != p_typedefs.end(); ++source_typedefs_iterator) 
             { 
               if ( *source_typedefs_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 613 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateParameter::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateParameter -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_defaultTypeParameter == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_defaultExpressionParameter == childNode ) { return indexCounter; } indexCounter++;
     if ( p_templateDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_defaultTemplateDeclarationParameter == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 635 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateArgument::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateArgument -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_templateDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 654 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDirectory::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDirectory -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_fileList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_directoryList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 672 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFileList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFileList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgFilePtrList::const_iterator source_listOfFiles_iterator = p_listOfFiles.begin(); source_listOfFiles_iterator != p_listOfFiles.end(); ++source_listOfFiles_iterator) 
             { 
               if ( *source_listOfFiles_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 692 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDirectoryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDirectoryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgDirectoryPtrList::const_iterator source_listOfDirectories_iterator = p_listOfDirectories.begin(); source_listOfDirectories_iterator != p_listOfDirectories.end(); ++source_listOfDirectories_iterator) 
             { 
               if ( *source_listOfDirectories_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 712 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionParameterTypeList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionParameterTypeList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgTypePtrList::const_iterator source_arguments_iterator = p_arguments.begin(); source_arguments_iterator != p_arguments.end(); ++source_arguments_iterator) 
             { 
               if ( *source_arguments_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 732 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgQualifiedName::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgQualifiedName -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 749 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateArgumentList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateArgumentList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgTemplateArgumentPtrList::const_iterator source_args_iterator = p_args.begin(); source_args_iterator != p_args.end(); ++source_args_iterator) 
             { 
               if ( *source_args_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 769 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateParameterList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateParameterList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgTemplateParameterPtrList::const_iterator source_args_iterator = p_args.begin(); source_args_iterator != p_args.end(); ++source_args_iterator) 
             { 
               if ( *source_args_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 789 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGraph::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 805 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIncidenceDirectedGraph::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIncidenceDirectedGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 821 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBidirectionalGraph::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBidirectionalGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 837 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStringKeyedBidirectionalGraph::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStringKeyedBidirectionalGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 853 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIntKeyedBidirectionalGraph::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIntKeyedBidirectionalGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 869 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIncidenceUndirectedGraph::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIncidenceUndirectedGraph -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 885 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGraphNode::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGraphNode -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_SgNode == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 902 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGraphEdge::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGraphEdge -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_node_A == childNode ) { return indexCounter; } indexCounter++;
     if ( p_node_B == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 920 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDirectedGraphEdge::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDirectedGraphEdge -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_node_A == childNode ) { return indexCounter; } indexCounter++;
     if ( p_node_B == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 938 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUndirectedGraphEdge::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUndirectedGraphEdge -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_node_A == childNode ) { return indexCounter; } indexCounter++;
     if ( p_node_B == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 956 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGraphNodeList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGraphNodeList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 972 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGraphEdgeList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGraphEdgeList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 988 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1005 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNameGroup::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNameGroup -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1021 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDimensionObject::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDimensionObject -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_array == childNode ) { return indexCounter; } indexCounter++;
     if ( p_shape == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1039 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFormatItem::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFormatItem -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_data == childNode ) { return indexCounter; } indexCounter++;
     if ( p_format_item_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1057 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFormatItemList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFormatItemList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgFormatItemPtrList::const_iterator source_format_item_list_iterator = p_format_item_list.begin(); source_format_item_list_iterator != p_format_item_list.end(); ++source_format_item_list_iterator) 
             { 
               if ( *source_format_item_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1077 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDataStatementGroup::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDataStatementGroup -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgDataStatementObjectPtrList::const_iterator source_object_list_iterator = p_object_list.begin(); source_object_list_iterator != p_object_list.end(); ++source_object_list_iterator) 
             { 
               if ( *source_object_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
          for ( SgDataStatementValuePtrList::const_iterator source_value_list_iterator = p_value_list.begin(); source_value_list_iterator != p_value_list.end(); ++source_value_list_iterator) 
             { 
               if ( *source_value_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1101 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDataStatementObject::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDataStatementObject -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_variableReference_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1118 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDataStatementValue::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDataStatementValue -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_initializer_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_repeat_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_constant_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1137 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1158 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeUnknown::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeUnknown -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1179 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeChar::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeChar -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1200 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeSignedChar::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeSignedChar -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1221 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeUnsignedChar::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeUnsignedChar -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1242 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeShort::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeShort -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1263 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeSignedShort::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeSignedShort -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1284 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeUnsignedShort::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeUnsignedShort -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1305 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeInt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeInt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1326 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeSignedInt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeSignedInt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1347 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeUnsignedInt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeUnsignedInt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1368 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeLong::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1389 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeSignedLong::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeSignedLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1410 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeUnsignedLong::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeUnsignedLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1431 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeVoid::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeVoid -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1452 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeGlobalVoid::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeGlobalVoid -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1473 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeWchar::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeWchar -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1494 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeFloat::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1515 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeDouble::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeDouble -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1536 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeLongLong::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeLongLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1557 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeSignedLongLong::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeSignedLongLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1578 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeUnsignedLongLong::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeUnsignedLongLong -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1599 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeLongDouble::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeLongDouble -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1620 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeString::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeString -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lengthExpression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1642 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeBool::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeBool -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1663 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPointerType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPointerType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1685 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPointerMemberType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPointerMemberType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_class_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1708 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgReferenceType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgReferenceType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1730 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNamedType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNamedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1752 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClassType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClassType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1774 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaParameterizedType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaParameterizedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_raw_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1798 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEnumType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEnumType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1820 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypedefType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypedefType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1843 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgModifierType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgModifierType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1865 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_return_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_orig_return_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_argument_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1889 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMemberFunctionType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMemberFunctionType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_class_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_return_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_orig_return_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_argument_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1914 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPartialFunctionType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPartialFunctionType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_class_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_return_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_orig_return_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_argument_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1939 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPartialFunctionModifierType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPartialFunctionModifierType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_class_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_return_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_orig_return_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_argument_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1964 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgArrayType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgArrayType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_index == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dim_info == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 1988 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeEllipse::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeEllipse -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2009 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2030 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgQualifiedNameType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgQualifiedNameType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2056 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeComplex::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeComplex -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2078 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeImaginary::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeImaginary -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2100 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeDefault::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeDefault -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2121 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeCAFTeam::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeCAFTeam -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2142 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeCrayPointer::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeCrayPointer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2163 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeLabel::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeLabel -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ref_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_ptr_to == childNode ) { return indexCounter; } indexCounter++;
     if ( p_modifiers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_typedefs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_kind == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2184 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLocatedNode::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLocatedNode -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2202 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLocatedNodeSupport::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLocatedNodeSupport -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2220 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCommonBlockObject::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCommonBlockObject -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_variable_reference_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2239 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgInitializedName::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgInitializedName -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_typeptr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_initptr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_prev_decl_item == childNode ) { return indexCounter; } indexCounter++;
     if ( p_declptr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_storageModifier == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2263 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgInterfaceBody::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgInterfaceBody -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_functionDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2282 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgHeaderFileBody::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgHeaderFileBody -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2300 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgRenamePair::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgRenamePair -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2318 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2336 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpOrderedClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpOrderedClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2354 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpNowaitClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpNowaitClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2372 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpUntiedClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpUntiedClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2390 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpDefaultClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpDefaultClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2408 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpExpressionClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpExpressionClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2427 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpCollapseClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpCollapseClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2446 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpIfClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpIfClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2465 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpNumThreadsClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpNumThreadsClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2484 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpVariablesClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpVariablesClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2506 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpCopyprivateClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpCopyprivateClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2528 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpPrivateClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpPrivateClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2550 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpFirstprivateClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpFirstprivateClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2572 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpSharedClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpSharedClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2594 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpCopyinClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpCopyinClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2616 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpLastprivateClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpLastprivateClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2638 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpReductionClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpReductionClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2660 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpScheduleClause::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpScheduleClause -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_chunk_size == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2679 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2698 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgScopeStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgScopeStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2719 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGlobal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGlobal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgDeclarationStatementPtrList::const_iterator source_declarations_iterator = p_declarations.begin(); source_declarations_iterator != p_declarations.end(); ++source_declarations_iterator) 
             { 
               if ( *source_declarations_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2744 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBasicBlock::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBasicBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgStatementPtrList::const_iterator source_statements_iterator = p_statements.begin(); source_statements_iterator != p_statements.end(); ++source_statements_iterator) 
             { 
               if ( *source_statements_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2769 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIfStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIfStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_conditional == childNode ) { return indexCounter; } indexCounter++;
     if ( p_true_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_false_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_else_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2795 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgForStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgForStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_for_init_stmt == childNode ) { return indexCounter; } indexCounter++;
     if ( p_test == childNode ) { return indexCounter; } indexCounter++;
     if ( p_increment == childNode ) { return indexCounter; } indexCounter++;
     if ( p_loop_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_else_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2821 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionDefinition::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2843 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateFunctionDefinition::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateFunctionDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2865 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClassDefinition::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClassDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgDeclarationStatementPtrList::const_iterator source_members_iterator = p_members.begin(); source_members_iterator != p_members.end(); ++source_members_iterator) 
             { 
               if ( *source_members_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
          for ( SgBaseClassPtrList::const_iterator source_inheritances_iterator = p_inheritances.begin(); source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
             { 
               if ( *source_inheritances_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2894 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateInstantiationDefn::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateInstantiationDefn -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgDeclarationStatementPtrList::const_iterator source_members_iterator = p_members.begin(); source_members_iterator != p_members.end(); ++source_members_iterator) 
             { 
               if ( *source_members_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
          for ( SgBaseClassPtrList::const_iterator source_inheritances_iterator = p_inheritances.begin(); source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
             { 
               if ( *source_inheritances_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2923 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateClassDefinition::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateClassDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgDeclarationStatementPtrList::const_iterator source_members_iterator = p_members.begin(); source_members_iterator != p_members.end(); ++source_members_iterator) 
             { 
               if ( *source_members_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
          for ( SgBaseClassPtrList::const_iterator source_inheritances_iterator = p_inheritances.begin(); source_inheritances_iterator != p_inheritances.end(); ++source_inheritances_iterator) 
             { 
               if ( *source_inheritances_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2952 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgWhileStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgWhileStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_condition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_else_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 2977 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDoWhileStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDoWhileStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_condition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3000 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSwitchStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSwitchStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_item_selector == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3024 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCatchOptionStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCatchOptionStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_condition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_trystmt == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3048 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNamespaceDefinitionStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNamespaceDefinitionStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgDeclarationStatementPtrList::const_iterator source_declarations_iterator = p_declarations.begin(); source_declarations_iterator != p_declarations.end(); ++source_declarations_iterator) 
             { 
               if ( *source_declarations_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_namespaceDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_previousNamepaceDefinition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_nextNamepaceDefinition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3076 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBlockDataStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBlockDataStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3098 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAssociateStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAssociateStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_variable_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3121 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFortranDo::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFortranDo -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_initialization == childNode ) { return indexCounter; } indexCounter++;
     if ( p_bound == childNode ) { return indexCounter; } indexCounter++;
     if ( p_increment == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3147 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFortranNonblockedDo::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFortranNonblockedDo -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_end_statement == childNode ) { return indexCounter; } indexCounter++;
     if ( p_initialization == childNode ) { return indexCounter; } indexCounter++;
     if ( p_bound == childNode ) { return indexCounter; } indexCounter++;
     if ( p_increment == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3174 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgForAllStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgForAllStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_forall_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3198 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcForAllStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcForAllStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_for_init_stmt == childNode ) { return indexCounter; } indexCounter++;
     if ( p_test == childNode ) { return indexCounter; } indexCounter++;
     if ( p_increment == childNode ) { return indexCounter; } indexCounter++;
     if ( p_affinity == childNode ) { return indexCounter; } indexCounter++;
     if ( p_loop_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3224 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCAFWithTeamStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCAFWithTeamStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_teamId == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3247 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaForEachStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaForEachStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_element == childNode ) { return indexCounter; } indexCounter++;
     if ( p_collection == childNode ) { return indexCounter; } indexCounter++;
     if ( p_loop_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3271 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaLabelStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaLabelStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_statement == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3293 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionTypeTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionTypeTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_function_type_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3313 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDeclarationStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3338 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionParameterList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionParameterList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgInitializedNamePtrList::const_iterator source_args_iterator = p_args.begin(); source_args_iterator != p_args.end(); ++source_args_iterator) 
             { 
               if ( *source_args_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3367 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVariableDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVariableDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_baseTypeDefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgInitializedNamePtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3397 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVariableDefinition::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVariableDefinition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_vardefn == childNode ) { return indexCounter; } indexCounter++;
     if ( p_bitfield == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3424 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClinkageDeclarationStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClinkageDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3449 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClinkageStartStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClinkageStartStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3474 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClinkageEndStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClinkageEndStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3499 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEnumDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEnumDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
          for ( SgInitializedNamePtrList::const_iterator source_enumerators_iterator = p_enumerators.begin(); source_enumerators_iterator != p_enumerators.end(); ++source_enumerators_iterator) 
             { 
               if ( *source_enumerators_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3530 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin(); source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
             { 
               if ( *source_operands_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3559 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAttributeSpecificationStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAttributeSpecificationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parameter_list == childNode ) { return indexCounter; } indexCounter++;
          for ( SgDataStatementGroupPtrList::const_iterator source_data_statement_group_list_iterator = p_data_statement_group_list.begin(); source_data_statement_group_list_iterator != p_data_statement_group_list.end(); ++source_data_statement_group_list_iterator) 
             { 
               if ( *source_data_statement_group_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_bind_list == childNode ) { return indexCounter; } indexCounter++;
          for ( SgDimensionObjectPtrList::const_iterator source_dimension_object_list_iterator = p_dimension_object_list.begin(); source_dimension_object_list_iterator != p_dimension_object_list.end(); ++source_dimension_object_list_iterator) 
             { 
               if ( *source_dimension_object_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3594 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFormatStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFormatStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_format_item_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3620 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgTemplateParameterPtrList::const_iterator source_templateParameters_iterator = p_templateParameters.begin(); source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
             { 
               if ( *source_templateParameters_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3650 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateClassDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateClassDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTemplateParameterPtrList::const_iterator source_templateParameters_iterator = p_templateParameters.begin(); source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
             { 
               if ( *source_templateParameters_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3681 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateFunctionDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateFunctionDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTemplateParameterPtrList::const_iterator source_templateParameters_iterator = p_templateParameters.begin(); source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
             { 
               if ( *source_templateParameters_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3712 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateMemberFunctionDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateMemberFunctionDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTemplateParameterPtrList::const_iterator source_templateParameters_iterator = p_templateParameters.begin(); source_templateParameters_iterator != p_templateParameters.end(); ++source_templateParameters_iterator) 
             { 
               if ( *source_templateParameters_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3743 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateInstantiationDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateInstantiationDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3769 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUseStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUseStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgRenamePairPtrList::const_iterator source_rename_list_iterator = p_rename_list.begin(); source_rename_list_iterator != p_rename_list.end(); ++source_rename_list_iterator) 
             { 
               if ( *source_rename_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_module == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3799 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgParameterStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgParameterStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3824 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNamespaceDeclarationStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNamespaceDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3850 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEquivalenceStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEquivalenceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_equivalence_set_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3876 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgInterfaceStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgInterfaceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgInterfaceBodyPtrList::const_iterator source_interface_body_list_iterator = p_interface_body_list.begin(); source_interface_body_list_iterator != p_interface_body_list.end(); ++source_interface_body_list_iterator) 
             { 
               if ( *source_interface_body_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3906 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNamespaceAliasDeclarationStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNamespaceAliasDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_namespaceDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3932 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCommonBlock::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCommonBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgCommonBlockObjectPtrList::const_iterator source_block_list_iterator = p_block_list.begin(); source_block_list_iterator != p_block_list.end(); ++source_block_list_iterator) 
             { 
               if ( *source_block_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3961 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypedefDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypedefDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 3991 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStatementFunctionStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStatementFunctionStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_function == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4018 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCtorInitializerList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCtorInitializerList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgInitializedNamePtrList::const_iterator source_ctors_iterator = p_ctors.begin(); source_ctors_iterator != p_ctors.end(); ++source_ctors_iterator) 
             { 
               if ( *source_ctors_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4047 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPragmaDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPragmaDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_pragma == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4073 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUsingDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUsingDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_namespaceDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4099 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClassDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClassDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4128 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateInstantiationDecl::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateInstantiationDecl -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_templateDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTemplateArgumentPtrList::const_iterator source_templateArguments_iterator = p_templateArguments.begin(); source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
             { 
               if ( *source_templateArguments_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4162 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDerivedTypeStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDerivedTypeStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4192 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgModuleStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgModuleStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4222 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgImplicitStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgImplicitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgInitializedNamePtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4251 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUsingDeclarationStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUsingDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_initializedName == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4278 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNamelistStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNamelistStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgNameGroupPtrList::const_iterator source_group_list_iterator = p_group_list.begin(); source_group_list_iterator != p_group_list.end(); ++source_group_list_iterator) 
             { 
               if ( *source_group_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4307 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgImportStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgImportStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgExpressionPtrList::const_iterator source_import_list_iterator = p_import_list.begin(); source_import_list_iterator != p_import_list.end(); ++source_import_list_iterator) 
             { 
               if ( *source_import_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4336 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parameterList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin(); source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
             { 
               if ( *source_exceptionSpecification_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4370 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMemberFunctionDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMemberFunctionDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_CtorInitializerList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_associatedClassDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parameterList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin(); source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
             { 
               if ( *source_exceptionSpecification_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4406 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateInstantiationMemberFunctionDecl::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateInstantiationMemberFunctionDecl -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_templateDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTemplateArgumentPtrList::const_iterator source_templateArguments_iterator = p_templateArguments.begin(); source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
             { 
               if ( *source_templateArguments_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_CtorInitializerList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_associatedClassDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parameterList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin(); source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
             { 
               if ( *source_exceptionSpecification_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4447 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateInstantiationFunctionDecl::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateInstantiationFunctionDecl -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_templateDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTemplateArgumentPtrList::const_iterator source_templateArguments_iterator = p_templateArguments.begin(); source_templateArguments_iterator != p_templateArguments.end(); ++source_templateArguments_iterator) 
             { 
               if ( *source_templateArguments_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parameterList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin(); source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
             { 
               if ( *source_exceptionSpecification_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4486 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgProgramHeaderStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgProgramHeaderStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parameterList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin(); source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
             { 
               if ( *source_exceptionSpecification_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4521 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgProcedureHeaderStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgProcedureHeaderStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_result_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parameterList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin(); source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
             { 
               if ( *source_exceptionSpecification_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4557 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEntryStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEntryStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_result_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parameterList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgTypePtrList::const_iterator source_exceptionSpecification_iterator = p_exceptionSpecification.begin(); source_exceptionSpecification_iterator != p_exceptionSpecification.end(); ++source_exceptionSpecification_iterator) 
             { 
               if ( *source_exceptionSpecification_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_decoratorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4592 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgContainsStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgContainsStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4617 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgC_PreprocessorDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgC_PreprocessorDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4642 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIncludeDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIncludeDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_headerFileBody == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4668 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDefineDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDefineDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4693 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUndefDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUndefDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4718 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIfdefDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIfdefDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4743 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIfndefDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIfndefDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4768 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIfDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIfDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4793 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDeadIfDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDeadIfDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4818 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgElseDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgElseDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4843 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgElseifDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgElseifDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4868 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEndifDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEndifDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4893 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLineDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLineDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4918 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgWarningDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgWarningDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4943 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgErrorDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgErrorDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4968 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEmptyDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEmptyDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 4993 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIncludeNextDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIncludeNextDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5018 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIdentDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIdentDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5043 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLinemarkerDirectiveStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLinemarkerDirectiveStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5068 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpThreadprivateStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpThreadprivateStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5097 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFortranIncludeLine::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFortranIncludeLine -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5122 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaImportStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaImportStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5147 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStmtDeclarationStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStmtDeclarationStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_statement == childNode ) { return indexCounter; } indexCounter++;
     if ( p_definingDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_firstNondefiningDeclaration == childNode ) { return indexCounter; } indexCounter++;
          for ( SgQualifiedNamePtrList::const_iterator source_qualifiedNameList_iterator = p_qualifiedNameList.begin(); source_qualifiedNameList_iterator != p_qualifiedNameList.end(); ++source_qualifiedNameList_iterator) 
             { 
               if ( *source_qualifiedNameList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5173 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgExprStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgExprStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5193 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLabelStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLabelStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_statement == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5214 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCaseOptionStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCaseOptionStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_key == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_key_range_end == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5236 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTryStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTryStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_catch_statement_seq_root == childNode ) { return indexCounter; } indexCounter++;
     if ( p_else_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_finally_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5259 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDefaultOptionStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDefaultOptionStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5279 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBreakStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBreakStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5298 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgContinueStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgContinueStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5317 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgReturnStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgReturnStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5337 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGotoStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGotoStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_label_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5358 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSpawnStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSpawnStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_the_func == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5378 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNullStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNullStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5397 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVariantStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVariantStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5416 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgForInitStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgForInitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgStatementPtrList::const_iterator source_init_stmt_iterator = p_init_stmt.begin(); source_init_stmt_iterator != p_init_stmt.end(); ++source_init_stmt_iterator) 
             { 
               if ( *source_init_stmt_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5439 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCatchStatementSeq::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCatchStatementSeq -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgStatementPtrList::const_iterator source_catch_statement_seq_iterator = p_catch_statement_seq.begin(); source_catch_statement_seq_iterator != p_catch_statement_seq.end(); ++source_catch_statement_seq_iterator) 
             { 
               if ( *source_catch_statement_seq_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5462 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStopOrPauseStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStopOrPauseStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_code == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5482 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIOStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIOStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5506 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPrintStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPrintStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5531 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgReadStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgReadStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rec == childNode ) { return indexCounter; } indexCounter++;
     if ( p_end == childNode ) { return indexCounter; } indexCounter++;
     if ( p_namelist == childNode ) { return indexCounter; } indexCounter++;
     if ( p_advance == childNode ) { return indexCounter; } indexCounter++;
     if ( p_size == childNode ) { return indexCounter; } indexCounter++;
     if ( p_eor == childNode ) { return indexCounter; } indexCounter++;
     if ( p_asynchronous == childNode ) { return indexCounter; } indexCounter++;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5563 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgWriteStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgWriteStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rec == childNode ) { return indexCounter; } indexCounter++;
     if ( p_namelist == childNode ) { return indexCounter; } indexCounter++;
     if ( p_advance == childNode ) { return indexCounter; } indexCounter++;
     if ( p_asynchronous == childNode ) { return indexCounter; } indexCounter++;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5592 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOpenStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOpenStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_status == childNode ) { return indexCounter; } indexCounter++;
     if ( p_access == childNode ) { return indexCounter; } indexCounter++;
     if ( p_form == childNode ) { return indexCounter; } indexCounter++;
     if ( p_recl == childNode ) { return indexCounter; } indexCounter++;
     if ( p_blank == childNode ) { return indexCounter; } indexCounter++;
     if ( p_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_action == childNode ) { return indexCounter; } indexCounter++;
     if ( p_delim == childNode ) { return indexCounter; } indexCounter++;
     if ( p_pad == childNode ) { return indexCounter; } indexCounter++;
     if ( p_round == childNode ) { return indexCounter; } indexCounter++;
     if ( p_sign == childNode ) { return indexCounter; } indexCounter++;
     if ( p_asynchronous == childNode ) { return indexCounter; } indexCounter++;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5629 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCloseStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCloseStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_status == childNode ) { return indexCounter; } indexCounter++;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5654 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgInquireStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgInquireStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_access == childNode ) { return indexCounter; } indexCounter++;
     if ( p_form == childNode ) { return indexCounter; } indexCounter++;
     if ( p_recl == childNode ) { return indexCounter; } indexCounter++;
     if ( p_blank == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exist == childNode ) { return indexCounter; } indexCounter++;
     if ( p_opened == childNode ) { return indexCounter; } indexCounter++;
     if ( p_number == childNode ) { return indexCounter; } indexCounter++;
     if ( p_named == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_sequential == childNode ) { return indexCounter; } indexCounter++;
     if ( p_direct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_formatted == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unformatted == childNode ) { return indexCounter; } indexCounter++;
     if ( p_nextrec == childNode ) { return indexCounter; } indexCounter++;
     if ( p_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_action == childNode ) { return indexCounter; } indexCounter++;
     if ( p_read == childNode ) { return indexCounter; } indexCounter++;
     if ( p_write == childNode ) { return indexCounter; } indexCounter++;
     if ( p_readwrite == childNode ) { return indexCounter; } indexCounter++;
     if ( p_delim == childNode ) { return indexCounter; } indexCounter++;
     if ( p_pad == childNode ) { return indexCounter; } indexCounter++;
     if ( p_asynchronous == childNode ) { return indexCounter; } indexCounter++;
     if ( p_decimal == childNode ) { return indexCounter; } indexCounter++;
     if ( p_stream == childNode ) { return indexCounter; } indexCounter++;
     if ( p_size == childNode ) { return indexCounter; } indexCounter++;
     if ( p_pending == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iolengthExp == childNode ) { return indexCounter; } indexCounter++;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5706 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFlushStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFlushStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5730 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBackspaceStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBackspaceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5754 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgRewindStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgRewindStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5778 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEndfileStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEndfileStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5802 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgWaitStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgWaitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_io_stmt_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iostat == childNode ) { return indexCounter; } indexCounter++;
     if ( p_err == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iomsg == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5826 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgWhereStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgWhereStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_condition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_elsewhere == childNode ) { return indexCounter; } indexCounter++;
     if ( p_end_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5849 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgElseWhereStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgElseWhereStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_condition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_elsewhere == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5871 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNullifyStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNullifyStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_pointer_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5891 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgArithmeticIfStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgArithmeticIfStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_conditional == childNode ) { return indexCounter; } indexCounter++;
     if ( p_less_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_equal_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_greater_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5914 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAssignStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAssignStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_value == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5935 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgComputedGotoStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgComputedGotoStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_labelList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_label_index == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5956 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAssignedGotoStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAssignedGotoStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_targets == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5976 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAllocateStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAllocateStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expr_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_stat_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_errmsg_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 5999 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDeallocateStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDeallocateStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expr_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_stat_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_errmsg_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6021 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcNotifyStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcNotifyStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_notify_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6041 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcWaitStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcWaitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_wait_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6061 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcBarrierStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcBarrierStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_barrier_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6081 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcFenceStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcFenceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6100 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpBarrierStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpBarrierStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6119 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpTaskwaitStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpTaskwaitStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6138 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpFlushStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpFlushStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgVarRefExpPtrList::const_iterator source_variables_iterator = p_variables.begin(); source_variables_iterator != p_variables.end(); ++source_variables_iterator) 
             { 
               if ( *source_variables_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6161 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpBodyStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpBodyStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6181 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpAtomicStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpAtomicStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6201 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpMasterStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpMasterStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6221 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpOrderedStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpOrderedStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6241 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpCriticalStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpCriticalStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6261 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpSectionStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpSectionStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6281 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpWorkshareStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpWorkshareStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6301 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpClauseBodyStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpClauseBodyStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin(); source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
             { 
               if ( *source_clauses_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6325 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpParallelStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpParallelStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin(); source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
             { 
               if ( *source_clauses_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6349 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpSingleStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpSingleStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin(); source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
             { 
               if ( *source_clauses_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6373 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpTaskStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpTaskStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin(); source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
             { 
               if ( *source_clauses_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6397 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpForStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpForStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin(); source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
             { 
               if ( *source_clauses_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6421 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpDoStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpDoStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin(); source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
             { 
               if ( *source_clauses_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6445 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOmpSectionsStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOmpSectionsStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgOmpClausePtrList::const_iterator source_clauses_iterator = p_clauses.begin(); source_clauses_iterator != p_clauses.end(); ++source_clauses_iterator) 
             { 
               if ( *source_clauses_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6469 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSequenceStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSequenceStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6488 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgWithStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgWithStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6509 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPythonPrintStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPythonPrintStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_destination == childNode ) { return indexCounter; } indexCounter++;
     if ( p_values == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6530 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPassStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPassStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6549 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAssertStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAssertStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_test == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exception_argument == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6570 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgExecStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgExecStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_executable == childNode ) { return indexCounter; } indexCounter++;
     if ( p_globals == childNode ) { return indexCounter; } indexCounter++;
     if ( p_locals == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6592 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPythonGlobalStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPythonGlobalStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgInitializedNamePtrList::const_iterator source_names_iterator = p_names.begin(); source_names_iterator != p_names.end(); ++source_names_iterator) 
             { 
               if ( *source_names_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6615 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaThrowStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaThrowStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_throwOp == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6635 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaSynchronizedStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaSynchronizedStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_numeric_label == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6656 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6675 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnaryOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6696 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgExpressionRoot::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgExpressionRoot -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6717 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMinusOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMinusOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6738 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnaryAddOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnaryAddOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6759 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNotOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNotOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6780 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPointerDerefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPointerDerefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6801 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAddressOfOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAddressOfOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6822 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMinusMinusOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMinusMinusOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6843 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPlusPlusOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPlusPlusOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6864 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBitComplementOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBitComplementOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6885 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCastExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCastExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6907 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgThrowOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgThrowOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6928 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgRealPartOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgRealPartOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6949 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgImagPartOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgImagPartOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6970 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgConjugateOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgConjugateOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 6991 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUserDefinedUnaryOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUserDefinedUnaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7013 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBinaryOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBinaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7036 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgArrowExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgArrowExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7059 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDotExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDotExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7082 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDotStarOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDotStarOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7105 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgArrowStarOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgArrowStarOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7128 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEqualityOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEqualityOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7151 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLessThanOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLessThanOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7174 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGreaterThanOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGreaterThanOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7197 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNotEqualOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNotEqualOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7220 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLessOrEqualOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLessOrEqualOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7243 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgGreaterOrEqualOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgGreaterOrEqualOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7266 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAddOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAddOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7289 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSubtractOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSubtractOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7312 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMultiplyOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMultiplyOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7335 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDivideOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDivideOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7358 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIntegerDivideOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIntegerDivideOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7381 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgModOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgModOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7404 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAndOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAndOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7427 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgOrOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgOrOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7450 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBitXorOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBitXorOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7473 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBitAndOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBitAndOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7496 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBitOrOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBitOrOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7519 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCommaOpExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCommaOpExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7542 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLshiftOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLshiftOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7565 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgRshiftOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgRshiftOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7588 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPntrArrRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPntrArrRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7611 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgScopeOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgScopeOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7634 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7657 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgExponentiationOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgExponentiationOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7680 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaUnsignedRshiftOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaUnsignedRshiftOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7703 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgConcatenationOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgConcatenationOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7726 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPointerAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPointerAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7749 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUserDefinedBinaryOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUserDefinedBinaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7773 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCompoundAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCompoundAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7796 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPlusAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPlusAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7819 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMinusAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMinusAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7842 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAndAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAndAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7865 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIorAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIorAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7888 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMultAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMultAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7911 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDivAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDivAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7934 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgModAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgModAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7957 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgXorAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgXorAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 7980 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLshiftAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLshiftAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8003 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgRshiftAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgRshiftAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8026 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaUnsignedRshiftAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaUnsignedRshiftAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8049 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIntegerDivideAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIntegerDivideAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8072 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgExponentiationAssignOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgExponentiationAssignOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8095 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMembershipOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMembershipOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8118 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNonMembershipOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNonMembershipOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8141 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIsOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIsOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8164 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIsNotOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIsNotOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8187 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgExprListExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgExprListExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgExpressionPtrList::const_iterator source_expressions_iterator = p_expressions.begin(); source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
             { 
               if ( *source_expressions_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8210 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgListExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgListExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgExpressionPtrList::const_iterator source_expressions_iterator = p_expressions.begin(); source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
             { 
               if ( *source_expressions_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8233 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTupleExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTupleExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgExpressionPtrList::const_iterator source_expressions_iterator = p_expressions.begin(); source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
             { 
               if ( *source_expressions_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8256 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVarRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVarRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8277 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClassNameRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClassNameRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8297 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbol_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_function_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8319 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMemberFunctionRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMemberFunctionRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbol_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_function_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8340 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgValueExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgValueExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8360 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgBoolValExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgBoolValExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8380 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStringVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStringVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8400 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgShortVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgShortVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8420 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCharVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCharVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8440 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnsignedCharVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnsignedCharVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8460 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgWcharVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgWcharVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8480 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnsignedShortVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnsignedShortVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8500 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIntVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8520 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEnumVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEnumVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8541 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnsignedIntVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnsignedIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8561 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLongIntVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLongIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8581 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLongLongIntVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLongLongIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8601 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnsignedLongLongIntVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnsignedLongLongIntVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8621 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnsignedLongVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnsignedLongVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8641 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFloatVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFloatVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8661 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDoubleVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDoubleVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8681 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLongDoubleVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLongDoubleVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8701 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgComplexVal::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgComplexVal -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_real_value == childNode ) { return indexCounter; } indexCounter++;
     if ( p_imaginary_value == childNode ) { return indexCounter; } indexCounter++;
     if ( p_precisionType == childNode ) { return indexCounter; } indexCounter++;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8724 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcThreads::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcThreads -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8744 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcMythread::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcMythread -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_originalExpressionTree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8764 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCallExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCallExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_function == childNode ) { return indexCounter; } indexCounter++;
     if ( p_args == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8786 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionCallExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionCallExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_function == childNode ) { return indexCounter; } indexCounter++;
     if ( p_args == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8808 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSizeOfOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSizeOfOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_expr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operand_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8830 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcLocalsizeofExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcLocalsizeofExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operand_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8852 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcBlocksizeofExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcBlocksizeofExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operand_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8874 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUpcElemsizeofExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUpcElemsizeofExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operand_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8896 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaInstanceOfOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaInstanceOfOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_expr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operand_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8918 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSuperExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSuperExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_class_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8938 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypeIdOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypeIdOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_expr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operand_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8960 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgConditionalExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgConditionalExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_conditional_exp == childNode ) { return indexCounter; } indexCounter++;
     if ( p_true_exp == childNode ) { return indexCounter; } indexCounter++;
     if ( p_false_exp == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 8983 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNewExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNewExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_specified_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_placement_args == childNode ) { return indexCounter; } indexCounter++;
     if ( p_constructor_args == childNode ) { return indexCounter; } indexCounter++;
     if ( p_builtin_args == childNode ) { return indexCounter; } indexCounter++;
     if ( p_newOperatorDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9007 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDeleteExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDeleteExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_variable == childNode ) { return indexCounter; } indexCounter++;
     if ( p_deleteOperatorDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9028 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgThisExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgThisExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_class_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9048 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9068 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgInitializer::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9087 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAggregateInitializer::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAggregateInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_initializers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9108 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCompoundInitializer::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCompoundInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_initializers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9129 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgConstructorInitializer::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgConstructorInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_args == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9151 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAssignInitializer::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAssignInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_i == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9172 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDesignatedInitializer::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDesignatedInitializer -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_designatorList == childNode ) { return indexCounter; } indexCounter++;
     if ( p_memberInit == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9193 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVarArgStartOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVarArgStartOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9215 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVarArgOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVarArgOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_expr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9236 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVarArgEndOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVarArgEndOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_expr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9257 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVarArgCopyOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVarArgCopyOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9279 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVarArgStartOneOperandOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVarArgStartOneOperandOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand_expr == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9300 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNullExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNullExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9319 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVariantExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVariantExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9338 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSubscriptExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSubscriptExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lowerBound == childNode ) { return indexCounter; } indexCounter++;
     if ( p_upperBound == childNode ) { return indexCounter; } indexCounter++;
     if ( p_stride == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9360 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgColonShapeExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgColonShapeExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9379 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsteriskShapeExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsteriskShapeExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9398 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgImpliedDo::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgImpliedDo -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_do_var_initialization == childNode ) { return indexCounter; } indexCounter++;
     if ( p_last_val == childNode ) { return indexCounter; } indexCounter++;
     if ( p_increment == childNode ) { return indexCounter; } indexCounter++;
     if ( p_object_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_implied_do_scope == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9422 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIOItemExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIOItemExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_io_item == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9442 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStatementExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStatementExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_statement == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9462 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9482 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLabelRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLabelRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9502 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgActualArgumentExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgActualArgumentExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9522 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgUnknownArrayOrFunctionReference::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgUnknownArrayOrFunctionReference -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_named_reference == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_list == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9543 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgPseudoDestructorRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgPseudoDestructorRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_object_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_expression_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9564 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCAFCoExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCAFCoExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_teamId == childNode ) { return indexCounter; } indexCounter++;
     if ( p_teamRank == childNode ) { return indexCounter; } indexCounter++;
     if ( p_referData == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9586 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCudaKernelCallExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCudaKernelCallExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_function == childNode ) { return indexCounter; } indexCounter++;
     if ( p_args == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exec_config == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9608 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCudaKernelExecConfig::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCudaKernelExecConfig -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_grid == childNode ) { return indexCounter; } indexCounter++;
     if ( p_blocks == childNode ) { return indexCounter; } indexCounter++;
     if ( p_shared == childNode ) { return indexCounter; } indexCounter++;
     if ( p_stream == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9631 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLambdaRefExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLambdaRefExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_functionDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9651 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDictionaryExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDictionaryExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgKeyDatumPairPtrList::const_iterator source_key_datum_pairs_iterator = p_key_datum_pairs.begin(); source_key_datum_pairs_iterator != p_key_datum_pairs.end(); ++source_key_datum_pairs_iterator) 
             { 
               if ( *source_key_datum_pairs_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9674 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgKeyDatumPair::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgKeyDatumPair -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_key == childNode ) { return indexCounter; } indexCounter++;
     if ( p_datum == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9695 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgComprehension::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgComprehension -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_target == childNode ) { return indexCounter; } indexCounter++;
     if ( p_iter == childNode ) { return indexCounter; } indexCounter++;
     if ( p_filters == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9717 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgListComprehension::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgListComprehension -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_element == childNode ) { return indexCounter; } indexCounter++;
     if ( p_generators == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9738 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSetComprehension::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSetComprehension -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_element == childNode ) { return indexCounter; } indexCounter++;
     if ( p_generators == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9759 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDictionaryComprehension::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDictionaryComprehension -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_element == childNode ) { return indexCounter; } indexCounter++;
     if ( p_generators == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9780 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNaryOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNaryOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin(); source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
             { 
               if ( *source_operands_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9803 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNaryBooleanOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNaryBooleanOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin(); source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
             { 
               if ( *source_operands_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9826 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNaryComparisonOp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNaryComparisonOp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin(); source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
             { 
               if ( *source_operands_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9849 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgStringConversion::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgStringConversion -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_expression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9869 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgYieldExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgYieldExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_value == childNode ) { return indexCounter; } indexCounter++;
     if ( p_operatorPosition == childNode ) { return indexCounter; } indexCounter++;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9889 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgToken::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgToken -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_startOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_endOfConstruct == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9907 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9923 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgVariableSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgVariableSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9940 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9957 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgMemberFunctionSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgMemberFunctionSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9974 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgRenameSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgRenameSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_original_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 9992 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgFunctionTypeSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgFunctionTypeSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10009 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgClassSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgClassSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10026 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTemplateSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTemplateSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10043 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEnumSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEnumSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10060 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgEnumFieldSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgEnumFieldSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10077 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgTypedefSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgTypedefSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10094 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgLabelSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgLabelSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_fortran_statement == childNode ) { return indexCounter; } indexCounter++;
     if ( p_fortran_alternate_return_parameter == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10113 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgDefaultSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgDefaultSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10130 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgNamespaceSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgNamespaceSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_aliasDeclaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10148 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgIntrinsicSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgIntrinsicSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10165 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgModuleSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgModuleSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10182 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgInterfaceSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgInterfaceSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10199 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgCommonSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgCommonSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10216 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAliasSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAliasSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_alias == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10233 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryAddressSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryAddressSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_address == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10250 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryDataSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryDataSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_address == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10267 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgJavaLabelSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgJavaLabelSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_declaration == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10284 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNode::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNode -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10300 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmStatement::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmStatement -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10316 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmFunction::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmFunction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmStatementPtrList::const_iterator source_statementList_iterator = p_statementList.begin(); source_statementList_iterator != p_statementList.end(); ++source_statementList_iterator) 
             { 
               if ( *source_statementList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
          for ( SgAsmStatementPtrList::const_iterator source_dest_iterator = p_dest.begin(); source_dest_iterator != p_dest.end(); ++source_dest_iterator) 
             { 
               if ( *source_dest_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_symbol_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10341 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBlock::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmStatementPtrList::const_iterator source_statementList_iterator = p_statementList.begin(); source_statementList_iterator != p_statementList.end(); ++source_statementList_iterator) 
             { 
               if ( *source_statementList_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
          for ( SgAsmIntegerValuePtrList::const_iterator source_successors_iterator = p_successors.begin(); source_successors_iterator != p_successors.end(); ++source_successors_iterator) 
             { 
               if ( *source_successors_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_immediate_dominator == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10366 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmInstruction::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmInstruction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operandList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgAsmStatementPtrList::const_iterator source_sources_iterator = p_sources.begin(); source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
             { 
               if ( *source_sources_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10387 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmx86Instruction::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmx86Instruction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operandList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgAsmStatementPtrList::const_iterator source_sources_iterator = p_sources.begin(); source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
             { 
               if ( *source_sources_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10408 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmArmInstruction::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmArmInstruction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operandList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgAsmStatementPtrList::const_iterator source_sources_iterator = p_sources.begin(); source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
             { 
               if ( *source_sources_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10429 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPowerpcInstruction::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPowerpcInstruction -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operandList == childNode ) { return indexCounter; } indexCounter++;
          for ( SgAsmStatementPtrList::const_iterator source_sources_iterator = p_sources.begin(); source_sources_iterator != p_sources.end(); ++source_sources_iterator) 
             { 
               if ( *source_sources_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10450 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmStaticData::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmStaticData -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10466 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10482 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10500 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmIntegerValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmIntegerValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_node == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10519 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmByteValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmByteValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_node == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10538 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmWordValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmWordValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_node == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10557 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDoubleWordValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDoubleWordValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_node == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10576 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmQuadWordValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmQuadWordValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_base_node == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10595 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmSingleFloatValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmSingleFloatValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10613 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDoubleFloatValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDoubleFloatValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10631 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmVectorValueExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmVectorValueExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_unfolded_expression_tree == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbol == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10650 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10668 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryAdd::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryAdd -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10686 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinarySubtract::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinarySubtract -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10704 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryMultiply::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryMultiply -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10722 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryDivide::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryDivide -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10740 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryMod::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryMod -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10758 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryAddPreupdate::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryAddPreupdate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10776 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinarySubtractPreupdate::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinarySubtractPreupdate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10794 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryAddPostupdate::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryAddPostupdate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10812 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinarySubtractPostupdate::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinarySubtractPostupdate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10830 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryLsl::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryLsl -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10848 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryLsr::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryLsr -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10866 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryAsr::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryAsr -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10884 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBinaryRor::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBinaryRor -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_lhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rhs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10902 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmUnaryExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmUnaryExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10919 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmUnaryPlus::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmUnaryPlus -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10936 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmUnaryMinus::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmUnaryMinus -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10953 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmUnaryRrx::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmUnaryRrx -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10970 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmUnaryArmSpecialRegisterList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmUnaryArmSpecialRegisterList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_operand == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 10987 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmMemoryReferenceExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmMemoryReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_address == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment == childNode ) { return indexCounter; } indexCounter++;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11006 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmRegisterReferenceExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmRegisterReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11023 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmx86RegisterReferenceExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmx86RegisterReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11040 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmArmRegisterReferenceExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmArmRegisterReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11057 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPowerpcRegisterReferenceExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPowerpcRegisterReferenceExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_type == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11074 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmControlFlagsExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmControlFlagsExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11090 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmCommonSubExpression::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmCommonSubExpression -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_subexpression == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11107 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmExprListExp::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmExprListExp -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmExpressionPtrList::const_iterator source_expressions_iterator = p_expressions.begin(); source_expressions_iterator != p_expressions.end(); ++source_expressions_iterator) 
             { 
               if ( *source_expressions_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11127 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmInterpretation::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmInterpretation -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_dwarf_info == childNode ) { return indexCounter; } indexCounter++;
     if ( p_headers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_global_block == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11146 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmOperandList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmOperandList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmExpressionPtrList::const_iterator source_operands_iterator = p_operands.begin(); source_operands_iterator != p_operands.end(); ++source_operands_iterator) 
             { 
               if ( *source_operands_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11166 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11182 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmTypeByte::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmTypeByte -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11198 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmTypeWord::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmTypeWord -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11214 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmTypeDoubleWord::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmTypeDoubleWord -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11230 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmTypeQuadWord::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmTypeQuadWord -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11246 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmTypeDoubleQuadWord::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmTypeDoubleQuadWord -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11262 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmType80bitFloat::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmType80bitFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11278 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmType128bitFloat::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmType128bitFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11294 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmTypeSingleFloat::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmTypeSingleFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11310 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmTypeDoubleFloat::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmTypeDoubleFloat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11326 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmTypeVector::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmTypeVector -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_elementType == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11343 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmExecutableFileFormat::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmExecutableFileFormat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11359 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericDLL::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericDLL -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11376 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericFormat::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericFormat -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11392 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericDLLList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericDLLList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmGenericDLLPtrList::const_iterator source_dlls_iterator = p_dlls.begin(); source_dlls_iterator != p_dlls.end(); ++source_dlls_iterator) 
             { 
               if ( *source_dlls_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11412 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfEHFrameEntryFD::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfEHFrameEntryFD -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11428 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericFile::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericFile -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_headers == childNode ) { return indexCounter; } indexCounter++;
     if ( p_holes == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11446 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11465 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericHeader::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_exec_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dlls == childNode ) { return indexCounter; } indexCounter++;
     if ( p_sections == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11487 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEFileHeader::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_rvasize_pairs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_coff_symtab == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exec_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dlls == childNode ) { return indexCounter; } indexCounter++;
     if ( p_sections == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11512 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLEFileHeader::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLEFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_dos2_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_page_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_resname_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_nonresname_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_entry_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_reloc_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exec_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dlls == childNode ) { return indexCounter; } indexCounter++;
     if ( p_sections == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11541 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNEFileHeader::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNEFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_dos2_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_resname_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_nonresname_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_module_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_entry_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exec_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dlls == childNode ) { return indexCounter; } indexCounter++;
     if ( p_sections == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11569 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDOSFileHeader::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDOSFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_relocs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_rm_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exec_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dlls == childNode ) { return indexCounter; } indexCounter++;
     if ( p_sections == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11593 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfFileHeader::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfFileHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_section_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exec_format == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dlls == childNode ) { return indexCounter; } indexCounter++;
     if ( p_sections == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11617 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11639 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymbolSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymbolSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_symbols == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11662 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfRelocSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfRelocSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_target_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11686 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfDynamicSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfDynamicSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11709 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfStringSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfStringSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_strtab == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11732 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfNoteSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfNoteSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11755 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfEHFrameSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfEHFrameSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_ci_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11778 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11801 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverDefinedSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11824 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverNeededSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverNeededSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_linked_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_segment_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11847 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSectionTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSectionTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11866 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSegmentTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSegmentTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11885 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPESection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPESection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11905 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEImportSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEImportSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_import_directories == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11926 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEExportSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEExportSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_export_dir == childNode ) { return indexCounter; } indexCounter++;
     if ( p_exports == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11948 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEStringSection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEStringSection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_strtab == childNode ) { return indexCounter; } indexCounter++;
     if ( p_section_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11969 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPESectionTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPESectionTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 11988 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDOSExtendedHeader::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDOSExtendedHeader -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12007 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmCoffSymbolTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmCoffSymbolTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_strtab == childNode ) { return indexCounter; } indexCounter++;
     if ( p_symbols == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12028 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNESection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNESection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_st_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_reloc_table == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12049 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNESectionTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNESectionTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12068 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNENameTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNENameTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12087 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNEModuleTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNEModuleTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_strtab == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12107 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNEStringTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNEStringTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12126 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNEEntryTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNEEntryTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmNEEntryPointPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12149 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNERelocTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNERelocTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmNERelocEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12172 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLESection::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLESection -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_st_entry == childNode ) { return indexCounter; } indexCounter++;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12192 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLESectionTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLESectionTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12211 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLENameTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLENameTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12230 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLEPageTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLEPageTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmLEPageTableEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12253 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLEEntryTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLEEntryTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmLEEntryPointPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12276 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLERelocTable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLERelocTable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmLERelocEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_file == childNode ) { return indexCounter; } indexCounter++;
     if ( p_header == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12299 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_bound == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12317 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmCoffSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmCoffSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_bound == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12335 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymbol::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymbol -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_bound == childNode ) { return indexCounter; } indexCounter++;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12353 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericStrtab::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericStrtab -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_container == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dont_free == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12371 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfStrtab::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfStrtab -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_container == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dont_free == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12389 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmCoffStrtab::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmCoffStrtab -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_container == childNode ) { return indexCounter; } indexCounter++;
     if ( p_dont_free == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12407 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericSymbolList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericSymbolList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmGenericSymbolPtrList::const_iterator source_symbols_iterator = p_symbols.begin(); source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
             { 
               if ( *source_symbols_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12427 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericSectionList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericSectionList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmGenericSectionPtrList::const_iterator source_sections_iterator = p_sections.begin(); source_sections_iterator != p_sections.end(); ++source_sections_iterator) 
             { 
               if ( *source_sections_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12447 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericHeaderList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericHeaderList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmGenericHeaderPtrList::const_iterator source_headers_iterator = p_headers.begin(); source_headers_iterator != p_headers.end(); ++source_headers_iterator) 
             { 
               if ( *source_headers_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12467 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericString::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericString -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12483 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmBasicString::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmBasicString -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12499 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmStoredString::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmStoredString -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_storage == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12516 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSectionTableEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSectionTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12532 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSegmentTableEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSegmentTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12548 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymbolList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymbolList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfSymbolPtrList::const_iterator source_symbols_iterator = p_symbols.begin(); source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
             { 
               if ( *source_symbols_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12568 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfRelocEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfRelocEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12584 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfRelocEntryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfRelocEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfRelocEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12604 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEExportEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEExportEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_forwarder == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12622 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEExportEntryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEExportEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmPEExportEntryPtrList::const_iterator source_exports_iterator = p_exports.begin(); source_exports_iterator != p_exports.end(); ++source_exports_iterator) 
             { 
               if ( *source_exports_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12642 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfDynamicEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfDynamicEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12659 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfDynamicEntryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfDynamicEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfDynamicEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12679 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSegmentTableEntryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSegmentTableEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfSegmentTableEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12699 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmStringStorage::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmStringStorage -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_strtab == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12716 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfNoteEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfNoteEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12733 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfNoteEntryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfNoteEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfNoteEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12753 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12769 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverEntryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfSymverEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12789 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverDefinedEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12806 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverDefinedEntryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfSymverDefinedEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12826 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverDefinedAux::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedAux -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12843 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverDefinedAuxList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverDefinedAuxList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfSymverDefinedAuxPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12863 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverNeededEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverNeededEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_file_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12881 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverNeededEntryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverNeededEntryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfSymverNeededEntryPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12901 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverNeededAux::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverNeededAux -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12918 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfSymverNeededAuxList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfSymverNeededAuxList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfSymverNeededAuxPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12938 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEImportDirectory::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEImportDirectory -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_dll_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_imports == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12956 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPESectionTableEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPESectionTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12972 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEExportDirectory::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEExportDirectory -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 12989 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPERVASizePair::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPERVASizePair -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_section == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13006 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmCoffSymbolList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmCoffSymbolList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmCoffSymbolPtrList::const_iterator source_symbols_iterator = p_symbols.begin(); source_symbols_iterator != p_symbols.end(); ++source_symbols_iterator) 
             { 
               if ( *source_symbols_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13026 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPERVASizePairList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPERVASizePairList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmPERVASizePairPtrList::const_iterator source_pairs_iterator = p_pairs.begin(); source_pairs_iterator != p_pairs.end(); ++source_pairs_iterator) 
             { 
               if ( *source_pairs_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13046 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfEHFrameEntryCI::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfEHFrameEntryCI -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_fd_entries == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13063 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEImportDirectoryList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEImportDirectoryList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmPEImportDirectoryPtrList::const_iterator source_vector_iterator = p_vector.begin(); source_vector_iterator != p_vector.end(); ++source_vector_iterator) 
             { 
               if ( *source_vector_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13083 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNEEntryPoint::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNEEntryPoint -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13099 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNERelocEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNERelocEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13115 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmNESectionTableEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmNESectionTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13131 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfEHFrameEntryCIList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfEHFrameEntryCIList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfEHFrameEntryCIPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13151 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLEPageTableEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLEPageTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13167 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLEEntryPoint::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLEEntryPoint -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmLEEntryPointPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13187 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmLESectionTableEntry::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmLESectionTableEntry -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13203 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmElfEHFrameEntryFDList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmElfEHFrameEntryFDList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmElfEHFrameEntryFDPtrList::const_iterator source_entries_iterator = p_entries.begin(); source_entries_iterator != p_entries.end(); ++source_entries_iterator) 
             { 
               if ( *source_entries_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13223 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfInformation::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfInformation -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13239 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfMacro::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfMacro -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13255 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfMacroList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfMacroList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmDwarfMacroPtrList::const_iterator source_macro_list_iterator = p_macro_list.begin(); source_macro_list_iterator != p_macro_list.end(); ++source_macro_list_iterator) 
             { 
               if ( *source_macro_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13275 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfLine::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfLine -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13291 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfLineList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfLineList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmDwarfLinePtrList::const_iterator source_line_list_iterator = p_line_list.begin(); source_line_list_iterator != p_line_list.end(); ++source_line_list_iterator) 
             { 
               if ( *source_line_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13311 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfCompilationUnitList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfCompilationUnitList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmDwarfCompilationUnitPtrList::const_iterator source_cu_list_iterator = p_cu_list.begin(); source_cu_list_iterator != p_cu_list.end(); ++source_cu_list_iterator) 
             { 
               if ( *source_cu_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13331 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfConstruct::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfConstruct -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13348 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfArrayType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfArrayType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13366 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfClassType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfClassType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13384 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfEntryPoint::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfEntryPoint -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13401 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfEnumerationType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfEnumerationType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13419 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfFormalParameter::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfFormalParameter -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13436 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfImportedDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfImportedDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13453 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfLabel::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfLabel -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13470 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfLexicalBlock::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfLexicalBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13488 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfMember::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfMember -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13505 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfPointerType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfPointerType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13522 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfReferenceType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfReferenceType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13539 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfCompilationUnit::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfCompilationUnit -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_line_info == childNode ) { return indexCounter; } indexCounter++;
     if ( p_language_constructs == childNode ) { return indexCounter; } indexCounter++;
     if ( p_macro_info == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13559 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfStringType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfStringType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13576 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfStructureType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfStructureType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13594 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfSubroutineType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfSubroutineType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13612 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfTypedef::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfTypedef -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13629 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfUnionType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfUnionType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13647 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfUnspecifiedParameters::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfUnspecifiedParameters -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13664 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfVariant::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfVariant -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13681 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfCommonBlock::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfCommonBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13699 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfCommonInclusion::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfCommonInclusion -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13716 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfInheritance::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfInheritance -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13733 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfInlinedSubroutine::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfInlinedSubroutine -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13751 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfModule::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfModule -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13768 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfPtrToMemberType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfPtrToMemberType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13785 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfSetType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfSetType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13802 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfSubrangeType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfSubrangeType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13819 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfWithStmt::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfWithStmt -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13836 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfAccessDeclaration::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfAccessDeclaration -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13853 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfBaseType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfBaseType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13870 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfCatchBlock::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfCatchBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13887 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfConstType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfConstType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13904 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfConstant::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfConstant -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13921 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfEnumerator::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfEnumerator -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13938 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfFileType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfFileType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13955 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfFriend::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfFriend -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13972 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfNamelist::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfNamelist -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 13989 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfNamelistItem::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfNamelistItem -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14006 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfPackedType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfPackedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14023 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfSubprogram::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfSubprogram -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14041 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfTemplateTypeParameter::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfTemplateTypeParameter -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14058 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfTemplateValueParameter::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfTemplateValueParameter -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14075 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfThrownType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfThrownType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14092 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfTryBlock::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfTryBlock -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14109 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfVariantPart::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfVariantPart -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14126 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfVariable::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfVariable -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14143 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfVolatileType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfVolatileType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14160 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfDwarfProcedure::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfDwarfProcedure -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14177 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfRestrictType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfRestrictType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14194 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfInterfaceType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfInterfaceType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14211 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfNamespace::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfNamespace -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_body == childNode ) { return indexCounter; } indexCounter++;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14229 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfImportedModule::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfImportedModule -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14246 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfUnspecifiedType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfUnspecifiedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14263 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfPartialUnit::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfPartialUnit -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14280 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfImportedUnit::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfImportedUnit -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14297 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfMutableType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfMutableType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14314 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfCondition::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfCondition -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14331 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfSharedType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfSharedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14348 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfFormatLabel::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfFormatLabel -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14365 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfFunctionTemplate::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfFunctionTemplate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14382 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfClassTemplate::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfClassTemplate -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14399 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfUpcSharedType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfUpcSharedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14416 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfUpcStrictType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfUpcStrictType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14433 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfUpcRelaxedType::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfUpcRelaxedType -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14450 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfUnknownConstruct::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfUnknownConstruct -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_source_position == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14467 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmDwarfConstructList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmDwarfConstructList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmDwarfConstructPtrList::const_iterator source_list_iterator = p_list.begin(); source_list_iterator != p_list.end(); ++source_list_iterator) 
             { 
               if ( *source_list_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14487 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEImportItem::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEImportItem -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
     if ( p_name == childNode ) { return indexCounter; } indexCounter++;
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14504 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmPEImportItemList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmPEImportItemList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmPEImportItemPtrList::const_iterator source_vector_iterator = p_vector.begin(); source_vector_iterator != p_vector.end(); ++source_vector_iterator) 
             { 
               if ( *source_vector_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14524 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmInterpretationList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmInterpretationList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmInterpretationPtrList::const_iterator source_interpretations_iterator = p_interpretations.begin(); source_interpretations_iterator != p_interpretations.end(); ++source_interpretations_iterator) 
             { 
               if ( *source_interpretations_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }

/* #line 14544 "../../../src/frontend/SageIII//Cxx_GrammarGetChildIndex.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */

long
SgAsmGenericFileList::getChildIndex( SgNode* childNode ) const
   {
  // ------------ checking pointers of SgAsmGenericFileList -------------------
     ROSE_ASSERT ( p_freepointer == AST_FileIO::IS_VALID_POINTER() );
     int indexCounter = 0;
          for ( SgAsmGenericFilePtrList::const_iterator source_files_iterator = p_files.begin(); source_files_iterator != p_files.end(); ++source_files_iterator) 
             { 
               if ( *source_files_iterator == childNode ) { return indexCounter; } indexCounter++;
             } 
     if ( p_parent == childNode ) { return indexCounter; } indexCounter++;
  // Child not found, return -1 (default value for returnValue) as index position to signal this.
     return -1;
/* #line 8 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarGetChildIndex.macro" */
   }


