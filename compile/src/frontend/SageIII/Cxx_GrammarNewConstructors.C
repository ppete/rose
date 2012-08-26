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

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLocatedNodeSupport::SgLocatedNodeSupport (  )
   : SgLocatedNode()
   {
#ifdef DEBUG
  // printf ("In SgLocatedNodeSupport::SgLocatedNodeSupport () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(LocatedNodeSupportTag == variant());
     post_construction_initialization();

  // Test the isSgLocatedNodeSupport() function since it has been problematic
     assert(isSgLocatedNodeSupport(this) != NULL);
   }


/* #line 40 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCommonBlockObject::SgCommonBlockObject (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgCommonBlockObject::SgCommonBlockObject () sage_class_name() = %s \n",sage_class_name());
#endif

     p_block_name ="";
     p_variable_reference_list = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_CommonBlockObject == variant());
     post_construction_initialization();

  // Test the isSgCommonBlockObject() function since it has been problematic
     assert(isSgCommonBlockObject(this) != NULL);
   }


/* #line 66 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInitializedName::SgInitializedName (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgInitializedName::SgInitializedName () sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = NULL;
     p_typeptr = NULL;
     p_initptr = NULL;
     p_prev_decl_item = NULL;
     p_is_initializer = false;
     p_declptr = NULL;
     p_storageModifier = NULL;
     p_scope = NULL;
     p_preinitialization = e_unknown_preinitialization;
     p_isCoArray = false;
     p_register_name_code = SgInitializedName::e_invalid_register;
     p_excess_specifier = SgInitializedName::e_excess_specifier_none;
     p_register_name_string = "";
     p_requiresGlobalNameQualificationOnType = false;
     p_shapeDeferred = false;
     p_initializationDeferred = false;
     p_gnu_attribute_initialization_priority = 0;
     p_gnu_attribute_named_weak_reference ="";
     p_gnu_attribute_named_alias ="";
     p_gnu_attribute_cleanup_function ="";
     p_gnu_attribute_section_name ="";
     p_gnu_attribute_alignment = 0;
     p_gnu_attribute_visability = SgDeclarationModifier::e_unknown_visibility;
     p_protected_declaration = false;
     p_name_qualification_length_for_type = 0;
     p_type_elaboration_required_for_type = false;
     p_global_qualification_required_for_type = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(InitializedNameTag == variant());
     post_construction_initialization();

  // Test the isSgInitializedName() function since it has been problematic
     assert(isSgInitializedName(this) != NULL);
   }


/* #line 117 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInterfaceBody::SgInterfaceBody ( SgName function_name, SgFunctionDeclaration* functionDeclaration, bool use_function_name )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgInterfaceBody::SgInterfaceBody (SgName function_name, SgFunctionDeclaration* functionDeclaration, bool use_function_name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_function_name = function_name;
     p_functionDeclaration = functionDeclaration;
     p_use_function_name = use_function_name;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Interface_Body == variant());
     post_construction_initialization();

  // Test the isSgInterfaceBody() function since it has been problematic
     assert(isSgInterfaceBody(this) != NULL);
   }


/* #line 144 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgHeaderFileBody::SgHeaderFileBody (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgHeaderFileBody::SgHeaderFileBody () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMP_Header_File_Body == variant());
     post_construction_initialization();

  // Test the isSgHeaderFileBody() function since it has been problematic
     assert(isSgHeaderFileBody(this) != NULL);
   }


/* #line 167 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRenamePair::SgRenamePair ( SgName local_name, SgName use_name )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgRenamePair::SgRenamePair (SgName local_name, SgName use_name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_local_name = local_name;
     p_use_name = use_name;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Rename_Pair == variant());
     post_construction_initialization();

  // Test the isSgRenamePair() function since it has been problematic
     assert(isSgRenamePair(this) != NULL);
   }


/* #line 193 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpClause::SgOmpClause (  )
   : SgLocatedNodeSupport()
   {
#ifdef DEBUG
  // printf ("In SgOmpClause::SgOmpClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpClause() function since it has been problematic
     assert(isSgOmpClause(this) != NULL);
   }


/* #line 216 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpOrderedClause::SgOmpOrderedClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpOrderedClause::SgOmpOrderedClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpOrderedClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpOrderedClause() function since it has been problematic
     assert(isSgOmpOrderedClause(this) != NULL);
   }


/* #line 239 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpNowaitClause::SgOmpNowaitClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpNowaitClause::SgOmpNowaitClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpNowaitClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpNowaitClause() function since it has been problematic
     assert(isSgOmpNowaitClause(this) != NULL);
   }


/* #line 262 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpUntiedClause::SgOmpUntiedClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpUntiedClause::SgOmpUntiedClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpUntiedClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpUntiedClause() function since it has been problematic
     assert(isSgOmpUntiedClause(this) != NULL);
   }


/* #line 285 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpDefaultClause::SgOmpDefaultClause ( SgOmpClause::omp_default_option_enum data_sharing )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpDefaultClause::SgOmpDefaultClause (SgOmpClause::omp_default_option_enum data_sharing) sage_class_name() = %s \n",sage_class_name());
#endif

     p_data_sharing = data_sharing;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(OmpDefaultClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpDefaultClause() function since it has been problematic
     assert(isSgOmpDefaultClause(this) != NULL);
   }


/* #line 310 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpExpressionClause::SgOmpExpressionClause ( SgExpression* expression )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpExpressionClause::SgOmpExpressionClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(OmpExpressionClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpExpressionClause() function since it has been problematic
     assert(isSgOmpExpressionClause(this) != NULL);
   }


/* #line 335 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpCollapseClause::SgOmpCollapseClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpCollapseClause::SgOmpCollapseClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpCollapseClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpCollapseClause() function since it has been problematic
     assert(isSgOmpCollapseClause(this) != NULL);
   }


/* #line 358 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpIfClause::SgOmpIfClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpIfClause::SgOmpIfClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpIfClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpIfClause() function since it has been problematic
     assert(isSgOmpIfClause(this) != NULL);
   }


/* #line 381 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpNumThreadsClause::SgOmpNumThreadsClause ( SgExpression* expression )
   : SgOmpExpressionClause(expression)
   {
#ifdef DEBUG
  // printf ("In SgOmpNumThreadsClause::SgOmpNumThreadsClause (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpNumThreadsClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpNumThreadsClause() function since it has been problematic
     assert(isSgOmpNumThreadsClause(this) != NULL);
   }


/* #line 404 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpVariablesClause::SgOmpVariablesClause (  )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpVariablesClause::SgOmpVariablesClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpVariablesClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpVariablesClause() function since it has been problematic
     assert(isSgOmpVariablesClause(this) != NULL);
   }


/* #line 427 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpCopyprivateClause::SgOmpCopyprivateClause (  )
   : SgOmpVariablesClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpCopyprivateClause::SgOmpCopyprivateClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpCopyprivateClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpCopyprivateClause() function since it has been problematic
     assert(isSgOmpCopyprivateClause(this) != NULL);
   }


/* #line 450 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpPrivateClause::SgOmpPrivateClause (  )
   : SgOmpVariablesClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpPrivateClause::SgOmpPrivateClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpPrivateClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpPrivateClause() function since it has been problematic
     assert(isSgOmpPrivateClause(this) != NULL);
   }


/* #line 473 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpFirstprivateClause::SgOmpFirstprivateClause (  )
   : SgOmpVariablesClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpFirstprivateClause::SgOmpFirstprivateClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpFirstprivateClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpFirstprivateClause() function since it has been problematic
     assert(isSgOmpFirstprivateClause(this) != NULL);
   }


/* #line 496 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSharedClause::SgOmpSharedClause (  )
   : SgOmpVariablesClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpSharedClause::SgOmpSharedClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpSharedClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpSharedClause() function since it has been problematic
     assert(isSgOmpSharedClause(this) != NULL);
   }


/* #line 519 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpCopyinClause::SgOmpCopyinClause (  )
   : SgOmpVariablesClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpCopyinClause::SgOmpCopyinClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpCopyinClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpCopyinClause() function since it has been problematic
     assert(isSgOmpCopyinClause(this) != NULL);
   }


/* #line 542 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpLastprivateClause::SgOmpLastprivateClause (  )
   : SgOmpVariablesClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpLastprivateClause::SgOmpLastprivateClause () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OmpLastprivateClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpLastprivateClause() function since it has been problematic
     assert(isSgOmpLastprivateClause(this) != NULL);
   }


/* #line 565 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpReductionClause::SgOmpReductionClause ( SgOmpClause::omp_reduction_operator_enum operation )
   : SgOmpVariablesClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpReductionClause::SgOmpReductionClause (SgOmpClause::omp_reduction_operator_enum operation) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operation = operation;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(OmpReductionClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpReductionClause() function since it has been problematic
     assert(isSgOmpReductionClause(this) != NULL);
   }


/* #line 590 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpScheduleClause::SgOmpScheduleClause ( SgOmpClause::omp_schedule_kind_enum kind, SgExpression* chunk_size )
   : SgOmpClause()
   {
#ifdef DEBUG
  // printf ("In SgOmpScheduleClause::SgOmpScheduleClause (SgOmpClause::omp_schedule_kind_enum kind, SgExpression* chunk_size) sage_class_name() = %s \n",sage_class_name());
#endif

     p_kind = kind;
     p_chunk_size = chunk_size;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(OmpScheduleClauseTag == variant());
     post_construction_initialization();

  // Test the isSgOmpScheduleClause() function since it has been problematic
     assert(isSgOmpScheduleClause(this) != NULL);
   }


/* #line 616 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStatement::SgStatement (  )
   : SgLocatedNode()
   {
#ifdef DEBUG
  // printf ("In SgStatement::SgStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_numeric_label = NULL;
     p_source_sequence_value = -1;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(StatementTag == variant());
     post_construction_initialization();

  // Test the isSgStatement() function since it has been problematic
     assert(isSgStatement(this) != NULL);
   }


/* #line 642 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgGlobal::SgGlobal (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgGlobal::SgGlobal () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(GLOBAL_STMT == variant());
     post_construction_initialization();

  // Test the isSgGlobal() function since it has been problematic
     assert(isSgGlobal(this) != NULL);
   }


/* #line 665 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIfStmt::SgIfStmt ( SgStatement* conditional, SgStatement* true_body, SgStatement* false_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgIfStmt::SgIfStmt (SgStatement* conditional, SgStatement* true_body, SgStatement* false_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_conditional = conditional;
     p_true_body = true_body;
     p_false_body = false_body;
     p_else_numeric_label = NULL;
     p_string_label = "";
     p_end_numeric_label = NULL;
     p_has_end_statement = false;
     p_use_then_keyword = false;
     p_is_else_if_statement = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(IF_STMT == variant());
     post_construction_initialization();

  // Test the isSgIfStmt() function since it has been problematic
     assert(isSgIfStmt(this) != NULL);
   }


/* #line 698 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgForStatement::SgForStatement ( SgStatement* test, SgExpression* increment, SgStatement* loop_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgForStatement::SgForStatement (SgStatement* test, SgExpression* increment, SgStatement* loop_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_for_init_stmt = NULL;
     p_test = test;
     p_increment = increment;
     p_loop_body = loop_body;
     p_else_body = NULL;
     p_string_label = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FOR_STMT == variant());
     post_construction_initialization();

  // Test the isSgForStatement() function since it has been problematic
     assert(isSgForStatement(this) != NULL);
   }


/* #line 728 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionDefinition::SgFunctionDefinition ( SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgFunctionDefinition::SgFunctionDefinition (SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FUNC_DEFN_STMT == variant());
     post_construction_initialization();

  // Test the isSgFunctionDefinition() function since it has been problematic
     assert(isSgFunctionDefinition(this) != NULL);
   }


/* #line 753 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateFunctionDefinition::SgTemplateFunctionDefinition ( SgBasicBlock* body )
   : SgFunctionDefinition(body)
   {
#ifdef DEBUG
  // printf ("In SgTemplateFunctionDefinition::SgTemplateFunctionDefinition (SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMPLATE_FUNCTION_DEF_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateFunctionDefinition() function since it has been problematic
     assert(isSgTemplateFunctionDefinition(this) != NULL);
   }


/* #line 776 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClassDefinition::SgClassDefinition (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgClassDefinition::SgClassDefinition () sage_class_name() = %s \n",sage_class_name());
#endif

     p_packingAlignment = 0;
     p_isSequence = false;
     p_isPrivate = false;
     p_isAbstract = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CLASS_DEFN_STMT == variant());
     post_construction_initialization();

  // Test the isSgClassDefinition() function since it has been problematic
     assert(isSgClassDefinition(this) != NULL);
   }


/* #line 804 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationDefn::SgTemplateInstantiationDefn (  )
   : SgClassDefinition()
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationDefn::SgTemplateInstantiationDefn () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMPLATE_INST_DEFN_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateInstantiationDefn() function since it has been problematic
     assert(isSgTemplateInstantiationDefn(this) != NULL);
   }


/* #line 827 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateClassDefinition::SgTemplateClassDefinition (  )
   : SgClassDefinition()
   {
#ifdef DEBUG
  // printf ("In SgTemplateClassDefinition::SgTemplateClassDefinition () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMPLATE_CLASS_DEF_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateClassDefinition() function since it has been problematic
     assert(isSgTemplateClassDefinition(this) != NULL);
   }


/* #line 850 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWhileStmt::SgWhileStmt ( SgStatement* condition, SgStatement* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgWhileStmt::SgWhileStmt (SgStatement* condition, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_body = body;
     p_else_body = NULL;
     p_end_numeric_label = NULL;
     p_string_label = "";
     p_has_end_statement = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(WHILE_STMT == variant());
     post_construction_initialization();

  // Test the isSgWhileStmt() function since it has been problematic
     assert(isSgWhileStmt(this) != NULL);
   }


/* #line 880 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDoWhileStmt::SgDoWhileStmt ( SgStatement* body, SgStatement* condition )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgDoWhileStmt::SgDoWhileStmt (SgStatement* body, SgStatement* condition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;
     p_condition = condition;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(DO_WHILE_STMT == variant());
     post_construction_initialization();

  // Test the isSgDoWhileStmt() function since it has been problematic
     assert(isSgDoWhileStmt(this) != NULL);
   }


/* #line 906 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSwitchStatement::SgSwitchStatement ( SgStatement* item_selector, SgStatement* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgSwitchStatement::SgSwitchStatement (SgStatement* item_selector, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_item_selector = item_selector;
     p_body = body;
     p_end_numeric_label = NULL;
     p_string_label = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(SWITCH_STMT == variant());
     post_construction_initialization();

  // Test the isSgSwitchStatement() function since it has been problematic
     assert(isSgSwitchStatement(this) != NULL);
   }


/* #line 934 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCatchOptionStmt::SgCatchOptionStmt ( SgVariableDeclaration* condition, SgStatement* body, SgTryStmt* trystmt )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgCatchOptionStmt::SgCatchOptionStmt (SgVariableDeclaration* condition, SgStatement* body, SgTryStmt* trystmt) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_body = body;
     p_trystmt = trystmt;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CATCH_STMT == variant());
     post_construction_initialization();

  // Test the isSgCatchOptionStmt() function since it has been problematic
     assert(isSgCatchOptionStmt(this) != NULL);
   }


/* #line 961 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNamespaceDefinitionStatement::SgNamespaceDefinitionStatement ( SgNamespaceDeclarationStatement* namespaceDeclaration )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgNamespaceDefinitionStatement::SgNamespaceDefinitionStatement (SgNamespaceDeclarationStatement* namespaceDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_namespaceDeclaration = namespaceDeclaration;
     p_previousNamepaceDefinition = NULL;
     p_nextNamepaceDefinition = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(NAMESPACE_DEFINITION_STMT == variant());
     post_construction_initialization();

  // Test the isSgNamespaceDefinitionStatement() function since it has been problematic
     assert(isSgNamespaceDefinitionStatement(this) != NULL);
   }


/* #line 988 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBlockDataStatement::SgBlockDataStatement (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgBlockDataStatement::SgBlockDataStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Block_Data_Statement == variant());
     post_construction_initialization();

  // Test the isSgBlockDataStatement() function since it has been problematic
     assert(isSgBlockDataStatement(this) != NULL);
   }


/* #line 1013 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssociateStatement::SgAssociateStatement (  )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgAssociateStatement::SgAssociateStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_variable_declaration = NULL;
     p_body = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Associate_Statement == variant());
     post_construction_initialization();

  // Test the isSgAssociateStatement() function since it has been problematic
     assert(isSgAssociateStatement(this) != NULL);
   }


/* #line 1039 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFortranDo::SgFortranDo ( SgExpression* initialization, SgExpression* bound, SgExpression* increment, SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgFortranDo::SgFortranDo (SgExpression* initialization, SgExpression* bound, SgExpression* increment, SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_initialization = initialization;
     p_bound = bound;
     p_increment = increment;
     p_body = body;
     p_end_numeric_label = NULL;
     p_string_label = "";
     p_old_style = false;
     p_has_end_statement = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FORTRAN_DO == variant());
     post_construction_initialization();

  // Test the isSgFortranDo() function since it has been problematic
     assert(isSgFortranDo(this) != NULL);
   }


/* #line 1071 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFortranNonblockedDo::SgFortranNonblockedDo ( SgExpression* initialization, SgExpression* bound, SgExpression* increment, SgBasicBlock* body, SgStatement* end_statement )
   : SgFortranDo(initialization, bound, increment, body)
   {
#ifdef DEBUG
  // printf ("In SgFortranNonblockedDo::SgFortranNonblockedDo (SgExpression* initialization, SgExpression* bound, SgExpression* increment, SgBasicBlock* body, SgStatement* end_statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_end_statement = end_statement;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FORTRAN_NONBLOCKED_DO == variant());
     post_construction_initialization();

  // Test the isSgFortranNonblockedDo() function since it has been problematic
     assert(isSgFortranNonblockedDo(this) != NULL);
   }


/* #line 1096 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgForAllStatement::SgForAllStatement ( SgExprListExp* forall_header, SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgForAllStatement::SgForAllStatement (SgExprListExp* forall_header, SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_forall_header = forall_header;
     p_body = body;
     p_has_end_statement = false;
     p_string_label = "";
     p_end_numeric_label = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FOR_ALL_STMT == variant());
     post_construction_initialization();

  // Test the isSgForAllStatement() function since it has been problematic
     assert(isSgForAllStatement(this) != NULL);
   }


/* #line 1125 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcForAllStatement::SgUpcForAllStatement ( SgStatement* test, SgExpression* increment, SgExpression* affinity, SgStatement* loop_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcForAllStatement::SgUpcForAllStatement (SgStatement* test, SgExpression* increment, SgExpression* affinity, SgStatement* loop_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_for_init_stmt = NULL;
     p_test = test;
     p_increment = increment;
     p_affinity = affinity;
     p_loop_body = loop_body;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_FORALL_STMT == variant());
     post_construction_initialization();

  // Test the isSgUpcForAllStatement() function since it has been problematic
     assert(isSgUpcForAllStatement(this) != NULL);
   }


/* #line 1154 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCAFWithTeamStatement::SgCAFWithTeamStatement ( SgVarRefExp* teamId, SgBasicBlock* body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgCAFWithTeamStatement::SgCAFWithTeamStatement (SgVarRefExp* teamId, SgBasicBlock* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_teamId = teamId;
     p_body = body;
     p_endHasTeamId = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(WITHTEAM_STMT == variant());
     post_construction_initialization();

  // Test the isSgCAFWithTeamStatement() function since it has been problematic
     assert(isSgCAFWithTeamStatement(this) != NULL);
   }


/* #line 1181 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaForEachStatement::SgJavaForEachStatement ( SgVariableDeclaration* element, SgExpression* collection, SgStatement* loop_body )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaForEachStatement::SgJavaForEachStatement (SgVariableDeclaration* element, SgExpression* collection, SgStatement* loop_body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_element = element;
     p_collection = collection;
     p_loop_body = loop_body;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(JAVA_FOREACH_STMT == variant());
     post_construction_initialization();

  // Test the isSgJavaForEachStatement() function since it has been problematic
     assert(isSgJavaForEachStatement(this) != NULL);
   }


/* #line 1208 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaLabelStatement::SgJavaLabelStatement ( SgName label, SgStatement* statement )
   : SgScopeStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaLabelStatement::SgJavaLabelStatement (SgName label, SgStatement* statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_statement = statement;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(JAVA_LABEL_STMT == variant());
     post_construction_initialization();

  // Test the isSgJavaLabelStatement() function since it has been problematic
     assert(isSgJavaLabelStatement(this) != NULL);
   }


/* #line 1234 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeclarationStatement::SgDeclarationStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgDeclarationStatement::SgDeclarationStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_decl_attributes = 0;
     p_linkage = "";
     p_nameOnly = false;
     p_forward = false;
     p_externBrace = false;
     p_skipElaborateType = false;
     p_definingDeclaration = NULL;
     p_firstNondefiningDeclaration = NULL;
     p_binding_label ="";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgDeclarationStatement() function since it has been problematic
     assert(isSgDeclarationStatement(this) != NULL);
   }


/* #line 1267 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionParameterList::SgFunctionParameterList (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgFunctionParameterList::SgFunctionParameterList () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(FUNCTION_PARAMETER_LIST == variant());
     post_construction_initialization();

  // Test the isSgFunctionParameterList() function since it has been problematic
     assert(isSgFunctionParameterList(this) != NULL);
   }


/* #line 1290 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVariableDeclaration::SgVariableDeclaration (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgVariableDeclaration::SgVariableDeclaration () sage_class_name() = %s \n",sage_class_name());
#endif

     p_baseTypeDefiningDeclaration = NULL;
     p_variableDeclarationContainsBaseTypeDefiningDeclaration = false;
     p_specialization = SgDeclarationStatement::e_no_specialization;
     p_requiresGlobalNameQualificationOnType = false;
     p_gnu_extension_section = "";
     p_gnu_extension_alias = "";
     p_gnu_extension_initialization_priority = 0;
     p_gnu_extension_alignment = 0;
     p_gnu_extension_visability = SgDeclarationStatement::e_gnu_attribute_visability_unspecified;
     p_gnu_extension_declaration_attribute = SgVariableDeclaration::e_gnu_attribute_unspecified;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(VAR_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgVariableDeclaration() function since it has been problematic
     assert(isSgVariableDeclaration(this) != NULL);
   }


/* #line 1327 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVariableDefinition::SgVariableDefinition ( SgInitializedName* vardefn, SgUnsignedLongVal* bitfield )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgVariableDefinition::SgVariableDefinition (SgInitializedName* vardefn, SgUnsignedLongVal* bitfield) sage_class_name() = %s \n",sage_class_name());
#endif

     p_vardefn = vardefn;
     p_bitfield = bitfield;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(VAR_DEFN_STMT == variant());
     post_construction_initialization();

  // Test the isSgVariableDefinition() function since it has been problematic
     assert(isSgVariableDefinition(this) != NULL);
   }


/* #line 1353 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClinkageDeclarationStatement::SgClinkageDeclarationStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgClinkageDeclarationStatement::SgClinkageDeclarationStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_languageSpecifier = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(C_LINKAGE_DECLARATION_STMT == variant());
     post_construction_initialization();

  // Test the isSgClinkageDeclarationStatement() function since it has been problematic
     assert(isSgClinkageDeclarationStatement(this) != NULL);
   }


/* #line 1378 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClinkageStartStatement::SgClinkageStartStatement (  )
   : SgClinkageDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgClinkageStartStatement::SgClinkageStartStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(C_LINKAGE_START_STMT == variant());
     post_construction_initialization();

  // Test the isSgClinkageStartStatement() function since it has been problematic
     assert(isSgClinkageStartStatement(this) != NULL);
   }


/* #line 1401 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClinkageEndStatement::SgClinkageEndStatement (  )
   : SgClinkageDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgClinkageEndStatement::SgClinkageEndStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(C_LINKAGE_END_STMT == variant());
     post_construction_initialization();

  // Test the isSgClinkageEndStatement() function since it has been problematic
     assert(isSgClinkageEndStatement(this) != NULL);
   }


/* #line 1424 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEnumDeclaration::SgEnumDeclaration ( SgName name, SgEnumType* type )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgEnumDeclaration::SgEnumDeclaration (SgName name, SgEnumType* type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_embedded =false;
     p_type = type;
     p_scope = NULL;
     p_isUnNamed = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ENUM_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgEnumDeclaration() function since it has been problematic
     assert(isSgEnumDeclaration(this) != NULL);
   }


/* #line 1453 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAsmStmt::SgAsmStmt (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAsmStmt::SgAsmStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_assemblyCode = "";
     p_useGnuExtendedFormat = false;
     p_isVolatile = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ASM_STMT == variant());
     post_construction_initialization();

  // Test the isSgAsmStmt() function since it has been problematic
     assert(isSgAsmStmt(this) != NULL);
   }


/* #line 1480 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAttributeSpecificationStatement::SgAttributeSpecificationStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgAttributeSpecificationStatement::SgAttributeSpecificationStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_attribute_kind = SgAttributeSpecificationStatement::e_unknown_attribute_spec;
     p_intent = 0;
     p_parameter_list = NULL;
     p_bind_list = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Attribute_Specification_Statement == variant());
     post_construction_initialization();

  // Test the isSgAttributeSpecificationStatement() function since it has been problematic
     assert(isSgAttributeSpecificationStatement(this) != NULL);
   }


/* #line 1508 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFormatStatement::SgFormatStatement ( SgFormatItemList* format_item_list )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgFormatStatement::SgFormatStatement (SgFormatItemList* format_item_list) sage_class_name() = %s \n",sage_class_name());
#endif

     p_format_item_list = format_item_list;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FORMAT_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgFormatStatement() function since it has been problematic
     assert(isSgFormatStatement(this) != NULL);
   }


/* #line 1533 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateDeclaration::SgTemplateDeclaration ( SgName name, SgName string, SgTemplateDeclaration::template_type_enum template_kind, SgTemplateParameterPtrList templateParameters )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgTemplateDeclaration::SgTemplateDeclaration (SgName name, SgName string, SgTemplateDeclaration::template_type_enum template_kind, SgTemplateParameterPtrList templateParameters) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_string = string;
     p_template_kind = template_kind;
     p_templateParameters = templateParameters;
     p_scope = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMPLATE_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateDeclaration() function since it has been problematic
     assert(isSgTemplateDeclaration(this) != NULL);
   }


/* #line 1562 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateClassDeclaration::SgTemplateClassDeclaration ( SgName name, SgName string, SgTemplateDeclaration::template_type_enum template_kind, SgTemplateParameterPtrList templateParameters )
   : SgTemplateDeclaration(name, string, template_kind, templateParameters)
   {
#ifdef DEBUG
  // printf ("In SgTemplateClassDeclaration::SgTemplateClassDeclaration (SgName name, SgName string, SgTemplateDeclaration::template_type_enum template_kind, SgTemplateParameterPtrList templateParameters) sage_class_name() = %s \n",sage_class_name());
#endif

     p_definition = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMPLATE_CLASS_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateClassDeclaration() function since it has been problematic
     assert(isSgTemplateClassDeclaration(this) != NULL);
   }


/* #line 1587 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateFunctionDeclaration::SgTemplateFunctionDeclaration ( SgName name, SgName string, SgTemplateDeclaration::template_type_enum template_kind, SgTemplateParameterPtrList templateParameters )
   : SgTemplateDeclaration(name, string, template_kind, templateParameters)
   {
#ifdef DEBUG
  // printf ("In SgTemplateFunctionDeclaration::SgTemplateFunctionDeclaration (SgName name, SgName string, SgTemplateDeclaration::template_type_enum template_kind, SgTemplateParameterPtrList templateParameters) sage_class_name() = %s \n",sage_class_name());
#endif

     p_definition = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMPLATE_FUNCTION_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateFunctionDeclaration() function since it has been problematic
     assert(isSgTemplateFunctionDeclaration(this) != NULL);
   }


/* #line 1612 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateMemberFunctionDeclaration::SgTemplateMemberFunctionDeclaration ( SgName name, SgName string, SgTemplateDeclaration::template_type_enum template_kind, SgTemplateParameterPtrList templateParameters )
   : SgTemplateFunctionDeclaration(name, string, template_kind, templateParameters)
   {
#ifdef DEBUG
  // printf ("In SgTemplateMemberFunctionDeclaration::SgTemplateMemberFunctionDeclaration (SgName name, SgName string, SgTemplateDeclaration::template_type_enum template_kind, SgTemplateParameterPtrList templateParameters) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMPLATE_MEMBER_FUNCTION_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateMemberFunctionDeclaration() function since it has been problematic
     assert(isSgTemplateMemberFunctionDeclaration(this) != NULL);
   }


/* #line 1635 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationDirectiveStatement::SgTemplateInstantiationDirectiveStatement ( SgDeclarationStatement* declaration )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationDirectiveStatement::SgTemplateInstantiationDirectiveStatement (SgDeclarationStatement* declaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_declaration = declaration;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMPLATE_INST_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateInstantiationDirectiveStatement() function since it has been problematic
     assert(isSgTemplateInstantiationDirectiveStatement(this) != NULL);
   }


/* #line 1660 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUseStatement::SgUseStatement ( SgName name, bool only_option )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgUseStatement::SgUseStatement (SgName name, bool only_option) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_only_option = only_option;
     p_module = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(USE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgUseStatement() function since it has been problematic
     assert(isSgUseStatement(this) != NULL);
   }


/* #line 1687 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgParameterStatement::SgParameterStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgParameterStatement::SgParameterStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(PARAMETER_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgParameterStatement() function since it has been problematic
     assert(isSgParameterStatement(this) != NULL);
   }


/* #line 1710 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNamespaceDeclarationStatement::SgNamespaceDeclarationStatement ( SgName name, SgNamespaceDefinitionStatement* definition, bool isUnnamedNamespace )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgNamespaceDeclarationStatement::SgNamespaceDeclarationStatement (SgName name, SgNamespaceDefinitionStatement* definition, bool isUnnamedNamespace) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_definition = definition;
     p_isUnnamedNamespace = isUnnamedNamespace;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(NAMESPACE_DECLARATION_STMT == variant());
     post_construction_initialization();

  // Test the isSgNamespaceDeclarationStatement() function since it has been problematic
     assert(isSgNamespaceDeclarationStatement(this) != NULL);
   }


/* #line 1737 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEquivalenceStatement::SgEquivalenceStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgEquivalenceStatement::SgEquivalenceStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_equivalence_set_list = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Equivalence_Statement == variant());
     post_construction_initialization();

  // Test the isSgEquivalenceStatement() function since it has been problematic
     assert(isSgEquivalenceStatement(this) != NULL);
   }


/* #line 1762 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInterfaceStatement::SgInterfaceStatement ( SgName name, SgInterfaceStatement::generic_spec_enum generic_spec )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgInterfaceStatement::SgInterfaceStatement (SgName name, SgInterfaceStatement::generic_spec_enum generic_spec) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_generic_spec = generic_spec;
     p_end_numeric_label = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(INTERFACE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgInterfaceStatement() function since it has been problematic
     assert(isSgInterfaceStatement(this) != NULL);
   }


/* #line 1789 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNamespaceAliasDeclarationStatement::SgNamespaceAliasDeclarationStatement ( SgName name, SgNamespaceDeclarationStatement* namespaceDeclaration )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgNamespaceAliasDeclarationStatement::SgNamespaceAliasDeclarationStatement (SgName name, SgNamespaceDeclarationStatement* namespaceDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_namespaceDeclaration = namespaceDeclaration;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(NAMESPACE_ALIAS_DECLARATION_STMT == variant());
     post_construction_initialization();

  // Test the isSgNamespaceAliasDeclarationStatement() function since it has been problematic
     assert(isSgNamespaceAliasDeclarationStatement(this) != NULL);
   }


/* #line 1815 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCommonBlock::SgCommonBlock (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgCommonBlock::SgCommonBlock () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(COMMON_BLOCK == variant());
     post_construction_initialization();

  // Test the isSgCommonBlock() function since it has been problematic
     assert(isSgCommonBlock(this) != NULL);
   }


/* #line 1838 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTypedefDeclaration::SgTypedefDeclaration ( SgName name, SgType* base_type, SgTypedefType* type, SgDeclarationStatement* declaration, SgSymbol* parent_scope )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgTypedefDeclaration::SgTypedefDeclaration (SgName name, SgType* base_type, SgTypedefType* type, SgDeclarationStatement* declaration, SgSymbol* parent_scope) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_base_type = base_type;
     p_type = type;
     p_declaration = declaration;
     p_parent_scope = parent_scope;
     p_typedefBaseTypeContainsDefiningDeclaration = false;
     p_scope = NULL;
     p_requiresGlobalNameQualificationOnType = false;
     p_name_qualification_length_for_base_type = 0;
     p_type_elaboration_required_for_base_type = false;
     p_global_qualification_required_for_base_type = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TYPEDEF_STMT == variant());
     post_construction_initialization();

  // Test the isSgTypedefDeclaration() function since it has been problematic
     assert(isSgTypedefDeclaration(this) != NULL);
   }


/* #line 1873 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStatementFunctionStatement::SgStatementFunctionStatement ( SgFunctionDeclaration* function, SgExpression* expression )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgStatementFunctionStatement::SgStatementFunctionStatement (SgFunctionDeclaration* function, SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_function = function;
     p_expression = expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Statement_Function_Statement == variant());
     post_construction_initialization();

  // Test the isSgStatementFunctionStatement() function since it has been problematic
     assert(isSgStatementFunctionStatement(this) != NULL);
   }


/* #line 1899 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCtorInitializerList::SgCtorInitializerList (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgCtorInitializerList::SgCtorInitializerList () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(CTOR_INITIALIZER_LIST == variant());
     post_construction_initialization();

  // Test the isSgCtorInitializerList() function since it has been problematic
     assert(isSgCtorInitializerList(this) != NULL);
   }


/* #line 1922 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPragmaDeclaration::SgPragmaDeclaration ( SgPragma* pragma )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgPragmaDeclaration::SgPragmaDeclaration (SgPragma* pragma) sage_class_name() = %s \n",sage_class_name());
#endif

     p_pragma = pragma;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(PRAGMA_DECL == variant());
     post_construction_initialization();

  // Test the isSgPragmaDeclaration() function since it has been problematic
     assert(isSgPragmaDeclaration(this) != NULL);
   }


/* #line 1947 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUsingDirectiveStatement::SgUsingDirectiveStatement ( SgNamespaceDeclarationStatement* namespaceDeclaration )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgUsingDirectiveStatement::SgUsingDirectiveStatement (SgNamespaceDeclarationStatement* namespaceDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_namespaceDeclaration = namespaceDeclaration;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(USING_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgUsingDirectiveStatement() function since it has been problematic
     assert(isSgUsingDirectiveStatement(this) != NULL);
   }


/* #line 1975 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClassDeclaration::SgClassDeclaration ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgClassDeclaration::SgClassDeclaration (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_class_type = class_type;
     p_type = type;
     p_definition = definition;
     p_scope = NULL;
     p_specialization = SgDeclarationStatement::e_no_specialization;
     p_from_template = false;
     p_fixupScope = false;
     p_isUnNamed = false;
     p_explicit_interface = false;
     p_decoratorList = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CLASS_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgClassDeclaration() function since it has been problematic
     assert(isSgClassDeclaration(this) != NULL);
   }


/* #line 2013 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationDecl::SgTemplateInstantiationDecl ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition, SgTemplateDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationDecl::SgTemplateInstantiationDecl (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition, SgTemplateDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateName = "";
     p_templateHeader = "";
     p_templateDeclaration = templateDeclaration;
     p_templateArguments = templateArguments;
     p_nameResetFromMangledForm = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMPLATE_INST_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateInstantiationDecl() function since it has been problematic
     assert(isSgTemplateInstantiationDecl(this) != NULL);
   }


/* #line 2042 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDerivedTypeStatement::SgDerivedTypeStatement ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgDerivedTypeStatement::SgDerivedTypeStatement (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_end_numeric_label = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Derived_Type_Statement == variant());
     post_construction_initialization();

  // Test the isSgDerivedTypeStatement() function since it has been problematic
     assert(isSgDerivedTypeStatement(this) != NULL);
   }


/* #line 2067 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgModuleStatement::SgModuleStatement ( SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition )
   : SgClassDeclaration(name, class_type, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgModuleStatement::SgModuleStatement (SgName name, SgClassDeclaration::class_types class_type, SgClassType* type, SgClassDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_end_numeric_label = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(MODULE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgModuleStatement() function since it has been problematic
     assert(isSgModuleStatement(this) != NULL);
   }


/* #line 2092 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImplicitStatement::SgImplicitStatement ( bool implicit_none )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgImplicitStatement::SgImplicitStatement (bool implicit_none) sage_class_name() = %s \n",sage_class_name());
#endif

     p_implicit_none = implicit_none;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Implicit_Statement == variant());
     post_construction_initialization();

  // Test the isSgImplicitStatement() function since it has been problematic
     assert(isSgImplicitStatement(this) != NULL);
   }


/* #line 2117 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUsingDeclarationStatement::SgUsingDeclarationStatement ( SgDeclarationStatement* declaration, SgInitializedName* initializedName )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgUsingDeclarationStatement::SgUsingDeclarationStatement (SgDeclarationStatement* declaration, SgInitializedName* initializedName) sage_class_name() = %s \n",sage_class_name());
#endif

     p_declaration = declaration;
     p_initializedName = initializedName;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(USING_DECLARATION_STMT == variant());
     post_construction_initialization();

  // Test the isSgUsingDeclarationStatement() function since it has been problematic
     assert(isSgUsingDeclarationStatement(this) != NULL);
   }


/* #line 2146 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNamelistStatement::SgNamelistStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgNamelistStatement::SgNamelistStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMP_Namelist_Statement == variant());
     post_construction_initialization();

  // Test the isSgNamelistStatement() function since it has been problematic
     assert(isSgNamelistStatement(this) != NULL);
   }


/* #line 2169 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImportStatement::SgImportStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgImportStatement::SgImportStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMP_Import_Statement == variant());
     post_construction_initialization();

  // Test the isSgImportStatement() function since it has been problematic
     assert(isSgImportStatement(this) != NULL);
   }


/* #line 2192 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionDeclaration::SgFunctionDeclaration ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgFunctionDeclaration::SgFunctionDeclaration (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_parameterList = NULL;
     p_named_in_end_statement = false;
     p_asm_name = "";
     p_decoratorList = NULL;
     p_type = type;
     p_definition = definition;
     p_oldStyleDefinition = false;
     p_scope = NULL;
     p_specialization = SgDeclarationStatement::e_no_specialization;
     p_requiresNameQualificationOnReturnType = false;
     p_gnu_extension_section = "";
     p_gnu_extension_alias = "";
     p_gnu_extension_visability = SgDeclarationStatement::e_gnu_attribute_visability_unspecified;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;
     p_name_qualification_length_for_return_type = 0;
     p_type_elaboration_required_for_return_type = false;
     p_global_qualification_required_for_return_type = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FUNC_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgFunctionDeclaration() function since it has been problematic
     assert(isSgFunctionDeclaration(this) != NULL);
   }


/* #line 2236 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMemberFunctionDeclaration::SgMemberFunctionDeclaration ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgMemberFunctionDeclaration::SgMemberFunctionDeclaration (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_CtorInitializerList = NULL;
     p_associatedClassDeclaration = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(MFUNC_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgMemberFunctionDeclaration() function since it has been problematic
     assert(isSgMemberFunctionDeclaration(this) != NULL);
   }


/* #line 2262 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationMemberFunctionDecl::SgTemplateInstantiationMemberFunctionDecl ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition, SgTemplateDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments )
   : SgMemberFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationMemberFunctionDecl::SgTemplateInstantiationMemberFunctionDecl (SgName name, SgFunctionType* type, SgFunctionDefinition* definition, SgTemplateDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateName = "";
     p_templateDeclaration = templateDeclaration;
     p_templateArguments = templateArguments;
     p_nameResetFromMangledForm = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMPLATE_INST_MEMBER_FUNCTION_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateInstantiationMemberFunctionDecl() function since it has been problematic
     assert(isSgTemplateInstantiationMemberFunctionDecl(this) != NULL);
   }


/* #line 2290 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTemplateInstantiationFunctionDecl::SgTemplateInstantiationFunctionDecl ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition, SgTemplateDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgTemplateInstantiationFunctionDecl::SgTemplateInstantiationFunctionDecl (SgName name, SgFunctionType* type, SgFunctionDefinition* definition, SgTemplateDeclaration* templateDeclaration, SgTemplateArgumentPtrList templateArguments) sage_class_name() = %s \n",sage_class_name());
#endif

     p_templateName = "";
     p_templateDeclaration = templateDeclaration;
     p_templateArguments = templateArguments;
     p_nameResetFromMangledForm = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMPLATE_INST_FUNCTION_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgTemplateInstantiationFunctionDecl() function since it has been problematic
     assert(isSgTemplateInstantiationFunctionDecl(this) != NULL);
   }


/* #line 2318 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgProgramHeaderStatement::SgProgramHeaderStatement ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgProgramHeaderStatement::SgProgramHeaderStatement (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_program_statement_explicit = false;
     p_end_numeric_label = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(PROGRAM_HEADER_STMT == variant());
     post_construction_initialization();

  // Test the isSgProgramHeaderStatement() function since it has been problematic
     assert(isSgProgramHeaderStatement(this) != NULL);
   }


/* #line 2344 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgProcedureHeaderStatement::SgProcedureHeaderStatement ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgProcedureHeaderStatement::SgProcedureHeaderStatement (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_subprogram_kind = SgProcedureHeaderStatement::e_unknown_kind;
     p_end_numeric_label = NULL;
     p_result_name = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(PROCEDURE_HEADER_STMT == variant());
     post_construction_initialization();

  // Test the isSgProcedureHeaderStatement() function since it has been problematic
     assert(isSgProcedureHeaderStatement(this) != NULL);
   }


/* #line 2371 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEntryStatement::SgEntryStatement ( SgName name, SgFunctionType* type, SgFunctionDefinition* definition )
   : SgFunctionDeclaration(name, type, definition)
   {
#ifdef DEBUG
  // printf ("In SgEntryStatement::SgEntryStatement (SgName name, SgFunctionType* type, SgFunctionDefinition* definition) sage_class_name() = %s \n",sage_class_name());
#endif

     p_result_name = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ENTRY_STMT == variant());
     post_construction_initialization();

  // Test the isSgEntryStatement() function since it has been problematic
     assert(isSgEntryStatement(this) != NULL);
   }


/* #line 2396 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgContainsStatement::SgContainsStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgContainsStatement::SgContainsStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMP_Contains_Statement == variant());
     post_construction_initialization();

  // Test the isSgContainsStatement() function since it has been problematic
     assert(isSgContainsStatement(this) != NULL);
   }


/* #line 2419 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgC_PreprocessorDirectiveStatement::SgC_PreprocessorDirectiveStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgC_PreprocessorDirectiveStatement::SgC_PreprocessorDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_directiveString = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CPP_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgC_PreprocessorDirectiveStatement() function since it has been problematic
     assert(isSgC_PreprocessorDirectiveStatement(this) != NULL);
   }


/* #line 2444 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIncludeDirectiveStatement::SgIncludeDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIncludeDirectiveStatement::SgIncludeDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_headerFileBody = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(INCLUDE_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgIncludeDirectiveStatement() function since it has been problematic
     assert(isSgIncludeDirectiveStatement(this) != NULL);
   }


/* #line 2469 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDefineDirectiveStatement::SgDefineDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgDefineDirectiveStatement::SgDefineDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(DEFINE_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgDefineDirectiveStatement() function since it has been problematic
     assert(isSgDefineDirectiveStatement(this) != NULL);
   }


/* #line 2492 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUndefDirectiveStatement::SgUndefDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgUndefDirectiveStatement::SgUndefDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(UNDEF_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgUndefDirectiveStatement() function since it has been problematic
     assert(isSgUndefDirectiveStatement(this) != NULL);
   }


/* #line 2515 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIfdefDirectiveStatement::SgIfdefDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIfdefDirectiveStatement::SgIfdefDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IFDEF_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgIfdefDirectiveStatement() function since it has been problematic
     assert(isSgIfdefDirectiveStatement(this) != NULL);
   }


/* #line 2538 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIfndefDirectiveStatement::SgIfndefDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIfndefDirectiveStatement::SgIfndefDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IFNDEF_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgIfndefDirectiveStatement() function since it has been problematic
     assert(isSgIfndefDirectiveStatement(this) != NULL);
   }


/* #line 2561 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIfDirectiveStatement::SgIfDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIfDirectiveStatement::SgIfDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IF_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgIfDirectiveStatement() function since it has been problematic
     assert(isSgIfDirectiveStatement(this) != NULL);
   }


/* #line 2584 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeadIfDirectiveStatement::SgDeadIfDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgDeadIfDirectiveStatement::SgDeadIfDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(DEAD_IF_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgDeadIfDirectiveStatement() function since it has been problematic
     assert(isSgDeadIfDirectiveStatement(this) != NULL);
   }


/* #line 2607 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElseDirectiveStatement::SgElseDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgElseDirectiveStatement::SgElseDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ELSE_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgElseDirectiveStatement() function since it has been problematic
     assert(isSgElseDirectiveStatement(this) != NULL);
   }


/* #line 2630 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElseifDirectiveStatement::SgElseifDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgElseifDirectiveStatement::SgElseifDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ELSEIF_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgElseifDirectiveStatement() function since it has been problematic
     assert(isSgElseifDirectiveStatement(this) != NULL);
   }


/* #line 2653 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEndifDirectiveStatement::SgEndifDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgEndifDirectiveStatement::SgEndifDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ENDIF_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgEndifDirectiveStatement() function since it has been problematic
     assert(isSgEndifDirectiveStatement(this) != NULL);
   }


/* #line 2676 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLineDirectiveStatement::SgLineDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgLineDirectiveStatement::SgLineDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(LINE_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgLineDirectiveStatement() function since it has been problematic
     assert(isSgLineDirectiveStatement(this) != NULL);
   }


/* #line 2699 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWarningDirectiveStatement::SgWarningDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgWarningDirectiveStatement::SgWarningDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(WARNING_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgWarningDirectiveStatement() function since it has been problematic
     assert(isSgWarningDirectiveStatement(this) != NULL);
   }


/* #line 2722 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgErrorDirectiveStatement::SgErrorDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgErrorDirectiveStatement::SgErrorDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ERROR_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgErrorDirectiveStatement() function since it has been problematic
     assert(isSgErrorDirectiveStatement(this) != NULL);
   }


/* #line 2745 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEmptyDirectiveStatement::SgEmptyDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgEmptyDirectiveStatement::SgEmptyDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(EMPTY_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgEmptyDirectiveStatement() function since it has been problematic
     assert(isSgEmptyDirectiveStatement(this) != NULL);
   }


/* #line 2768 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIncludeNextDirectiveStatement::SgIncludeNextDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIncludeNextDirectiveStatement::SgIncludeNextDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(INCLUDE_NEXT_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgIncludeNextDirectiveStatement() function since it has been problematic
     assert(isSgIncludeNextDirectiveStatement(this) != NULL);
   }


/* #line 2791 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIdentDirectiveStatement::SgIdentDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgIdentDirectiveStatement::SgIdentDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IDENT_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgIdentDirectiveStatement() function since it has been problematic
     assert(isSgIdentDirectiveStatement(this) != NULL);
   }


/* #line 2814 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLinemarkerDirectiveStatement::SgLinemarkerDirectiveStatement (  )
   : SgC_PreprocessorDirectiveStatement()
   {
#ifdef DEBUG
  // printf ("In SgLinemarkerDirectiveStatement::SgLinemarkerDirectiveStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_linenumber = -1;
     p_filename = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(LINEMARKER_DIRECTIVE_STMT == variant());
     post_construction_initialization();

  // Test the isSgLinemarkerDirectiveStatement() function since it has been problematic
     assert(isSgLinemarkerDirectiveStatement(this) != NULL);
   }


/* #line 2840 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpThreadprivateStatement::SgOmpThreadprivateStatement (  )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpThreadprivateStatement::SgOmpThreadprivateStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_THREADPRIVATE_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpThreadprivateStatement() function since it has been problematic
     assert(isSgOmpThreadprivateStatement(this) != NULL);
   }


/* #line 2863 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFortranIncludeLine::SgFortranIncludeLine ( std::string filename )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgFortranIncludeLine::SgFortranIncludeLine (std::string filename) sage_class_name() = %s \n",sage_class_name());
#endif

     p_filename = filename;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Fortran_Include_Line == variant());
     post_construction_initialization();

  // Test the isSgFortranIncludeLine() function since it has been problematic
     assert(isSgFortranIncludeLine(this) != NULL);
   }


/* #line 2888 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaImportStatement::SgJavaImportStatement ( SgName path, bool containsWildCard )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaImportStatement::SgJavaImportStatement (SgName path, bool containsWildCard) sage_class_name() = %s \n",sage_class_name());
#endif

     p_path = path;
     p_containsWildCard = containsWildCard;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_JavaImportStatement == variant());
     post_construction_initialization();

  // Test the isSgJavaImportStatement() function since it has been problematic
     assert(isSgJavaImportStatement(this) != NULL);
   }


/* #line 2914 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStmtDeclarationStatement::SgStmtDeclarationStatement ( SgStatement* statement )
   : SgDeclarationStatement()
   {
#ifdef DEBUG
  // printf ("In SgStmtDeclarationStatement::SgStmtDeclarationStatement (SgStatement* statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_statement = statement;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(STMT_DECL_STMT == variant());
     post_construction_initialization();

  // Test the isSgStmtDeclarationStatement() function since it has been problematic
     assert(isSgStmtDeclarationStatement(this) != NULL);
   }


/* #line 2939 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExprStatement::SgExprStatement ( SgExpression* expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgExprStatement::SgExprStatement (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(EXPR_STMT == variant());
     post_construction_initialization();

  // Test the isSgExprStatement() function since it has been problematic
     assert(isSgExprStatement(this) != NULL);
   }


/* #line 2964 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLabelStatement::SgLabelStatement ( SgName label, SgStatement* statement )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgLabelStatement::SgLabelStatement (SgName label, SgStatement* statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_scope = NULL;
     p_statement = statement;
     p_gnu_extension_unused = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(LABEL_STMT == variant());
     post_construction_initialization();

  // Test the isSgLabelStatement() function since it has been problematic
     assert(isSgLabelStatement(this) != NULL);
   }


/* #line 2992 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCaseOptionStmt::SgCaseOptionStmt ( SgExpression* key, SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgCaseOptionStmt::SgCaseOptionStmt (SgExpression* key, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_key = key;
     p_body = body;
     p_key_range_end  = NULL;
     p_case_construct_name  = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CASE_STMT == variant());
     post_construction_initialization();

  // Test the isSgCaseOptionStmt() function since it has been problematic
     assert(isSgCaseOptionStmt(this) != NULL);
   }


/* #line 3020 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTryStmt::SgTryStmt ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgTryStmt::SgTryStmt (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;
     p_catch_statement_seq_root = NULL;
     p_else_body = NULL;
     p_finally_body = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TRY_STMT == variant());
     post_construction_initialization();

  // Test the isSgTryStmt() function since it has been problematic
     assert(isSgTryStmt(this) != NULL);
   }


/* #line 3048 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDefaultOptionStmt::SgDefaultOptionStmt ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgDefaultOptionStmt::SgDefaultOptionStmt (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;
     p_default_construct_name  = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(DEFAULT_STMT == variant());
     post_construction_initialization();

  // Test the isSgDefaultOptionStmt() function since it has been problematic
     assert(isSgDefaultOptionStmt(this) != NULL);
   }


/* #line 3074 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBreakStmt::SgBreakStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgBreakStmt::SgBreakStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_do_string_label = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(BREAK_STMT == variant());
     post_construction_initialization();

  // Test the isSgBreakStmt() function since it has been problematic
     assert(isSgBreakStmt(this) != NULL);
   }


/* #line 3099 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgContinueStmt::SgContinueStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgContinueStmt::SgContinueStmt () sage_class_name() = %s \n",sage_class_name());
#endif

     p_do_string_label = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CONTINUE_STMT == variant());
     post_construction_initialization();

  // Test the isSgContinueStmt() function since it has been problematic
     assert(isSgContinueStmt(this) != NULL);
   }


/* #line 3124 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgReturnStmt::SgReturnStmt ( SgExpression* expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgReturnStmt::SgReturnStmt (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(RETURN_STMT == variant());
     post_construction_initialization();

  // Test the isSgReturnStmt() function since it has been problematic
     assert(isSgReturnStmt(this) != NULL);
   }


/* #line 3149 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgGotoStatement::SgGotoStatement ( SgLabelStatement* label )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgGotoStatement::SgGotoStatement (SgLabelStatement* label) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_label_expression = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(GOTO_STMT == variant());
     post_construction_initialization();

  // Test the isSgGotoStatement() function since it has been problematic
     assert(isSgGotoStatement(this) != NULL);
   }


/* #line 3175 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSpawnStmt::SgSpawnStmt ( SgFunctionCallExp* the_func )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgSpawnStmt::SgSpawnStmt (SgFunctionCallExp* the_func) sage_class_name() = %s \n",sage_class_name());
#endif

     p_the_func = the_func;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(SPAWN_STMT == variant());
     post_construction_initialization();

  // Test the isSgSpawnStmt() function since it has been problematic
     assert(isSgSpawnStmt(this) != NULL);
   }


/* #line 3200 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNullStatement::SgNullStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgNullStatement::SgNullStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(NULL_STMT == variant());
     post_construction_initialization();

  // Test the isSgNullStatement() function since it has been problematic
     assert(isSgNullStatement(this) != NULL);
   }


/* #line 3223 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVariantStatement::SgVariantStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgVariantStatement::SgVariantStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(VARIANT_STMT == variant());
     post_construction_initialization();

  // Test the isSgVariantStatement() function since it has been problematic
     assert(isSgVariantStatement(this) != NULL);
   }


/* #line 3246 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgForInitStatement::SgForInitStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgForInitStatement::SgForInitStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(FOR_INIT_STMT == variant());
     post_construction_initialization();

  // Test the isSgForInitStatement() function since it has been problematic
     assert(isSgForInitStatement(this) != NULL);
   }


/* #line 3269 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCatchStatementSeq::SgCatchStatementSeq (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgCatchStatementSeq::SgCatchStatementSeq () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(CATCH_STATEMENT_SEQ == variant());
     post_construction_initialization();

  // Test the isSgCatchStatementSeq() function since it has been problematic
     assert(isSgCatchStatementSeq(this) != NULL);
   }


/* #line 3292 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStopOrPauseStatement::SgStopOrPauseStatement ( SgExpression* code )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgStopOrPauseStatement::SgStopOrPauseStatement (SgExpression* code) sage_class_name() = %s \n",sage_class_name());
#endif

     p_stop_or_pause = SgStopOrPauseStatement::e_unknown;
     p_code = code;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(STOP_OR_PAUSE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgStopOrPauseStatement() function since it has been problematic
     assert(isSgStopOrPauseStatement(this) != NULL);
   }


/* #line 3318 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIOStatement::SgIOStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgIOStatement::SgIOStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_io_statement = SgIOStatement::e_unknown;
     p_io_stmt_list = NULL;
     p_unit = NULL;
     p_iostat = NULL;
     p_err = NULL;
     p_iomsg = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(IO_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgIOStatement() function since it has been problematic
     assert(isSgIOStatement(this) != NULL);
   }


/* #line 3348 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPrintStatement::SgPrintStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgPrintStatement::SgPrintStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_format = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(PRINT_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgPrintStatement() function since it has been problematic
     assert(isSgPrintStatement(this) != NULL);
   }


/* #line 3373 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgReadStatement::SgReadStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgReadStatement::SgReadStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_format = NULL;
     p_rec = NULL;
     p_end = NULL;
     p_namelist = NULL;
     p_advance = NULL;
     p_size = NULL;
     p_eor = NULL;
     p_asynchronous = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(READ_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgReadStatement() function since it has been problematic
     assert(isSgReadStatement(this) != NULL);
   }


/* #line 3405 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWriteStatement::SgWriteStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgWriteStatement::SgWriteStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_format = NULL;
     p_rec = NULL;
     p_namelist = NULL;
     p_advance = NULL;
     p_asynchronous = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(WRITE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgWriteStatement() function since it has been problematic
     assert(isSgWriteStatement(this) != NULL);
   }


/* #line 3434 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOpenStatement::SgOpenStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgOpenStatement::SgOpenStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_file = NULL;
     p_status = NULL;
     p_access = NULL;
     p_form = NULL;
     p_recl = NULL;
     p_blank = NULL;
     p_position = NULL;
     p_action = NULL;
     p_delim = NULL;
     p_pad = NULL;
     p_round = NULL;
     p_sign = NULL;
     p_asynchronous = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(OPEN_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgOpenStatement() function since it has been problematic
     assert(isSgOpenStatement(this) != NULL);
   }


/* #line 3471 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCloseStatement::SgCloseStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgCloseStatement::SgCloseStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_status = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CLOSE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgCloseStatement() function since it has been problematic
     assert(isSgCloseStatement(this) != NULL);
   }


/* #line 3496 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInquireStatement::SgInquireStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgInquireStatement::SgInquireStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_file = NULL;
     p_access = NULL;
     p_form = NULL;
     p_recl = NULL;
     p_blank = NULL;
     p_exist = NULL;
     p_opened = NULL;
     p_number = NULL;
     p_named = NULL;
     p_name = NULL;
     p_sequential = NULL;
     p_direct = NULL;
     p_formatted = NULL;
     p_unformatted = NULL;
     p_nextrec = NULL;
     p_position = NULL;
     p_action = NULL;
     p_read = NULL;
     p_write = NULL;
     p_readwrite = NULL;
     p_delim = NULL;
     p_pad = NULL;
     p_asynchronous = NULL;
     p_decimal = NULL;
     p_stream = NULL;
     p_size = NULL;
     p_pending = NULL;
     p_iolengthExp = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(INQUIRE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgInquireStatement() function since it has been problematic
     assert(isSgInquireStatement(this) != NULL);
   }


/* #line 3548 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFlushStatement::SgFlushStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgFlushStatement::SgFlushStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(FLUSH_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgFlushStatement() function since it has been problematic
     assert(isSgFlushStatement(this) != NULL);
   }


/* #line 3571 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBackspaceStatement::SgBackspaceStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgBackspaceStatement::SgBackspaceStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(BACKSPACE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgBackspaceStatement() function since it has been problematic
     assert(isSgBackspaceStatement(this) != NULL);
   }


/* #line 3594 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRewindStatement::SgRewindStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgRewindStatement::SgRewindStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(REWIND_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgRewindStatement() function since it has been problematic
     assert(isSgRewindStatement(this) != NULL);
   }


/* #line 3617 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEndfileStatement::SgEndfileStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgEndfileStatement::SgEndfileStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ENDFILE_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgEndfileStatement() function since it has been problematic
     assert(isSgEndfileStatement(this) != NULL);
   }


/* #line 3640 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWaitStatement::SgWaitStatement (  )
   : SgIOStatement()
   {
#ifdef DEBUG
  // printf ("In SgWaitStatement::SgWaitStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(WAIT_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgWaitStatement() function since it has been problematic
     assert(isSgWaitStatement(this) != NULL);
   }


/* #line 3663 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWhereStatement::SgWhereStatement ( SgExpression* condition, SgBasicBlock* body, SgElseWhereStatement* elsewhere )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgWhereStatement::SgWhereStatement (SgExpression* condition, SgBasicBlock* body, SgElseWhereStatement* elsewhere) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_body = body;
     p_elsewhere = elsewhere;
     p_end_numeric_label = NULL;
     p_string_label = "";
     p_has_end_statement = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Where_Statement == variant());
     post_construction_initialization();

  // Test the isSgWhereStatement() function since it has been problematic
     assert(isSgWhereStatement(this) != NULL);
   }


/* #line 3693 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgElseWhereStatement::SgElseWhereStatement ( SgExpression* condition, SgBasicBlock* body, SgElseWhereStatement* elsewhere )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgElseWhereStatement::SgElseWhereStatement (SgExpression* condition, SgBasicBlock* body, SgElseWhereStatement* elsewhere) sage_class_name() = %s \n",sage_class_name());
#endif

     p_condition = condition;
     p_body = body;
     p_elsewhere = elsewhere;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Else_Where_Statement == variant());
     post_construction_initialization();

  // Test the isSgElseWhereStatement() function since it has been problematic
     assert(isSgElseWhereStatement(this) != NULL);
   }


/* #line 3720 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNullifyStatement::SgNullifyStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgNullifyStatement::SgNullifyStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMP_Nullify_Statement == variant());
     post_construction_initialization();

  // Test the isSgNullifyStatement() function since it has been problematic
     assert(isSgNullifyStatement(this) != NULL);
   }


/* #line 3743 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgArithmeticIfStatement::SgArithmeticIfStatement ( SgExpression* conditional, SgLabelRefExp* less_label, SgLabelRefExp* equal_label, SgLabelRefExp* greater_label )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgArithmeticIfStatement::SgArithmeticIfStatement (SgExpression* conditional, SgLabelRefExp* less_label, SgLabelRefExp* equal_label, SgLabelRefExp* greater_label) sage_class_name() = %s \n",sage_class_name());
#endif

     p_conditional = conditional;
     p_less_label = less_label;
     p_equal_label = equal_label;
     p_greater_label = greater_label;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Arithmetic_If_Statement == variant());
     post_construction_initialization();

  // Test the isSgArithmeticIfStatement() function since it has been problematic
     assert(isSgArithmeticIfStatement(this) != NULL);
   }


/* #line 3771 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssignStatement::SgAssignStatement ( SgLabelRefExp* label, SgExpression* value )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAssignStatement::SgAssignStatement (SgLabelRefExp* label, SgExpression* value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_label = label;
     p_value = value;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Assign_Statement == variant());
     post_construction_initialization();

  // Test the isSgAssignStatement() function since it has been problematic
     assert(isSgAssignStatement(this) != NULL);
   }


/* #line 3797 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgComputedGotoStatement::SgComputedGotoStatement ( SgExprListExp* labelList, SgExpression* label_index )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgComputedGotoStatement::SgComputedGotoStatement (SgExprListExp* labelList, SgExpression* label_index) sage_class_name() = %s \n",sage_class_name());
#endif

     p_labelList = labelList;
     p_label_index = label_index;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Computed_Goto_Statement == variant());
     post_construction_initialization();

  // Test the isSgComputedGotoStatement() function since it has been problematic
     assert(isSgComputedGotoStatement(this) != NULL);
   }


/* #line 3823 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssignedGotoStatement::SgAssignedGotoStatement ( SgExprListExp* targets )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAssignedGotoStatement::SgAssignedGotoStatement (SgExprListExp* targets) sage_class_name() = %s \n",sage_class_name());
#endif

     p_targets = targets;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Assigned_Goto_Statement == variant());
     post_construction_initialization();

  // Test the isSgAssignedGotoStatement() function since it has been problematic
     assert(isSgAssignedGotoStatement(this) != NULL);
   }


/* #line 3848 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAllocateStatement::SgAllocateStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAllocateStatement::SgAllocateStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_expr_list = NULL;
     p_stat_expression = NULL;
     p_errmsg_expression = NULL;
     p_source_expression = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Allocate_Statement == variant());
     post_construction_initialization();

  // Test the isSgAllocateStatement() function since it has been problematic
     assert(isSgAllocateStatement(this) != NULL);
   }


/* #line 3876 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeallocateStatement::SgDeallocateStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgDeallocateStatement::SgDeallocateStatement () sage_class_name() = %s \n",sage_class_name());
#endif

     p_expr_list = NULL;
     p_stat_expression = NULL;
     p_errmsg_expression = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_Deallocate_Statement == variant());
     post_construction_initialization();

  // Test the isSgDeallocateStatement() function since it has been problematic
     assert(isSgDeallocateStatement(this) != NULL);
   }


/* #line 3903 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcNotifyStatement::SgUpcNotifyStatement ( SgExpression* notify_expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcNotifyStatement::SgUpcNotifyStatement (SgExpression* notify_expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_notify_expression = notify_expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_NOTIFY_STMT == variant());
     post_construction_initialization();

  // Test the isSgUpcNotifyStatement() function since it has been problematic
     assert(isSgUpcNotifyStatement(this) != NULL);
   }


/* #line 3928 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcWaitStatement::SgUpcWaitStatement ( SgExpression* wait_expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcWaitStatement::SgUpcWaitStatement (SgExpression* wait_expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_wait_expression = wait_expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_WAIT_STMT == variant());
     post_construction_initialization();

  // Test the isSgUpcWaitStatement() function since it has been problematic
     assert(isSgUpcWaitStatement(this) != NULL);
   }


/* #line 3953 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcBarrierStatement::SgUpcBarrierStatement ( SgExpression* barrier_expression )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcBarrierStatement::SgUpcBarrierStatement (SgExpression* barrier_expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_barrier_expression = barrier_expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_BARRIER_STMT == variant());
     post_construction_initialization();

  // Test the isSgUpcBarrierStatement() function since it has been problematic
     assert(isSgUpcBarrierStatement(this) != NULL);
   }


/* #line 3978 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcFenceStatement::SgUpcFenceStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgUpcFenceStatement::SgUpcFenceStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(UPC_FENCE_STMT == variant());
     post_construction_initialization();

  // Test the isSgUpcFenceStatement() function since it has been problematic
     assert(isSgUpcFenceStatement(this) != NULL);
   }


/* #line 4001 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpBarrierStatement::SgOmpBarrierStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpBarrierStatement::SgOmpBarrierStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_BARRIER_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpBarrierStatement() function since it has been problematic
     assert(isSgOmpBarrierStatement(this) != NULL);
   }


/* #line 4024 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpTaskwaitStatement::SgOmpTaskwaitStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpTaskwaitStatement::SgOmpTaskwaitStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_TASKWAIT_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpTaskwaitStatement() function since it has been problematic
     assert(isSgOmpTaskwaitStatement(this) != NULL);
   }


/* #line 4047 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpFlushStatement::SgOmpFlushStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpFlushStatement::SgOmpFlushStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_FLUSH_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpFlushStatement() function since it has been problematic
     assert(isSgOmpFlushStatement(this) != NULL);
   }


/* #line 4070 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpBodyStatement::SgOmpBodyStatement ( SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgOmpBodyStatement::SgOmpBodyStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_body = body;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(OMP_BODY_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpBodyStatement() function since it has been problematic
     assert(isSgOmpBodyStatement(this) != NULL);
   }


/* #line 4095 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpAtomicStatement::SgOmpAtomicStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpAtomicStatement::SgOmpAtomicStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_ATOMIC_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpAtomicStatement() function since it has been problematic
     assert(isSgOmpAtomicStatement(this) != NULL);
   }


/* #line 4118 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpMasterStatement::SgOmpMasterStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpMasterStatement::SgOmpMasterStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_MASTER_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpMasterStatement() function since it has been problematic
     assert(isSgOmpMasterStatement(this) != NULL);
   }


/* #line 4141 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpOrderedStatement::SgOmpOrderedStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpOrderedStatement::SgOmpOrderedStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_ORDERED_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpOrderedStatement() function since it has been problematic
     assert(isSgOmpOrderedStatement(this) != NULL);
   }


/* #line 4164 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpCriticalStatement::SgOmpCriticalStatement ( SgStatement* body, SgName name )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpCriticalStatement::SgOmpCriticalStatement (SgStatement* body, SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(OMP_CRITICAL_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpCriticalStatement() function since it has been problematic
     assert(isSgOmpCriticalStatement(this) != NULL);
   }


/* #line 4189 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSectionStatement::SgOmpSectionStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpSectionStatement::SgOmpSectionStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_SECTION_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpSectionStatement() function since it has been problematic
     assert(isSgOmpSectionStatement(this) != NULL);
   }


/* #line 4212 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpWorkshareStatement::SgOmpWorkshareStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpWorkshareStatement::SgOmpWorkshareStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_WORKSHARE_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpWorkshareStatement() function since it has been problematic
     assert(isSgOmpWorkshareStatement(this) != NULL);
   }


/* #line 4235 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpClauseBodyStatement::SgOmpClauseBodyStatement ( SgStatement* body )
   : SgOmpBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpClauseBodyStatement::SgOmpClauseBodyStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_CLAUSEBODY_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpClauseBodyStatement() function since it has been problematic
     assert(isSgOmpClauseBodyStatement(this) != NULL);
   }


/* #line 4258 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpParallelStatement::SgOmpParallelStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpParallelStatement::SgOmpParallelStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_PARALLEL_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpParallelStatement() function since it has been problematic
     assert(isSgOmpParallelStatement(this) != NULL);
   }


/* #line 4281 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSingleStatement::SgOmpSingleStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpSingleStatement::SgOmpSingleStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_SINGLE_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpSingleStatement() function since it has been problematic
     assert(isSgOmpSingleStatement(this) != NULL);
   }


/* #line 4304 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpTaskStatement::SgOmpTaskStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpTaskStatement::SgOmpTaskStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_TASK_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpTaskStatement() function since it has been problematic
     assert(isSgOmpTaskStatement(this) != NULL);
   }


/* #line 4327 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpForStatement::SgOmpForStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpForStatement::SgOmpForStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_FOR_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpForStatement() function since it has been problematic
     assert(isSgOmpForStatement(this) != NULL);
   }


/* #line 4350 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpDoStatement::SgOmpDoStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpDoStatement::SgOmpDoStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_DO_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpDoStatement() function since it has been problematic
     assert(isSgOmpDoStatement(this) != NULL);
   }


/* #line 4373 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOmpSectionsStatement::SgOmpSectionsStatement ( SgStatement* body )
   : SgOmpClauseBodyStatement(body)
   {
#ifdef DEBUG
  // printf ("In SgOmpSectionsStatement::SgOmpSectionsStatement (SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OMP_SECTIONS_STMT == variant());
     post_construction_initialization();

  // Test the isSgOmpSectionsStatement() function since it has been problematic
     assert(isSgOmpSectionsStatement(this) != NULL);
   }


/* #line 4396 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSequenceStatement::SgSequenceStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgSequenceStatement::SgSequenceStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMP_Sequence_Statement == variant());
     post_construction_initialization();

  // Test the isSgSequenceStatement() function since it has been problematic
     assert(isSgSequenceStatement(this) != NULL);
   }


/* #line 4419 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWithStatement::SgWithStatement ( SgExpression* expression, SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgWithStatement::SgWithStatement (SgExpression* expression, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_body = body;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(WITH_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgWithStatement() function since it has been problematic
     assert(isSgWithStatement(this) != NULL);
   }


/* #line 4445 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPythonPrintStmt::SgPythonPrintStmt ( SgExpression* destination, SgExprListExp* values )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgPythonPrintStmt::SgPythonPrintStmt (SgExpression* destination, SgExprListExp* values) sage_class_name() = %s \n",sage_class_name());
#endif

     p_destination = destination;
     p_values = values;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(PYTHON_PRINT_STMT == variant());
     post_construction_initialization();

  // Test the isSgPythonPrintStmt() function since it has been problematic
     assert(isSgPythonPrintStmt(this) != NULL);
   }


/* #line 4471 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPassStatement::SgPassStatement (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgPassStatement::SgPassStatement () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(PASS_STATEMENT == variant());
     post_construction_initialization();

  // Test the isSgPassStatement() function since it has been problematic
     assert(isSgPassStatement(this) != NULL);
   }


/* #line 4494 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssertStmt::SgAssertStmt ( SgExpression* test )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgAssertStmt::SgAssertStmt (SgExpression* test) sage_class_name() = %s \n",sage_class_name());
#endif

     p_test = test;
     p_exception_argument = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ASSERT_STMT == variant());
     post_construction_initialization();

  // Test the isSgAssertStmt() function since it has been problematic
     assert(isSgAssertStmt(this) != NULL);
   }


/* #line 4520 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExecStatement::SgExecStatement ( SgExpression* executable, SgExpression* globals, SgExpression* locals )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgExecStatement::SgExecStatement (SgExpression* executable, SgExpression* globals, SgExpression* locals) sage_class_name() = %s \n",sage_class_name());
#endif

     p_executable = executable;
     p_globals = globals;
     p_locals = locals;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(EXEC_STMT == variant());
     post_construction_initialization();

  // Test the isSgExecStatement() function since it has been problematic
     assert(isSgExecStatement(this) != NULL);
   }


/* #line 4547 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPythonGlobalStmt::SgPythonGlobalStmt (  )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgPythonGlobalStmt::SgPythonGlobalStmt () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(PYTHON_GLOBAL_STMT == variant());
     post_construction_initialization();

  // Test the isSgPythonGlobalStmt() function since it has been problematic
     assert(isSgPythonGlobalStmt(this) != NULL);
   }


/* #line 4570 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaThrowStatement::SgJavaThrowStatement ( SgThrowOp* throwOp )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaThrowStatement::SgJavaThrowStatement (SgThrowOp* throwOp) sage_class_name() = %s \n",sage_class_name());
#endif

     p_throwOp = throwOp;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(JAVE_THROW_STMT == variant());
     post_construction_initialization();

  // Test the isSgJavaThrowStatement() function since it has been problematic
     assert(isSgJavaThrowStatement(this) != NULL);
   }


/* #line 4595 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaSynchronizedStatement::SgJavaSynchronizedStatement ( SgExpression* expression, SgStatement* body )
   : SgStatement()
   {
#ifdef DEBUG
  // printf ("In SgJavaSynchronizedStatement::SgJavaSynchronizedStatement (SgExpression* expression, SgStatement* body) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_body = body;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(JAVA_SYNC_STMT == variant());
     post_construction_initialization();

  // Test the isSgJavaSynchronizedStatement() function since it has been problematic
     assert(isSgJavaSynchronizedStatement(this) != NULL);
   }


/* #line 4621 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExpression::SgExpression (  )
   : SgLocatedNode()
   {
#ifdef DEBUG
  // printf ("In SgExpression::SgExpression () sage_class_name() = %s \n",sage_class_name());
#endif

     p_need_paren = false;
     p_lvalue = false;
     p_global_qualified_name = false;
     p_operatorPosition = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ExpressionTag == variant());
     post_construction_initialization();

  // Test the isSgExpression() function since it has been problematic
     assert(isSgExpression(this) != NULL);
   }


/* #line 4649 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnaryOp::SgUnaryOp ( SgExpression* operand_i, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUnaryOp::SgUnaryOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_i = operand_i;
     p_expression_type = expression_type;
     p_mode = prefix;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UNARY_EXPRESSION == variant());
     post_construction_initialization();

  // Test the isSgUnaryOp() function since it has been problematic
     assert(isSgUnaryOp(this) != NULL);
   }


/* #line 4676 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExpressionRoot::SgExpressionRoot ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgExpressionRoot::SgExpressionRoot (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(EXPRESSION_ROOT == variant());
     post_construction_initialization();

  // Test the isSgExpressionRoot() function since it has been problematic
     assert(isSgExpressionRoot(this) != NULL);
   }


/* #line 4699 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMinusOp::SgMinusOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMinusOp::SgMinusOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(UNARY_MINUS_OP == variant());
     post_construction_initialization();

  // Test the isSgMinusOp() function since it has been problematic
     assert(isSgMinusOp(this) != NULL);
   }


/* #line 4722 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnaryAddOp::SgUnaryAddOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgUnaryAddOp::SgUnaryAddOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(UNARY_ADD_OP == variant());
     post_construction_initialization();

  // Test the isSgUnaryAddOp() function since it has been problematic
     assert(isSgUnaryAddOp(this) != NULL);
   }


/* #line 4745 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNotOp::SgNotOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgNotOp::SgNotOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(NOT_OP == variant());
     post_construction_initialization();

  // Test the isSgNotOp() function since it has been problematic
     assert(isSgNotOp(this) != NULL);
   }


/* #line 4768 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPointerDerefExp::SgPointerDerefExp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPointerDerefExp::SgPointerDerefExp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(DEREF_OP == variant());
     post_construction_initialization();

  // Test the isSgPointerDerefExp() function since it has been problematic
     assert(isSgPointerDerefExp(this) != NULL);
   }


/* #line 4791 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAddressOfOp::SgAddressOfOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAddressOfOp::SgAddressOfOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ADDRESS_OP == variant());
     post_construction_initialization();

  // Test the isSgAddressOfOp() function since it has been problematic
     assert(isSgAddressOfOp(this) != NULL);
   }


/* #line 4814 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMinusMinusOp::SgMinusMinusOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMinusMinusOp::SgMinusMinusOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(MINUSMINUS_OP == variant());
     post_construction_initialization();

  // Test the isSgMinusMinusOp() function since it has been problematic
     assert(isSgMinusMinusOp(this) != NULL);
   }


/* #line 4837 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPlusPlusOp::SgPlusPlusOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPlusPlusOp::SgPlusPlusOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(PLUSPLUS_OP == variant());
     post_construction_initialization();

  // Test the isSgPlusPlusOp() function since it has been problematic
     assert(isSgPlusPlusOp(this) != NULL);
   }


/* #line 4860 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitComplementOp::SgBitComplementOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitComplementOp::SgBitComplementOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(BIT_COMPLEMENT_OP == variant());
     post_construction_initialization();

  // Test the isSgBitComplementOp() function since it has been problematic
     assert(isSgBitComplementOp(this) != NULL);
   }


/* #line 4883 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCastExp::SgCastExp ( SgExpression* operand_i, SgType* expression_type, SgCastExp::cast_type_enum cast_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgCastExp::SgCastExp (SgExpression* operand_i, SgType* expression_type, SgCastExp::cast_type_enum cast_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_cast_type = cast_type;
     p_originalExpressionTree = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CAST_OP == variant());
     post_construction_initialization();

  // Test the isSgCastExp() function since it has been problematic
     assert(isSgCastExp(this) != NULL);
   }


/* #line 4912 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgThrowOp::SgThrowOp ( SgExpression* operand_i, SgType* expression_type, SgThrowOp::e_throw_kind throwKind )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgThrowOp::SgThrowOp (SgExpression* operand_i, SgType* expression_type, SgThrowOp::e_throw_kind throwKind) sage_class_name() = %s \n",sage_class_name());
#endif

     p_throwKind = throwKind;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(THROW_OP == variant());
     post_construction_initialization();

  // Test the isSgThrowOp() function since it has been problematic
     assert(isSgThrowOp(this) != NULL);
   }


/* #line 4937 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRealPartOp::SgRealPartOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgRealPartOp::SgRealPartOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(REAL_PART_OP == variant());
     post_construction_initialization();

  // Test the isSgRealPartOp() function since it has been problematic
     assert(isSgRealPartOp(this) != NULL);
   }


/* #line 4960 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImagPartOp::SgImagPartOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgImagPartOp::SgImagPartOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IMAG_PART_OP == variant());
     post_construction_initialization();

  // Test the isSgImagPartOp() function since it has been problematic
     assert(isSgImagPartOp(this) != NULL);
   }


/* #line 4983 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgConjugateOp::SgConjugateOp ( SgExpression* operand_i, SgType* expression_type )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgConjugateOp::SgConjugateOp (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(CONJUGATE_OP == variant());
     post_construction_initialization();

  // Test the isSgConjugateOp() function since it has been problematic
     assert(isSgConjugateOp(this) != NULL);
   }


/* #line 5006 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUserDefinedUnaryOp::SgUserDefinedUnaryOp ( SgExpression* operand_i, SgType* expression_type, SgName operator_name, SgFunctionSymbol* symbol )
   : SgUnaryOp(operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgUserDefinedUnaryOp::SgUserDefinedUnaryOp (SgExpression* operand_i, SgType* expression_type, SgName operator_name, SgFunctionSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operator_name = operator_name;
     p_symbol = symbol;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(USER_DEFINED_UNARY_OP == variant());
     post_construction_initialization();

  // Test the isSgUserDefinedUnaryOp() function since it has been problematic
     assert(isSgUserDefinedUnaryOp(this) != NULL);
   }


/* #line 5032 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBinaryOp::SgBinaryOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgBinaryOp::SgBinaryOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lhs_operand_i = lhs_operand_i;
     p_rhs_operand_i = rhs_operand_i;
     p_expression_type = expression_type;
     p_originalExpressionTree = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(BINARY_EXPRESSION == variant());
     post_construction_initialization();

  // Test the isSgBinaryOp() function since it has been problematic
     assert(isSgBinaryOp(this) != NULL);
   }


/* #line 5060 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgArrowExp::SgArrowExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgArrowExp::SgArrowExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(POINTST_OP == variant());
     post_construction_initialization();

  // Test the isSgArrowExp() function since it has been problematic
     assert(isSgArrowExp(this) != NULL);
   }


/* #line 5083 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDotExp::SgDotExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDotExp::SgDotExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(RECORD_REF == variant());
     post_construction_initialization();

  // Test the isSgDotExp() function since it has been problematic
     assert(isSgDotExp(this) != NULL);
   }


/* #line 5106 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDotStarOp::SgDotStarOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDotStarOp::SgDotStarOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(DOTSTAR_OP == variant());
     post_construction_initialization();

  // Test the isSgDotStarOp() function since it has been problematic
     assert(isSgDotStarOp(this) != NULL);
   }


/* #line 5129 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgArrowStarOp::SgArrowStarOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgArrowStarOp::SgArrowStarOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ARROWSTAR_OP == variant());
     post_construction_initialization();

  // Test the isSgArrowStarOp() function since it has been problematic
     assert(isSgArrowStarOp(this) != NULL);
   }


/* #line 5152 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEqualityOp::SgEqualityOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgEqualityOp::SgEqualityOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(EQ_OP == variant());
     post_construction_initialization();

  // Test the isSgEqualityOp() function since it has been problematic
     assert(isSgEqualityOp(this) != NULL);
   }


/* #line 5175 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLessThanOp::SgLessThanOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLessThanOp::SgLessThanOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(LT_OP == variant());
     post_construction_initialization();

  // Test the isSgLessThanOp() function since it has been problematic
     assert(isSgLessThanOp(this) != NULL);
   }


/* #line 5198 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgGreaterThanOp::SgGreaterThanOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgGreaterThanOp::SgGreaterThanOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(GT_OP == variant());
     post_construction_initialization();

  // Test the isSgGreaterThanOp() function since it has been problematic
     assert(isSgGreaterThanOp(this) != NULL);
   }


/* #line 5221 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNotEqualOp::SgNotEqualOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgNotEqualOp::SgNotEqualOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(NE_OP == variant());
     post_construction_initialization();

  // Test the isSgNotEqualOp() function since it has been problematic
     assert(isSgNotEqualOp(this) != NULL);
   }


/* #line 5244 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLessOrEqualOp::SgLessOrEqualOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLessOrEqualOp::SgLessOrEqualOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(LE_OP == variant());
     post_construction_initialization();

  // Test the isSgLessOrEqualOp() function since it has been problematic
     assert(isSgLessOrEqualOp(this) != NULL);
   }


/* #line 5267 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgGreaterOrEqualOp::SgGreaterOrEqualOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgGreaterOrEqualOp::SgGreaterOrEqualOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(GE_OP == variant());
     post_construction_initialization();

  // Test the isSgGreaterOrEqualOp() function since it has been problematic
     assert(isSgGreaterOrEqualOp(this) != NULL);
   }


/* #line 5290 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAddOp::SgAddOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAddOp::SgAddOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ADD_OP == variant());
     post_construction_initialization();

  // Test the isSgAddOp() function since it has been problematic
     assert(isSgAddOp(this) != NULL);
   }


/* #line 5313 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSubtractOp::SgSubtractOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgSubtractOp::SgSubtractOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(SUBT_OP == variant());
     post_construction_initialization();

  // Test the isSgSubtractOp() function since it has been problematic
     assert(isSgSubtractOp(this) != NULL);
   }


/* #line 5336 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMultiplyOp::SgMultiplyOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMultiplyOp::SgMultiplyOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(MULT_OP == variant());
     post_construction_initialization();

  // Test the isSgMultiplyOp() function since it has been problematic
     assert(isSgMultiplyOp(this) != NULL);
   }


/* #line 5359 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDivideOp::SgDivideOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDivideOp::SgDivideOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(DIV_OP == variant());
     post_construction_initialization();

  // Test the isSgDivideOp() function since it has been problematic
     assert(isSgDivideOp(this) != NULL);
   }


/* #line 5382 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIntegerDivideOp::SgIntegerDivideOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIntegerDivideOp::SgIntegerDivideOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(INTEGER_DIV_OP == variant());
     post_construction_initialization();

  // Test the isSgIntegerDivideOp() function since it has been problematic
     assert(isSgIntegerDivideOp(this) != NULL);
   }


/* #line 5405 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgModOp::SgModOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgModOp::SgModOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(MOD_OP == variant());
     post_construction_initialization();

  // Test the isSgModOp() function since it has been problematic
     assert(isSgModOp(this) != NULL);
   }


/* #line 5428 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAndOp::SgAndOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAndOp::SgAndOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(AND_OP == variant());
     post_construction_initialization();

  // Test the isSgAndOp() function since it has been problematic
     assert(isSgAndOp(this) != NULL);
   }


/* #line 5451 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgOrOp::SgOrOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgOrOp::SgOrOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(OR_OP == variant());
     post_construction_initialization();

  // Test the isSgOrOp() function since it has been problematic
     assert(isSgOrOp(this) != NULL);
   }


/* #line 5474 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitXorOp::SgBitXorOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitXorOp::SgBitXorOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(BITXOR_OP == variant());
     post_construction_initialization();

  // Test the isSgBitXorOp() function since it has been problematic
     assert(isSgBitXorOp(this) != NULL);
   }


/* #line 5497 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitAndOp::SgBitAndOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitAndOp::SgBitAndOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(BITAND_OP == variant());
     post_construction_initialization();

  // Test the isSgBitAndOp() function since it has been problematic
     assert(isSgBitAndOp(this) != NULL);
   }


/* #line 5520 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBitOrOp::SgBitOrOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgBitOrOp::SgBitOrOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(BITOR_OP == variant());
     post_construction_initialization();

  // Test the isSgBitOrOp() function since it has been problematic
     assert(isSgBitOrOp(this) != NULL);
   }


/* #line 5543 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCommaOpExp::SgCommaOpExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgCommaOpExp::SgCommaOpExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(COMMA_OP == variant());
     post_construction_initialization();

  // Test the isSgCommaOpExp() function since it has been problematic
     assert(isSgCommaOpExp(this) != NULL);
   }


/* #line 5566 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLshiftOp::SgLshiftOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLshiftOp::SgLshiftOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(LSHIFT_OP == variant());
     post_construction_initialization();

  // Test the isSgLshiftOp() function since it has been problematic
     assert(isSgLshiftOp(this) != NULL);
   }


/* #line 5589 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRshiftOp::SgRshiftOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgRshiftOp::SgRshiftOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(RSHIFT_OP == variant());
     post_construction_initialization();

  // Test the isSgRshiftOp() function since it has been problematic
     assert(isSgRshiftOp(this) != NULL);
   }


/* #line 5612 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPntrArrRefExp::SgPntrArrRefExp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPntrArrRefExp::SgPntrArrRefExp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ARRAY_OP == variant());
     post_construction_initialization();

  // Test the isSgPntrArrRefExp() function since it has been problematic
     assert(isSgPntrArrRefExp(this) != NULL);
   }


/* #line 5635 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgScopeOp::SgScopeOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgScopeOp::SgScopeOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(SCOPE_OP == variant());
     post_construction_initialization();

  // Test the isSgScopeOp() function since it has been problematic
     assert(isSgScopeOp(this) != NULL);
   }


/* #line 5658 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssignOp::SgAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAssignOp::SgAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgAssignOp() function since it has been problematic
     assert(isSgAssignOp(this) != NULL);
   }


/* #line 5681 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExponentiationOp::SgExponentiationOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgExponentiationOp::SgExponentiationOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(EXPONENTIATION_OP == variant());
     post_construction_initialization();

  // Test the isSgExponentiationOp() function since it has been problematic
     assert(isSgExponentiationOp(this) != NULL);
   }


/* #line 5704 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaUnsignedRshiftOp::SgJavaUnsignedRshiftOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgJavaUnsignedRshiftOp::SgJavaUnsignedRshiftOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(JAVA_UNSIGNED_RSHIFT_OP == variant());
     post_construction_initialization();

  // Test the isSgJavaUnsignedRshiftOp() function since it has been problematic
     assert(isSgJavaUnsignedRshiftOp(this) != NULL);
   }


/* #line 5727 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgConcatenationOp::SgConcatenationOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgConcatenationOp::SgConcatenationOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(CONCATENATION_OP == variant());
     post_construction_initialization();

  // Test the isSgConcatenationOp() function since it has been problematic
     assert(isSgConcatenationOp(this) != NULL);
   }


/* #line 5750 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPointerAssignOp::SgPointerAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPointerAssignOp::SgPointerAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(POINTER_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgPointerAssignOp() function since it has been problematic
     assert(isSgPointerAssignOp(this) != NULL);
   }


/* #line 5773 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUserDefinedBinaryOp::SgUserDefinedBinaryOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type, SgName operator_name, SgFunctionSymbol* symbol )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgUserDefinedBinaryOp::SgUserDefinedBinaryOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type, SgName operator_name, SgFunctionSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operator_name = operator_name;
     p_symbol = symbol;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(USER_DEFINED_BINARY_OP == variant());
     post_construction_initialization();

  // Test the isSgUserDefinedBinaryOp() function since it has been problematic
     assert(isSgUserDefinedBinaryOp(this) != NULL);
   }


/* #line 5799 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCompoundAssignOp::SgCompoundAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgCompoundAssignOp::SgCompoundAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(COMPOUND_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgCompoundAssignOp() function since it has been problematic
     assert(isSgCompoundAssignOp(this) != NULL);
   }


/* #line 5822 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPlusAssignOp::SgPlusAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgPlusAssignOp::SgPlusAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(PLUS_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgPlusAssignOp() function since it has been problematic
     assert(isSgPlusAssignOp(this) != NULL);
   }


/* #line 5845 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMinusAssignOp::SgMinusAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMinusAssignOp::SgMinusAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(MINUS_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgMinusAssignOp() function since it has been problematic
     assert(isSgMinusAssignOp(this) != NULL);
   }


/* #line 5868 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAndAssignOp::SgAndAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgAndAssignOp::SgAndAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(AND_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgAndAssignOp() function since it has been problematic
     assert(isSgAndAssignOp(this) != NULL);
   }


/* #line 5891 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIorAssignOp::SgIorAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIorAssignOp::SgIorAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IOR_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgIorAssignOp() function since it has been problematic
     assert(isSgIorAssignOp(this) != NULL);
   }


/* #line 5914 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMultAssignOp::SgMultAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMultAssignOp::SgMultAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(MULT_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgMultAssignOp() function since it has been problematic
     assert(isSgMultAssignOp(this) != NULL);
   }


/* #line 5937 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDivAssignOp::SgDivAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgDivAssignOp::SgDivAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(DIV_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgDivAssignOp() function since it has been problematic
     assert(isSgDivAssignOp(this) != NULL);
   }


/* #line 5960 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgModAssignOp::SgModAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgModAssignOp::SgModAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(MOD_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgModAssignOp() function since it has been problematic
     assert(isSgModAssignOp(this) != NULL);
   }


/* #line 5983 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgXorAssignOp::SgXorAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgXorAssignOp::SgXorAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(XOR_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgXorAssignOp() function since it has been problematic
     assert(isSgXorAssignOp(this) != NULL);
   }


/* #line 6006 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLshiftAssignOp::SgLshiftAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgLshiftAssignOp::SgLshiftAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(LSHIFT_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgLshiftAssignOp() function since it has been problematic
     assert(isSgLshiftAssignOp(this) != NULL);
   }


/* #line 6029 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRshiftAssignOp::SgRshiftAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgRshiftAssignOp::SgRshiftAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(RSHIFT_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgRshiftAssignOp() function since it has been problematic
     assert(isSgRshiftAssignOp(this) != NULL);
   }


/* #line 6052 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaUnsignedRshiftAssignOp::SgJavaUnsignedRshiftAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgJavaUnsignedRshiftAssignOp::SgJavaUnsignedRshiftAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(JAVA_UNSIGNED_RSHIFT_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgJavaUnsignedRshiftAssignOp() function since it has been problematic
     assert(isSgJavaUnsignedRshiftAssignOp(this) != NULL);
   }


/* #line 6075 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIntegerDivideAssignOp::SgIntegerDivideAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIntegerDivideAssignOp::SgIntegerDivideAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IDIV_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgIntegerDivideAssignOp() function since it has been problematic
     assert(isSgIntegerDivideAssignOp(this) != NULL);
   }


/* #line 6098 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExponentiationAssignOp::SgExponentiationAssignOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgCompoundAssignOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgExponentiationAssignOp::SgExponentiationAssignOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(EXP_ASSIGN_OP == variant());
     post_construction_initialization();

  // Test the isSgExponentiationAssignOp() function since it has been problematic
     assert(isSgExponentiationAssignOp(this) != NULL);
   }


/* #line 6121 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMembershipOp::SgMembershipOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgMembershipOp::SgMembershipOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(MEMBERSHIP_OP == variant());
     post_construction_initialization();

  // Test the isSgMembershipOp() function since it has been problematic
     assert(isSgMembershipOp(this) != NULL);
   }


/* #line 6144 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNonMembershipOp::SgNonMembershipOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgNonMembershipOp::SgNonMembershipOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(NON_MEMBERSHIP_OP == variant());
     post_construction_initialization();

  // Test the isSgNonMembershipOp() function since it has been problematic
     assert(isSgNonMembershipOp(this) != NULL);
   }


/* #line 6167 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIsOp::SgIsOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIsOp::SgIsOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IS_OP == variant());
     post_construction_initialization();

  // Test the isSgIsOp() function since it has been problematic
     assert(isSgIsOp(this) != NULL);
   }


/* #line 6190 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIsNotOp::SgIsNotOp ( SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type )
   : SgBinaryOp(lhs_operand_i, rhs_operand_i, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgIsNotOp::SgIsNotOp (SgExpression* lhs_operand_i, SgExpression* rhs_operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(IS_NOT_OP == variant());
     post_construction_initialization();

  // Test the isSgIsNotOp() function since it has been problematic
     assert(isSgIsNotOp(this) != NULL);
   }


/* #line 6213 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgExprListExp::SgExprListExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgExprListExp::SgExprListExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(EXPR_LIST == variant());
     post_construction_initialization();

  // Test the isSgExprListExp() function since it has been problematic
     assert(isSgExprListExp(this) != NULL);
   }


/* #line 6236 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgListExp::SgListExp (  )
   : SgExprListExp()
   {
#ifdef DEBUG
  // printf ("In SgListExp::SgListExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(LIST_EXP == variant());
     post_construction_initialization();

  // Test the isSgListExp() function since it has been problematic
     assert(isSgListExp(this) != NULL);
   }


/* #line 6259 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTupleExp::SgTupleExp (  )
   : SgExprListExp()
   {
#ifdef DEBUG
  // printf ("In SgTupleExp::SgTupleExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TUPLE_EXP == variant());
     post_construction_initialization();

  // Test the isSgTupleExp() function since it has been problematic
     assert(isSgTupleExp(this) != NULL);
   }


/* #line 6282 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarRefExp::SgVarRefExp ( SgVariableSymbol* symbol )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarRefExp::SgVarRefExp (SgVariableSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;
     p_originalExpressionTree = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(VAR_REF == variant());
     post_construction_initialization();

  // Test the isSgVarRefExp() function since it has been problematic
     assert(isSgVarRefExp(this) != NULL);
   }


/* #line 6311 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgClassNameRefExp::SgClassNameRefExp ( SgClassSymbol* symbol )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgClassNameRefExp::SgClassNameRefExp (SgClassSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CLASSNAME_REF == variant());
     post_construction_initialization();

  // Test the isSgClassNameRefExp() function since it has been problematic
     assert(isSgClassNameRefExp(this) != NULL);
   }


/* #line 6336 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionRefExp::SgFunctionRefExp ( SgFunctionSymbol* symbol_i, SgFunctionType* function_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgFunctionRefExp::SgFunctionRefExp (SgFunctionSymbol* symbol_i, SgFunctionType* function_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol_i = symbol_i;
     p_function_type = function_type;
     p_originalExpressionTree = NULL;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FUNCTION_REF == variant());
     post_construction_initialization();

  // Test the isSgFunctionRefExp() function since it has been problematic
     assert(isSgFunctionRefExp(this) != NULL);
   }


/* #line 6366 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgMemberFunctionRefExp::SgMemberFunctionRefExp ( SgMemberFunctionSymbol* symbol_i, int virtual_call, SgFunctionType* function_type, int need_qualifier )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgMemberFunctionRefExp::SgMemberFunctionRefExp (SgMemberFunctionSymbol* symbol_i, int virtual_call, SgFunctionType* function_type, int need_qualifier) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol_i = symbol_i;
     p_virtual_call = virtual_call;
     p_function_type = function_type;
     p_need_qualifier = need_qualifier;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(MEMBER_FUNCTION_REF == variant());
     post_construction_initialization();

  // Test the isSgMemberFunctionRefExp() function since it has been problematic
     assert(isSgMemberFunctionRefExp(this) != NULL);
   }


/* #line 6397 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgValueExp::SgValueExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgValueExp::SgValueExp () sage_class_name() = %s \n",sage_class_name());
#endif

     p_originalExpressionTree = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ValueExpTag == variant());
     post_construction_initialization();

  // Test the isSgValueExp() function since it has been problematic
     assert(isSgValueExp(this) != NULL);
   }


/* #line 6422 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgBoolValExp::SgBoolValExp ( int value )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgBoolValExp::SgBoolValExp (int value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(BOOL_VAL == variant());
     post_construction_initialization();

  // Test the isSgBoolValExp() function since it has been problematic
     assert(isSgBoolValExp(this) != NULL);
   }


/* #line 6447 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStringVal::SgStringVal ( std::string value )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgStringVal::SgStringVal (std::string value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_wcharString = false;
     p_usesSingleQuotes = false;
     p_usesDoubleQuotes = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(STRING_VAL == variant());
     post_construction_initialization();

  // Test the isSgStringVal() function since it has been problematic
     assert(isSgStringVal(this) != NULL);
   }


/* #line 6475 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgShortVal::SgShortVal ( short value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgShortVal::SgShortVal (short value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(SHORT_VAL == variant());
     post_construction_initialization();

  // Test the isSgShortVal() function since it has been problematic
     assert(isSgShortVal(this) != NULL);
   }


/* #line 6501 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCharVal::SgCharVal ( char value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgCharVal::SgCharVal (char value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CHAR_VAL == variant());
     post_construction_initialization();

  // Test the isSgCharVal() function since it has been problematic
     assert(isSgCharVal(this) != NULL);
   }


/* #line 6527 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedCharVal::SgUnsignedCharVal ( unsigned char value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedCharVal::SgUnsignedCharVal (unsigned char value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UNSIGNED_CHAR_VAL == variant());
     post_construction_initialization();

  // Test the isSgUnsignedCharVal() function since it has been problematic
     assert(isSgUnsignedCharVal(this) != NULL);
   }


/* #line 6553 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgWcharVal::SgWcharVal ( unsigned long valueUL, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgWcharVal::SgWcharVal (unsigned long valueUL, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_valueUL = valueUL;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(WCHAR_VAL == variant());
     post_construction_initialization();

  // Test the isSgWcharVal() function since it has been problematic
     assert(isSgWcharVal(this) != NULL);
   }


/* #line 6579 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedShortVal::SgUnsignedShortVal ( unsigned short value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedShortVal::SgUnsignedShortVal (unsigned short value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UNSIGNED_SHORT_VAL == variant());
     post_construction_initialization();

  // Test the isSgUnsignedShortVal() function since it has been problematic
     assert(isSgUnsignedShortVal(this) != NULL);
   }


/* #line 6605 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIntVal::SgIntVal ( int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgIntVal::SgIntVal (int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(INT_VAL == variant());
     post_construction_initialization();

  // Test the isSgIntVal() function since it has been problematic
     assert(isSgIntVal(this) != NULL);
   }


/* #line 6631 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgEnumVal::SgEnumVal ( int value, SgEnumDeclaration* declaration, SgName name )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgEnumVal::SgEnumVal (int value, SgEnumDeclaration* declaration, SgName name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_declaration = declaration;
     p_name = name;
     p_requiresNameQualification = false;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ENUM_VAL == variant());
     post_construction_initialization();

  // Test the isSgEnumVal() function since it has been problematic
     assert(isSgEnumVal(this) != NULL);
   }


/* #line 6662 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedIntVal::SgUnsignedIntVal ( unsigned int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedIntVal::SgUnsignedIntVal (unsigned int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UNSIGNED_INT_VAL == variant());
     post_construction_initialization();

  // Test the isSgUnsignedIntVal() function since it has been problematic
     assert(isSgUnsignedIntVal(this) != NULL);
   }


/* #line 6688 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLongIntVal::SgLongIntVal ( long int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgLongIntVal::SgLongIntVal (long int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(LONG_INT_VAL == variant());
     post_construction_initialization();

  // Test the isSgLongIntVal() function since it has been problematic
     assert(isSgLongIntVal(this) != NULL);
   }


/* #line 6714 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLongLongIntVal::SgLongLongIntVal ( long long int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgLongLongIntVal::SgLongLongIntVal (long long int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(LONG_LONG_INT_VAL == variant());
     post_construction_initialization();

  // Test the isSgLongLongIntVal() function since it has been problematic
     assert(isSgLongLongIntVal(this) != NULL);
   }


/* #line 6740 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedLongLongIntVal::SgUnsignedLongLongIntVal ( unsigned long long int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedLongLongIntVal::SgUnsignedLongLongIntVal (unsigned long long int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UNSIGNED_LONG_LONG_INT_VAL == variant());
     post_construction_initialization();

  // Test the isSgUnsignedLongLongIntVal() function since it has been problematic
     assert(isSgUnsignedLongLongIntVal(this) != NULL);
   }


/* #line 6766 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnsignedLongVal::SgUnsignedLongVal ( unsigned long value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUnsignedLongVal::SgUnsignedLongVal (unsigned long value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UNSIGNED_LONG_INT_VAL == variant());
     post_construction_initialization();

  // Test the isSgUnsignedLongVal() function since it has been problematic
     assert(isSgUnsignedLongVal(this) != NULL);
   }


/* #line 6792 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFloatVal::SgFloatVal ( float value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgFloatVal::SgFloatVal (float value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(FLOAT_VAL == variant());
     post_construction_initialization();

  // Test the isSgFloatVal() function since it has been problematic
     assert(isSgFloatVal(this) != NULL);
   }


/* #line 6818 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDoubleVal::SgDoubleVal ( double value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgDoubleVal::SgDoubleVal (double value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(DOUBLE_VAL == variant());
     post_construction_initialization();

  // Test the isSgDoubleVal() function since it has been problematic
     assert(isSgDoubleVal(this) != NULL);
   }


/* #line 6844 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLongDoubleVal::SgLongDoubleVal ( long double value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgLongDoubleVal::SgLongDoubleVal (long double value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(LONG_DOUBLE_VAL == variant());
     post_construction_initialization();

  // Test the isSgLongDoubleVal() function since it has been problematic
     assert(isSgLongDoubleVal(this) != NULL);
   }


/* #line 6870 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgComplexVal::SgComplexVal ( SgValueExp* real_value, SgValueExp* imaginary_value, SgType* precisionType, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgComplexVal::SgComplexVal (SgValueExp* real_value, SgValueExp* imaginary_value, SgType* precisionType, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_real_value = real_value;
     p_imaginary_value = imaginary_value;
     p_precisionType = precisionType;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(COMPLEX_VAL == variant());
     post_construction_initialization();

  // Test the isSgComplexVal() function since it has been problematic
     assert(isSgComplexVal(this) != NULL);
   }


/* #line 6898 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcThreads::SgUpcThreads ( int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUpcThreads::SgUpcThreads (int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_THREADS == variant());
     post_construction_initialization();

  // Test the isSgUpcThreads() function since it has been problematic
     assert(isSgUpcThreads(this) != NULL);
   }


/* #line 6924 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcMythread::SgUpcMythread ( int value, std::string valueString )
   : SgValueExp()
   {
#ifdef DEBUG
  // printf ("In SgUpcMythread::SgUpcMythread (int value, std::string valueString) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;
     p_valueString = valueString;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_MYTHREAD == variant());
     post_construction_initialization();

  // Test the isSgUpcMythread() function since it has been problematic
     assert(isSgUpcMythread(this) != NULL);
   }


/* #line 6950 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCallExpression::SgCallExpression ( SgExpression* function, SgExprListExp* args, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgCallExpression::SgCallExpression (SgExpression* function, SgExprListExp* args, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_function = function;
     p_args = args;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CALL_EXPRESSION == variant());
     post_construction_initialization();

  // Test the isSgCallExpression() function since it has been problematic
     assert(isSgCallExpression(this) != NULL);
   }


/* #line 6977 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgFunctionCallExp::SgFunctionCallExp ( SgExpression* function, SgExprListExp* args, SgType* expression_type )
   : SgCallExpression(function, args, expression_type)
   {
#ifdef DEBUG
  // printf ("In SgFunctionCallExp::SgFunctionCallExp (SgExpression* function, SgExprListExp* args, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(FUNC_CALL == variant());
     post_construction_initialization();

  // Test the isSgFunctionCallExp() function since it has been problematic
     assert(isSgFunctionCallExp(this) != NULL);
   }


/* #line 7000 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSizeOfOp::SgSizeOfOp ( SgExpression* operand_expr, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgSizeOfOp::SgSizeOfOp (SgExpression* operand_expr, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_operand_type = operand_type;
     p_expression_type = expression_type;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(SIZEOF_OP == variant());
     post_construction_initialization();

  // Test the isSgSizeOfOp() function since it has been problematic
     assert(isSgSizeOfOp(this) != NULL);
   }


/* #line 7030 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcLocalsizeofExpression::SgUpcLocalsizeofExpression ( SgExpression* expression, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUpcLocalsizeofExpression::SgUpcLocalsizeofExpression (SgExpression* expression, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_operand_type = operand_type;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_LOCAL_SIZEOF_EXPR == variant());
     post_construction_initialization();

  // Test the isSgUpcLocalsizeofExpression() function since it has been problematic
     assert(isSgUpcLocalsizeofExpression(this) != NULL);
   }


/* #line 7057 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcBlocksizeofExpression::SgUpcBlocksizeofExpression ( SgExpression* expression, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUpcBlocksizeofExpression::SgUpcBlocksizeofExpression (SgExpression* expression, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_operand_type = operand_type;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_BLOCK_SIZEOF_EXPR == variant());
     post_construction_initialization();

  // Test the isSgUpcBlocksizeofExpression() function since it has been problematic
     assert(isSgUpcBlocksizeofExpression(this) != NULL);
   }


/* #line 7084 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUpcElemsizeofExpression::SgUpcElemsizeofExpression ( SgExpression* expression, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUpcElemsizeofExpression::SgUpcElemsizeofExpression (SgExpression* expression, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;
     p_operand_type = operand_type;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(UPC_ELEM_SIZEOF_EXPR == variant());
     post_construction_initialization();

  // Test the isSgUpcElemsizeofExpression() function since it has been problematic
     assert(isSgUpcElemsizeofExpression(this) != NULL);
   }


/* #line 7111 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgJavaInstanceOfOp::SgJavaInstanceOfOp ( SgExpression* operand_expr, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgJavaInstanceOfOp::SgJavaInstanceOfOp (SgExpression* operand_expr, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_operand_type = operand_type;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(JAVA_INSTANCEOF_OP == variant());
     post_construction_initialization();

  // Test the isSgJavaInstanceOfOp() function since it has been problematic
     assert(isSgJavaInstanceOfOp(this) != NULL);
   }


/* #line 7138 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSuperExp::SgSuperExp ( SgClassSymbol* class_symbol, int pobj_super )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgSuperExp::SgSuperExp (SgClassSymbol* class_symbol, int pobj_super) sage_class_name() = %s \n",sage_class_name());
#endif

     p_class_symbol = class_symbol;
     p_pobj_super = pobj_super;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(SUPER_NODE == variant());
     post_construction_initialization();

  // Test the isSgSuperExp() function since it has been problematic
     assert(isSgSuperExp(this) != NULL);
   }


/* #line 7164 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgTypeIdOp::SgTypeIdOp ( SgExpression* operand_expr, SgType* operand_type, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgTypeIdOp::SgTypeIdOp (SgExpression* operand_expr, SgType* operand_type, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_operand_type = operand_type;
     p_expression_type = expression_type;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TYPEID_OP == variant());
     post_construction_initialization();

  // Test the isSgTypeIdOp() function since it has been problematic
     assert(isSgTypeIdOp(this) != NULL);
   }


/* #line 7194 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgConditionalExp::SgConditionalExp ( SgExpression* conditional_exp, SgExpression* true_exp, SgExpression* false_exp, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgConditionalExp::SgConditionalExp (SgExpression* conditional_exp, SgExpression* true_exp, SgExpression* false_exp, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_conditional_exp = conditional_exp;
     p_true_exp = true_exp;
     p_false_exp = false_exp;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(EXPR_CONDITIONAL == variant());
     post_construction_initialization();

  // Test the isSgConditionalExp() function since it has been problematic
     assert(isSgConditionalExp(this) != NULL);
   }


/* #line 7222 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNewExp::SgNewExp ( SgType* specified_type, SgExprListExp* placement_args, SgConstructorInitializer* constructor_args, SgExpression* builtin_args, short need_global_specifier, SgFunctionDeclaration* newOperatorDeclaration )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgNewExp::SgNewExp (SgType* specified_type, SgExprListExp* placement_args, SgConstructorInitializer* constructor_args, SgExpression* builtin_args, short need_global_specifier, SgFunctionDeclaration* newOperatorDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_specified_type = specified_type;
     p_placement_args = placement_args;
     p_constructor_args = constructor_args;
     p_builtin_args = builtin_args;
     p_need_global_specifier = need_global_specifier;
     p_newOperatorDeclaration = newOperatorDeclaration;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(NEW_OP == variant());
     post_construction_initialization();

  // Test the isSgNewExp() function since it has been problematic
     assert(isSgNewExp(this) != NULL);
   }


/* #line 7255 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDeleteExp::SgDeleteExp ( SgExpression* variable, short is_array, short need_global_specifier, SgFunctionDeclaration* deleteOperatorDeclaration )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgDeleteExp::SgDeleteExp (SgExpression* variable, short is_array, short need_global_specifier, SgFunctionDeclaration* deleteOperatorDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_variable = variable;
     p_is_array = is_array;
     p_need_global_specifier = need_global_specifier;
     p_deleteOperatorDeclaration = deleteOperatorDeclaration;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(DELETE_OP == variant());
     post_construction_initialization();

  // Test the isSgDeleteExp() function since it has been problematic
     assert(isSgDeleteExp(this) != NULL);
   }


/* #line 7283 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgThisExp::SgThisExp ( SgClassSymbol* class_symbol, int pobj_this )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgThisExp::SgThisExp (SgClassSymbol* class_symbol, int pobj_this) sage_class_name() = %s \n",sage_class_name());
#endif

     p_class_symbol = class_symbol;
     p_pobj_this = pobj_this;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(THIS_NODE == variant());
     post_construction_initialization();

  // Test the isSgThisExp() function since it has been problematic
     assert(isSgThisExp(this) != NULL);
   }


/* #line 7309 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgRefExp::SgRefExp ( SgType* type_name )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgRefExp::SgRefExp (SgType* type_name) sage_class_name() = %s \n",sage_class_name());
#endif

     p_type_name = type_name;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TYPE_REF == variant());
     post_construction_initialization();

  // Test the isSgRefExp() function since it has been problematic
     assert(isSgRefExp(this) != NULL);
   }


/* #line 7334 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgInitializer::SgInitializer (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgInitializer::SgInitializer () sage_class_name() = %s \n",sage_class_name());
#endif

     p_is_explicit_cast = true;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(EXPR_INIT == variant());
     post_construction_initialization();

  // Test the isSgInitializer() function since it has been problematic
     assert(isSgInitializer(this) != NULL);
   }


/* #line 7359 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAggregateInitializer::SgAggregateInitializer ( SgExprListExp* initializers, SgType* expression_type )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgAggregateInitializer::SgAggregateInitializer (SgExprListExp* initializers, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_initializers = initializers;
     p_expression_type = expression_type;
     p_need_explicit_braces = true;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(AGGREGATE_INIT == variant());
     post_construction_initialization();

  // Test the isSgAggregateInitializer() function since it has been problematic
     assert(isSgAggregateInitializer(this) != NULL);
   }


/* #line 7386 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCompoundInitializer::SgCompoundInitializer ( SgExprListExp* initializers, SgType* expression_type )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgCompoundInitializer::SgCompoundInitializer (SgExprListExp* initializers, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_initializers = initializers;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(COMPOUND_INIT == variant());
     post_construction_initialization();

  // Test the isSgCompoundInitializer() function since it has been problematic
     assert(isSgCompoundInitializer(this) != NULL);
   }


/* #line 7412 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgConstructorInitializer::SgConstructorInitializer ( SgMemberFunctionDeclaration* declaration, SgExprListExp* args, SgType* expression_type, bool need_name, bool need_qualifier, bool need_parenthesis_after_name, bool associated_class_unknown )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgConstructorInitializer::SgConstructorInitializer (SgMemberFunctionDeclaration* declaration, SgExprListExp* args, SgType* expression_type, bool need_name, bool need_qualifier, bool need_parenthesis_after_name, bool associated_class_unknown) sage_class_name() = %s \n",sage_class_name());
#endif

     p_declaration = declaration;
     p_args = args;
     p_expression_type = expression_type;
     p_need_name = need_name;
     p_need_qualifier = need_qualifier;
     p_need_parenthesis_after_name = need_parenthesis_after_name;
     p_associated_class_unknown = associated_class_unknown;
     p_name_qualification_length = 0;
     p_type_elaboration_required = false;
     p_global_qualification_required = false;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(CONSTRUCTOR_INIT == variant());
     post_construction_initialization();

  // Test the isSgConstructorInitializer() function since it has been problematic
     assert(isSgConstructorInitializer(this) != NULL);
   }


/* #line 7446 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAssignInitializer::SgAssignInitializer ( SgExpression* operand_i, SgType* expression_type )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgAssignInitializer::SgAssignInitializer (SgExpression* operand_i, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_i = operand_i;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ASSIGN_INIT == variant());
     post_construction_initialization();

  // Test the isSgAssignInitializer() function since it has been problematic
     assert(isSgAssignInitializer(this) != NULL);
   }


/* #line 7472 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDesignatedInitializer::SgDesignatedInitializer ( SgExprListExp* designatorList, SgInitializer* memberInit )
   : SgInitializer()
   {
#ifdef DEBUG
  // printf ("In SgDesignatedInitializer::SgDesignatedInitializer (SgExprListExp* designatorList, SgInitializer* memberInit) sage_class_name() = %s \n",sage_class_name());
#endif

     p_designatorList = designatorList;
     p_memberInit = memberInit;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(DESIGNATED_INITIALIZER == variant());
     post_construction_initialization();

  // Test the isSgDesignatedInitializer() function since it has been problematic
     assert(isSgDesignatedInitializer(this) != NULL);
   }


/* #line 7498 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgStartOp::SgVarArgStartOp ( SgExpression* lhs_operand, SgExpression* rhs_operand, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgStartOp::SgVarArgStartOp (SgExpression* lhs_operand, SgExpression* rhs_operand, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lhs_operand = lhs_operand;
     p_rhs_operand = rhs_operand;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(VA_START_OP == variant());
     post_construction_initialization();

  // Test the isSgVarArgStartOp() function since it has been problematic
     assert(isSgVarArgStartOp(this) != NULL);
   }


/* #line 7525 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgOp::SgVarArgOp ( SgExpression* operand_expr, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgOp::SgVarArgOp (SgExpression* operand_expr, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(VA_OP == variant());
     post_construction_initialization();

  // Test the isSgVarArgOp() function since it has been problematic
     assert(isSgVarArgOp(this) != NULL);
   }


/* #line 7551 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgEndOp::SgVarArgEndOp ( SgExpression* operand_expr, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgEndOp::SgVarArgEndOp (SgExpression* operand_expr, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(VA_END_OP == variant());
     post_construction_initialization();

  // Test the isSgVarArgEndOp() function since it has been problematic
     assert(isSgVarArgEndOp(this) != NULL);
   }


/* #line 7577 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgCopyOp::SgVarArgCopyOp ( SgExpression* lhs_operand, SgExpression* rhs_operand, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgCopyOp::SgVarArgCopyOp (SgExpression* lhs_operand, SgExpression* rhs_operand, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lhs_operand = lhs_operand;
     p_rhs_operand = rhs_operand;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(VA_COPY_OP == variant());
     post_construction_initialization();

  // Test the isSgVarArgCopyOp() function since it has been problematic
     assert(isSgVarArgCopyOp(this) != NULL);
   }


/* #line 7604 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVarArgStartOneOperandOp::SgVarArgStartOneOperandOp ( SgExpression* operand_expr, SgType* expression_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVarArgStartOneOperandOp::SgVarArgStartOneOperandOp (SgExpression* operand_expr, SgType* expression_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_operand_expr = operand_expr;
     p_expression_type = expression_type;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(VA_START_ONE_OPERAND_OP == variant());
     post_construction_initialization();

  // Test the isSgVarArgStartOneOperandOp() function since it has been problematic
     assert(isSgVarArgStartOneOperandOp(this) != NULL);
   }


/* #line 7630 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNullExpression::SgNullExpression (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgNullExpression::SgNullExpression () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(NULL_EXPR == variant());
     post_construction_initialization();

  // Test the isSgNullExpression() function since it has been problematic
     assert(isSgNullExpression(this) != NULL);
   }


/* #line 7653 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgVariantExpression::SgVariantExpression (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgVariantExpression::SgVariantExpression () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(VARIANT_EXPR == variant());
     post_construction_initialization();

  // Test the isSgVariantExpression() function since it has been problematic
     assert(isSgVariantExpression(this) != NULL);
   }


/* #line 7676 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSubscriptExpression::SgSubscriptExpression ( SgExpression* lowerBound, SgExpression* upperBound, SgExpression* stride )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgSubscriptExpression::SgSubscriptExpression (SgExpression* lowerBound, SgExpression* upperBound, SgExpression* stride) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lowerBound = lowerBound;
     p_upperBound = upperBound;
     p_stride = stride;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(SUBSCRIPT_EXPR == variant());
     post_construction_initialization();

  // Test the isSgSubscriptExpression() function since it has been problematic
     assert(isSgSubscriptExpression(this) != NULL);
   }


/* #line 7703 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgColonShapeExp::SgColonShapeExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgColonShapeExp::SgColonShapeExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMP_ColonShapeExp == variant());
     post_construction_initialization();

  // Test the isSgColonShapeExp() function since it has been problematic
     assert(isSgColonShapeExp(this) != NULL);
   }


/* #line 7726 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAsteriskShapeExp::SgAsteriskShapeExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAsteriskShapeExp::SgAsteriskShapeExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(TEMP_AsteriskShapeExp == variant());
     post_construction_initialization();

  // Test the isSgAsteriskShapeExp() function since it has been problematic
     assert(isSgAsteriskShapeExp(this) != NULL);
   }


/* #line 7749 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgImpliedDo::SgImpliedDo ( SgExpression* do_var_initialization, SgExpression* last_val, SgExpression* increment, SgExprListExp* object_list, SgScopeStatement* implied_do_scope )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgImpliedDo::SgImpliedDo (SgExpression* do_var_initialization, SgExpression* last_val, SgExpression* increment, SgExprListExp* object_list, SgScopeStatement* implied_do_scope) sage_class_name() = %s \n",sage_class_name());
#endif

     p_do_var_initialization = do_var_initialization;
     p_last_val = last_val;
     p_increment = increment;
     p_object_list = object_list;
     p_implied_do_scope = implied_do_scope;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(IMPLIED_DO == variant());
     post_construction_initialization();

  // Test the isSgImpliedDo() function since it has been problematic
     assert(isSgImpliedDo(this) != NULL);
   }


/* #line 7778 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgIOItemExpression::SgIOItemExpression ( SgName name, SgExpression* io_item )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgIOItemExpression::SgIOItemExpression (SgName name, SgExpression* io_item) sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = name;
     p_io_item = io_item;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(IO_ITEM_EXPR == variant());
     post_construction_initialization();

  // Test the isSgIOItemExpression() function since it has been problematic
     assert(isSgIOItemExpression(this) != NULL);
   }


/* #line 7804 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStatementExpression::SgStatementExpression ( SgStatement* statement )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgStatementExpression::SgStatementExpression (SgStatement* statement) sage_class_name() = %s \n",sage_class_name());
#endif

     p_statement = statement;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(STMT_EXPR == variant());
     post_construction_initialization();

  // Test the isSgStatementExpression() function since it has been problematic
     assert(isSgStatementExpression(this) != NULL);
   }


/* #line 7829 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgAsmOp::SgAsmOp ( SgAsmOp::asm_operand_constraint_enum constraint, SgAsmOp::asm_operand_modifier_enum modifiers, SgExpression* expression )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgAsmOp::SgAsmOp (SgAsmOp::asm_operand_constraint_enum constraint, SgAsmOp::asm_operand_modifier_enum modifiers, SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_constraint = constraint;
     p_modifiers = modifiers;
     p_expression = expression;
     p_recordRawAsmOperandDescriptions = false;
     p_isOutputOperand = false;
     p_constraintString = "";
     p_name = "";

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ASM_OP == variant());
     post_construction_initialization();

  // Test the isSgAsmOp() function since it has been problematic
     assert(isSgAsmOp(this) != NULL);
   }


/* #line 7860 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLabelRefExp::SgLabelRefExp ( SgLabelSymbol* symbol )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgLabelRefExp::SgLabelRefExp (SgLabelSymbol* symbol) sage_class_name() = %s \n",sage_class_name());
#endif

     p_symbol = symbol;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(LABEL_REF == variant());
     post_construction_initialization();

  // Test the isSgLabelRefExp() function since it has been problematic
     assert(isSgLabelRefExp(this) != NULL);
   }


/* #line 7885 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgActualArgumentExpression::SgActualArgumentExpression ( SgName argument_name, SgExpression* expression )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgActualArgumentExpression::SgActualArgumentExpression (SgName argument_name, SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_argument_name = argument_name;
     p_expression = expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(ACTUAL_ARGUMENT_EXPRESSION == variant());
     post_construction_initialization();

  // Test the isSgActualArgumentExpression() function since it has been problematic
     assert(isSgActualArgumentExpression(this) != NULL);
   }


/* #line 7911 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgUnknownArrayOrFunctionReference::SgUnknownArrayOrFunctionReference (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgUnknownArrayOrFunctionReference::SgUnknownArrayOrFunctionReference () sage_class_name() = %s \n",sage_class_name());
#endif

     p_name = "";
     p_named_reference = NULL;
     p_expression_list = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TEMP_UnknownArrayOrFunctionReference == variant());
     post_construction_initialization();

  // Test the isSgUnknownArrayOrFunctionReference() function since it has been problematic
     assert(isSgUnknownArrayOrFunctionReference(this) != NULL);
   }


/* #line 7938 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgPseudoDestructorRefExp::SgPseudoDestructorRefExp ( SgType* object_type )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgPseudoDestructorRefExp::SgPseudoDestructorRefExp (SgType* object_type) sage_class_name() = %s \n",sage_class_name());
#endif

     p_object_type = object_type;
     p_expression_type = NULL;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(PSEUDO_DESTRUCTOR_REF == variant());
     post_construction_initialization();

  // Test the isSgPseudoDestructorRefExp() function since it has been problematic
     assert(isSgPseudoDestructorRefExp(this) != NULL);
   }


/* #line 7964 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCAFCoExpression::SgCAFCoExpression ( SgVarRefExp* teamId, SgExpression* teamRank, SgExpression* referData )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgCAFCoExpression::SgCAFCoExpression (SgVarRefExp* teamId, SgExpression* teamRank, SgExpression* referData) sage_class_name() = %s \n",sage_class_name());
#endif

     p_teamId = teamId;
     p_teamRank = teamRank;
     p_referData = referData;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(COARRAY_REF_EXPR == variant());
     post_construction_initialization();

  // Test the isSgCAFCoExpression() function since it has been problematic
     assert(isSgCAFCoExpression(this) != NULL);
   }


/* #line 7991 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCudaKernelCallExp::SgCudaKernelCallExp ( SgExpression* function, SgExprListExp* args, SgCudaKernelExecConfig* exec_config )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgCudaKernelCallExp::SgCudaKernelCallExp (SgExpression* function, SgExprListExp* args, SgCudaKernelExecConfig* exec_config) sage_class_name() = %s \n",sage_class_name());
#endif

     p_function = function;
     p_args = args;
     p_exec_config = exec_config;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(KERN_CALL == variant());
     post_construction_initialization();

  // Test the isSgCudaKernelCallExp() function since it has been problematic
     assert(isSgCudaKernelCallExp(this) != NULL);
   }


/* #line 8018 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgCudaKernelExecConfig::SgCudaKernelExecConfig ( SgExpression* grid, SgExpression* blocks, SgExpression* shared, SgExpression* stream )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgCudaKernelExecConfig::SgCudaKernelExecConfig (SgExpression* grid, SgExpression* blocks, SgExpression* shared, SgExpression* stream) sage_class_name() = %s \n",sage_class_name());
#endif

     p_grid = grid;
     p_blocks = blocks;
     p_shared = shared;
     p_stream = stream;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(EXEC_CONF == variant());
     post_construction_initialization();

  // Test the isSgCudaKernelExecConfig() function since it has been problematic
     assert(isSgCudaKernelExecConfig(this) != NULL);
   }


/* #line 8046 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgLambdaRefExp::SgLambdaRefExp ( SgFunctionDeclaration* functionDeclaration )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgLambdaRefExp::SgLambdaRefExp (SgFunctionDeclaration* functionDeclaration) sage_class_name() = %s \n",sage_class_name());
#endif

     p_functionDeclaration = functionDeclaration;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(LAMBDA_REF_EXP == variant());
     post_construction_initialization();

  // Test the isSgLambdaRefExp() function since it has been problematic
     assert(isSgLambdaRefExp(this) != NULL);
   }


/* #line 8071 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDictionaryExp::SgDictionaryExp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgDictionaryExp::SgDictionaryExp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(DICT_EXP == variant());
     post_construction_initialization();

  // Test the isSgDictionaryExp() function since it has been problematic
     assert(isSgDictionaryExp(this) != NULL);
   }


/* #line 8094 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgKeyDatumPair::SgKeyDatumPair ( SgExpression* key, SgExpression* datum )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgKeyDatumPair::SgKeyDatumPair (SgExpression* key, SgExpression* datum) sage_class_name() = %s \n",sage_class_name());
#endif

     p_key = key;
     p_datum = datum;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(KEY_DATUM_PAIR == variant());
     post_construction_initialization();

  // Test the isSgKeyDatumPair() function since it has been problematic
     assert(isSgKeyDatumPair(this) != NULL);
   }


/* #line 8120 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgComprehension::SgComprehension ( SgExpression* target, SgExpression* iter, SgExprListExp* filters )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgComprehension::SgComprehension (SgExpression* target, SgExpression* iter, SgExprListExp* filters) sage_class_name() = %s \n",sage_class_name());
#endif

     p_target = target;
     p_iter = iter;
     p_filters = filters;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(COMPREHENSION == variant());
     post_construction_initialization();

  // Test the isSgComprehension() function since it has been problematic
     assert(isSgComprehension(this) != NULL);
   }


/* #line 8147 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgListComprehension::SgListComprehension ( SgExpression* element, SgExprListExp* generators )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgListComprehension::SgListComprehension (SgExpression* element, SgExprListExp* generators) sage_class_name() = %s \n",sage_class_name());
#endif

     p_element = element;
     p_generators = generators;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(LIST_COMPREHENSION == variant());
     post_construction_initialization();

  // Test the isSgListComprehension() function since it has been problematic
     assert(isSgListComprehension(this) != NULL);
   }


/* #line 8173 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgSetComprehension::SgSetComprehension ( SgExpression* element, SgExprListExp* generators )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgSetComprehension::SgSetComprehension (SgExpression* element, SgExprListExp* generators) sage_class_name() = %s \n",sage_class_name());
#endif

     p_element = element;
     p_generators = generators;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(SET_COMPREHENSION == variant());
     post_construction_initialization();

  // Test the isSgSetComprehension() function since it has been problematic
     assert(isSgSetComprehension(this) != NULL);
   }


/* #line 8199 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgDictionaryComprehension::SgDictionaryComprehension ( SgKeyDatumPair* element, SgExprListExp* generators )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgDictionaryComprehension::SgDictionaryComprehension (SgKeyDatumPair* element, SgExprListExp* generators) sage_class_name() = %s \n",sage_class_name());
#endif

     p_element = element;
     p_generators = generators;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(DICTIONARY_COMPREHENSION == variant());
     post_construction_initialization();

  // Test the isSgDictionaryComprehension() function since it has been problematic
     assert(isSgDictionaryComprehension(this) != NULL);
   }


/* #line 8225 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNaryOp::SgNaryOp (  )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgNaryOp::SgNaryOp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(NARY_EXPRESSION == variant());
     post_construction_initialization();

  // Test the isSgNaryOp() function since it has been problematic
     assert(isSgNaryOp(this) != NULL);
   }


/* #line 8248 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNaryBooleanOp::SgNaryBooleanOp (  )
   : SgNaryOp()
   {
#ifdef DEBUG
  // printf ("In SgNaryBooleanOp::SgNaryBooleanOp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(NARY_BOOLEAN_OP == variant());
     post_construction_initialization();

  // Test the isSgNaryBooleanOp() function since it has been problematic
     assert(isSgNaryBooleanOp(this) != NULL);
   }


/* #line 8271 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgNaryComparisonOp::SgNaryComparisonOp (  )
   : SgNaryOp()
   {
#ifdef DEBUG
  // printf ("In SgNaryComparisonOp::SgNaryComparisonOp () sage_class_name() = %s \n",sage_class_name());
#endif



  // Test the variant virtual function
     assert(NARY_COMPARISON_OP == variant());
     post_construction_initialization();

  // Test the isSgNaryComparisonOp() function since it has been problematic
     assert(isSgNaryComparisonOp(this) != NULL);
   }


/* #line 8294 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgStringConversion::SgStringConversion ( SgExpression* expression )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgStringConversion::SgStringConversion (SgExpression* expression) sage_class_name() = %s \n",sage_class_name());
#endif

     p_expression = expression;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(STR_CONV == variant());
     post_construction_initialization();

  // Test the isSgStringConversion() function since it has been problematic
     assert(isSgStringConversion(this) != NULL);
   }


/* #line 8319 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgYieldExpression::SgYieldExpression ( SgExpression* value )
   : SgExpression()
   {
#ifdef DEBUG
  // printf ("In SgYieldExpression::SgYieldExpression (SgExpression* value) sage_class_name() = %s \n",sage_class_name());
#endif

     p_value = value;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(YIELD_EXP == variant());
     post_construction_initialization();

  // Test the isSgYieldExpression() function since it has been problematic
     assert(isSgYieldExpression(this) != NULL);
   }


/* #line 8344 "../../../src/frontend/SageIII//Cxx_GrammarNewConstructors.C" */

/* #line 1 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

// Generated constructor
SgToken::SgToken ( std::string lexeme_string, unsigned int classification_code )
   : SgLocatedNode()
   {
#ifdef DEBUG
  // printf ("In SgToken::SgToken (std::string lexeme_string, unsigned int classification_code) sage_class_name() = %s \n",sage_class_name());
#endif

     p_lexeme_string = lexeme_string;
     p_classification_code = classification_code;

/* #line 11 "/home/bronevet/Downloads/rose/src/ROSETTA/Grammar/grammarConstructorDefinitionMacros.macro" */

  // Test the variant virtual function
     assert(TOKEN == variant());
     post_construction_initialization();

  // Test the isSgToken() function since it has been problematic
     assert(isSgToken(this) != NULL);
   }



