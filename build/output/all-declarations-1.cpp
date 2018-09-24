#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-1.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@instructionList analyzeInstructionList'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_analyzeInstructionList (const GALGAS_instructionList inObject,
                                             const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                             GALGAS_decoratedInstructionList & outArgument_outDecoratedInstructionList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDecoratedInstructionList.drop () ; // Release 'out' argument
  outArgument_outDecoratedInstructionList = GALGAS_decoratedInstructionList::constructor_emptyList (SOURCE_FILE ("instructionStaticAnalysis.galgas", 46)) ;
  const GALGAS_instructionList temp_0 = inObject ;
  cEnumerator_instructionList enumerator_1679 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1679.hasCurrentObject ()) {
    GALGAS_decoratedInstruction var_decoratedInstruction_1799 ;
    callExtensionMethod_analyzeInstruction ((const cPtr_instruction *) enumerator_1679.current (HERE).getter_mInstruction (HERE).ptr (), constinArgument_inAnalyzeContext, var_decoratedInstruction_1799, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 48)) ;
    outArgument_outDecoratedInstructionList.addAssign_operation (var_decoratedInstruction_1799  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 52)) ;
    enumerator_1679.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Abstract extension method '@instruction analyzeInstruction'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_instruction_analyzeInstruction> gExtensionMethodTable_instruction_analyzeInstruction ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeInstruction (const int32_t inClassIndex,
                                              extensionMethodSignature_instruction_analyzeInstruction inMethod) {
  gExtensionMethodTable_instruction_analyzeInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_instruction_analyzeInstruction (void) {
  gExtensionMethodTable_instruction_analyzeInstruction.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_instruction_analyzeInstruction (NULL,
                                                           freeExtensionMethod_instruction_analyzeInstruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeInstruction (const cPtr_instruction * inObject,
                                             const GALGAS_analyzeContext constin_inAnalyzeContext,
                                             GALGAS_decoratedInstruction & out_outDecoratedInstruction,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outDecoratedInstruction.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_instruction_analyzeInstruction f = NULL ;
    if (classIndex < gExtensionMethodTable_instruction_analyzeInstruction.count ()) {
      f = gExtensionMethodTable_instruction_analyzeInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_instruction_analyzeInstruction.count ()) {
          f = gExtensionMethodTable_instruction_analyzeInstruction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_instruction_analyzeInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalyzeContext, out_outDecoratedInstruction, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Abstract extension method '@assignmentSourceExpression analyzeAssignmentSourceExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression> gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeAssignmentSourceExpression (const int32_t inClassIndex,
                                                             extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression inMethod) {
  gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_assignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignmentSourceExpression_analyzeAssignmentSourceExpression (NULL,
                                                                                         freeExtensionMethod_assignmentSourceExpression_analyzeAssignmentSourceExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeAssignmentSourceExpression (const cPtr_assignmentSourceExpression * inObject,
                                                            const GALGAS_analyzeContext constin_inAnalyzeContext,
                                                            const GALGAS_unifiedScalarTypeMap_2D_proxy constin_inTargetTypeProxy,
                                                            GALGAS_decoratedAssignmentSourceExpression & out_outDecoratedExpression,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outDecoratedExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_assignmentSourceExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression.count ()) {
      f = gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression.count ()) {
          f = gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalyzeContext, constin_inTargetTypeProxy, out_outDecoratedExpression, inCompiler COMMA_THERE) ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & outArgument_outAST,
                                                                            C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outAST.drop () ; // Release 'out' argument
  outArgument_outAST = GALGAS_ast::constructor_default (SOURCE_FILE ("omnibus_syntax.galgas", 6)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 8)) ;
  temp_0.addAssign_operation (GALGAS_string ("false").getter_here (inCompiler COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 8))  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 8)) ;
  temp_0.addAssign_operation (GALGAS_string ("true").getter_here (inCompiler COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 8))  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 8)) ;
  outArgument_outAST.mProperty_mEnumTypeList.addAssign_operation (GALGAS_string ("bool").getter_here (inCompiler COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 8)), temp_0, GALGAS_bool (false)  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 8)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_enum_5F_declaration_ (outArgument_outAST, inCompiler) ;
    } break ;
    case 3: {
      nt_enum_5F_function_ (outArgument_outAST, inCompiler) ;
    } break ;
    case 4: {
      nt_machine_ (outArgument_outAST, inCompiler) ;
    } break ;
    case 5: {
      nt_scenario_ (outArgument_outAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_enum_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_enum_5F_function_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_machine_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_scenario_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_scenario_i1_ (GALGAS_ast & ioArgument_ioAST,
                                                                     C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_scenario COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 26)) ;
  GALGAS_lstring var_machineTypeName_601 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 27)) ;
  GALGAS_lstring var_scenarioName_647 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_literal_5F_string COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 29)) ;
  GALGAS_scenarioEventSequence var_eventSequence_673 = GALGAS_scenarioEventSequence::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_eventName_755 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 32)) ;
    GALGAS_lstringlist var_argList_771 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 34)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_omnibus_5F_syntax_2 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__21_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 37)) ;
        GALGAS_lstring var_argName_877 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 38)) ;
        var_argList_771.addAssign_operation (var_argName_877  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 39)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 41)) ;
    var_eventSequence_673.addAssign_operation (var_eventName_755, var_argList_771  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 42)) ;
    switch (select_omnibus_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 45)) ;
  ioArgument_ioAST.mProperty_mScenarioList.addAssign_operation (var_machineTypeName_601, var_scenarioName_647, var_eventSequence_673  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_scenario_i1_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_scenario COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_literal_5F_string COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 32)) ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 34)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_omnibus_5F_syntax_2 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__21_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 37)) ;
        inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 38)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 41)) ;
    switch (select_omnibus_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_enum_5F_declaration_i2_ (GALGAS_ast & ioArgument_ioAST,
                                                                                C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 52)) ;
  GALGAS_lstring var_enumName_1216 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 54)) ;
  GALGAS_lstringlist var_cstList_1245 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 55)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_1303 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 57)) ;
    var_cstList_1245.addAssign_operation (var_constantName_1303  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 58)) ;
    switch (select_omnibus_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2C_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 60)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 62)) ;
  ioArgument_ioAST.mProperty_mEnumTypeList.addAssign_operation (var_enumName_1216, var_cstList_1245, GALGAS_bool (true)  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_enum_5F_declaration_i2_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 57)) ;
    switch (select_omnibus_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2C_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 60)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_enum_5F_function_i3_ (GALGAS_ast & ioArgument_ioAST,
                                                                             C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_function COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 70)) ;
  GALGAS_lstring var_functionName_1578 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 71)) ;
  GALGAS_lstring var_operandEnumName_1627 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2D__3E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 73)) ;
  GALGAS_lstring var_resultEnumName_1682 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 74)) ;
  GALGAS_functionValueList var_functionValueList_1706 = GALGAS_functionValueList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_operandConstantName_1795 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 78)) ;
    GALGAS_lstring var_resultConstantName_1853 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 79)) ;
    var_functionValueList_1706.addAssign_operation (var_operandConstantName_1795, var_resultConstantName_1853  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 80)) ;
    switch (select_omnibus_5F_syntax_4 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 83)) ;
  ioArgument_ioAST.mProperty_mFunctionDefinitionList.addAssign_operation (var_functionName_1578, var_operandEnumName_1627, var_resultEnumName_1682, var_functionValueList_1706  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_enum_5F_function_i3_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_function COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2D__3E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 78)) ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 79)) ;
    switch (select_omnibus_5F_syntax_4 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_machine_i4_ (GALGAS_ast & ioArgument_ioAST,
                                                                    C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_machine COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 90)) ;
  GALGAS_lstring var_machineTypeName_2202 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 91)) ;
  GALGAS_expressionList var_invariantExpressionList_2237 = GALGAS_expressionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 93)) ;
  GALGAS_enumVarDeclarationList var_enumVarDeclarationList_2295 = GALGAS_enumVarDeclarationList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 94)) ;
  GALGAS_eventDeclarationList var_eventList_2344 = GALGAS_eventDeclarationList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_var COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 98)) ;
      GALGAS_lstring var_variableName_2446 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 99)) ;
      GALGAS_lstring var_enumTypeName_2494 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 100)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 102)) ;
      GALGAS_lstring var_constantName_2554 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 103)) ;
      var_enumVarDeclarationList_2295.addAssign_operation (var_enumTypeName_2494, var_variableName_2446, var_constantName_2554  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 104)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_invariant COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 106)) ;
      GALGAS_lstring var_lbl_2690 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_literal_5F_string COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 108)) ;
      GALGAS_expression var_expression_2743 ;
      nt_expression_ (var_expression_2743, inCompiler) ;
      var_invariantExpressionList_2237.addAssign_operation (var_lbl_2690, var_expression_2743  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 110)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_event COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 112)) ;
      GALGAS_lstring var_eventName_2852 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 114)) ;
      GALGAS_eventArgumentList var_eventArgumentList_2886 = GALGAS_eventArgumentList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 115)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_omnibus_5F_syntax_6 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3F_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 118)) ;
          GALGAS_lstring var_argumentName_2991 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 119)) ;
          GALGAS_lstring var_enumTypeName_3041 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 120)) ;
          var_eventArgumentList_2886.addAssign_operation (var_enumTypeName_3041, var_argumentName_2991  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 121)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 124)) ;
      GALGAS_instructionList var_eventInstructionList_3165 = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 125)) ;
      nt_instruction_5F_list_ (var_eventInstructionList_3165, inCompiler) ;
      GALGAS_expressionList var_ensureExpressionList_3245 = GALGAS_expressionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 127)) ;
      switch (select_omnibus_5F_syntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_ensures COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 130)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          GALGAS_lstring var_lbl_3360 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_literal_5F_string COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 132)) ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 133)) ;
          GALGAS_expression var_expression_3421 ;
          nt_expression_ (var_expression_3421, inCompiler) ;
          var_ensureExpressionList_3245.addAssign_operation (var_lbl_3360, var_expression_3421  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 135)) ;
          switch (select_omnibus_5F_syntax_8 (inCompiler)) {
          case 2: {
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
      } break ;
      default:
        break ;
      }
      GALGAS_location var_endOfEnsureExpressionList_3540 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 140)) ;
      var_eventList_2344.addAssign_operation (var_eventName_2852, var_eventArgumentList_2886, var_eventInstructionList_3165, var_ensureExpressionList_3245, var_endOfEnsureExpressionList_3540  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 149)) ;
  ioArgument_ioAST.mProperty_mMachineList.addAssign_operation (var_machineTypeName_2202, var_enumVarDeclarationList_2295, var_invariantExpressionList_2237, var_eventList_2344  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_machine_i4_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_machine COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 91)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_var COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 98)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 99)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 100)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 102)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 103)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_invariant COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_literal_5F_string COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 108)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_event COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 114)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_omnibus_5F_syntax_6 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3F_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 118)) ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 119)) ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 120)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 124)) ;
      nt_instruction_5F_list_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_ensures COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 130)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_literal_5F_string COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 132)) ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 133)) ;
          nt_expression_parse (inCompiler) ;
          switch (select_omnibus_5F_syntax_8 (inCompiler)) {
          case 2: {
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 140)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 149)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i5_ (GALGAS_expression & outArgument_outExpression,
                                                                       C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_31__ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2D__3E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 163)) ;
    GALGAS_expression var_expr_4063 ;
    nt_expression_31__ (var_expr_4063, inCompiler) ;
    outArgument_outExpression = GALGAS_implicationExpression::constructor_new (outArgument_outExpression, var_expr_4063  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i5_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  nt_expression_31__parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2D__3E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 163)) ;
    nt_expression_31__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_31__i6_ (GALGAS_expression & outArgument_outExpression,
                                                                           C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_32__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7C_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 175)) ;
      GALGAS_expression var_expr_4360 ;
      nt_expression_32__ (var_expr_4360, inCompiler) ;
      outArgument_outExpression = GALGAS_logicalOrExpression::constructor_new (outArgument_outExpression, var_expr_4360  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 177)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_31__i6_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  nt_expression_32__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7C_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 175)) ;
      nt_expression_32__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_32__i7_ (GALGAS_expression & outArgument_outExpression,
                                                                           C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_34__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__26_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 187)) ;
      GALGAS_expression var_expr_4655 ;
      nt_expression_34__ (var_expr_4655, inCompiler) ;
      outArgument_outExpression = GALGAS_logicalAndExpression::constructor_new (outArgument_outExpression, var_expr_4655  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 189)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_32__i7_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  nt_expression_34__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__26_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 187)) ;
      nt_expression_34__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_34__i8_ (GALGAS_expression & outArgument_outExpression,
                                                                           C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 196)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_34__i8_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 196)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 198)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_34__i9_ (GALGAS_expression & outArgument_outExpression,
                                                                           C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_propertyName_5062 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 204)) ;
  GALGAS_enumComparisonOperator var_comparisonOperator_5107 ;
  switch (select_omnibus_5F_syntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 207)) ;
    var_comparisonOperator_5107 = GALGAS_enumComparisonOperator::constructor_equal (SOURCE_FILE ("omnibus_syntax.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__21__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 210)) ;
    var_comparisonOperator_5107 = GALGAS_enumComparisonOperator::constructor_notEqual (SOURCE_FILE ("omnibus_syntax.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_comparisonRightOperand var_comparisonRightOperand_5339 ;
  nt_comparison_5F_right_5F_operand_ (var_comparisonRightOperand_5339, inCompiler) ;
  outArgument_outExpression = GALGAS_comparisonInExpression::constructor_new (var_propertyName_5062, var_comparisonOperator_5107, var_comparisonRightOperand_5339  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 214)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_34__i9_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 204)) ;
  switch (select_omnibus_5F_syntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 207)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__21__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
  nt_comparison_5F_right_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i10_ (GALGAS_comparisonRightOperand & outArgument_outComparisonRightOperand,
                                                                                            C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outComparisonRightOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 224)) ;
  GALGAS_lstring var_constantName_5669 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 225)) ;
  outArgument_outComparisonRightOperand = GALGAS_constantAsComparisonRightOperand::constructor_new (var_constantName_5669  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 226)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i10_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 224)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 225)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i11_ (GALGAS_comparisonRightOperand & outArgument_outComparisonRightOperand,
                                                                                            C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outComparisonRightOperand.drop () ; // Release 'out' argument
  GALGAS_bool var_hasOldQualifier_5943 ;
  switch (select_omnibus_5F_syntax_13 (inCompiler)) {
  case 1: {
    var_hasOldQualifier_5943 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_old COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 237)) ;
    var_hasOldQualifier_5943 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyName_6070 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 240)) ;
  outArgument_outComparisonRightOperand = GALGAS_attributeAsComparisonRightOperand::constructor_new (var_propertyName_6070, var_hasOldQualifier_5943  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 241)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i11_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  switch (select_omnibus_5F_syntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_old COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 237)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 240)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_5F_list_i12_ (GALGAS_instructionList & ioArgument_ioInstructionList,
                                                                                 C_Lexique_lexicalAnalyzer * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_14 (inCompiler)) {
    case 2: {
      GALGAS_instruction var_instruction_6385 ;
      nt_instruction_ (var_instruction_6385, inCompiler) ;
      ioArgument_ioInstructionList.addAssign_operation (var_instruction_6385  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 252)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_5F_list_i12_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_14 (inCompiler)) {
    case 2: {
      nt_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i13_ (GALGAS_instruction & outArgument_outInstruction,
                                                                         C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_assert COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 259)) ;
  GALGAS_location var_instructionLocation_6601 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 260)) ;
  GALGAS_expression var_assertExpression_6667 ;
  nt_expression_ (var_assertExpression_6667, inCompiler) ;
  outArgument_outInstruction = GALGAS_assertInstruction::constructor_new (var_instructionLocation_6601, var_assertExpression_6667  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 262)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i13_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_assert COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 259)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i14_ (GALGAS_instruction & outArgument_outInstruction,
                                                                         C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_variableName_6919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 269)) ;
  GALGAS_assignmentSourceExpression var_expression_7002 ;
  nt_assignment_5F_source_5F_expression_ (var_expression_7002, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstruction::constructor_new (var_variableName_6919, var_expression_7002  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 271)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i14_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 269)) ;
  nt_assignment_5F_source_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i15_ (GALGAS_assignmentSourceExpression & outArgument_outExp,
                                                                                                C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outExp.drop () ; // Release 'out' argument
  GALGAS_lstring var_propertyName_7269 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 277)) ;
  outArgument_outExp = GALGAS_varAsAssignmentSourceExpression::constructor_new (var_propertyName_7269  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i15_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 277)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i16_ (GALGAS_assignmentSourceExpression & outArgument_outExp,
                                                                                                C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outExp.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 284)) ;
  GALGAS_lstring var_constantName_7532 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 285)) ;
  outArgument_outExp = GALGAS_constantAsAssignmentSourceExpression::constructor_new (var_constantName_7532  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 286)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i16_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 285)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i17_ (GALGAS_assignmentSourceExpression & outArgument_outExp,
                                                                                                C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outExp.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_7794 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 292)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 293)) ;
  GALGAS_lstring var_propertyName_7842 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 295)) ;
  outArgument_outExp = GALGAS_functionAsAssignmentSourceExpression::constructor_new (var_functionName_7794, var_propertyName_7842  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 296)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i17_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 292)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 295)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i18_ (GALGAS_instruction & outArgument_outInstruction,
                                                                         C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_if COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 335)) ;
  GALGAS_location var_IFinstructionLocation_8916 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 336)) ;
  GALGAS_expression var_testExpression_8980 ;
  nt_expression_ (var_testExpression_8980, inCompiler) ;
  GALGAS_location var_endOfTestExpression_9016 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 339)) ;
  GALGAS_instructionList var_thenInstructionList_9078 = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 340)) ;
  nt_instruction_5F_list_ (var_thenInstructionList_9078, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 342)) ;
  GALGAS_instructionList var_elseInstructionList_9188 ;
  nt_else_5F_part_ (var_elseInstructionList_9188, inCompiler) ;
  outArgument_outInstruction = GALGAS_ifInstruction::constructor_new (var_IFinstructionLocation_8916, var_testExpression_8980, var_endOfTestExpression_9016, var_thenInstructionList_9078, var_elseInstructionList_9188  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 344)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i18_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_if COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 335)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 339)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 342)) ;
  nt_else_5F_part_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_else_5F_part_i19_ (GALGAS_instructionList & outArgument_outInstructionList,
                                                                          C_Lexique_lexicalAnalyzer * /* inCompiler */) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 356)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_else_5F_part_i19_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_else_5F_part_i20_ (GALGAS_instructionList & outArgument_outInstructionList,
                                                                          C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_else COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 362)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 363)) ;
  outArgument_outInstructionList = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 364)) ;
  nt_instruction_5F_list_ (outArgument_outInstructionList, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 366)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_else_5F_part_i20_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_else COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 362)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 363)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 366)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_else_5F_part_i21_ (GALGAS_instructionList & outArgument_outInstructionList,
                                                                          C_Lexique_lexicalAnalyzer * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_else COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 372)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_if COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 373)) ;
  GALGAS_location var_IFinstructionLocation_9916 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 374)) ;
  GALGAS_expression var_testExpression_9980 ;
  nt_expression_ (var_testExpression_9980, inCompiler) ;
  GALGAS_location var_endOfTestExpression_10016 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 376)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 377)) ;
  GALGAS_instructionList var_thenInstructionList_10078 = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 378)) ;
  nt_instruction_5F_list_ (var_thenInstructionList_10078, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 380)) ;
  GALGAS_instructionList var_elseInstructionList_10188 ;
  nt_else_5F_part_ (var_elseInstructionList_10188, inCompiler) ;
  outArgument_outInstructionList = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 382)) ;
  outArgument_outInstructionList.addAssign_operation (GALGAS_ifInstruction::constructor_new (var_IFinstructionLocation_9916, var_testExpression_9980, var_endOfTestExpression_10016, var_thenInstructionList_10078, var_elseInstructionList_10188  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 383))  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 383)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_else_5F_part_i21_parse (C_Lexique_lexicalAnalyzer * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_else COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 372)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_if COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 373)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 377)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 380)) ;
  nt_else_5F_part_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@machineVarListForDisplay' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_machineVarListForDisplay : public cCollectionElement {
  public : GALGAS_machineVarListForDisplay_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_machineVarListForDisplay (const GALGAS_string & in_mAttributeName,
                                                        const GALGAS_uint & in_mBDDStartIndex,
                                                        const GALGAS_uint & in_mBDDBitCount,
                                                        const GALGAS_lstringlist & in_mValueList,
                                                        const GALGAS_uint & in_mColumnLength
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_machineVarListForDisplay (const GALGAS_machineVarListForDisplay_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_machineVarListForDisplay::cCollectionElement_machineVarListForDisplay (const GALGAS_string & in_mAttributeName,
                                                                                          const GALGAS_uint & in_mBDDStartIndex,
                                                                                          const GALGAS_uint & in_mBDDBitCount,
                                                                                          const GALGAS_lstringlist & in_mValueList,
                                                                                          const GALGAS_uint & in_mColumnLength
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mBDDStartIndex, in_mBDDBitCount, in_mValueList, in_mColumnLength) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_machineVarListForDisplay::cCollectionElement_machineVarListForDisplay (const GALGAS_machineVarListForDisplay_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mBDDStartIndex, inElement.mProperty_mBDDBitCount, inElement.mProperty_mValueList, inElement.mProperty_mColumnLength) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_machineVarListForDisplay::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_machineVarListForDisplay::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_machineVarListForDisplay (mObject.mProperty_mAttributeName, mObject.mProperty_mBDDStartIndex, mObject.mProperty_mBDDBitCount, mObject.mProperty_mValueList, mObject.mProperty_mColumnLength COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_machineVarListForDisplay::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBDDStartIndex" ":" ;
  mObject.mProperty_mBDDStartIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBDDBitCount" ":" ;
  mObject.mProperty_mBDDBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValueList" ":" ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnLength" ":" ;
  mObject.mProperty_mColumnLength.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_machineVarListForDisplay::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_machineVarListForDisplay * operand = (cCollectionElement_machineVarListForDisplay *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_machineVarListForDisplay) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay::GALGAS_machineVarListForDisplay (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay::GALGAS_machineVarListForDisplay (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarListForDisplay  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_uint & inOperand1,
                                                                                            const GALGAS_uint & inOperand2,
                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                            const GALGAS_uint & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_machineVarListForDisplay (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_machineVarListForDisplay::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_string & in_mAttributeName,
                                                                 const GALGAS_uint & in_mBDDStartIndex,
                                                                 const GALGAS_uint & in_mBDDBitCount,
                                                                 const GALGAS_lstringlist & in_mValueList,
                                                                 const GALGAS_uint & in_mColumnLength
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_machineVarListForDisplay * p = NULL ;
  macroMyNew (p, cCollectionElement_machineVarListForDisplay (in_mAttributeName,
                                                              in_mBDDStartIndex,
                                                              in_mBDDBitCount,
                                                              in_mValueList,
                                                              in_mColumnLength COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::addAssign_operation (const GALGAS_string & inOperand0,
                                                           const GALGAS_uint & inOperand1,
                                                           const GALGAS_uint & inOperand2,
                                                           const GALGAS_lstringlist & inOperand3,
                                                           const GALGAS_uint & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineVarListForDisplay (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::setter_append (GALGAS_machineVarListForDisplay_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineVarListForDisplay (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                            const GALGAS_uint inOperand1,
                                                            const GALGAS_uint inOperand2,
                                                            const GALGAS_lstringlist inOperand3,
                                                            const GALGAS_uint inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_machineVarListForDisplay (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                            GALGAS_uint & outOperand1,
                                                            GALGAS_uint & outOperand2,
                                                            GALGAS_lstringlist & outOperand3,
                                                            GALGAS_uint & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
      outOperand0 = p->mObject.mProperty_mAttributeName ;
      outOperand1 = p->mObject.mProperty_mBDDStartIndex ;
      outOperand2 = p->mObject.mProperty_mBDDBitCount ;
      outOperand3 = p->mObject.mProperty_mValueList ;
      outOperand4 = p->mObject.mProperty_mColumnLength ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::setter_popFirst (GALGAS_string & outOperand0,
                                                       GALGAS_uint & outOperand1,
                                                       GALGAS_uint & outOperand2,
                                                       GALGAS_lstringlist & outOperand3,
                                                       GALGAS_uint & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mBDDStartIndex ;
    outOperand2 = p->mObject.mProperty_mBDDBitCount ;
    outOperand3 = p->mObject.mProperty_mValueList ;
    outOperand4 = p->mObject.mProperty_mColumnLength ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::setter_popLast (GALGAS_string & outOperand0,
                                                      GALGAS_uint & outOperand1,
                                                      GALGAS_uint & outOperand2,
                                                      GALGAS_lstringlist & outOperand3,
                                                      GALGAS_uint & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mBDDStartIndex ;
    outOperand2 = p->mObject.mProperty_mBDDBitCount ;
    outOperand3 = p->mObject.mProperty_mValueList ;
    outOperand4 = p->mObject.mProperty_mColumnLength ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::method_first (GALGAS_string & outOperand0,
                                                    GALGAS_uint & outOperand1,
                                                    GALGAS_uint & outOperand2,
                                                    GALGAS_lstringlist & outOperand3,
                                                    GALGAS_uint & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mBDDStartIndex ;
    outOperand2 = p->mObject.mProperty_mBDDBitCount ;
    outOperand3 = p->mObject.mProperty_mValueList ;
    outOperand4 = p->mObject.mProperty_mColumnLength ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::method_last (GALGAS_string & outOperand0,
                                                   GALGAS_uint & outOperand1,
                                                   GALGAS_uint & outOperand2,
                                                   GALGAS_lstringlist & outOperand3,
                                                   GALGAS_uint & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mBDDStartIndex ;
    outOperand2 = p->mObject.mProperty_mBDDBitCount ;
    outOperand3 = p->mObject.mProperty_mValueList ;
    outOperand4 = p->mObject.mProperty_mColumnLength ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::add_operation (const GALGAS_machineVarListForDisplay & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay::plusAssign_operation (const GALGAS_machineVarListForDisplay inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_machineVarListForDisplay::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarListForDisplay::getter_mBDDStartIndexAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    result = p->mObject.mProperty_mBDDStartIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarListForDisplay::getter_mBDDBitCountAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    result = p->mObject.mProperty_mBDDBitCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_machineVarListForDisplay::getter_mValueListAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarListForDisplay::getter_mColumnLengthAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    result = p->mObject.mProperty_mColumnLength ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_machineVarListForDisplay::cEnumerator_machineVarListForDisplay (const GALGAS_machineVarListForDisplay & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay_2D_element cEnumerator_machineVarListForDisplay::current (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_machineVarListForDisplay::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mBDDStartIndex (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mBDDStartIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mBDDBitCount (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mBDDBitCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_machineVarListForDisplay::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mColumnLength (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mColumnLength ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @machineVarListForDisplay type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarListForDisplay ("machineVarListForDisplay",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineVarListForDisplay::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarListForDisplay ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineVarListForDisplay::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarListForDisplay (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result ;
  const GALGAS_machineVarListForDisplay * p = (const GALGAS_machineVarListForDisplay *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineVarListForDisplay *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineVarListForDisplay", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Class for element of '@varList' list                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_varList : public cCollectionElement {
  public : GALGAS_varList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_varList (const GALGAS_lstring & in_mVarName,
                                       const GALGAS_lstringlist & in_mValueList,
                                       const GALGAS_uint & in_mBDDStartBitIndex,
                                       const GALGAS_uint & in_mBDDBitCount,
                                       const GALGAS_uint & in_mInitialValueIndex
                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_varList (const GALGAS_varList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_lstring & in_mVarName,
                                                        const GALGAS_lstringlist & in_mValueList,
                                                        const GALGAS_uint & in_mBDDStartBitIndex,
                                                        const GALGAS_uint & in_mBDDBitCount,
                                                        const GALGAS_uint & in_mInitialValueIndex
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mValueList, in_mBDDStartBitIndex, in_mBDDBitCount, in_mInitialValueIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_varList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mVarName, inElement.mProperty_mValueList, inElement.mProperty_mBDDStartBitIndex, inElement.mProperty_mBDDBitCount, inElement.mProperty_mInitialValueIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_varList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_varList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_varList (mObject.mProperty_mVarName, mObject.mProperty_mValueList, mObject.mProperty_mBDDStartBitIndex, mObject.mProperty_mBDDBitCount, mObject.mProperty_mInitialValueIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_varList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarName" ":" ;
  mObject.mProperty_mVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValueList" ":" ;
  mObject.mProperty_mValueList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBDDStartBitIndex" ":" ;
  mObject.mProperty_mBDDStartBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBDDBitCount" ":" ;
  mObject.mProperty_mBDDBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValueIndex" ":" ;
  mObject.mProperty_mInitialValueIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_varList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_varList * operand = (cCollectionElement_varList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_varList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList::GALGAS_varList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList::GALGAS_varList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList GALGAS_varList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList GALGAS_varList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstringlist & inOperand1,
                                                          const GALGAS_uint & inOperand2,
                                                          const GALGAS_uint & inOperand3,
                                                          const GALGAS_uint & inOperand4
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_varList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_varList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_varList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstringlist & in_mValueList,
                                                const GALGAS_uint & in_mBDDStartBitIndex,
                                                const GALGAS_uint & in_mBDDBitCount,
                                                const GALGAS_uint & in_mInitialValueIndex
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = NULL ;
  macroMyNew (p, cCollectionElement_varList (in_mVarName,
                                             in_mValueList,
                                             in_mBDDStartBitIndex,
                                             in_mBDDBitCount,
                                             in_mInitialValueIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                          const GALGAS_lstringlist & inOperand1,
                                          const GALGAS_uint & inOperand2,
                                          const GALGAS_uint & inOperand3,
                                          const GALGAS_uint & inOperand4
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::setter_append (GALGAS_varList_2D_element inElement,
                                    C_Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_varList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                           const GALGAS_lstringlist inOperand1,
                                           const GALGAS_uint inOperand2,
                                           const GALGAS_uint inOperand3,
                                           const GALGAS_uint inOperand4,
                                           const GALGAS_uint inInsertionIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
                                           GALGAS_uint & outOperand2,
                                           GALGAS_uint & outOperand3,
                                           GALGAS_uint & outOperand4,
                                           const GALGAS_uint inRemoveIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_varList) ;
      outOperand0 = p->mObject.mProperty_mVarName ;
      outOperand1 = p->mObject.mProperty_mValueList ;
      outOperand2 = p->mObject.mProperty_mBDDStartBitIndex ;
      outOperand3 = p->mObject.mProperty_mBDDBitCount ;
      outOperand4 = p->mObject.mProperty_mInitialValueIndex ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::setter_popFirst (GALGAS_lstring & outOperand0,
                                      GALGAS_lstringlist & outOperand1,
                                      GALGAS_uint & outOperand2,
                                      GALGAS_uint & outOperand3,
                                      GALGAS_uint & outOperand4,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mValueList ;
    outOperand2 = p->mObject.mProperty_mBDDStartBitIndex ;
    outOperand3 = p->mObject.mProperty_mBDDBitCount ;
    outOperand4 = p->mObject.mProperty_mInitialValueIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::setter_popLast (GALGAS_lstring & outOperand0,
                                     GALGAS_lstringlist & outOperand1,
                                     GALGAS_uint & outOperand2,
                                     GALGAS_uint & outOperand3,
                                     GALGAS_uint & outOperand4,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mValueList ;
    outOperand2 = p->mObject.mProperty_mBDDStartBitIndex ;
    outOperand3 = p->mObject.mProperty_mBDDBitCount ;
    outOperand4 = p->mObject.mProperty_mInitialValueIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::method_first (GALGAS_lstring & outOperand0,
                                   GALGAS_lstringlist & outOperand1,
                                   GALGAS_uint & outOperand2,
                                   GALGAS_uint & outOperand3,
                                   GALGAS_uint & outOperand4,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mValueList ;
    outOperand2 = p->mObject.mProperty_mBDDStartBitIndex ;
    outOperand3 = p->mObject.mProperty_mBDDBitCount ;
    outOperand4 = p->mObject.mProperty_mInitialValueIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::method_last (GALGAS_lstring & outOperand0,
                                  GALGAS_lstringlist & outOperand1,
                                  GALGAS_uint & outOperand2,
                                  GALGAS_uint & outOperand3,
                                  GALGAS_uint & outOperand4,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mValueList ;
    outOperand2 = p->mObject.mProperty_mBDDStartBitIndex ;
    outOperand3 = p->mObject.mProperty_mBDDBitCount ;
    outOperand4 = p->mObject.mProperty_mInitialValueIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList GALGAS_varList::add_operation (const GALGAS_varList & inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_varList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList GALGAS_varList::getter_subListWithRange (const GALGAS_range & inRange,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList GALGAS_varList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList GALGAS_varList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList::plusAssign_operation (const GALGAS_varList inOperand,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_varList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_varList::getter_mValueListAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varList::getter_mBDDStartBitIndexAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mBDDStartBitIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varList::getter_mBDDBitCountAtIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mBDDBitCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varList::getter_mInitialValueIndexAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mInitialValueIndex ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_varList::cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList_2D_element cEnumerator_varList::current (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_varList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_varList::current_mBDDStartBitIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBDDStartBitIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_varList::current_mBDDBitCount (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBDDBitCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_varList::current_mInitialValueIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mInitialValueIndex ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @varList type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList ("varList",
                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_varList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_varList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList GALGAS_varList::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_varList result ;
  const GALGAS_varList * p = (const GALGAS_varList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@varList displayVarVarInfo'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay extensionGetter_displayVarVarInfo (const GALGAS_varList & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 39)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_1163 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1163.hasCurrentObject ()) {
    GALGAS_string var_columnName_1185 = GALGAS_string ("old ").add_operation (enumerator_1163.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 41)) ;
    GALGAS_uint var_columnLength_1230 = var_columnName_1185.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 42)) ;
    cEnumerator_lstringlist enumerator_1278 (enumerator_1163.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_1278.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_1311 = enumerator_1278.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 44)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_1230.objectCompare (var_cstNameLength_1311)).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_columnLength_1230 = var_cstNameLength_1311 ;
        }
      }
      enumerator_1278.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (var_columnName_1185, enumerator_1163.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_1163.current (HERE).getter_mBDDBitCount (HERE), enumerator_1163.current (HERE).getter_mValueList (HERE), var_columnLength_1230  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 49)) ;
    enumerator_1163.gotoNextObject () ;
  }
  const GALGAS_varList temp_2 = inObject ;
  cEnumerator_varList enumerator_1582 (temp_2, kENUMERATION_UP) ;
  while (enumerator_1582.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_1608 = enumerator_1582.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 57)) ;
    cEnumerator_lstringlist enumerator_1656 (enumerator_1582.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_1656.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_1689 = enumerator_1656.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 59)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsStrictInf, var_columnLength_1608.objectCompare (var_cstNameLength_1689)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_columnLength_1608 = var_cstNameLength_1689 ;
        }
      }
      enumerator_1656.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (enumerator_1582.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 65)), enumerator_1582.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_1582.current (HERE).getter_mBDDBitCount (HERE), enumerator_1582.current (HERE).getter_mValueList (HERE), var_columnLength_1608  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 64)) ;
    enumerator_1582.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension Getter '@varList displayArgVarVarInfo'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay extensionGetter_displayArgVarVarInfo (const GALGAS_varList & inObject,
                                                                      const GALGAS_varList & constinArgument_inArgumentList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 78)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_2243 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2243.hasCurrentObject ()) {
    GALGAS_string var_columnName_2265 = GALGAS_string ("old ").add_operation (enumerator_2243.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 80)) ;
    GALGAS_uint var_columnLength_2310 = var_columnName_2265.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 81)) ;
    cEnumerator_lstringlist enumerator_2358 (enumerator_2243.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_2358.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_2391 = enumerator_2358.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 83)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_2310.objectCompare (var_cstNameLength_2391)).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_columnLength_2310 = var_cstNameLength_2391 ;
        }
      }
      enumerator_2358.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (var_columnName_2265, enumerator_2243.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_2243.current (HERE).getter_mBDDBitCount (HERE), enumerator_2243.current (HERE).getter_mValueList (HERE), var_columnLength_2310  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 88)) ;
    enumerator_2243.gotoNextObject () ;
  }
  const GALGAS_varList temp_2 = inObject ;
  cEnumerator_varList enumerator_2662 (temp_2, kENUMERATION_UP) ;
  while (enumerator_2662.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_2688 = enumerator_2662.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 96)) ;
    cEnumerator_lstringlist enumerator_2736 (enumerator_2662.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_2736.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_2769 = enumerator_2736.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 98)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsStrictInf, var_columnLength_2688.objectCompare (var_cstNameLength_2769)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_columnLength_2688 = var_cstNameLength_2769 ;
        }
      }
      enumerator_2736.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (enumerator_2662.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 104)), enumerator_2662.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_2662.current (HERE).getter_mBDDBitCount (HERE), enumerator_2662.current (HERE).getter_mValueList (HERE), var_columnLength_2688  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 103)) ;
    enumerator_2662.gotoNextObject () ;
  }
  cEnumerator_varList enumerator_3050 (constinArgument_inArgumentList, kENUMERATION_UP) ;
  while (enumerator_3050.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_3076 = enumerator_3050.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 111)) ;
    cEnumerator_lstringlist enumerator_3124 (enumerator_3050.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_3124.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_3157 = enumerator_3124.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 113)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsStrictInf, var_columnLength_3076.objectCompare (var_cstNameLength_3157)).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_columnLength_3076 = var_cstNameLength_3157 ;
        }
      }
      enumerator_3124.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (enumerator_3050.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 119)), enumerator_3050.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_3050.current (HERE).getter_mBDDBitCount (HERE), enumerator_3050.current (HERE).getter_mValueList (HERE), var_columnLength_3076  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 118)) ;
    enumerator_3050.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_transitionEventMap::cMapElement_transitionEventMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_eventArgumentList & in_mArgumentList,
                                                                const GALGAS_binaryset & in_mTransitionBinarySet
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mArgumentList (in_mArgumentList),
mProperty_mTransitionBinarySet (in_mTransitionBinarySet) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_transitionEventMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentList.isValid () && mProperty_mTransitionBinarySet.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_transitionEventMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_transitionEventMap (mProperty_lkey, mProperty_mArgumentList, mProperty_mTransitionBinarySet COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_transitionEventMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentList" ":" ;
  mProperty_mArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionBinarySet" ":" ;
  mProperty_mTransitionBinarySet.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_transitionEventMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_transitionEventMap * operand = (cMapElement_transitionEventMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (operand->mProperty_mArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransitionBinarySet.objectCompare (operand->mProperty_mTransitionBinarySet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap::GALGAS_transitionEventMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap::GALGAS_transitionEventMap (const GALGAS_transitionEventMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap & GALGAS_transitionEventMap::operator = (const GALGAS_transitionEventMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap GALGAS_transitionEventMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_transitionEventMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap GALGAS_transitionEventMap::constructor_mapWithMapToOverride (const GALGAS_transitionEventMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_transitionEventMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap GALGAS_transitionEventMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_transitionEventMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transitionEventMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_eventArgumentList & inArgument0,
                                                     const GALGAS_binaryset & inArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_transitionEventMap * p = NULL ;
  macroMyNew (p, cMapElement_transitionEventMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@transitionEventMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transitionEventMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_eventArgumentList inArgument0,
                                                  GALGAS_binaryset inArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_transitionEventMap * p = NULL ;
  macroMyNew (p, cMapElement_transitionEventMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' event is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_transitionEventMap_searchKey = "there is no '%K' event" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transitionEventMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_eventArgumentList & outArgument0,
                                                  GALGAS_binaryset & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_transitionEventMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_transitionEventMap) ;
    outArgument0 = p->mProperty_mArgumentList ;
    outArgument1 = p->mProperty_mTransitionBinarySet ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_transitionEventMap::getter_mArgumentListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) attributes ;
  GALGAS_eventArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_transitionEventMap) ;
    result = p->mProperty_mArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryset GALGAS_transitionEventMap::getter_mTransitionBinarySetForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) attributes ;
  GALGAS_binaryset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_transitionEventMap) ;
    result = p->mProperty_mTransitionBinarySet ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transitionEventMap::setter_setMArgumentListForKey (GALGAS_eventArgumentList inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_transitionEventMap * p = (cMapElement_transitionEventMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_transitionEventMap) ;
    p->mProperty_mArgumentList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transitionEventMap::setter_setMTransitionBinarySetForKey (GALGAS_binaryset inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_transitionEventMap * p = (cMapElement_transitionEventMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_transitionEventMap) ;
    p->mProperty_mTransitionBinarySet = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_transitionEventMap * GALGAS_transitionEventMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_transitionEventMap * result = (cMapElement_transitionEventMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_transitionEventMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_transitionEventMap::cEnumerator_transitionEventMap (const GALGAS_transitionEventMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap_2D_element cEnumerator_transitionEventMap::current (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return GALGAS_transitionEventMap_2D_element (p->mProperty_lkey, p->mProperty_mArgumentList, p->mProperty_mTransitionBinarySet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_transitionEventMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList cEnumerator_transitionEventMap::current_mArgumentList (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return p->mProperty_mArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryset cEnumerator_transitionEventMap::current_mTransitionBinarySet (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return p->mProperty_mTransitionBinarySet ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @transitionEventMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transitionEventMap ("transitionEventMap",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transitionEventMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transitionEventMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transitionEventMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transitionEventMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap GALGAS_transitionEventMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transitionEventMap result ;
  const GALGAS_transitionEventMap * p = (const GALGAS_transitionEventMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transitionEventMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transitionEventMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@binarysetList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_binarysetList : public cCollectionElement {
  public : GALGAS_binarysetList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_binarysetList (const GALGAS_lstring & in_mLabel,
                                             const GALGAS_binaryset & in_mSet
                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_binarysetList (const GALGAS_binarysetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_binarysetList::cCollectionElement_binarysetList (const GALGAS_lstring & in_mLabel,
                                                                    const GALGAS_binaryset & in_mSet
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabel, in_mSet) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_binarysetList::cCollectionElement_binarysetList (const GALGAS_binarysetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabel, inElement.mProperty_mSet) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_binarysetList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_binarysetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_binarysetList (mObject.mProperty_mLabel, mObject.mProperty_mSet COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_binarysetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabel" ":" ;
  mObject.mProperty_mLabel.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSet" ":" ;
  mObject.mProperty_mSet.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_binarysetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_binarysetList * operand = (cCollectionElement_binarysetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_binarysetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList::GALGAS_binarysetList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList::GALGAS_binarysetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList GALGAS_binarysetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_binarysetList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList GALGAS_binarysetList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_binaryset & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_binarysetList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_binarysetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_binarysetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_lstring & in_mLabel,
                                                      const GALGAS_binaryset & in_mSet
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_binarysetList * p = NULL ;
  macroMyNew (p, cCollectionElement_binarysetList (in_mLabel,
                                                   in_mSet COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                const GALGAS_binaryset & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_binarysetList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::setter_append (GALGAS_binarysetList_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_binarysetList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                 const GALGAS_binaryset inOperand1,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_binarysetList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                 GALGAS_binaryset & outOperand1,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_binarysetList) ;
      outOperand0 = p->mObject.mProperty_mLabel ;
      outOperand1 = p->mObject.mProperty_mSet ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::setter_popFirst (GALGAS_lstring & outOperand0,
                                            GALGAS_binaryset & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_binarysetList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mSet ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::setter_popLast (GALGAS_lstring & outOperand0,
                                           GALGAS_binaryset & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_binarysetList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mSet ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::method_first (GALGAS_lstring & outOperand0,
                                         GALGAS_binaryset & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_binarysetList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mSet ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::method_last (GALGAS_lstring & outOperand0,
                                        GALGAS_binaryset & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_binarysetList) ;
    outOperand0 = p->mObject.mProperty_mLabel ;
    outOperand1 = p->mObject.mProperty_mSet ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList GALGAS_binarysetList::add_operation (const GALGAS_binarysetList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binarysetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList GALGAS_binarysetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList GALGAS_binarysetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList GALGAS_binarysetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList::plusAssign_operation (const GALGAS_binarysetList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_binarysetList::getter_mLabelAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_binarysetList) ;
    result = p->mObject.mProperty_mLabel ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryset GALGAS_binarysetList::getter_mSetAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) attributes.ptr () ;
  GALGAS_binaryset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_binarysetList) ;
    result = p->mObject.mProperty_mSet ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_binarysetList::cEnumerator_binarysetList (const GALGAS_binarysetList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList_2D_element cEnumerator_binarysetList::current (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_binarysetList::current_mLabel (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject.mProperty_mLabel ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryset cEnumerator_binarysetList::current_mSet (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject.mProperty_mSet ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @binarysetList type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetList ("binarysetList",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_binarysetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_binarysetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList GALGAS_binarysetList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_binarysetList result ;
  const GALGAS_binarysetList * p = (const GALGAS_binarysetList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binarysetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_varMap::cMapElement_varMap (const GALGAS_lstring & inKey,
                                        const GALGAS_lstringlist & in_mConstantList,
                                        const GALGAS_enumConstantMap & in_mConstantMap,
                                        const GALGAS_uint & in_mBDDStartBit,
                                        const GALGAS_uint & in_mBDDBitCount
                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstantList (in_mConstantList),
mProperty_mConstantMap (in_mConstantMap),
mProperty_mBDDStartBit (in_mBDDStartBit),
mProperty_mBDDBitCount (in_mBDDBitCount) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_varMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantList.isValid () && mProperty_mConstantMap.isValid () && mProperty_mBDDStartBit.isValid () && mProperty_mBDDBitCount.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_varMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_varMap (mProperty_lkey, mProperty_mConstantList, mProperty_mConstantMap, mProperty_mBDDStartBit, mProperty_mBDDBitCount COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_varMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantList" ":" ;
  mProperty_mConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantMap" ":" ;
  mProperty_mConstantMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBDDStartBit" ":" ;
  mProperty_mBDDStartBit.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBDDBitCount" ":" ;
  mProperty_mBDDBitCount.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_varMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_varMap * operand = (cMapElement_varMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantList.objectCompare (operand->mProperty_mConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantMap.objectCompare (operand->mProperty_mConstantMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBDDStartBit.objectCompare (operand->mProperty_mBDDStartBit) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBDDBitCount.objectCompare (operand->mProperty_mBDDBitCount) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap::GALGAS_varMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap::GALGAS_varMap (const GALGAS_varMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap & GALGAS_varMap::operator = (const GALGAS_varMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap GALGAS_varMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap GALGAS_varMap::constructor_mapWithMapToOverride (const GALGAS_varMap & inMapToOverride
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap GALGAS_varMap::getter_overriddenMap (C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_varMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap::addAssign_operation (const GALGAS_lstring & inKey,
                                         const GALGAS_lstringlist & inArgument0,
                                         const GALGAS_enumConstantMap & inArgument1,
                                         const GALGAS_uint & inArgument2,
                                         const GALGAS_uint & inArgument3,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_varMap * p = NULL ;
  macroMyNew (p, cMapElement_varMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@varMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap::setter_insertKey (GALGAS_lstring inKey,
                                      GALGAS_lstringlist inArgument0,
                                      GALGAS_enumConstantMap inArgument1,
                                      GALGAS_uint inArgument2,
                                      GALGAS_uint inArgument3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_varMap * p = NULL ;
  macroMyNew (p, cMapElement_varMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' var is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_varMap_searchKey = "there is var '%K' key" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap::method_searchKey (GALGAS_lstring inKey,
                                      GALGAS_lstringlist & outArgument0,
                                      GALGAS_enumConstantMap & outArgument1,
                                      GALGAS_uint & outArgument2,
                                      GALGAS_uint & outArgument3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) performSearch (inKey,
                                                                             inCompiler,
                                                                             kSearchErrorMessage_varMap_searchKey
                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_varMap) ;
    outArgument0 = p->mProperty_mConstantList ;
    outArgument1 = p->mProperty_mConstantMap ;
    outArgument2 = p->mProperty_mBDDStartBit ;
    outArgument3 = p->mProperty_mBDDBitCount ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_varMap::getter_mConstantListForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_varMap::getter_mConstantMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_enumConstantMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mConstantMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varMap::getter_mBDDStartBitForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mBDDStartBit ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varMap::getter_mBDDBitCountForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mBDDBitCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap::setter_setMConstantListForKey (GALGAS_lstringlist inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mConstantList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap::setter_setMConstantMapForKey (GALGAS_enumConstantMap inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mConstantMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap::setter_setMBDDStartBitForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mBDDStartBit = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap::setter_setMBDDBitCountForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mBDDBitCount = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_varMap * GALGAS_varMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                       const GALGAS_string & inKey
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_varMap * result = (cMapElement_varMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_varMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_varMap::cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap_2D_element cEnumerator_varMap::current (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return GALGAS_varMap_2D_element (p->mProperty_lkey, p->mProperty_mConstantList, p->mProperty_mConstantMap, p->mProperty_mBDDStartBit, p->mProperty_mBDDBitCount) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_varMap::current_mConstantList (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap cEnumerator_varMap::current_mConstantMap (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_varMap::current_mBDDStartBit (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBDDStartBit ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_varMap::current_mBDDBitCount (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBDDBitCount ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @varMap type                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap ("varMap",
                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_varMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_varMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap GALGAS_varMap::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  const GALGAS_varMap * p = (const GALGAS_varMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Abstract extension method '@expression computeExpressionBDD'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_expression_computeExpressionBDD> gExtensionMethodTable_expression_computeExpressionBDD ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_computeExpressionBDD (const int32_t inClassIndex,
                                                extensionMethodSignature_expression_computeExpressionBDD inMethod) {
  gExtensionMethodTable_expression_computeExpressionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_expression_computeExpressionBDD (void) {
  gExtensionMethodTable_expression_computeExpressionBDD.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expression_computeExpressionBDD (NULL,
                                                            freeExtensionMethod_expression_computeExpressionBDD) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_computeExpressionBDD (const cPtr_expression * inObject,
                                               const GALGAS_varMap constin_inVarMap,
                                               const GALGAS_uint constin_inVarTotalBDDBitCount,
                                               GALGAS_binaryset & out_outExpressionBDD,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpressionBDD.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expression_computeExpressionBDD f = NULL ;
    if (classIndex < gExtensionMethodTable_expression_computeExpressionBDD.count ()) {
      f = gExtensionMethodTable_expression_computeExpressionBDD (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_expression_computeExpressionBDD.count ()) {
          f = gExtensionMethodTable_expression_computeExpressionBDD (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_expression_computeExpressionBDD.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inVarMap, constin_inVarTotalBDDBitCount, out_outExpressionBDD, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@comparisonRightOperand computeRightOperandBDD'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD> gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_computeRightOperandBDD (const int32_t inClassIndex,
                                                  extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD inMethod) {
  gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_comparisonRightOperand_computeRightOperandBDD (void) {
  gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_comparisonRightOperand_computeRightOperandBDD (NULL,
                                                                          freeExtensionMethod_comparisonRightOperand_computeRightOperandBDD) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_computeRightOperandBDD (const cPtr_comparisonRightOperand * inObject,
                                                 const GALGAS_varMap constin_inVarMap,
                                                 const GALGAS_enumConstantMap constin_inConstantMap,
                                                 const GALGAS_uint constin_leftVarBDDStartBit,
                                                 const GALGAS_uint constin_leftVarBDDBitCount,
                                                 const GALGAS_enumComparisonOperator constin_inOperator,
                                                 const GALGAS_uint constin_inVarTotalBDDBitCount,
                                                 GALGAS_binaryset & out_outExpressionBDD,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpressionBDD.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_comparisonRightOperand) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD f = NULL ;
    if (classIndex < gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.count ()) {
      f = gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.count ()) {
          f = gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inVarMap, constin_inConstantMap, constin_leftVarBDDStartBit, constin_leftVarBDDBitCount, constin_inOperator, constin_inVarTotalBDDBitCount, out_outExpressionBDD, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Abstract extension method '@instruction computeInstructionBDD'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_instruction_computeInstructionBDD> gExtensionMethodTable_instruction_computeInstructionBDD ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_computeInstructionBDD (const int32_t inClassIndex,
                                                 extensionMethodSignature_instruction_computeInstructionBDD inMethod) {
  gExtensionMethodTable_instruction_computeInstructionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_instruction_computeInstructionBDD (void) {
  gExtensionMethodTable_instruction_computeInstructionBDD.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_instruction_computeInstructionBDD (NULL,
                                                              freeExtensionMethod_instruction_computeInstructionBDD) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_computeInstructionBDD (const cPtr_instruction * inObject,
                                                const GALGAS_uint constin_inVarTotalBDDBitCount,
                                                const GALGAS_varMap constin_inVarMap,
                                                const GALGAS_functionMap constin_inFunctionMap,
                                                const GALGAS_uint constin_inArgOldVarVarBDDBitCount,
                                                GALGAS_binaryset & io_ioArgOldVarVarValueSet,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_instruction_computeInstructionBDD f = NULL ;
    if (classIndex < gExtensionMethodTable_instruction_computeInstructionBDD.count ()) {
      f = gExtensionMethodTable_instruction_computeInstructionBDD (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_instruction_computeInstructionBDD.count ()) {
          f = gExtensionMethodTable_instruction_computeInstructionBDD (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_instruction_computeInstructionBDD.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inVarTotalBDDBitCount, constin_inVarMap, constin_inFunctionMap, constin_inArgOldVarVarBDDBitCount, io_ioArgOldVarVarValueSet, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@instructionList computeInstructionListBDD'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_computeInstructionListBDD (const GALGAS_instructionList inObject,
                                                const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                const GALGAS_varMap constinArgument_inVarMap,
                                                const GALGAS_functionMap constinArgument_inFunctionMap,
                                                const GALGAS_uint constinArgument_inArgOldVarVarBDDBitCount,
                                                GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionList temp_0 = inObject ;
  cEnumerator_instructionList enumerator_28718 (temp_0, kENUMERATION_UP) ;
  while (enumerator_28718.hasCurrentObject ()) {
    callExtensionMethod_computeInstructionBDD ((const cPtr_instruction *) enumerator_28718.current (HERE).getter_mInstruction (HERE).ptr (), constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, ioArgument_ioArgOldVarVarValueSet, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 822)) ;
    enumerator_28718.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Abstract extension method '@assignmentSourceExpression computeAssignmentInstructionBDD'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD> gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_computeAssignmentInstructionBDD (const int32_t inClassIndex,
                                                           extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD inMethod) {
  gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_assignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignmentSourceExpression_computeAssignmentInstructionBDD (NULL,
                                                                                       freeExtensionMethod_assignmentSourceExpression_computeAssignmentInstructionBDD) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_computeAssignmentInstructionBDD (const cPtr_assignmentSourceExpression * inObject,
                                                          const GALGAS_varMap constin_inVarMap,
                                                          const GALGAS_functionMap constin_inFunctionMap,
                                                          const GALGAS_enumConstantMap constin_constantMap,
                                                          const GALGAS_uint constin_leftVarBDDStartBit,
                                                          const GALGAS_uint constin_leftVarBDDBitCount,
                                                          const GALGAS_uint constin_inArgOldVarVarBDDBitCount,
                                                          GALGAS_binaryset & io_ioArgOldVarVarValueSet,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_assignmentSourceExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD f = NULL ;
    if (classIndex < gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.count ()) {
      f = gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.count ()) {
          f = gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inVarMap, constin_inFunctionMap, constin_constantMap, constin_leftVarBDDStartBit, constin_leftVarBDDBitCount, constin_inArgOldVarVarBDDBitCount, io_ioArgOldVarVarValueSet, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension Getter '@decoratedInstructionList generateCCode'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_generateCCode (const GALGAS_decoratedInstructionList & inObject,
                                             const GALGAS_string & constinArgument_inIndentationString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  const GALGAS_decoratedInstructionList temp_0 = inObject ;
  cEnumerator_decoratedInstructionList enumerator_4139 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4139.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_generateCCode ((const cPtr_decoratedInstruction *) enumerator_4139.current (HERE).getter_mDecoratedInstruction (HERE).ptr (), constinArgument_inIndentationString, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 108)) ;
    enumerator_4139.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Abstract extension getter '@decoratedInstruction generateCCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_decoratedInstruction_generateCCode> gExtensionGetterTable_decoratedInstruction_generateCCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_generateCCode (const int32_t inClassIndex,
                                         enterExtensionGetter_decoratedInstruction_generateCCode inGetter) {
  gExtensionGetterTable_decoratedInstruction_generateCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_decoratedInstruction_generateCCode (void) {
  gExtensionGetterTable_decoratedInstruction_generateCCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_decoratedInstruction_generateCCode (NULL,
                                                               freeExtensionGetter_decoratedInstruction_generateCCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_generateCCode (const cPtr_decoratedInstruction * inObject,
                                                 const GALGAS_string in_inIndentationString,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_decoratedInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_decoratedInstruction_generateCCode f = NULL ;
    if (classIndex < gExtensionGetterTable_decoratedInstruction_generateCCode.count ()) {
      f = gExtensionGetterTable_decoratedInstruction_generateCCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_decoratedInstruction_generateCCode.count ()) {
           f = gExtensionGetterTable_decoratedInstruction_generateCCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_decoratedInstruction_generateCCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inIndentationString, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Abstract extension getter '@decoratedAssignmentSourceExpression generateSourceExpressionCCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode> gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_generateSourceExpressionCCode (const int32_t inClassIndex,
                                                         enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode (NULL,
                                                                                              freeExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                 const GALGAS_unifiedScalarTypeMap_2D_proxy in_inTargetTypeProxy,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_decoratedAssignmentSourceExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode f = NULL ;
    if (classIndex < gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.count ()) {
      f = gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.count ()) {
           f = gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inTargetTypeProxy, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Abstract extension getter '@decoratedExpression generateExpressionCCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_decoratedExpression_generateExpressionCCode> gExtensionGetterTable_decoratedExpression_generateExpressionCCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedExpression_generateExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedExpression_generateExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_decoratedExpression_generateExpressionCCode (void) {
  gExtensionGetterTable_decoratedExpression_generateExpressionCCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_decoratedExpression_generateExpressionCCode (NULL,
                                                                        freeExtensionGetter_decoratedExpression_generateExpressionCCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_decoratedExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_decoratedExpression_generateExpressionCCode f = NULL ;
    if (classIndex < gExtensionGetterTable_decoratedExpression_generateExpressionCCode.count ()) {
      f = gExtensionGetterTable_decoratedExpression_generateExpressionCCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_decoratedExpression_generateExpressionCCode.count ()) {
           f = gExtensionGetterTable_decoratedExpression_generateExpressionCCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_decoratedExpression_generateExpressionCCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Abstract extension getter '@decoratedComparisonRightOperand generateExpressionCCode'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode> gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode (void) {
  gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_decoratedComparisonRightOperand_generateExpressionCCode (NULL,
                                                                                    freeExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_generateExpressionCCode (const cPtr_decoratedComparisonRightOperand * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_decoratedComparisonRightOperand) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode f = NULL ;
    if (classIndex < gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.count ()) {
      f = gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.count ()) {
           f = gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList_2D_element::GALGAS_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList_2D_element::~ GALGAS_instructionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList_2D_element::GALGAS_instructionList_2D_element (const GALGAS_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList_2D_element GALGAS_instructionList_2D_element::constructor_new (const GALGAS_instruction & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_instructionList_2D_element::objectCompare (const GALGAS_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instruction GALGAS_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @instructionList-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionList_2D_element ("instructionList-element",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList_2D_element GALGAS_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_instructionList_2D_element result ;
  const GALGAS_instructionList_2D_element * p = (const GALGAS_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList_2D_element::GALGAS_switchCaseList_2D_element (void) :
mProperty_mConstantNameList (),
mProperty_mEndOfConstantList (),
mProperty_mInstructionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList_2D_element::~ GALGAS_switchCaseList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList_2D_element::GALGAS_switchCaseList_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                    const GALGAS_location & inOperand1,
                                                                    const GALGAS_instructionList & inOperand2) :
mProperty_mConstantNameList (inOperand0),
mProperty_mEndOfConstantList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList_2D_element GALGAS_switchCaseList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchCaseList_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                           GALGAS_location::constructor_nowhere (HERE),
                                           GALGAS_instructionList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList_2D_element GALGAS_switchCaseList_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                    const GALGAS_location & inOperand1,
                                                                                    const GALGAS_instructionList & inOperand2 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchCaseList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_switchCaseList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_switchCaseList_2D_element::objectCompare (const GALGAS_switchCaseList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantNameList.objectCompare (inOperand.mProperty_mConstantNameList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfConstantList.objectCompare (inOperand.mProperty_mEndOfConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_switchCaseList_2D_element::isValid (void) const {
  return mProperty_mConstantNameList.isValid () && mProperty_mEndOfConstantList.isValid () && mProperty_mInstructionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList_2D_element::drop (void) {
  mProperty_mConstantNameList.drop () ;
  mProperty_mEndOfConstantList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchCaseList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @switchCaseList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_switchCaseList_2D_element::getter_mConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_switchCaseList_2D_element::getter_mEndOfConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_switchCaseList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @switchCaseList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchCaseList_2D_element ("switchCaseList-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchCaseList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchCaseList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchCaseList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList_2D_element GALGAS_switchCaseList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchCaseList_2D_element result ;
  const GALGAS_switchCaseList_2D_element * p = (const GALGAS_switchCaseList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchCaseList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList_2D_element::GALGAS_decoratedInstructionList_2D_element (void) :
mProperty_mDecoratedInstruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList_2D_element::~ GALGAS_decoratedInstructionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList_2D_element::GALGAS_decoratedInstructionList_2D_element (const GALGAS_decoratedInstruction & inOperand0) :
mProperty_mDecoratedInstruction (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList_2D_element GALGAS_decoratedInstructionList_2D_element::constructor_new (const GALGAS_decoratedInstruction & inOperand0 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_decoratedInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedInstructionList_2D_element::objectCompare (const GALGAS_decoratedInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedInstruction.objectCompare (inOperand.mProperty_mDecoratedInstruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedInstructionList_2D_element::isValid (void) const {
  return mProperty_mDecoratedInstruction.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList_2D_element::drop (void) {
  mProperty_mDecoratedInstruction.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedInstructionList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @decoratedInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDecoratedInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstruction GALGAS_decoratedInstructionList_2D_element::getter_mDecoratedInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedInstruction ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @decoratedInstructionList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedInstructionList_2D_element ("decoratedInstructionList-element",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedInstructionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList_2D_element GALGAS_decoratedInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedInstructionList_2D_element result ;
  const GALGAS_decoratedInstructionList_2D_element * p = (const GALGAS_decoratedInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList_2D_element::GALGAS_switchDecoratedCaseList_2D_element (void) :
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList_2D_element::~ GALGAS_switchDecoratedCaseList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList_2D_element::GALGAS_switchDecoratedCaseList_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                      const GALGAS_decoratedInstructionList & inOperand1) :
mProperty_mConstantNameList (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList_2D_element GALGAS_switchDecoratedCaseList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchDecoratedCaseList_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                    GALGAS_decoratedInstructionList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList_2D_element GALGAS_switchDecoratedCaseList_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                                      const GALGAS_decoratedInstructionList & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchDecoratedCaseList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_switchDecoratedCaseList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_switchDecoratedCaseList_2D_element::objectCompare (const GALGAS_switchDecoratedCaseList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantNameList.objectCompare (inOperand.mProperty_mConstantNameList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_switchDecoratedCaseList_2D_element::isValid (void) const {
  return mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList_2D_element::drop (void) {
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_switchDecoratedCaseList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @switchDecoratedCaseList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_switchDecoratedCaseList_2D_element::getter_mConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_switchDecoratedCaseList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @switchDecoratedCaseList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchDecoratedCaseList_2D_element ("switchDecoratedCaseList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchDecoratedCaseList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchDecoratedCaseList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchDecoratedCaseList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchDecoratedCaseList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList_2D_element GALGAS_switchDecoratedCaseList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_switchDecoratedCaseList_2D_element result ;
  const GALGAS_switchDecoratedCaseList_2D_element * p = (const GALGAS_switchDecoratedCaseList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchDecoratedCaseList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchDecoratedCaseList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay_2D_element::GALGAS_machineVarListForDisplay_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mBDDStartIndex (),
mProperty_mBDDBitCount (),
mProperty_mValueList (),
mProperty_mColumnLength () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay_2D_element::~ GALGAS_machineVarListForDisplay_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay_2D_element::GALGAS_machineVarListForDisplay_2D_element (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_uint & inOperand1,
                                                                                        const GALGAS_uint & inOperand2,
                                                                                        const GALGAS_lstringlist & inOperand3,
                                                                                        const GALGAS_uint & inOperand4) :
mProperty_mAttributeName (inOperand0),
mProperty_mBDDStartIndex (inOperand1),
mProperty_mBDDBitCount (inOperand2),
mProperty_mValueList (inOperand3),
mProperty_mColumnLength (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay_2D_element GALGAS_machineVarListForDisplay_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarListForDisplay_2D_element (GALGAS_string::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                                     GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay_2D_element GALGAS_machineVarListForDisplay_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_uint & inOperand1,
                                                                                                        const GALGAS_uint & inOperand2,
                                                                                                        const GALGAS_lstringlist & inOperand3,
                                                                                                        const GALGAS_uint & inOperand4 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_machineVarListForDisplay_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_machineVarListForDisplay_2D_element::objectCompare (const GALGAS_machineVarListForDisplay_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBDDStartIndex.objectCompare (inOperand.mProperty_mBDDStartIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBDDBitCount.objectCompare (inOperand.mProperty_mBDDBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValueList.objectCompare (inOperand.mProperty_mValueList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnLength.objectCompare (inOperand.mProperty_mColumnLength) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_machineVarListForDisplay_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mBDDStartIndex.isValid () && mProperty_mBDDBitCount.isValid () && mProperty_mValueList.isValid () && mProperty_mColumnLength.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mBDDStartIndex.drop () ;
  mProperty_mBDDBitCount.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mColumnLength.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarListForDisplay_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @machineVarListForDisplay-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBDDStartIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBDDBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnLength.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_machineVarListForDisplay_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarListForDisplay_2D_element::getter_mBDDStartIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDStartIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarListForDisplay_2D_element::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDBitCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_machineVarListForDisplay_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarListForDisplay_2D_element::getter_mColumnLength (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnLength ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @machineVarListForDisplay-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarListForDisplay_2D_element ("machineVarListForDisplay-element",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineVarListForDisplay_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarListForDisplay_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineVarListForDisplay_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarListForDisplay_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay_2D_element GALGAS_machineVarListForDisplay_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay_2D_element result ;
  const GALGAS_machineVarListForDisplay_2D_element * p = (const GALGAS_machineVarListForDisplay_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineVarListForDisplay_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineVarListForDisplay-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_constantAsComparisonRightOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constantAsComparisonRightOperand * p = (const cPtr_constantAsComparisonRightOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constantAsComparisonRightOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_constantAsComparisonRightOperand::objectCompare (const GALGAS_constantAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsComparisonRightOperand::GALGAS_constantAsComparisonRightOperand (void) :
GALGAS_comparisonRightOperand () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsComparisonRightOperand GALGAS_constantAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_constantAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsComparisonRightOperand::GALGAS_constantAsComparisonRightOperand (const cPtr_constantAsComparisonRightOperand * inSourcePtr) :
GALGAS_comparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constantAsComparisonRightOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsComparisonRightOperand GALGAS_constantAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mConstantName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constantAsComparisonRightOperand result ;
  if (inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constantAsComparisonRightOperand (inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_constantAsComparisonRightOperand::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constantAsComparisonRightOperand * p = (const cPtr_constantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constantAsComparisonRightOperand) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_constantAsComparisonRightOperand::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @constantAsComparisonRightOperand class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_constantAsComparisonRightOperand::cPtr_constantAsComparisonRightOperand (const GALGAS_lstring & in_mConstantName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_comparisonRightOperand (THERE),
mProperty_mConstantName (in_mConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_constantAsComparisonRightOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ;
}

void cPtr_constantAsComparisonRightOperand::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@constantAsComparisonRightOperand:" ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_constantAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constantAsComparisonRightOperand (mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @constantAsComparisonRightOperand type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ("constantAsComparisonRightOperand",
                                                         & kTypeDescriptor_GALGAS_comparisonRightOperand) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constantAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constantAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsComparisonRightOperand GALGAS_constantAsComparisonRightOperand::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constantAsComparisonRightOperand result ;
  const GALGAS_constantAsComparisonRightOperand * p = (const GALGAS_constantAsComparisonRightOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantAsComparisonRightOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantAsComparisonRightOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_attributeAsComparisonRightOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_attributeAsComparisonRightOperand * p = (const cPtr_attributeAsComparisonRightOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasOldQualifier.objectCompare (p->mProperty_mHasOldQualifier) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_attributeAsComparisonRightOperand::objectCompare (const GALGAS_attributeAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeAsComparisonRightOperand::GALGAS_attributeAsComparisonRightOperand (void) :
GALGAS_comparisonRightOperand () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeAsComparisonRightOperand GALGAS_attributeAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_attributeAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeAsComparisonRightOperand::GALGAS_attributeAsComparisonRightOperand (const cPtr_attributeAsComparisonRightOperand * inSourcePtr) :
GALGAS_comparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_attributeAsComparisonRightOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeAsComparisonRightOperand GALGAS_attributeAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName,
                                                                                                    const GALGAS_bool & inAttribute_mHasOldQualifier
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_attributeAsComparisonRightOperand result ;
  if (inAttribute_mAttributeName.isValid () && inAttribute_mHasOldQualifier.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_attributeAsComparisonRightOperand (inAttribute_mAttributeName, inAttribute_mHasOldQualifier COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_attributeAsComparisonRightOperand::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_attributeAsComparisonRightOperand * p = (const cPtr_attributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_attributeAsComparisonRightOperand::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_attributeAsComparisonRightOperand::getter_mHasOldQualifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_attributeAsComparisonRightOperand * p = (const cPtr_attributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
    result = p->mProperty_mHasOldQualifier ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_attributeAsComparisonRightOperand::getter_mHasOldQualifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasOldQualifier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @attributeAsComparisonRightOperand class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_attributeAsComparisonRightOperand::cPtr_attributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName,
                                                                                const GALGAS_bool & in_mHasOldQualifier
                                                                                COMMA_LOCATION_ARGS) :
cPtr_comparisonRightOperand (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mHasOldQualifier (in_mHasOldQualifier) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_attributeAsComparisonRightOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ;
}

void cPtr_attributeAsComparisonRightOperand::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@attributeAsComparisonRightOperand:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasOldQualifier.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_attributeAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_attributeAsComparisonRightOperand (mProperty_mAttributeName, mProperty_mHasOldQualifier COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @attributeAsComparisonRightOperand type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ("attributeAsComparisonRightOperand",
                                                          & kTypeDescriptor_GALGAS_comparisonRightOperand) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_attributeAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_attributeAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeAsComparisonRightOperand GALGAS_attributeAsComparisonRightOperand::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_attributeAsComparisonRightOperand result ;
  const GALGAS_attributeAsComparisonRightOperand * p = (const GALGAS_attributeAsComparisonRightOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeAsComparisonRightOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeAsComparisonRightOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_comparisonInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonInExpression * p = (const cPtr_comparisonInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_comparisonInExpression::objectCompare (const GALGAS_comparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonInExpression::GALGAS_comparisonInExpression (void) :
GALGAS_expression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonInExpression::GALGAS_comparisonInExpression (const cPtr_comparisonInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonInExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonInExpression GALGAS_comparisonInExpression::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName,
                                                                              const GALGAS_enumComparisonOperator & inAttribute_mOperator,
                                                                              const GALGAS_comparisonRightOperand & inAttribute_mRightOperand
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_comparisonInExpression result ;
  if (inAttribute_mAttributeName.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonInExpression (inAttribute_mAttributeName, inAttribute_mOperator, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_comparisonInExpression::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonInExpression * p = (const cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_comparisonInExpression::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumComparisonOperator GALGAS_comparisonInExpression::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumComparisonOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonInExpression * p = (const cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumComparisonOperator cPtr_comparisonInExpression::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonRightOperand GALGAS_comparisonInExpression::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_comparisonRightOperand result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonInExpression * p = (const cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonRightOperand cPtr_comparisonInExpression::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @comparisonInExpression class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_comparisonInExpression::cPtr_comparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                                          const GALGAS_enumComparisonOperator & in_mOperator,
                                                          const GALGAS_comparisonRightOperand & in_mRightOperand
                                                          COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mOperator (in_mOperator),
mProperty_mRightOperand (in_mRightOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_comparisonInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonInExpression ;
}

void cPtr_comparisonInExpression::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@comparisonInExpression:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_comparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonInExpression (mProperty_mAttributeName, mProperty_mOperator, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @comparisonInExpression type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonInExpression ("comparisonInExpression",
                                               & kTypeDescriptor_GALGAS_expression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_comparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonInExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_comparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonInExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonInExpression GALGAS_comparisonInExpression::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonInExpression result ;
  const GALGAS_comparisonInExpression * p = (const GALGAS_comparisonInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_varAsAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varAsAssignmentSourceExpression * p = (const cPtr_varAsAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varAsAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mSourceVarName.objectCompare (p->mProperty_mSourceVarName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_varAsAssignmentSourceExpression::objectCompare (const GALGAS_varAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varAsAssignmentSourceExpression::GALGAS_varAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varAsAssignmentSourceExpression GALGAS_varAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_varAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varAsAssignmentSourceExpression::GALGAS_varAsAssignmentSourceExpression (const cPtr_varAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varAsAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varAsAssignmentSourceExpression GALGAS_varAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mSourceVarName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varAsAssignmentSourceExpression result ;
  if (inAttribute_mSourceVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varAsAssignmentSourceExpression (inAttribute_mSourceVarName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_varAsAssignmentSourceExpression::getter_mSourceVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varAsAssignmentSourceExpression * p = (const cPtr_varAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAsAssignmentSourceExpression) ;
    result = p->mProperty_mSourceVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_varAsAssignmentSourceExpression::getter_mSourceVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @varAsAssignmentSourceExpression class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_varAsAssignmentSourceExpression::cPtr_varAsAssignmentSourceExpression (const GALGAS_lstring & in_mSourceVarName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mSourceVarName (in_mSourceVarName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_varAsAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ;
}

void cPtr_varAsAssignmentSourceExpression::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varAsAssignmentSourceExpression:" ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_varAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varAsAssignmentSourceExpression (mProperty_mSourceVarName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @varAsAssignmentSourceExpression type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ("varAsAssignmentSourceExpression",
                                                        & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_varAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_varAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varAsAssignmentSourceExpression GALGAS_varAsAssignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varAsAssignmentSourceExpression result ;
  const GALGAS_varAsAssignmentSourceExpression * p = (const GALGAS_varAsAssignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varAsAssignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varAsAssignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_constantAsAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constantAsAssignmentSourceExpression * p = (const cPtr_constantAsAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constantAsAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_constantAsAssignmentSourceExpression::objectCompare (const GALGAS_constantAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsAssignmentSourceExpression::GALGAS_constantAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsAssignmentSourceExpression GALGAS_constantAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_constantAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsAssignmentSourceExpression::GALGAS_constantAsAssignmentSourceExpression (const cPtr_constantAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constantAsAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsAssignmentSourceExpression GALGAS_constantAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mConstantName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_constantAsAssignmentSourceExpression result ;
  if (inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constantAsAssignmentSourceExpression (inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_constantAsAssignmentSourceExpression::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constantAsAssignmentSourceExpression * p = (const cPtr_constantAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constantAsAssignmentSourceExpression) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_constantAsAssignmentSourceExpression::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @constantAsAssignmentSourceExpression class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_constantAsAssignmentSourceExpression::cPtr_constantAsAssignmentSourceExpression (const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mConstantName (in_mConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_constantAsAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ;
}

void cPtr_constantAsAssignmentSourceExpression::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@constantAsAssignmentSourceExpression:" ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_constantAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constantAsAssignmentSourceExpression (mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @constantAsAssignmentSourceExpression type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ("constantAsAssignmentSourceExpression",
                                                             & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constantAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constantAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constantAsAssignmentSourceExpression GALGAS_constantAsAssignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constantAsAssignmentSourceExpression result ;
  const GALGAS_constantAsAssignmentSourceExpression * p = (const GALGAS_constantAsAssignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantAsAssignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantAsAssignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_functionAsAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionAsAssignmentSourceExpression * p = (const cPtr_functionAsAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperandName.objectCompare (p->mProperty_mOperandName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_functionAsAssignmentSourceExpression::objectCompare (const GALGAS_functionAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionAsAssignmentSourceExpression::GALGAS_functionAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionAsAssignmentSourceExpression GALGAS_functionAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionAsAssignmentSourceExpression::GALGAS_functionAsAssignmentSourceExpression (const cPtr_functionAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionAsAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionAsAssignmentSourceExpression GALGAS_functionAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                                          const GALGAS_lstring & inAttribute_mOperandName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionAsAssignmentSourceExpression result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mOperandName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionAsAssignmentSourceExpression (inAttribute_mFunctionName, inAttribute_mOperandName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionAsAssignmentSourceExpression::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionAsAssignmentSourceExpression * p = (const cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_functionAsAssignmentSourceExpression::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionAsAssignmentSourceExpression::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionAsAssignmentSourceExpression * p = (const cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
    result = p->mProperty_mOperandName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_functionAsAssignmentSourceExpression::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @functionAsAssignmentSourceExpression class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_functionAsAssignmentSourceExpression::cPtr_functionAsAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                                                      const GALGAS_lstring & in_mOperandName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mOperandName (in_mOperandName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_functionAsAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ;
}

void cPtr_functionAsAssignmentSourceExpression::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@functionAsAssignmentSourceExpression:" ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperandName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_functionAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionAsAssignmentSourceExpression (mProperty_mFunctionName, mProperty_mOperandName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @functionAsAssignmentSourceExpression type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ("functionAsAssignmentSourceExpression",
                                                             & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionAsAssignmentSourceExpression GALGAS_functionAsAssignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionAsAssignmentSourceExpression result ;
  const GALGAS_functionAsAssignmentSourceExpression * p = (const GALGAS_functionAsAssignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionAsAssignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionAsAssignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_assignmentInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstruction * p = (const cPtr_assignmentInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarName.objectCompare (p->mProperty_mTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_assignmentInstruction::objectCompare (const GALGAS_assignmentInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstruction::GALGAS_assignmentInstruction (void) :
GALGAS_instruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstruction::GALGAS_assignmentInstruction (const cPtr_assignmentInstruction * inSourcePtr) :
GALGAS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstruction GALGAS_assignmentInstruction::constructor_new (const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                            const GALGAS_assignmentSourceExpression & inAttribute_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstruction result ;
  if (inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstruction (inAttribute_mTargetVarName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_assignmentInstruction::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstruction * p = (const cPtr_assignmentInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstruction) ;
    result = p->mProperty_mTargetVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_assignmentInstruction::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentSourceExpression GALGAS_assignmentInstruction::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_assignmentSourceExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstruction * p = (const cPtr_assignmentInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstruction) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentSourceExpression cPtr_assignmentInstruction::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @assignmentInstruction class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assignmentInstruction::cPtr_assignmentInstruction (const GALGAS_lstring & in_mTargetVarName,
                                                        const GALGAS_assignmentSourceExpression & in_mSourceExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_instruction (THERE),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_assignmentInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstruction ;
}

void cPtr_assignmentInstruction::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@assignmentInstruction:" ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_assignmentInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstruction (mProperty_mTargetVarName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @assignmentInstruction type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstruction ("assignmentInstruction",
                                              & kTypeDescriptor_GALGAS_instruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignmentInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignmentInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstruction GALGAS_assignmentInstruction::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstruction result ;
  const GALGAS_assignmentInstruction * p = (const GALGAS_assignmentInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_switchInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstruction * p = (const cPtr_switchInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mSWITCHinstructionLocation.objectCompare (p->mProperty_mSWITCHinstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchCaseList.objectCompare (p->mProperty_mSwitchCaseList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSwitchExpression.objectCompare (p->mProperty_mEndOfSwitchExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_switchInstruction::objectCompare (const GALGAS_switchInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstruction::GALGAS_switchInstruction (void) :
GALGAS_instruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstruction GALGAS_switchInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_switchInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_switchCaseList::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstruction::GALGAS_switchInstruction (const cPtr_switchInstruction * inSourcePtr) :
GALGAS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstruction GALGAS_switchInstruction::constructor_new (const GALGAS_location & inAttribute_mSWITCHinstructionLocation,
                                                                    const GALGAS_lstring & inAttribute_mVariableName,
                                                                    const GALGAS_switchCaseList & inAttribute_mSwitchCaseList,
                                                                    const GALGAS_location & inAttribute_mEndOfSwitchExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_switchInstruction result ;
  if (inAttribute_mSWITCHinstructionLocation.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSwitchCaseList.isValid () && inAttribute_mEndOfSwitchExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstruction (inAttribute_mSWITCHinstructionLocation, inAttribute_mVariableName, inAttribute_mSwitchCaseList, inAttribute_mEndOfSwitchExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_switchInstruction::getter_mSWITCHinstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstruction * p = (const cPtr_switchInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstruction) ;
    result = p->mProperty_mSWITCHinstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_switchInstruction::getter_mSWITCHinstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSWITCHinstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_switchInstruction::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstruction * p = (const cPtr_switchInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstruction) ;
    result = p->mProperty_mVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_switchInstruction::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList GALGAS_switchInstruction::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchCaseList result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstruction * p = (const cPtr_switchInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstruction) ;
    result = p->mProperty_mSwitchCaseList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchCaseList cPtr_switchInstruction::getter_mSwitchCaseList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchCaseList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_switchInstruction::getter_mEndOfSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstruction * p = (const cPtr_switchInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstruction) ;
    result = p->mProperty_mEndOfSwitchExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_switchInstruction::getter_mEndOfSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSwitchExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @switchInstruction class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_switchInstruction::cPtr_switchInstruction (const GALGAS_location & in_mSWITCHinstructionLocation,
                                                const GALGAS_lstring & in_mVariableName,
                                                const GALGAS_switchCaseList & in_mSwitchCaseList,
                                                const GALGAS_location & in_mEndOfSwitchExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_instruction (THERE),
mProperty_mSWITCHinstructionLocation (in_mSWITCHinstructionLocation),
mProperty_mVariableName (in_mVariableName),
mProperty_mSwitchCaseList (in_mSwitchCaseList),
mProperty_mEndOfSwitchExpression (in_mEndOfSwitchExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_switchInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstruction ;
}

void cPtr_switchInstruction::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@switchInstruction:" ;
  mProperty_mSWITCHinstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchCaseList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_switchInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstruction (mProperty_mSWITCHinstructionLocation, mProperty_mVariableName, mProperty_mSwitchCaseList, mProperty_mEndOfSwitchExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @switchInstruction type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstruction ("switchInstruction",
                                          & kTypeDescriptor_GALGAS_instruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchInstruction GALGAS_switchInstruction::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchInstruction result ;
  const GALGAS_switchInstruction * p = (const GALGAS_switchInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_decoratedComparisonInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedComparisonInExpression * p = (const cPtr_decoratedComparisonInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_decoratedComparisonInExpression::objectCompare (const GALGAS_decoratedComparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonInExpression::GALGAS_decoratedComparisonInExpression (void) :
GALGAS_decoratedExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonInExpression::GALGAS_decoratedComparisonInExpression (const cPtr_decoratedComparisonInExpression * inSourcePtr) :
GALGAS_decoratedExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedComparisonInExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonInExpression GALGAS_decoratedComparisonInExpression::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName,
                                                                                                const GALGAS_enumComparisonOperator & inAttribute_mOperator,
                                                                                                const GALGAS_decoratedComparisonRightOperand & inAttribute_mRightOperand
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedComparisonInExpression result ;
  if (inAttribute_mAttributeName.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedComparisonInExpression (inAttribute_mAttributeName, inAttribute_mOperator, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedComparisonInExpression::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedComparisonInExpression * p = (const cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedComparisonInExpression::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumComparisonOperator GALGAS_decoratedComparisonInExpression::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumComparisonOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedComparisonInExpression * p = (const cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumComparisonOperator cPtr_decoratedComparisonInExpression::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonRightOperand GALGAS_decoratedComparisonInExpression::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedComparisonRightOperand result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedComparisonInExpression * p = (const cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonRightOperand cPtr_decoratedComparisonInExpression::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @decoratedComparisonInExpression class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedComparisonInExpression::cPtr_decoratedComparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                                                            const GALGAS_enumComparisonOperator & in_mOperator,
                                                                            const GALGAS_decoratedComparisonRightOperand & in_mRightOperand
                                                                            COMMA_LOCATION_ARGS) :
cPtr_decoratedExpression (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mOperator (in_mOperator),
mProperty_mRightOperand (in_mRightOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedComparisonInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedComparisonInExpression ;
}

void cPtr_decoratedComparisonInExpression::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@decoratedComparisonInExpression:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedComparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedComparisonInExpression (mProperty_mAttributeName, mProperty_mOperator, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @decoratedComparisonInExpression type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedComparisonInExpression ("decoratedComparisonInExpression",
                                                        & kTypeDescriptor_GALGAS_decoratedExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedComparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedComparisonInExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedComparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedComparisonInExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedComparisonInExpression GALGAS_decoratedComparisonInExpression::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedComparisonInExpression result ;
  const GALGAS_decoratedComparisonInExpression * p = (const GALGAS_decoratedComparisonInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedComparisonInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedComparisonInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_decoratedConstantAsComparisonRightOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedConstantAsComparisonRightOperand * p = (const cPtr_decoratedConstantAsComparisonRightOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantTypeProxy.objectCompare (p->mProperty_mConstantTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantValue.objectCompare (p->mProperty_mConstantValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_decoratedConstantAsComparisonRightOperand::objectCompare (const GALGAS_decoratedConstantAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedConstantAsComparisonRightOperand::GALGAS_decoratedConstantAsComparisonRightOperand (void) :
GALGAS_decoratedComparisonRightOperand () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedConstantAsComparisonRightOperand GALGAS_decoratedConstantAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                                                            GALGAS_lstring::constructor_default (HERE),
                                                                            GALGAS_uint::constructor_default (HERE)
                                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedConstantAsComparisonRightOperand::GALGAS_decoratedConstantAsComparisonRightOperand (const cPtr_decoratedConstantAsComparisonRightOperand * inSourcePtr) :
GALGAS_decoratedComparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedConstantAsComparisonRightOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedConstantAsComparisonRightOperand GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_proxy & inAttribute_mConstantTypeProxy,
                                                                                                                    const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                    const GALGAS_uint & inAttribute_mConstantValue
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedConstantAsComparisonRightOperand result ;
  if (inAttribute_mConstantTypeProxy.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mConstantValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedConstantAsComparisonRightOperand (inAttribute_mConstantTypeProxy, inAttribute_mConstantName, inAttribute_mConstantValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_decoratedConstantAsComparisonRightOperand::getter_mConstantTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedConstantAsComparisonRightOperand * p = (const cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    result = p->mProperty_mConstantTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy cPtr_decoratedConstantAsComparisonRightOperand::getter_mConstantTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedConstantAsComparisonRightOperand::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedConstantAsComparisonRightOperand * p = (const cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedConstantAsComparisonRightOperand::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_decoratedConstantAsComparisonRightOperand::getter_mConstantValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedConstantAsComparisonRightOperand * p = (const cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    result = p->mProperty_mConstantValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_decoratedConstantAsComparisonRightOperand::getter_mConstantValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @decoratedConstantAsComparisonRightOperand class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedConstantAsComparisonRightOperand::cPtr_decoratedConstantAsComparisonRightOperand (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mConstantTypeProxy,
                                                                                                const GALGAS_lstring & in_mConstantName,
                                                                                                const GALGAS_uint & in_mConstantValue
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_decoratedComparisonRightOperand (THERE),
mProperty_mConstantTypeProxy (in_mConstantTypeProxy),
mProperty_mConstantName (in_mConstantName),
mProperty_mConstantValue (in_mConstantValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedConstantAsComparisonRightOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ;
}

void cPtr_decoratedConstantAsComparisonRightOperand::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@decoratedConstantAsComparisonRightOperand:" ;
  mProperty_mConstantTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedConstantAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedConstantAsComparisonRightOperand (mProperty_mConstantTypeProxy, mProperty_mConstantName, mProperty_mConstantValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @decoratedConstantAsComparisonRightOperand type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ("decoratedConstantAsComparisonRightOperand",
                                                                  & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedConstantAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedConstantAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedConstantAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedConstantAsComparisonRightOperand GALGAS_decoratedConstantAsComparisonRightOperand::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedConstantAsComparisonRightOperand result ;
  const GALGAS_decoratedConstantAsComparisonRightOperand * p = (const GALGAS_decoratedConstantAsComparisonRightOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedConstantAsComparisonRightOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedConstantAsComparisonRightOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_decoratedAttributeAsComparisonRightOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedAttributeAsComparisonRightOperand * p = (const cPtr_decoratedAttributeAsComparisonRightOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedAttributeAsComparisonRightOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_decoratedAttributeAsComparisonRightOperand::objectCompare (const GALGAS_decoratedAttributeAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAttributeAsComparisonRightOperand::GALGAS_decoratedAttributeAsComparisonRightOperand (void) :
GALGAS_decoratedComparisonRightOperand () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAttributeAsComparisonRightOperand GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAttributeAsComparisonRightOperand::GALGAS_decoratedAttributeAsComparisonRightOperand (const cPtr_decoratedAttributeAsComparisonRightOperand * inSourcePtr) :
GALGAS_decoratedComparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedAttributeAsComparisonRightOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAttributeAsComparisonRightOperand GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAttributeAsComparisonRightOperand result ;
  if (inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedAttributeAsComparisonRightOperand (inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedAttributeAsComparisonRightOperand::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedAttributeAsComparisonRightOperand * p = (const cPtr_decoratedAttributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedAttributeAsComparisonRightOperand) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedAttributeAsComparisonRightOperand::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @decoratedAttributeAsComparisonRightOperand class                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedAttributeAsComparisonRightOperand::cPtr_decoratedAttributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_decoratedComparisonRightOperand (THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedAttributeAsComparisonRightOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ;
}

void cPtr_decoratedAttributeAsComparisonRightOperand::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@decoratedAttributeAsComparisonRightOperand:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedAttributeAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedAttributeAsComparisonRightOperand (mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @decoratedAttributeAsComparisonRightOperand type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ("decoratedAttributeAsComparisonRightOperand",
                                                                   & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedAttributeAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedAttributeAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedAttributeAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAttributeAsComparisonRightOperand GALGAS_decoratedAttributeAsComparisonRightOperand::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAttributeAsComparisonRightOperand result ;
  const GALGAS_decoratedAttributeAsComparisonRightOperand * p = (const GALGAS_decoratedAttributeAsComparisonRightOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedAttributeAsComparisonRightOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedAttributeAsComparisonRightOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_assignmentDecoratedInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentDecoratedInstruction * p = (const cPtr_assignmentDecoratedInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetTypeProxy.objectCompare (p->mProperty_mTargetTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarName.objectCompare (p->mProperty_mTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_assignmentDecoratedInstruction::objectCompare (const GALGAS_assignmentDecoratedInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentDecoratedInstruction::GALGAS_assignmentDecoratedInstruction (void) :
GALGAS_decoratedInstruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentDecoratedInstruction::GALGAS_assignmentDecoratedInstruction (const cPtr_assignmentDecoratedInstruction * inSourcePtr) :
GALGAS_decoratedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentDecoratedInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentDecoratedInstruction GALGAS_assignmentDecoratedInstruction::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_proxy & inAttribute_mTargetTypeProxy,
                                                                                              const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                              const GALGAS_decoratedAssignmentSourceExpression & inAttribute_mSourceExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_assignmentDecoratedInstruction result ;
  if (inAttribute_mTargetTypeProxy.isValid () && inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentDecoratedInstruction (inAttribute_mTargetTypeProxy, inAttribute_mTargetVarName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_assignmentDecoratedInstruction::getter_mTargetTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedScalarTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentDecoratedInstruction * p = (const cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    result = p->mProperty_mTargetTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy cPtr_assignmentDecoratedInstruction::getter_mTargetTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_assignmentDecoratedInstruction::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentDecoratedInstruction * p = (const cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    result = p->mProperty_mTargetVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_assignmentDecoratedInstruction::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAssignmentSourceExpression GALGAS_assignmentDecoratedInstruction::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedAssignmentSourceExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentDecoratedInstruction * p = (const cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedAssignmentSourceExpression cPtr_assignmentDecoratedInstruction::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @assignmentDecoratedInstruction class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assignmentDecoratedInstruction::cPtr_assignmentDecoratedInstruction (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTargetTypeProxy,
                                                                          const GALGAS_lstring & in_mTargetVarName,
                                                                          const GALGAS_decoratedAssignmentSourceExpression & in_mSourceExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedInstruction (THERE),
mProperty_mTargetTypeProxy (in_mTargetTypeProxy),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_assignmentDecoratedInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ;
}

void cPtr_assignmentDecoratedInstruction::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@assignmentDecoratedInstruction:" ;
  mProperty_mTargetTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_assignmentDecoratedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentDecoratedInstruction (mProperty_mTargetTypeProxy, mProperty_mTargetVarName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @assignmentDecoratedInstruction type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ("assignmentDecoratedInstruction",
                                                       & kTypeDescriptor_GALGAS_decoratedInstruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignmentDecoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignmentDecoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentDecoratedInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentDecoratedInstruction GALGAS_assignmentDecoratedInstruction::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_assignmentDecoratedInstruction result ;
  const GALGAS_assignmentDecoratedInstruction * p = (const GALGAS_assignmentDecoratedInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentDecoratedInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentDecoratedInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_switchDecoratedInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchDecoratedInstruction * p = (const cPtr_switchDecoratedInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchDecoratedInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchDecoratedCaseList.objectCompare (p->mProperty_mSwitchDecoratedCaseList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_switchDecoratedInstruction::objectCompare (const GALGAS_switchDecoratedInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedInstruction::GALGAS_switchDecoratedInstruction (void) :
GALGAS_decoratedInstruction () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedInstruction GALGAS_switchDecoratedInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_switchDecoratedInstruction::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_switchDecoratedCaseList::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedInstruction::GALGAS_switchDecoratedInstruction (const cPtr_switchDecoratedInstruction * inSourcePtr) :
GALGAS_decoratedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchDecoratedInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedInstruction GALGAS_switchDecoratedInstruction::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                                      const GALGAS_switchDecoratedCaseList & inAttribute_mSwitchDecoratedCaseList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchDecoratedInstruction result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mSwitchDecoratedCaseList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchDecoratedInstruction (inAttribute_mVarName, inAttribute_mSwitchDecoratedCaseList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_switchDecoratedInstruction::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchDecoratedInstruction * p = (const cPtr_switchDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchDecoratedInstruction) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_switchDecoratedInstruction::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList GALGAS_switchDecoratedInstruction::getter_mSwitchDecoratedCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchDecoratedCaseList result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchDecoratedInstruction * p = (const cPtr_switchDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchDecoratedInstruction) ;
    result = p->mProperty_mSwitchDecoratedCaseList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedCaseList cPtr_switchDecoratedInstruction::getter_mSwitchDecoratedCaseList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchDecoratedCaseList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @switchDecoratedInstruction class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_switchDecoratedInstruction::cPtr_switchDecoratedInstruction (const GALGAS_lstring & in_mVarName,
                                                                  const GALGAS_switchDecoratedCaseList & in_mSwitchDecoratedCaseList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_decoratedInstruction (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mSwitchDecoratedCaseList (in_mSwitchDecoratedCaseList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_switchDecoratedInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchDecoratedInstruction ;
}

void cPtr_switchDecoratedInstruction::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@switchDecoratedInstruction:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchDecoratedCaseList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_switchDecoratedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchDecoratedInstruction (mProperty_mVarName, mProperty_mSwitchDecoratedCaseList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @switchDecoratedInstruction type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchDecoratedInstruction ("switchDecoratedInstruction",
                                                   & kTypeDescriptor_GALGAS_decoratedInstruction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_switchDecoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchDecoratedInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_switchDecoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchDecoratedInstruction (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_switchDecoratedInstruction GALGAS_switchDecoratedInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_switchDecoratedInstruction result ;
  const GALGAS_switchDecoratedInstruction * p = (const GALGAS_switchDecoratedInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchDecoratedInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchDecoratedInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_attributeInDecoratedAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_attributeInDecoratedAssignmentSourceExpression * p = (const cPtr_attributeInDecoratedAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_attributeInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_attributeInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeInDecoratedAssignmentSourceExpression::GALGAS_attributeInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeInDecoratedAssignmentSourceExpression GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeInDecoratedAssignmentSourceExpression::GALGAS_attributeInDecoratedAssignmentSourceExpression (const cPtr_attributeInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeInDecoratedAssignmentSourceExpression GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_attributeInDecoratedAssignmentSourceExpression result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_attributeInDecoratedAssignmentSourceExpression (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_attributeInDecoratedAssignmentSourceExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_attributeInDecoratedAssignmentSourceExpression * p = (const cPtr_attributeInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_attributeInDecoratedAssignmentSourceExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @attributeInDecoratedAssignmentSourceExpression class                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_attributeInDecoratedAssignmentSourceExpression::cPtr_attributeInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mVarName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mVarName (in_mVarName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_attributeInDecoratedAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ;
}

void cPtr_attributeInDecoratedAssignmentSourceExpression::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@attributeInDecoratedAssignmentSourceExpression:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_attributeInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_attributeInDecoratedAssignmentSourceExpression (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @attributeInDecoratedAssignmentSourceExpression type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ("attributeInDecoratedAssignmentSourceExpression",
                                                                       & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_attributeInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_attributeInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_attributeInDecoratedAssignmentSourceExpression GALGAS_attributeInDecoratedAssignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_attributeInDecoratedAssignmentSourceExpression result ;
  const GALGAS_attributeInDecoratedAssignmentSourceExpression * p = (const GALGAS_attributeInDecoratedAssignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeInDecoratedAssignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeInDecoratedAssignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_cstInDecoratedAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_cstInDecoratedAssignmentSourceExpression * p = (const cPtr_cstInDecoratedAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumCstName.objectCompare (p->mProperty_mEnumCstName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBDDBitCount.objectCompare (p->mProperty_mBDDBitCount) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_cstInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_cstInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_cstInDecoratedAssignmentSourceExpression::GALGAS_cstInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_cstInDecoratedAssignmentSourceExpression GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                           GALGAS_uint::constructor_default (HERE),
                                                                           GALGAS_uint::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_cstInDecoratedAssignmentSourceExpression::GALGAS_cstInDecoratedAssignmentSourceExpression (const cPtr_cstInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_cstInDecoratedAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_cstInDecoratedAssignmentSourceExpression GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mEnumCstName,
                                                                                                                  const GALGAS_uint & inAttribute_mValue,
                                                                                                                  const GALGAS_uint & inAttribute_mBDDBitCount
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_cstInDecoratedAssignmentSourceExpression result ;
  if (inAttribute_mEnumCstName.isValid () && inAttribute_mValue.isValid () && inAttribute_mBDDBitCount.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_cstInDecoratedAssignmentSourceExpression (inAttribute_mEnumCstName, inAttribute_mValue, inAttribute_mBDDBitCount COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_cstInDecoratedAssignmentSourceExpression::getter_mEnumCstName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_cstInDecoratedAssignmentSourceExpression * p = (const cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mEnumCstName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_cstInDecoratedAssignmentSourceExpression::getter_mEnumCstName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumCstName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_cstInDecoratedAssignmentSourceExpression::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_cstInDecoratedAssignmentSourceExpression * p = (const cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_cstInDecoratedAssignmentSourceExpression::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_cstInDecoratedAssignmentSourceExpression::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_cstInDecoratedAssignmentSourceExpression * p = (const cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mBDDBitCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_cstInDecoratedAssignmentSourceExpression::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDBitCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          Pointer class for @cstInDecoratedAssignmentSourceExpression class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_cstInDecoratedAssignmentSourceExpression::cPtr_cstInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mEnumCstName,
                                                                                              const GALGAS_uint & in_mValue,
                                                                                              const GALGAS_uint & in_mBDDBitCount
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mEnumCstName (in_mEnumCstName),
mProperty_mValue (in_mValue),
mProperty_mBDDBitCount (in_mBDDBitCount) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_cstInDecoratedAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ;
}

void cPtr_cstInDecoratedAssignmentSourceExpression::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@cstInDecoratedAssignmentSourceExpression:" ;
  mProperty_mEnumCstName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBDDBitCount.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_cstInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_cstInDecoratedAssignmentSourceExpression (mProperty_mEnumCstName, mProperty_mValue, mProperty_mBDDBitCount COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @cstInDecoratedAssignmentSourceExpression type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ("cstInDecoratedAssignmentSourceExpression",
                                                                 & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_cstInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_cstInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_cstInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_cstInDecoratedAssignmentSourceExpression GALGAS_cstInDecoratedAssignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_cstInDecoratedAssignmentSourceExpression result ;
  const GALGAS_cstInDecoratedAssignmentSourceExpression * p = (const GALGAS_cstInDecoratedAssignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_cstInDecoratedAssignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("cstInDecoratedAssignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_functionInDecoratedAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionInDecoratedAssignmentSourceExpression * p = (const cPtr_functionInDecoratedAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperandName.objectCompare (p->mProperty_mOperandName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDecoratedFunctionValueList.objectCompare (p->mProperty_mDecoratedFunctionValueList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_functionInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_functionInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionInDecoratedAssignmentSourceExpression::GALGAS_functionInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionInDecoratedAssignmentSourceExpression GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_decoratedFunctionValueList::constructor_emptySortedList (HERE)
                                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionInDecoratedAssignmentSourceExpression::GALGAS_functionInDecoratedAssignmentSourceExpression (const cPtr_functionInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionInDecoratedAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionInDecoratedAssignmentSourceExpression GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                                                            const GALGAS_lstring & inAttribute_mOperandName,
                                                                                                                            const GALGAS_decoratedFunctionValueList & inAttribute_mDecoratedFunctionValueList
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionInDecoratedAssignmentSourceExpression result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mOperandName.isValid () && inAttribute_mDecoratedFunctionValueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionInDecoratedAssignmentSourceExpression (inAttribute_mFunctionName, inAttribute_mOperandName, inAttribute_mDecoratedFunctionValueList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionInDecoratedAssignmentSourceExpression::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionInDecoratedAssignmentSourceExpression * p = (const cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_functionInDecoratedAssignmentSourceExpression::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionInDecoratedAssignmentSourceExpression::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionInDecoratedAssignmentSourceExpression * p = (const cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mOperandName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_functionInDecoratedAssignmentSourceExpression::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList GALGAS_functionInDecoratedAssignmentSourceExpression::getter_mDecoratedFunctionValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedFunctionValueList result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionInDecoratedAssignmentSourceExpression * p = (const cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    result = p->mProperty_mDecoratedFunctionValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList cPtr_functionInDecoratedAssignmentSourceExpression::getter_mDecoratedFunctionValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedFunctionValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @functionInDecoratedAssignmentSourceExpression class                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_functionInDecoratedAssignmentSourceExpression::cPtr_functionInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                                                                        const GALGAS_lstring & in_mOperandName,
                                                                                                        const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mOperandName (in_mOperandName),
mProperty_mDecoratedFunctionValueList (in_mDecoratedFunctionValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_functionInDecoratedAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ;
}

void cPtr_functionInDecoratedAssignmentSourceExpression::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@functionInDecoratedAssignmentSourceExpression:" ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperandName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDecoratedFunctionValueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_functionInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionInDecoratedAssignmentSourceExpression (mProperty_mFunctionName, mProperty_mOperandName, mProperty_mDecoratedFunctionValueList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @functionInDecoratedAssignmentSourceExpression type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ("functionInDecoratedAssignmentSourceExpression",
                                                                      & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionInDecoratedAssignmentSourceExpression GALGAS_functionInDecoratedAssignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionInDecoratedAssignmentSourceExpression result ;
  const GALGAS_functionInDecoratedAssignmentSourceExpression * p = (const GALGAS_functionInDecoratedAssignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionInDecoratedAssignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionInDecoratedAssignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_omnibus_grammar [30] = {
  "<start_symbol>",// Index 0
  "<scenario>",// Index 1
  "<enum_declaration>",// Index 2
  "<enum_function>",// Index 3
  "<machine>",// Index 4
  "<expression>",// Index 5
  "<expression1>",// Index 6
  "<expression2>",// Index 7
  "<expression4>",// Index 8
  "<comparison_right_operand>",// Index 9
  "<instruction_list>",// Index 10
  "<instruction>",// Index 11
  "<assignment_source_expression>",// Index 12
  "<else_part>",// Index 13
  "<select_omnibus_5F_syntax_0>",// Index 14
  "<select_omnibus_5F_syntax_1>",// Index 15
  "<select_omnibus_5F_syntax_2>",// Index 16
  "<select_omnibus_5F_syntax_3>",// Index 17
  "<select_omnibus_5F_syntax_4>",// Index 18
  "<select_omnibus_5F_syntax_5>",// Index 19
  "<select_omnibus_5F_syntax_6>",// Index 20
  "<select_omnibus_5F_syntax_7>",// Index 21
  "<select_omnibus_5F_syntax_8>",// Index 22
  "<select_omnibus_5F_syntax_9>",// Index 23
  "<select_omnibus_5F_syntax_10>",// Index 24
  "<select_omnibus_5F_syntax_11>",// Index 25
  "<select_omnibus_5F_syntax_12>",// Index 26
  "<select_omnibus_5F_syntax_13>",// Index 27
  "<select_omnibus_5F_syntax_14>",// Index 28
  "<>"// Index 29
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int16_t gActionTable_omnibus_grammar [] = {
// State S0 (index = 0)
  C_Lexique_lexicalAnalyzer::kToken_scenario, SHIFT (1)
, C_Lexique_lexicalAnalyzer::kToken_enum, SHIFT (2)
, C_Lexique_lexicalAnalyzer::kToken_function, SHIFT (3)
, C_Lexique_lexicalAnalyzer::kToken_machine, SHIFT (4)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (22)
, END
// State S1 (index = 11)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (11)
, END
// State S2 (index = 14)
, C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name, SHIFT (12)
, END
// State S3 (index = 17)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (13)
, END
// State S4 (index = 20)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (14)
, END
// State S5 (index = 23)
, C_Lexique_lexicalAnalyzer::kToken_, ACCEPT
, END
// State S6 (index = 26)
, C_Lexique_lexicalAnalyzer::kToken_scenario, SHIFT (1)
, C_Lexique_lexicalAnalyzer::kToken_enum, SHIFT (2)
, C_Lexique_lexicalAnalyzer::kToken_function, SHIFT (3)
, C_Lexique_lexicalAnalyzer::kToken_machine, SHIFT (4)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (22)
, END
// State S7 (index = 37)
, C_Lexique_lexicalAnalyzer::kToken_scenario, SHIFT (1)
, C_Lexique_lexicalAnalyzer::kToken_enum, SHIFT (2)
, C_Lexique_lexicalAnalyzer::kToken_function, SHIFT (3)
, C_Lexique_lexicalAnalyzer::kToken_machine, SHIFT (4)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (22)
, END
// State S8 (index = 48)
, C_Lexique_lexicalAnalyzer::kToken_scenario, SHIFT (1)
, C_Lexique_lexicalAnalyzer::kToken_enum, SHIFT (2)
, C_Lexique_lexicalAnalyzer::kToken_function, SHIFT (3)
, C_Lexique_lexicalAnalyzer::kToken_machine, SHIFT (4)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (22)
, END
// State S9 (index = 59)
, C_Lexique_lexicalAnalyzer::kToken_scenario, SHIFT (1)
, C_Lexique_lexicalAnalyzer::kToken_enum, SHIFT (2)
, C_Lexique_lexicalAnalyzer::kToken_function, SHIFT (3)
, C_Lexique_lexicalAnalyzer::kToken_machine, SHIFT (4)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (22)
, END
// State S10 (index = 70)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (0)
, END
// State S11 (index = 73)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, SHIFT (19)
, END
// State S12 (index = 76)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (20)
, END
// State S13 (index = 79)
, C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name, SHIFT (21)
, END
// State S14 (index = 82)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (35)
, C_Lexique_lexicalAnalyzer::kToken_var, SHIFT (22)
, C_Lexique_lexicalAnalyzer::kToken_invariant, SHIFT (23)
, C_Lexique_lexicalAnalyzer::kToken_event, SHIFT (24)
, END
// State S15 (index = 91)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (26)
, END
// State S16 (index = 94)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (23)
, END
// State S17 (index = 97)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (24)
, END
// State S18 (index = 100)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (25)
, END
// State S19 (index = 103)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (26)
, END
// State S20 (index = 106)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (27)
, END
// State S21 (index = 109)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, SHIFT (28)
, END
// State S22 (index = 112)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (29)
, END
// State S23 (index = 115)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, SHIFT (30)
, END
// State S24 (index = 118)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (31)
, END
// State S25 (index = 121)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (32)
, END
// State S26 (index = 124)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (33)
, END
// State S27 (index = 127)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (31)
, C_Lexique_lexicalAnalyzer::kToken__2C_, SHIFT (34)
, END
// State S28 (index = 132)
, C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name, SHIFT (36)
, END
// State S29 (index = 135)
, C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name, SHIFT (37)
, END
// State S30 (index = 138)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (38)
, END
// State S31 (index = 141)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (39)
, END
// State S32 (index = 144)
, C_Lexique_lexicalAnalyzer::kToken_scenario, REDUCE (4)
, C_Lexique_lexicalAnalyzer::kToken_enum, REDUCE (4)
, C_Lexique_lexicalAnalyzer::kToken_function, REDUCE (4)
, C_Lexique_lexicalAnalyzer::kToken_machine, REDUCE (4)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (4)
, END
// State S33 (index = 155)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (40)
, END
// State S34 (index = 158)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (41)
, END
// State S35 (index = 161)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (42)
, END
// State S36 (index = 164)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (43)
, END
// State S37 (index = 167)
, C_Lexique_lexicalAnalyzer::kToken__3D_, SHIFT (44)
, END
// State S38 (index = 170)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S39 (index = 175)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (39)
, C_Lexique_lexicalAnalyzer::kToken__3F_, SHIFT (51)
, END
// State S40 (index = 180)
, C_Lexique_lexicalAnalyzer::kToken__21_, SHIFT (53)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (29)
, END
// State S41 (index = 185)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (31)
, C_Lexique_lexicalAnalyzer::kToken__2C_, SHIFT (34)
, END
// State S42 (index = 190)
, C_Lexique_lexicalAnalyzer::kToken_scenario, REDUCE (2)
, C_Lexique_lexicalAnalyzer::kToken_enum, REDUCE (2)
, C_Lexique_lexicalAnalyzer::kToken_function, REDUCE (2)
, C_Lexique_lexicalAnalyzer::kToken_machine, REDUCE (2)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (2)
, END
// State S43 (index = 201)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (56)
, END
// State S44 (index = 204)
, C_Lexique_lexicalAnalyzer::kToken__2E_, SHIFT (57)
, END
// State S45 (index = 207)
, C_Lexique_lexicalAnalyzer::kToken__3D__3D_, SHIFT (58)
, C_Lexique_lexicalAnalyzer::kToken__21__3D_, SHIFT (59)
, END
// State S46 (index = 212)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S47 (index = 217)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (35)
, C_Lexique_lexicalAnalyzer::kToken_var, SHIFT (22)
, C_Lexique_lexicalAnalyzer::kToken_invariant, SHIFT (23)
, C_Lexique_lexicalAnalyzer::kToken_event, SHIFT (24)
, END
// State S48 (index = 226)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, SHIFT (63)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (45)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (45)
, END
// State S49 (index = 251)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7C_, SHIFT (65)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (47)
, END
// State S50 (index = 278)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__26_, SHIFT (67)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (49)
, END
// State S51 (index = 307)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (69)
, END
// State S52 (index = 310)
, C_Lexique_lexicalAnalyzer::kToken__29_, SHIFT (70)
, END
// State S53 (index = 313)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (71)
, END
// State S54 (index = 316)
, C_Lexique_lexicalAnalyzer::kToken__29_, SHIFT (72)
, END
// State S55 (index = 319)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (32)
, END
// State S56 (index = 322)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (73)
, END
// State S57 (index = 325)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (74)
, END
// State S58 (index = 328)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (51)
, C_Lexique_lexicalAnalyzer::kToken__2E_, REDUCE (51)
, C_Lexique_lexicalAnalyzer::kToken_old, REDUCE (51)
, END
// State S59 (index = 335)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (52)
, C_Lexique_lexicalAnalyzer::kToken__2E_, REDUCE (52)
, C_Lexique_lexicalAnalyzer::kToken_old, REDUCE (52)
, END
// State S60 (index = 342)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (53)
, C_Lexique_lexicalAnalyzer::kToken__2E_, SHIFT (75)
, C_Lexique_lexicalAnalyzer::kToken_old, SHIFT (76)
, END
// State S61 (index = 349)
, C_Lexique_lexicalAnalyzer::kToken__29_, SHIFT (79)
, END
// State S62 (index = 352)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (37)
, END
// State S63 (index = 355)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S64 (index = 360)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (5)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (5)
, END
// State S65 (index = 383)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S66 (index = 388)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (6)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (6)
, END
// State S67 (index = 413)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S68 (index = 418)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (7)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (7)
, END
// State S69 (index = 445)
, C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name, SHIFT (83)
, END
// State S70 (index = 448)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (84)
, END
// State S71 (index = 451)
, C_Lexique_lexicalAnalyzer::kToken__21_, SHIFT (53)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (29)
, END
// State S72 (index = 456)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (86)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (27)
, END
// State S73 (index = 461)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (88)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (33)
, END
// State S74 (index = 466)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (35)
, C_Lexique_lexicalAnalyzer::kToken_var, SHIFT (22)
, C_Lexique_lexicalAnalyzer::kToken_invariant, SHIFT (23)
, C_Lexique_lexicalAnalyzer::kToken_event, SHIFT (24)
, END
// State S75 (index = 475)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (91)
, END
// State S76 (index = 478)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (54)
, END
// State S77 (index = 481)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken__26_, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (9)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (9)
, END
// State S78 (index = 510)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (92)
, END
// State S79 (index = 513)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken__26_, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (8)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (8)
, END
// State S80 (index = 542)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (46)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (46)
, END
// State S81 (index = 565)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken__7C_, SHIFT (65)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (47)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (47)
, END
// State S82 (index = 592)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken__26_, SHIFT (67)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (49)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (49)
, END
// State S83 (index = 621)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (39)
, C_Lexique_lexicalAnalyzer::kToken__3F_, SHIFT (51)
, END
// State S84 (index = 626)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (96)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (98)
, END
// State S85 (index = 637)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (30)
, END
// State S86 (index = 640)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (102)
, END
// State S87 (index = 643)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (103)
, END
// State S88 (index = 646)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (104)
, END
// State S89 (index = 649)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (105)
, END
// State S90 (index = 652)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (36)
, END
// State S91 (index = 655)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken__26_, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (10)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (10)
, END
// State S92 (index = 684)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken__26_, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (11)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (11)
, END
// State S93 (index = 713)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (48)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (48)
, END
// State S94 (index = 738)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__7B_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__2D__3E_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_var, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_invariant, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_event, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken__7C_, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (50)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (50)
, END
// State S95 (index = 765)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (40)
, END
// State S96 (index = 768)
, C_Lexique_lexicalAnalyzer::kToken__3D_, SHIFT (106)
, END
// State S97 (index = 771)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S98 (index = 776)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S99 (index = 781)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (41)
, C_Lexique_lexicalAnalyzer::kToken_ensures, SHIFT (109)
, END
// State S100 (index = 786)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (96)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (98)
, END
// State S101 (index = 797)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (12)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (12)
, END
// State S102 (index = 802)
, C_Lexique_lexicalAnalyzer::kToken__21_, SHIFT (53)
, C_Lexique_lexicalAnalyzer::kToken__29_, REDUCE (29)
, END
// State S103 (index = 807)
, C_Lexique_lexicalAnalyzer::kToken_scenario, REDUCE (1)
, C_Lexique_lexicalAnalyzer::kToken_enum, REDUCE (1)
, C_Lexique_lexicalAnalyzer::kToken_function, REDUCE (1)
, C_Lexique_lexicalAnalyzer::kToken_machine, REDUCE (1)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (1)
, END
// State S104 (index = 818)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (113)
, END
// State S105 (index = 821)
, C_Lexique_lexicalAnalyzer::kToken_scenario, REDUCE (3)
, C_Lexique_lexicalAnalyzer::kToken_enum, REDUCE (3)
, C_Lexique_lexicalAnalyzer::kToken_function, REDUCE (3)
, C_Lexique_lexicalAnalyzer::kToken_machine, REDUCE (3)
, C_Lexique_lexicalAnalyzer::kToken_, REDUCE (3)
, END
// State S106 (index = 832)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (114)
, C_Lexique_lexicalAnalyzer::kToken__2E_, SHIFT (115)
, END
// State S107 (index = 837)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (13)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (13)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (13)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (13)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (13)
, END
// State S108 (index = 848)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (117)
, END
// State S109 (index = 851)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, SHIFT (118)
, END
// State S110 (index = 854)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (119)
, END
// State S111 (index = 857)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (56)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (56)
, END
// State S112 (index = 862)
, C_Lexique_lexicalAnalyzer::kToken__29_, SHIFT (120)
, END
// State S113 (index = 865)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (88)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (33)
, END
// State S114 (index = 870)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (15)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (122)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (15)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (15)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (15)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (15)
, END
// State S115 (index = 883)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (123)
, END
// State S116 (index = 886)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (14)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (14)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (14)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (14)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (14)
, END
// State S117 (index = 897)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (96)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (98)
, END
// State S118 (index = 908)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (125)
, END
// State S119 (index = 911)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (35)
, C_Lexique_lexicalAnalyzer::kToken_var, SHIFT (22)
, C_Lexique_lexicalAnalyzer::kToken_invariant, SHIFT (23)
, C_Lexique_lexicalAnalyzer::kToken_event, SHIFT (24)
, END
// State S120 (index = 920)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (86)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (27)
, END
// State S121 (index = 925)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (34)
, END
// State S122 (index = 928)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (128)
, END
// State S123 (index = 931)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (16)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (16)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (16)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (16)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (16)
, END
// State S124 (index = 942)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (129)
, END
// State S125 (index = 945)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S126 (index = 950)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (38)
, END
// State S127 (index = 953)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (28)
, END
// State S128 (index = 956)
, C_Lexique_lexicalAnalyzer::kToken__29_, SHIFT (131)
, END
// State S129 (index = 959)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_else, SHIFT (132)
, END
// State S130 (index = 972)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, SHIFT (134)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (43)
, END
// State S131 (index = 977)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (17)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (17)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (17)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (17)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (17)
, END
// State S132 (index = 988)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (136)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (137)
, END
// State S133 (index = 993)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (18)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (18)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (18)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (18)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (18)
, END
// State S134 (index = 1004)
, C_Lexique_lexicalAnalyzer::kToken__3A_, SHIFT (138)
, END
// State S135 (index = 1007)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (42)
, END
// State S136 (index = 1010)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (96)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (98)
, END
// State S137 (index = 1021)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S138 (index = 1026)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (45)
, C_Lexique_lexicalAnalyzer::kToken__28_, SHIFT (46)
, END
// State S139 (index = 1031)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (142)
, END
// State S140 (index = 1034)
, C_Lexique_lexicalAnalyzer::kToken__7B_, SHIFT (143)
, END
// State S141 (index = 1037)
, C_Lexique_lexicalAnalyzer::kToken_literal_5F_string, SHIFT (134)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (43)
, END
// State S142 (index = 1042)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (20)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (20)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (20)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (20)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (20)
, END
// State S143 (index = 1053)
, C_Lexique_lexicalAnalyzer::kToken_identifier, SHIFT (96)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (55)
, C_Lexique_lexicalAnalyzer::kToken_assert, SHIFT (97)
, C_Lexique_lexicalAnalyzer::kToken_if, SHIFT (98)
, END
// State S144 (index = 1064)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (44)
, END
// State S145 (index = 1067)
, C_Lexique_lexicalAnalyzer::kToken__7D_, SHIFT (146)
, END
// State S146 (index = 1070)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (19)
, C_Lexique_lexicalAnalyzer::kToken_else, SHIFT (132)
, END
// State S147 (index = 1083)
, C_Lexique_lexicalAnalyzer::kToken_identifier, REDUCE (21)
, C_Lexique_lexicalAnalyzer::kToken__7D_, REDUCE (21)
, C_Lexique_lexicalAnalyzer::kToken_ensures, REDUCE (21)
, C_Lexique_lexicalAnalyzer::kToken_assert, REDUCE (21)
, C_Lexique_lexicalAnalyzer::kToken_if, REDUCE (21)
, END} ;

static const uint32_t gActionTableIndex_omnibus_grammar [148] = {
  0  // S0
, 11  // S1
, 14  // S2
, 17  // S3
, 20  // S4
, 23  // S5
, 26  // S6
, 37  // S7
, 48  // S8
, 59  // S9
, 70  // S10
, 73  // S11
, 76  // S12
, 79  // S13
, 82  // S14
, 91  // S15
, 94  // S16
, 97  // S17
, 100  // S18
, 103  // S19
, 106  // S20
, 109  // S21
, 112  // S22
, 115  // S23
, 118  // S24
, 121  // S25
, 124  // S26
, 127  // S27
, 132  // S28
, 135  // S29
, 138  // S30
, 141  // S31
, 144  // S32
, 155  // S33
, 158  // S34
, 161  // S35
, 164  // S36
, 167  // S37
, 170  // S38
, 175  // S39
, 180  // S40
, 185  // S41
, 190  // S42
, 201  // S43
, 204  // S44
, 207  // S45
, 212  // S46
, 217  // S47
, 226  // S48
, 251  // S49
, 278  // S50
, 307  // S51
, 310  // S52
, 313  // S53
, 316  // S54
, 319  // S55
, 322  // S56
, 325  // S57
, 328  // S58
, 335  // S59
, 342  // S60
, 349  // S61
, 352  // S62
, 355  // S63
, 360  // S64
, 383  // S65
, 388  // S66
, 413  // S67
, 418  // S68
, 445  // S69
, 448  // S70
, 451  // S71
, 456  // S72
, 461  // S73
, 466  // S74
, 475  // S75
, 478  // S76
, 481  // S77
, 510  // S78
, 513  // S79
, 542  // S80
, 565  // S81
, 592  // S82
, 621  // S83
, 626  // S84
, 637  // S85
, 640  // S86
, 643  // S87
, 646  // S88
, 649  // S89
, 652  // S90
, 655  // S91
, 684  // S92
, 713  // S93
, 738  // S94
, 765  // S95
, 768  // S96
, 771  // S97
, 776  // S98
, 781  // S99
, 786  // S100
, 797  // S101
, 802  // S102
, 807  // S103
, 818  // S104
, 821  // S105
, 832  // S106
, 837  // S107
, 848  // S108
, 851  // S109
, 854  // S110
, 857  // S111
, 862  // S112
, 865  // S113
, 870  // S114
, 883  // S115
, 886  // S116
, 897  // S117
, 908  // S118
, 911  // S119
, 920  // S120
, 925  // S121
, 928  // S122
, 931  // S123
, 942  // S124
, 945  // S125
, 950  // S126
, 953  // S127
, 956  // S128
, 959  // S129
, 972  // S130
, 977  // S131
, 988  // S132
, 993  // S133
, 1004  // S134
, 1007  // S135
, 1010  // S136
, 1021  // S137
, 1026  // S138
, 1031  // S139
, 1034  // S140
, 1037  // S141
, 1042  // S142
, 1053  // S143
, 1064  // S144
, 1067  // S145
, 1070  // S146
, 1083  // S147
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_omnibus_grammar_0 [13] = {0, 5,
  1, 6,
  2, 7,
  3, 8,
  4, 9,
  14, 10, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_6 [11] = {1, 6,
  2, 7,
  3, 8,
  4, 9,
  14, 15, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_7 [11] = {1, 6,
  2, 7,
  3, 8,
  4, 9,
  14, 16, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_8 [11] = {1, 6,
  2, 7,
  3, 8,
  4, 9,
  14, 17, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_9 [11] = {1, 6,
  2, 7,
  3, 8,
  4, 9,
  14, 18, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_14 [3] = {19, 25, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_27 [3] = {17, 35, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_38 [9] = {5, 47,
  6, 48,
  7, 49,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_39 [3] = {20, 52, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_40 [3] = {16, 54, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_41 [3] = {17, 55, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_45 [3] = {26, 60, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_46 [9] = {5, 61,
  6, 48,
  7, 49,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_47 [3] = {19, 62, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_48 [3] = {23, 64, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_49 [3] = {24, 66, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_50 [3] = {25, 68, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_60 [5] = {9, 77,
  27, 78, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_63 [7] = {6, 80,
  7, 49,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_65 [5] = {7, 81,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_67 [3] = {8, 82, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_71 [3] = {16, 85, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_72 [3] = {15, 87, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_73 [3] = {18, 89, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_74 [3] = {19, 90, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_81 [3] = {24, 93, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_82 [3] = {25, 94, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_83 [3] = {20, 95, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_84 [7] = {10, 99,
  11, 100,
  28, 101, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_97 [9] = {5, 107,
  6, 48,
  7, 49,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_98 [9] = {5, 108,
  6, 48,
  7, 49,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_99 [3] = {21, 110, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_100 [5] = {11, 100,
  28, 111, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_102 [3] = {16, 112, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_106 [3] = {12, 116, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_113 [3] = {18, 121, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_117 [7] = {10, 124,
  11, 100,
  28, 101, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_119 [3] = {19, 126, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_120 [3] = {15, 127, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_125 [9] = {5, 130,
  6, 48,
  7, 49,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_129 [3] = {13, 133, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_130 [3] = {22, 135, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_136 [7] = {10, 139,
  11, 100,
  28, 101, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_137 [9] = {5, 140,
  6, 48,
  7, 49,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_138 [9] = {5, 141,
  6, 48,
  7, 49,
  8, 50, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_141 [3] = {22, 144, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_143 [7] = {10, 145,
  11, 100,
  28, 101, -1} ;

static const int16_t gSuccessorTable_omnibus_grammar_146 [3] = {13, 147, -1} ;

static const int16_t * gSuccessorTable_omnibus_grammar [148] = {
gSuccessorTable_omnibus_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_6, gSuccessorTable_omnibus_grammar_7, 
  gSuccessorTable_omnibus_grammar_8, gSuccessorTable_omnibus_grammar_9, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_14, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_omnibus_grammar_27, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_38, gSuccessorTable_omnibus_grammar_39, 
  gSuccessorTable_omnibus_grammar_40, gSuccessorTable_omnibus_grammar_41, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_45, gSuccessorTable_omnibus_grammar_46, gSuccessorTable_omnibus_grammar_47, 
  gSuccessorTable_omnibus_grammar_48, gSuccessorTable_omnibus_grammar_49, gSuccessorTable_omnibus_grammar_50, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_omnibus_grammar_60, NULL, NULL, gSuccessorTable_omnibus_grammar_63, 
  NULL, gSuccessorTable_omnibus_grammar_65, NULL, gSuccessorTable_omnibus_grammar_67, 
  NULL, NULL, NULL, gSuccessorTable_omnibus_grammar_71, 
  gSuccessorTable_omnibus_grammar_72, gSuccessorTable_omnibus_grammar_73, gSuccessorTable_omnibus_grammar_74, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_81, gSuccessorTable_omnibus_grammar_82, gSuccessorTable_omnibus_grammar_83, 
  gSuccessorTable_omnibus_grammar_84, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_97, gSuccessorTable_omnibus_grammar_98, gSuccessorTable_omnibus_grammar_99, 
  gSuccessorTable_omnibus_grammar_100, NULL, gSuccessorTable_omnibus_grammar_102, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_106, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_113, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_117, NULL, gSuccessorTable_omnibus_grammar_119, 
  gSuccessorTable_omnibus_grammar_120, NULL, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_125, NULL, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_129, gSuccessorTable_omnibus_grammar_130, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_omnibus_grammar_136, gSuccessorTable_omnibus_grammar_137, gSuccessorTable_omnibus_grammar_138, NULL, 
  NULL, gSuccessorTable_omnibus_grammar_141, NULL, gSuccessorTable_omnibus_grammar_143, 
  NULL, NULL, gSuccessorTable_omnibus_grammar_146, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_omnibus_grammar [58 * 2] = {
  0, 1,
  1, 10,
  2, 6,
  3, 10,
  4, 4,
  5, 2,
  6, 2,
  7, 2,
  8, 3,
  8, 3,
  9, 2,
  9, 2,
  10, 1,
  11, 2,
  11, 3,
  12, 1,
  12, 2,
  12, 4,
  11, 6,
  13, 0,
  13, 4,
  13, 7,
  14, 0,
  14, 2,
  14, 2,
  14, 2,
  14, 2,
  15, 0,
  15, 5,
  16, 0,
  16, 3,
  17, 0,
  17, 3,
  18, 0,
  18, 4,
  19, 0,
  19, 7,
  19, 5,
  19, 10,
  20, 0,
  20, 4,
  21, 0,
  21, 5,
  22, 0,
  22, 4,
  23, 0,
  23, 2,
  24, 0,
  24, 3,
  25, 0,
  25, 3,
  26, 1,
  26, 1,
  27, 0,
  27, 1,
  28, 0,
  28, 2,
  29, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'start_symbol' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_start_5F_symbol_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_omnibus_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_start_5F_symbol_ (GALGAS_ast &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_omnibus_5F_syntax_start_5F_symbol_i0_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_omnibus_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_lexicalAnalyzer * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_lexicalAnalyzer (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_omnibus_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_lexicalAnalyzer * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_lexicalAnalyzer (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_omnibus_grammar, gNonTerminalNames_omnibus_grammar,
                                     gActionTableIndex_omnibus_grammar, gSuccessorTable_omnibus_grammar,
                                     gProductionsTable_omnibus_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_ast &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_lexicalAnalyzer * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_lexicalAnalyzer (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_omnibus_grammar, gNonTerminalNames_omnibus_grammar,
                                                         gActionTableIndex_omnibus_grammar, gSuccessorTable_omnibus_grammar,
                                                         gProductionsTable_omnibus_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_omnibus_5F_grammar grammar ;
          grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_ast &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_lexicalAnalyzer * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_lexicalAnalyzer (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_omnibus_grammar, gNonTerminalNames_omnibus_grammar,
                                                       gActionTableIndex_omnibus_grammar, gSuccessorTable_omnibus_grammar,
                                                       gProductionsTable_omnibus_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_omnibus_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'scenario' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_scenario_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_omnibus_5F_syntax_scenario_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_scenario_ (GALGAS_ast &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_omnibus_5F_syntax_scenario_i1_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'enum_declaration' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_enum_5F_declaration_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_omnibus_5F_syntax_enum_5F_declaration_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_enum_5F_declaration_ (GALGAS_ast &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_omnibus_5F_syntax_enum_5F_declaration_i2_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'enum_function' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_enum_5F_function_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_omnibus_5F_syntax_enum_5F_function_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_enum_5F_function_ (GALGAS_ast &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_omnibus_5F_syntax_enum_5F_function_i3_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'machine' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_machine_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_omnibus_5F_syntax_machine_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_machine_ (GALGAS_ast &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_omnibus_5F_syntax_machine_i4_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'expression' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_expression_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_omnibus_5F_syntax_expression_i5_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_expression_ (GALGAS_expression &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_omnibus_5F_syntax_expression_i5_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'expression1' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_expression_31__parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_omnibus_5F_syntax_expression_31__i6_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_expression_31__ (GALGAS_expression &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_omnibus_5F_syntax_expression_31__i6_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'expression2' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_expression_32__parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_omnibus_5F_syntax_expression_32__i7_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_expression_32__ (GALGAS_expression &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_omnibus_5F_syntax_expression_32__i7_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'expression4' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_expression_34__parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_omnibus_5F_syntax_expression_34__i8_parse(inLexique) ;
    break ;
  case 9 :
      rule_omnibus_5F_syntax_expression_34__i9_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_expression_34__ (GALGAS_expression &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_omnibus_5F_syntax_expression_34__i8_(parameter_1, inLexique) ;
    break ;
  case 9 :
      rule_omnibus_5F_syntax_expression_34__i9_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'comparison_right_operand' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_comparison_5F_right_5F_operand_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i10_parse(inLexique) ;
    break ;
  case 11 :
      rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_comparison_5F_right_5F_operand_ (GALGAS_comparisonRightOperand &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i10_(parameter_1, inLexique) ;
    break ;
  case 11 :
      rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i11_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'instruction_list' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_instruction_5F_list_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_omnibus_5F_syntax_instruction_5F_list_i12_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_instruction_5F_list_ (GALGAS_instructionList &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_omnibus_5F_syntax_instruction_5F_list_i12_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'instruction' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_instruction_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_omnibus_5F_syntax_instruction_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_omnibus_5F_syntax_instruction_i14_parse(inLexique) ;
    break ;
  case 18 :
      rule_omnibus_5F_syntax_instruction_i18_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_instruction_ (GALGAS_instruction &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_omnibus_5F_syntax_instruction_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
      rule_omnibus_5F_syntax_instruction_i14_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_omnibus_5F_syntax_instruction_i18_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'assignment_source_expression' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_assignment_5F_source_5F_expression_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i15_parse(inLexique) ;
    break ;
  case 16 :
      rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i16_parse(inLexique) ;
    break ;
  case 17 :
      rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i17_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_assignment_5F_source_5F_expression_ (GALGAS_assignmentSourceExpression &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
      rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i17_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'else_part' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_grammar::nt_else_5F_part_parse (C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_omnibus_5F_syntax_else_5F_part_i19_parse(inLexique) ;
    break ;
  case 20 :
      rule_omnibus_5F_syntax_else_5F_part_i20_parse(inLexique) ;
    break ;
  case 21 :
      rule_omnibus_5F_syntax_else_5F_part_i21_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_grammar::nt_else_5F_part_ (GALGAS_instructionList &  parameter_1,
                                C_Lexique_lexicalAnalyzer * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_omnibus_5F_syntax_else_5F_part_i19_(parameter_1, inLexique) ;
    break ;
  case 20 :
      rule_omnibus_5F_syntax_else_5F_part_i20_(parameter_1, inLexique) ;
    break ;
  case 21 :
      rule_omnibus_5F_syntax_else_5F_part_i21_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_0' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_0 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 22 23 24 25 26
  return inLexique->nextProductionIndex () - 21 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_1' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_1 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 27 28
  return inLexique->nextProductionIndex () - 26 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_2' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_2 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 29 30
  return inLexique->nextProductionIndex () - 28 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_3' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_3 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 31 32
  return inLexique->nextProductionIndex () - 30 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_4' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_4 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 33 34
  return inLexique->nextProductionIndex () - 32 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_5' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_5 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 35 36 37 38
  return inLexique->nextProductionIndex () - 34 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_6' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_6 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 39 40
  return inLexique->nextProductionIndex () - 38 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_7' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_7 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 41 42
  return inLexique->nextProductionIndex () - 40 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_8' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_8 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 43 44
  return inLexique->nextProductionIndex () - 42 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_omnibus_5F_syntax_9' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_9 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 45 46
  return inLexique->nextProductionIndex () - 44 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_omnibus_5F_syntax_10' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_10 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_omnibus_5F_syntax_11' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_11 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_omnibus_5F_syntax_12' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_12 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 51 52
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_omnibus_5F_syntax_13' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_13 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_omnibus_5F_syntax_14' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_grammar::select_omnibus_5F_syntax_14 (C_Lexique_lexicalAnalyzer * inLexique) {
// Productions numbers : 55 56
  return inLexique->nextProductionIndex () - 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension Getter '@varList displayVarInfo'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarListForDisplay extensionGetter_displayVarInfo (const GALGAS_varList & inObject,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 17)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_535 (temp_0, kENUMERATION_UP) ;
  while (enumerator_535.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_561 = enumerator_535.current (HERE).getter_mVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 19)) ;
    cEnumerator_lstringlist enumerator_609 (enumerator_535.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_609.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_642 = enumerator_609.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 21)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_561.objectCompare (var_cstNameLength_642)).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_columnLength_561 = var_cstNameLength_642 ;
        }
      }
      enumerator_609.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (enumerator_535.current (HERE).getter_mVarName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 27)), enumerator_535.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_535.current (HERE).getter_mBDDBitCount (HERE), enumerator_535.current (HERE).getter_mValueList (HERE), var_columnLength_561  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 26)) ;
    enumerator_535.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList_2D_element::GALGAS_machineList_2D_element (void) :
mProperty_mMachineName (),
mProperty_mEnumVarDeclarationList (),
mProperty_mInvariantExpressionList (),
mProperty_mEventList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList_2D_element::~ GALGAS_machineList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList_2D_element::GALGAS_machineList_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_enumVarDeclarationList & inOperand1,
                                                              const GALGAS_expressionList & inOperand2,
                                                              const GALGAS_eventDeclarationList & inOperand3) :
mProperty_mMachineName (inOperand0),
mProperty_mEnumVarDeclarationList (inOperand1),
mProperty_mInvariantExpressionList (inOperand2),
mProperty_mEventList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList_2D_element GALGAS_machineList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_enumVarDeclarationList::constructor_emptyList (HERE),
                                        GALGAS_expressionList::constructor_emptyList (HERE),
                                        GALGAS_eventDeclarationList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList_2D_element GALGAS_machineList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_enumVarDeclarationList & inOperand1,
                                                                              const GALGAS_expressionList & inOperand2,
                                                                              const GALGAS_eventDeclarationList & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_machineList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_machineList_2D_element::objectCompare (const GALGAS_machineList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMachineName.objectCompare (inOperand.mProperty_mMachineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumVarDeclarationList.objectCompare (inOperand.mProperty_mEnumVarDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInvariantExpressionList.objectCompare (inOperand.mProperty_mInvariantExpressionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEventList.objectCompare (inOperand.mProperty_mEventList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_machineList_2D_element::isValid (void) const {
  return mProperty_mMachineName.isValid () && mProperty_mEnumVarDeclarationList.isValid () && mProperty_mInvariantExpressionList.isValid () && mProperty_mEventList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList_2D_element::drop (void) {
  mProperty_mMachineName.drop () ;
  mProperty_mEnumVarDeclarationList.drop () ;
  mProperty_mInvariantExpressionList.drop () ;
  mProperty_mEventList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @machineList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMachineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumVarDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInvariantExpressionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEventList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_machineList_2D_element::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList GALGAS_machineList_2D_element::getter_mEnumVarDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumVarDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_machineList_2D_element::getter_mInvariantExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvariantExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList GALGAS_machineList_2D_element::getter_mEventList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @machineList-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineList_2D_element ("machineList-element",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineList_2D_element GALGAS_machineList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_machineList_2D_element result ;
  const GALGAS_machineList_2D_element * p = (const GALGAS_machineList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList_2D_element::GALGAS_enumTypeList_2D_element (void) :
mProperty_mEnumListName (),
mProperty_mEnumConstantList (),
mProperty_mGenerateCode () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList_2D_element::~ GALGAS_enumTypeList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList_2D_element::GALGAS_enumTypeList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1,
                                                                const GALGAS_bool & inOperand2) :
mProperty_mEnumListName (inOperand0),
mProperty_mEnumConstantList (inOperand1),
mProperty_mGenerateCode (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList_2D_element GALGAS_enumTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumTypeList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lstringlist::constructor_emptyList (HERE),
                                         GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList_2D_element GALGAS_enumTypeList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1,
                                                                                const GALGAS_bool & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_enumTypeList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_enumTypeList_2D_element::objectCompare (const GALGAS_enumTypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumListName.objectCompare (inOperand.mProperty_mEnumListName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumConstantList.objectCompare (inOperand.mProperty_mEnumConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateCode.objectCompare (inOperand.mProperty_mGenerateCode) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_enumTypeList_2D_element::isValid (void) const {
  return mProperty_mEnumListName.isValid () && mProperty_mEnumConstantList.isValid () && mProperty_mGenerateCode.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList_2D_element::drop (void) {
  mProperty_mEnumListName.drop () ;
  mProperty_mEnumConstantList.drop () ;
  mProperty_mGenerateCode.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @enumTypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumListName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumTypeList_2D_element::getter_mEnumListName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumListName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumTypeList_2D_element::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_enumTypeList_2D_element::getter_mGenerateCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateCode ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @enumTypeList-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeList_2D_element ("enumTypeList-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeList_2D_element GALGAS_enumTypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeList_2D_element result ;
  const GALGAS_enumTypeList_2D_element * p = (const GALGAS_enumTypeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumTypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList_2D_element::GALGAS_enumVarDeclarationList_2D_element (void) :
mProperty_mEnumTypeName (),
mProperty_mEnumVarName (),
mProperty_mConstantName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList_2D_element::~ GALGAS_enumVarDeclarationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList_2D_element::GALGAS_enumVarDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mProperty_mEnumTypeName (inOperand0),
mProperty_mEnumVarName (inOperand1),
mProperty_mConstantName (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList_2D_element GALGAS_enumVarDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumVarDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList_2D_element GALGAS_enumVarDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumVarDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_enumVarDeclarationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_enumVarDeclarationList_2D_element::objectCompare (const GALGAS_enumVarDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumTypeName.objectCompare (inOperand.mProperty_mEnumTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumVarName.objectCompare (inOperand.mProperty_mEnumVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_enumVarDeclarationList_2D_element::isValid (void) const {
  return mProperty_mEnumTypeName.isValid () && mProperty_mEnumVarName.isValid () && mProperty_mConstantName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList_2D_element::drop (void) {
  mProperty_mEnumTypeName.drop () ;
  mProperty_mEnumVarName.drop () ;
  mProperty_mConstantName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumVarDeclarationList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @enumVarDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumVarDeclarationList_2D_element::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumVarDeclarationList_2D_element::getter_mEnumVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumVarDeclarationList_2D_element::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @enumVarDeclarationList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumVarDeclarationList_2D_element ("enumVarDeclarationList-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumVarDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumVarDeclarationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumVarDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumVarDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumVarDeclarationList_2D_element GALGAS_enumVarDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumVarDeclarationList_2D_element result ;
  const GALGAS_enumVarDeclarationList_2D_element * p = (const GALGAS_enumVarDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumVarDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumVarDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList_2D_element::GALGAS_eventDeclarationList_2D_element (void) :
mProperty_mEventName (),
mProperty_mEventArgumentList (),
mProperty_mEventInstructionList (),
mProperty_mEnsureExpressionList (),
mProperty_mEndOfEnsureExpressionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList_2D_element::~ GALGAS_eventDeclarationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList_2D_element::GALGAS_eventDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_eventArgumentList & inOperand1,
                                                                                const GALGAS_instructionList & inOperand2,
                                                                                const GALGAS_expressionList & inOperand3,
                                                                                const GALGAS_location & inOperand4) :
mProperty_mEventName (inOperand0),
mProperty_mEventArgumentList (inOperand1),
mProperty_mEventInstructionList (inOperand2),
mProperty_mEnsureExpressionList (inOperand3),
mProperty_mEndOfEnsureExpressionList (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList_2D_element GALGAS_eventDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_eventArgumentList::constructor_emptyList (HERE),
                                                 GALGAS_instructionList::constructor_emptyList (HERE),
                                                 GALGAS_expressionList::constructor_emptyList (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList_2D_element GALGAS_eventDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_eventArgumentList & inOperand1,
                                                                                                const GALGAS_instructionList & inOperand2,
                                                                                                const GALGAS_expressionList & inOperand3,
                                                                                                const GALGAS_location & inOperand4 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_eventDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_eventDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_eventDeclarationList_2D_element::objectCompare (const GALGAS_eventDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEventName.objectCompare (inOperand.mProperty_mEventName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEventArgumentList.objectCompare (inOperand.mProperty_mEventArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEventInstructionList.objectCompare (inOperand.mProperty_mEventInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnsureExpressionList.objectCompare (inOperand.mProperty_mEnsureExpressionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfEnsureExpressionList.objectCompare (inOperand.mProperty_mEndOfEnsureExpressionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_eventDeclarationList_2D_element::isValid (void) const {
  return mProperty_mEventName.isValid () && mProperty_mEventArgumentList.isValid () && mProperty_mEventInstructionList.isValid () && mProperty_mEnsureExpressionList.isValid () && mProperty_mEndOfEnsureExpressionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList_2D_element::drop (void) {
  mProperty_mEventName.drop () ;
  mProperty_mEventArgumentList.drop () ;
  mProperty_mEventInstructionList.drop () ;
  mProperty_mEnsureExpressionList.drop () ;
  mProperty_mEndOfEnsureExpressionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventDeclarationList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @eventDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEventName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEventArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEventInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnsureExpressionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfEnsureExpressionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_eventDeclarationList_2D_element::getter_mEventName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_eventDeclarationList_2D_element::getter_mEventArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionList GALGAS_eventDeclarationList_2D_element::getter_mEventInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList GALGAS_eventDeclarationList_2D_element::getter_mEnsureExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnsureExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_eventDeclarationList_2D_element::getter_mEndOfEnsureExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfEnsureExpressionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @eventDeclarationList-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventDeclarationList_2D_element ("eventDeclarationList-element",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_eventDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventDeclarationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_eventDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventDeclarationList_2D_element GALGAS_eventDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_eventDeclarationList_2D_element result ;
  const GALGAS_eventDeclarationList_2D_element * p = (const GALGAS_eventDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_eventDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("eventDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList_2D_element::GALGAS_eventArgumentList_2D_element (void) :
mProperty_mArgumentTypeName (),
mProperty_mArgumentVarName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList_2D_element::~ GALGAS_eventArgumentList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList_2D_element::GALGAS_eventArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mArgumentTypeName (inOperand0),
mProperty_mArgumentVarName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList_2D_element GALGAS_eventArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventArgumentList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList_2D_element GALGAS_eventArgumentList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_eventArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_eventArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_eventArgumentList_2D_element::objectCompare (const GALGAS_eventArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mArgumentTypeName.objectCompare (inOperand.mProperty_mArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentVarName.objectCompare (inOperand.mProperty_mArgumentVarName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_eventArgumentList_2D_element::isValid (void) const {
  return mProperty_mArgumentTypeName.isValid () && mProperty_mArgumentVarName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList_2D_element::drop (void) {
  mProperty_mArgumentTypeName.drop () ;
  mProperty_mArgumentVarName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventArgumentList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @eventArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentVarName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_eventArgumentList_2D_element::getter_mArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_eventArgumentList_2D_element::getter_mArgumentVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentVarName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @eventArgumentList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventArgumentList_2D_element ("eventArgumentList-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_eventArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventArgumentList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_eventArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList_2D_element GALGAS_eventArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_eventArgumentList_2D_element result ;
  const GALGAS_eventArgumentList_2D_element * p = (const GALGAS_eventArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_eventArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("eventArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList_2D_element::GALGAS_expressionList_2D_element (void) :
mProperty_mLabel (),
mProperty_mExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList_2D_element::~ GALGAS_expressionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList_2D_element::GALGAS_expressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_expression & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mExpression (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList_2D_element GALGAS_expressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_expression & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_expressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_expressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_expressionList_2D_element::objectCompare (const GALGAS_expressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLabel.objectCompare (inOperand.mProperty_mLabel) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_expressionList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mExpression.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mExpression.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @expressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLabel.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_expressionList_2D_element::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabel ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expression GALGAS_expressionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @expressionList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionList_2D_element ("expressionList-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_expressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_expressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionList_2D_element GALGAS_expressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_expressionList_2D_element result ;
  const GALGAS_expressionList_2D_element * p = (const GALGAS_expressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList_2D_element::GALGAS_functionValueList_2D_element (void) :
mProperty_mOperandName (),
mProperty_mResultName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList_2D_element::~ GALGAS_functionValueList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList_2D_element::GALGAS_functionValueList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mOperandName (inOperand0),
mProperty_mResultName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList_2D_element GALGAS_functionValueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionValueList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList_2D_element GALGAS_functionValueList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionValueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionValueList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_functionValueList_2D_element::objectCompare (const GALGAS_functionValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOperandName.objectCompare (inOperand.mProperty_mOperandName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultName.objectCompare (inOperand.mProperty_mResultName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_functionValueList_2D_element::isValid (void) const {
  return mProperty_mOperandName.isValid () && mProperty_mResultName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList_2D_element::drop (void) {
  mProperty_mOperandName.drop () ;
  mProperty_mResultName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionValueList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @functionValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperandName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionValueList_2D_element::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionValueList_2D_element::getter_mResultName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @functionValueList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionValueList_2D_element ("functionValueList-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionValueList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionValueList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList_2D_element GALGAS_functionValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionValueList_2D_element result ;
  const GALGAS_functionValueList_2D_element * p = (const GALGAS_functionValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList_2D_element::GALGAS_functionDefinitionList_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mOperandEnumTypeName (),
mProperty_mResultEnumTypeName (),
mProperty_mValueList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList_2D_element::~ GALGAS_functionDefinitionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList_2D_element::GALGAS_functionDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_functionValueList & inOperand3) :
mProperty_mFunctionName (inOperand0),
mProperty_mOperandEnumTypeName (inOperand1),
mProperty_mResultEnumTypeName (inOperand2),
mProperty_mValueList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList_2D_element GALGAS_functionDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_functionValueList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList_2D_element GALGAS_functionDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_functionValueList & inOperand3 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_functionDefinitionList_2D_element::objectCompare (const GALGAS_functionDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperandEnumTypeName.objectCompare (inOperand.mProperty_mOperandEnumTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultEnumTypeName.objectCompare (inOperand.mProperty_mResultEnumTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValueList.objectCompare (inOperand.mProperty_mValueList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_functionDefinitionList_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mOperandEnumTypeName.isValid () && mProperty_mResultEnumTypeName.isValid () && mProperty_mValueList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mOperandEnumTypeName.drop () ;
  mProperty_mResultEnumTypeName.drop () ;
  mProperty_mValueList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDefinitionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @functionDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperandEnumTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultEnumTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionDefinitionList_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionDefinitionList_2D_element::getter_mOperandEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionDefinitionList_2D_element::getter_mResultEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionValueList GALGAS_functionDefinitionList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @functionDefinitionList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDefinitionList_2D_element ("functionDefinitionList-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDefinitionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDefinitionList_2D_element GALGAS_functionDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionDefinitionList_2D_element result ;
  const GALGAS_functionDefinitionList_2D_element * p = (const GALGAS_functionDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence_2D_element::GALGAS_scenarioEventSequence_2D_element (void) :
mProperty_mEventName (),
mProperty_mArgumentNameList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence_2D_element::~ GALGAS_scenarioEventSequence_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence_2D_element::GALGAS_scenarioEventSequence_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEventName (inOperand0),
mProperty_mArgumentNameList (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence_2D_element GALGAS_scenarioEventSequence_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_scenarioEventSequence_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence_2D_element GALGAS_scenarioEventSequence_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scenarioEventSequence_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_scenarioEventSequence_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_scenarioEventSequence_2D_element::objectCompare (const GALGAS_scenarioEventSequence_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEventName.objectCompare (inOperand.mProperty_mEventName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentNameList.objectCompare (inOperand.mProperty_mArgumentNameList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_scenarioEventSequence_2D_element::isValid (void) const {
  return mProperty_mEventName.isValid () && mProperty_mArgumentNameList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence_2D_element::drop (void) {
  mProperty_mEventName.drop () ;
  mProperty_mArgumentNameList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioEventSequence_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @scenarioEventSequence-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEventName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentNameList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_scenarioEventSequence_2D_element::getter_mEventName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_scenarioEventSequence_2D_element::getter_mArgumentNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentNameList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @scenarioEventSequence-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scenarioEventSequence_2D_element ("scenarioEventSequence-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_scenarioEventSequence_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scenarioEventSequence_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_scenarioEventSequence_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scenarioEventSequence_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence_2D_element GALGAS_scenarioEventSequence_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_scenarioEventSequence_2D_element result ;
  const GALGAS_scenarioEventSequence_2D_element * p = (const GALGAS_scenarioEventSequence_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scenarioEventSequence_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scenarioEventSequence-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList_2D_element::GALGAS_scenarioList_2D_element (void) :
mProperty_mMachineName (),
mProperty_mScenarioName (),
mProperty_mEventSequence () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList_2D_element::~ GALGAS_scenarioList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList_2D_element::GALGAS_scenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_scenarioEventSequence & inOperand2) :
mProperty_mMachineName (inOperand0),
mProperty_mScenarioName (inOperand1),
mProperty_mEventSequence (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList_2D_element GALGAS_scenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_scenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_scenarioEventSequence::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList_2D_element GALGAS_scenarioList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_scenarioEventSequence & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scenarioList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_scenarioList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_scenarioList_2D_element::objectCompare (const GALGAS_scenarioList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMachineName.objectCompare (inOperand.mProperty_mMachineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mScenarioName.objectCompare (inOperand.mProperty_mScenarioName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEventSequence.objectCompare (inOperand.mProperty_mEventSequence) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_scenarioList_2D_element::isValid (void) const {
  return mProperty_mMachineName.isValid () && mProperty_mScenarioName.isValid () && mProperty_mEventSequence.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList_2D_element::drop (void) {
  mProperty_mMachineName.drop () ;
  mProperty_mScenarioName.drop () ;
  mProperty_mEventSequence.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scenarioList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @scenarioList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMachineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mScenarioName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEventSequence.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_scenarioList_2D_element::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_scenarioList_2D_element::getter_mScenarioName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScenarioName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_scenarioList_2D_element::getter_mEventSequence (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventSequence ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @scenarioList-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scenarioList_2D_element ("scenarioList-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_scenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scenarioList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_scenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scenarioList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioList_2D_element GALGAS_scenarioList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_scenarioList_2D_element result ;
  const GALGAS_scenarioList_2D_element * p = (const GALGAS_scenarioList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scenarioList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scenarioList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList_2D_element::GALGAS_decoratedExpressionList_2D_element (void) :
mProperty_mLabel (),
mProperty_mDecoratedExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList_2D_element::~ GALGAS_decoratedExpressionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList_2D_element::GALGAS_decoratedExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_decoratedExpression & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mDecoratedExpression (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList_2D_element GALGAS_decoratedExpressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_decoratedExpression & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedExpressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedExpressionList_2D_element::objectCompare (const GALGAS_decoratedExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLabel.objectCompare (inOperand.mProperty_mLabel) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedExpression.objectCompare (inOperand.mProperty_mDecoratedExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedExpressionList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mDecoratedExpression.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mDecoratedExpression.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedExpressionList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @decoratedExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLabel.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDecoratedExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedExpressionList_2D_element::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabel ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpression GALGAS_decoratedExpressionList_2D_element::getter_mDecoratedExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedExpression ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @decoratedExpressionList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedExpressionList_2D_element ("decoratedExpressionList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedExpressionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList_2D_element GALGAS_decoratedExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedExpressionList_2D_element result ;
  const GALGAS_decoratedExpressionList_2D_element * p = (const GALGAS_decoratedExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_enumConstantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList_2D_element::GALGAS_decoratedArgumentList_2D_element (void) :
mProperty_mArgumentTypeProxy (),
mProperty_mArgumentName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList_2D_element::~ GALGAS_decoratedArgumentList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList_2D_element::GALGAS_decoratedArgumentList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1) :
mProperty_mArgumentTypeProxy (inOperand0),
mProperty_mArgumentName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList_2D_element GALGAS_decoratedArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedArgumentList_2D_element (GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList_2D_element GALGAS_decoratedArgumentList_2D_element::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedArgumentList_2D_element::objectCompare (const GALGAS_decoratedArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mArgumentTypeProxy.objectCompare (inOperand.mProperty_mArgumentTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentName.objectCompare (inOperand.mProperty_mArgumentName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedArgumentList_2D_element::isValid (void) const {
  return mProperty_mArgumentTypeProxy.isValid () && mProperty_mArgumentName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList_2D_element::drop (void) {
  mProperty_mArgumentTypeProxy.drop () ;
  mProperty_mArgumentName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedArgumentList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @decoratedArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mArgumentTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_decoratedArgumentList_2D_element::getter_mArgumentTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedArgumentList_2D_element::getter_mArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @decoratedArgumentList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedArgumentList_2D_element ("decoratedArgumentList-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedArgumentList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList_2D_element GALGAS_decoratedArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedArgumentList_2D_element result ;
  const GALGAS_decoratedArgumentList_2D_element * p = (const GALGAS_decoratedArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap_2D_element::GALGAS_eventMap_2D_element (void) :
mProperty_lkey (),
mProperty_mDecoratedArgumentList (),
mProperty_mDecoratedEventInstructionList (),
mProperty_mEnsureDecoratedExpressionList (),
mProperty_mEndOfEnsureExpressionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap_2D_element::~ GALGAS_eventMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap_2D_element::GALGAS_eventMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_decoratedArgumentList & inOperand1,
                                                        const GALGAS_decoratedInstructionList & inOperand2,
                                                        const GALGAS_decoratedExpressionList & inOperand3,
                                                        const GALGAS_location & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mDecoratedArgumentList (inOperand1),
mProperty_mDecoratedEventInstructionList (inOperand2),
mProperty_mEnsureDecoratedExpressionList (inOperand3),
mProperty_mEndOfEnsureExpressionList (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap_2D_element GALGAS_eventMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_decoratedArgumentList::constructor_emptyList (HERE),
                                     GALGAS_decoratedInstructionList::constructor_emptyList (HERE),
                                     GALGAS_decoratedExpressionList::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap_2D_element GALGAS_eventMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_decoratedArgumentList & inOperand1,
                                                                        const GALGAS_decoratedInstructionList & inOperand2,
                                                                        const GALGAS_decoratedExpressionList & inOperand3,
                                                                        const GALGAS_location & inOperand4 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_eventMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_eventMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_eventMap_2D_element::objectCompare (const GALGAS_eventMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedArgumentList.objectCompare (inOperand.mProperty_mDecoratedArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedEventInstructionList.objectCompare (inOperand.mProperty_mDecoratedEventInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnsureDecoratedExpressionList.objectCompare (inOperand.mProperty_mEnsureDecoratedExpressionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfEnsureExpressionList.objectCompare (inOperand.mProperty_mEndOfEnsureExpressionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_eventMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDecoratedArgumentList.isValid () && mProperty_mDecoratedEventInstructionList.isValid () && mProperty_mEnsureDecoratedExpressionList.isValid () && mProperty_mEndOfEnsureExpressionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDecoratedArgumentList.drop () ;
  mProperty_mDecoratedEventInstructionList.drop () ;
  mProperty_mEnsureDecoratedExpressionList.drop () ;
  mProperty_mEndOfEnsureExpressionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_eventMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @eventMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDecoratedArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDecoratedEventInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnsureDecoratedExpressionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfEnsureExpressionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_eventMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedArgumentList GALGAS_eventMap_2D_element::getter_mDecoratedArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedInstructionList GALGAS_eventMap_2D_element::getter_mDecoratedEventInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedEventInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_eventMap_2D_element::getter_mEnsureDecoratedExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnsureDecoratedExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_eventMap_2D_element::getter_mEndOfEnsureExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfEnsureExpressionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @eventMap-element type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventMap_2D_element ("eventMap-element",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_eventMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_eventMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap_2D_element GALGAS_eventMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_eventMap_2D_element result ;
  const GALGAS_eventMap_2D_element * p = (const GALGAS_eventMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_eventMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("eventMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap_2D_element::GALGAS_machineVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTypeProxy (),
mProperty_mMaxValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap_2D_element::~ GALGAS_machineVarMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap_2D_element::GALGAS_machineVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                                  const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mTypeProxy (inOperand1),
mProperty_mMaxValue (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap_2D_element GALGAS_machineVarMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap_2D_element GALGAS_machineVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                                                  const GALGAS_uint & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_machineVarMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_machineVarMap_2D_element::objectCompare (const GALGAS_machineVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeProxy.objectCompare (inOperand.mProperty_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMaxValue.objectCompare (inOperand.mProperty_mMaxValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_machineVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mMaxValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTypeProxy.drop () ;
  mProperty_mMaxValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @machineVarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMaxValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_machineVarMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_machineVarMap_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarMap_2D_element::getter_mMaxValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaxValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @machineVarMap-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarMap_2D_element ("machineVarMap-element",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap_2D_element GALGAS_machineVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_machineVarMap_2D_element result ;
  const GALGAS_machineVarMap_2D_element * p = (const GALGAS_machineVarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList_2D_element::GALGAS_machineVarList_2D_element (void) :
mProperty_mTypeProxy (),
mProperty_mVarName (),
mProperty_mValueList (),
mProperty_mInitialValueConstantName (),
mProperty_mInitialValueConstantIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList_2D_element::~ GALGAS_machineVarList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList_2D_element::GALGAS_machineVarList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_lstringlist & inOperand2,
                                                                    const GALGAS_lstring & inOperand3,
                                                                    const GALGAS_uint & inOperand4) :
mProperty_mTypeProxy (inOperand0),
mProperty_mVarName (inOperand1),
mProperty_mValueList (inOperand2),
mProperty_mInitialValueConstantName (inOperand3),
mProperty_mInitialValueConstantIndex (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList_2D_element GALGAS_machineVarList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarList_2D_element (GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList_2D_element GALGAS_machineVarList_2D_element::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstringlist & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3,
                                                                                    const GALGAS_uint & inOperand4 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_machineVarList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_machineVarList_2D_element::objectCompare (const GALGAS_machineVarList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeProxy.objectCompare (inOperand.mProperty_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVarName.objectCompare (inOperand.mProperty_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValueList.objectCompare (inOperand.mProperty_mValueList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialValueConstantName.objectCompare (inOperand.mProperty_mInitialValueConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialValueConstantIndex.objectCompare (inOperand.mProperty_mInitialValueConstantIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_machineVarList_2D_element::isValid (void) const {
  return mProperty_mTypeProxy.isValid () && mProperty_mVarName.isValid () && mProperty_mValueList.isValid () && mProperty_mInitialValueConstantName.isValid () && mProperty_mInitialValueConstantIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList_2D_element::drop (void) {
  mProperty_mTypeProxy.drop () ;
  mProperty_mVarName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mInitialValueConstantName.drop () ;
  mProperty_mInitialValueConstantIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineVarList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @machineVarList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValueConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValueConstantIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_machineVarList_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_machineVarList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_machineVarList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_machineVarList_2D_element::getter_mInitialValueConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_machineVarList_2D_element::getter_mInitialValueConstantIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueConstantIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @machineVarList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarList_2D_element ("machineVarList-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineVarList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineVarList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList_2D_element GALGAS_machineVarList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_machineVarList_2D_element result ;
  const GALGAS_machineVarList_2D_element * p = (const GALGAS_machineVarList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineVarList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineVarList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList_2D_element::GALGAS_decoratedScenarioList_2D_element (void) :
mProperty_mScenarioName (),
mProperty_mEventSequence () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList_2D_element::~ GALGAS_decoratedScenarioList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList_2D_element::GALGAS_decoratedScenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_scenarioEventSequence & inOperand1) :
mProperty_mScenarioName (inOperand0),
mProperty_mEventSequence (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList_2D_element GALGAS_decoratedScenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedScenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_scenarioEventSequence::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList_2D_element GALGAS_decoratedScenarioList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_scenarioEventSequence & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedScenarioList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedScenarioList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedScenarioList_2D_element::objectCompare (const GALGAS_decoratedScenarioList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mScenarioName.objectCompare (inOperand.mProperty_mScenarioName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEventSequence.objectCompare (inOperand.mProperty_mEventSequence) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedScenarioList_2D_element::isValid (void) const {
  return mProperty_mScenarioName.isValid () && mProperty_mEventSequence.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList_2D_element::drop (void) {
  mProperty_mScenarioName.drop () ;
  mProperty_mEventSequence.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedScenarioList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @decoratedScenarioList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mScenarioName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEventSequence.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedScenarioList_2D_element::getter_mScenarioName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScenarioName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scenarioEventSequence GALGAS_decoratedScenarioList_2D_element::getter_mEventSequence (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventSequence ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @decoratedScenarioList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedScenarioList_2D_element ("decoratedScenarioList-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedScenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedScenarioList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedScenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedScenarioList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList_2D_element GALGAS_decoratedScenarioList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedScenarioList_2D_element result ;
  const GALGAS_decoratedScenarioList_2D_element * p = (const GALGAS_decoratedScenarioList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedScenarioList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedScenarioList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap_2D_element::GALGAS_machineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAttributeMap (),
mProperty_mAttributeList (),
mProperty_mInvariantDecoratedExpressionList (),
mProperty_mEventMap (),
mProperty_mDecoratedScenarioList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap_2D_element::~ GALGAS_machineMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap_2D_element::GALGAS_machineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_machineVarMap & inOperand1,
                                                            const GALGAS_machineVarList & inOperand2,
                                                            const GALGAS_decoratedExpressionList & inOperand3,
                                                            const GALGAS_eventMap & inOperand4,
                                                            const GALGAS_decoratedScenarioList & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mAttributeMap (inOperand1),
mProperty_mAttributeList (inOperand2),
mProperty_mInvariantDecoratedExpressionList (inOperand3),
mProperty_mEventMap (inOperand4),
mProperty_mDecoratedScenarioList (inOperand5) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap_2D_element GALGAS_machineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_machineVarMap::constructor_emptyMap (HERE),
                                       GALGAS_machineVarList::constructor_emptyList (HERE),
                                       GALGAS_decoratedExpressionList::constructor_emptyList (HERE),
                                       GALGAS_eventMap::constructor_emptyMap (HERE),
                                       GALGAS_decoratedScenarioList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap_2D_element GALGAS_machineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_machineVarMap & inOperand1,
                                                                            const GALGAS_machineVarList & inOperand2,
                                                                            const GALGAS_decoratedExpressionList & inOperand3,
                                                                            const GALGAS_eventMap & inOperand4,
                                                                            const GALGAS_decoratedScenarioList & inOperand5 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_machineMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_machineMap_2D_element::objectCompare (const GALGAS_machineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeMap.objectCompare (inOperand.mProperty_mAttributeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInvariantDecoratedExpressionList.objectCompare (inOperand.mProperty_mInvariantDecoratedExpressionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEventMap.objectCompare (inOperand.mProperty_mEventMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedScenarioList.objectCompare (inOperand.mProperty_mDecoratedScenarioList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_machineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAttributeMap.isValid () && mProperty_mAttributeList.isValid () && mProperty_mInvariantDecoratedExpressionList.isValid () && mProperty_mEventMap.isValid () && mProperty_mDecoratedScenarioList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAttributeMap.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mInvariantDecoratedExpressionList.drop () ;
  mProperty_mEventMap.drop () ;
  mProperty_mDecoratedScenarioList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_machineMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @machineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInvariantDecoratedExpressionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEventMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDecoratedScenarioList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_machineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarMap GALGAS_machineMap_2D_element::getter_mAttributeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineVarList GALGAS_machineMap_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedExpressionList GALGAS_machineMap_2D_element::getter_mInvariantDecoratedExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvariantDecoratedExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventMap GALGAS_machineMap_2D_element::getter_mEventMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEventMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedScenarioList GALGAS_machineMap_2D_element::getter_mDecoratedScenarioList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedScenarioList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @machineMap-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineMap_2D_element ("machineMap-element",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_machineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_machineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_machineMap_2D_element GALGAS_machineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_machineMap_2D_element result ;
  const GALGAS_machineMap_2D_element * p = (const GALGAS_machineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_machineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("machineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList_2D_element::GALGAS_decoratedFunctionValueList_2D_element (void) :
mProperty_mOperandName (),
mProperty_mOperandValue (),
mProperty_mResultName (),
mProperty_mResultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList_2D_element::~ GALGAS_decoratedFunctionValueList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList_2D_element::GALGAS_decoratedFunctionValueList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_uint & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_uint & inOperand3) :
mProperty_mOperandName (inOperand0),
mProperty_mOperandValue (inOperand1),
mProperty_mResultName (inOperand2),
mProperty_mResultValue (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList_2D_element GALGAS_decoratedFunctionValueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedFunctionValueList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList_2D_element GALGAS_decoratedFunctionValueList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_uint & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2,
                                                                                                            const GALGAS_uint & inOperand3 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedFunctionValueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_decoratedFunctionValueList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedFunctionValueList_2D_element::objectCompare (const GALGAS_decoratedFunctionValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOperandName.objectCompare (inOperand.mProperty_mOperandName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperandValue.objectCompare (inOperand.mProperty_mOperandValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultName.objectCompare (inOperand.mProperty_mResultName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultValue.objectCompare (inOperand.mProperty_mResultValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedFunctionValueList_2D_element::isValid (void) const {
  return mProperty_mOperandName.isValid () && mProperty_mOperandValue.isValid () && mProperty_mResultName.isValid () && mProperty_mResultValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedFunctionValueList_2D_element::drop (void) {
  mProperty_mOperandName.drop () ;
  mProperty_mOperandValue.drop () ;
  mProperty_mResultName.drop () ;
  mProperty_mResultValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedFunctionValueList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @decoratedFunctionValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperandName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperandValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedFunctionValueList_2D_element::getter_mOperandName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_decoratedFunctionValueList_2D_element::getter_mOperandValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedFunctionValueList_2D_element::getter_mResultName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_decoratedFunctionValueList_2D_element::getter_mResultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @decoratedFunctionValueList-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedFunctionValueList_2D_element ("decoratedFunctionValueList-element",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedFunctionValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedFunctionValueList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedFunctionValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedFunctionValueList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList_2D_element GALGAS_decoratedFunctionValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedFunctionValueList_2D_element result ;
  const GALGAS_decoratedFunctionValueList_2D_element * p = (const GALGAS_decoratedFunctionValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedFunctionValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedFunctionValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOperandTypeProxy (),
mProperty_mResultTypeProxy (),
mProperty_mDecoratedFunctionValueList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand2,
                                                              const GALGAS_decoratedFunctionValueList & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mOperandTypeProxy (inOperand1),
mProperty_mResultTypeProxy (inOperand2),
mProperty_mDecoratedFunctionValueList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_decoratedFunctionValueList::constructor_emptySortedList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand2,
                                                                              const GALGAS_decoratedFunctionValueList & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_functionMap_2D_element::objectCompare (const GALGAS_functionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperandTypeProxy.objectCompare (inOperand.mProperty_mOperandTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultTypeProxy.objectCompare (inOperand.mProperty_mResultTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedFunctionValueList.objectCompare (inOperand.mProperty_mDecoratedFunctionValueList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperandTypeProxy.isValid () && mProperty_mResultTypeProxy.isValid () && mProperty_mDecoratedFunctionValueList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOperandTypeProxy.drop () ;
  mProperty_mResultTypeProxy.drop () ;
  mProperty_mDecoratedFunctionValueList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @functionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperandTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDecoratedFunctionValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_functionMap_2D_element::getter_mOperandTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedScalarTypeMap_2D_proxy GALGAS_functionMap_2D_element::getter_mResultTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedFunctionValueList GALGAS_functionMap_2D_element::getter_mDecoratedFunctionValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedFunctionValueList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @functionMap-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  const GALGAS_functionMap_2D_element * p = (const GALGAS_functionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap_2D_element::GALGAS_transitionEventMap_2D_element (void) :
mProperty_lkey (),
mProperty_mArgumentList (),
mProperty_mTransitionBinarySet () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap_2D_element::~ GALGAS_transitionEventMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap_2D_element::GALGAS_transitionEventMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_eventArgumentList & inOperand1,
                                                                            const GALGAS_binaryset & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mArgumentList (inOperand1),
mProperty_mTransitionBinarySet (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap_2D_element GALGAS_transitionEventMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transitionEventMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_eventArgumentList::constructor_emptyList (HERE),
                                               GALGAS_binaryset::constructor_emptyBinarySet (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap_2D_element GALGAS_transitionEventMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_eventArgumentList & inOperand1,
                                                                                            const GALGAS_binaryset & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transitionEventMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transitionEventMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_transitionEventMap_2D_element::objectCompare (const GALGAS_transitionEventMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentList.objectCompare (inOperand.mProperty_mArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransitionBinarySet.objectCompare (inOperand.mProperty_mTransitionBinarySet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transitionEventMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentList.isValid () && mProperty_mTransitionBinarySet.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transitionEventMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentList.drop () ;
  mProperty_mTransitionBinarySet.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transitionEventMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @transitionEventMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransitionBinarySet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transitionEventMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_eventArgumentList GALGAS_transitionEventMap_2D_element::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryset GALGAS_transitionEventMap_2D_element::getter_mTransitionBinarySet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransitionBinarySet ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @transitionEventMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transitionEventMap_2D_element ("transitionEventMap-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transitionEventMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transitionEventMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transitionEventMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transitionEventMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transitionEventMap_2D_element GALGAS_transitionEventMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transitionEventMap_2D_element result ;
  const GALGAS_transitionEventMap_2D_element * p = (const GALGAS_transitionEventMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transitionEventMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transitionEventMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList_2D_element::GALGAS_varList_2D_element (void) :
mProperty_mVarName (),
mProperty_mValueList (),
mProperty_mBDDStartBitIndex (),
mProperty_mBDDBitCount (),
mProperty_mInitialValueIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList_2D_element::~ GALGAS_varList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList_2D_element::GALGAS_varList_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstringlist & inOperand1,
                                                      const GALGAS_uint & inOperand2,
                                                      const GALGAS_uint & inOperand3,
                                                      const GALGAS_uint & inOperand4) :
mProperty_mVarName (inOperand0),
mProperty_mValueList (inOperand1),
mProperty_mBDDStartBitIndex (inOperand2),
mProperty_mBDDBitCount (inOperand3),
mProperty_mInitialValueIndex (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList_2D_element GALGAS_varList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                    GALGAS_uint::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList_2D_element GALGAS_varList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstringlist & inOperand1,
                                                                      const GALGAS_uint & inOperand2,
                                                                      const GALGAS_uint & inOperand3,
                                                                      const GALGAS_uint & inOperand4 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_varList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_varList_2D_element::objectCompare (const GALGAS_varList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mVarName.objectCompare (inOperand.mProperty_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValueList.objectCompare (inOperand.mProperty_mValueList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBDDStartBitIndex.objectCompare (inOperand.mProperty_mBDDStartBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBDDBitCount.objectCompare (inOperand.mProperty_mBDDBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialValueIndex.objectCompare (inOperand.mProperty_mInitialValueIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_varList_2D_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mValueList.isValid () && mProperty_mBDDStartBitIndex.isValid () && mProperty_mBDDBitCount.isValid () && mProperty_mInitialValueIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList_2D_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mBDDStartBitIndex.drop () ;
  mProperty_mBDDBitCount.drop () ;
  mProperty_mInitialValueIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varList_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @varList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBDDStartBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBDDBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValueIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_varList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_varList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varList_2D_element::getter_mBDDStartBitIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDStartBitIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varList_2D_element::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDBitCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varList_2D_element::getter_mInitialValueIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @varList-element type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList_2D_element ("varList-element",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_varList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_varList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varList_2D_element GALGAS_varList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varList_2D_element result ;
  const GALGAS_varList_2D_element * p = (const GALGAS_varList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList_2D_element::GALGAS_binarysetList_2D_element (void) :
mProperty_mLabel (),
mProperty_mSet () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList_2D_element::~ GALGAS_binarysetList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList_2D_element::GALGAS_binarysetList_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_binaryset & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mSet (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList_2D_element GALGAS_binarysetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_binarysetList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_binaryset::constructor_emptyBinarySet (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList_2D_element GALGAS_binarysetList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_binaryset & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binarysetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_binarysetList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_binarysetList_2D_element::objectCompare (const GALGAS_binarysetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLabel.objectCompare (inOperand.mProperty_mLabel) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSet.objectCompare (inOperand.mProperty_mSet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_binarysetList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mSet.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mSet.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_binarysetList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @binarysetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLabel.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_binarysetList_2D_element::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabel ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryset GALGAS_binarysetList_2D_element::getter_mSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSet ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @binarysetList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetList_2D_element ("binarysetList-element",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_binarysetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_binarysetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binarysetList_2D_element GALGAS_binarysetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_binarysetList_2D_element result ;
  const GALGAS_binarysetList_2D_element * p = (const GALGAS_binarysetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binarysetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstantList (),
mProperty_mConstantMap (),
mProperty_mBDDStartBit (),
mProperty_mBDDBitCount () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap_2D_element::~ GALGAS_varMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstringlist & inOperand1,
                                                    const GALGAS_enumConstantMap & inOperand2,
                                                    const GALGAS_uint & inOperand3,
                                                    const GALGAS_uint & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mConstantList (inOperand1),
mProperty_mConstantMap (inOperand2),
mProperty_mBDDStartBit (inOperand3),
mProperty_mBDDBitCount (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_enumConstantMap::constructor_emptyMap (HERE),
                                   GALGAS_uint::constructor_default (HERE),
                                   GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstringlist & inOperand1,
                                                                    const GALGAS_enumConstantMap & inOperand2,
                                                                    const GALGAS_uint & inOperand3,
                                                                    const GALGAS_uint & inOperand4 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_varMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_varMap_2D_element::objectCompare (const GALGAS_varMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantList.objectCompare (inOperand.mProperty_mConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantMap.objectCompare (inOperand.mProperty_mConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBDDStartBit.objectCompare (inOperand.mProperty_mBDDStartBit) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBDDBitCount.objectCompare (inOperand.mProperty_mBDDBitCount) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_varMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantList.isValid () && mProperty_mConstantMap.isValid () && mProperty_mBDDStartBit.isValid () && mProperty_mBDDBitCount.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantList.drop () ;
  mProperty_mConstantMap.drop () ;
  mProperty_mBDDStartBit.drop () ;
  mProperty_mBDDBitCount.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_varMap_2D_element::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @varMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBDDStartBit.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBDDBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_varMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_varMap_2D_element::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_varMap_2D_element::getter_mConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varMap_2D_element::getter_mBDDStartBit (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDStartBit ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_varMap_2D_element::getter_mBDDBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBDDBitCount ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @varMap-element type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap_2D_element ("varMap-element",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_varMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_varMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  const GALGAS_varMap_2D_element * p = (const GALGAS_varMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@machineList-element performMachineDynamicAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_performMachineDynamicAnalysis (const GALGAS_machineList_2D_element inObject,
                                                    const GALGAS_string constinArgument_inSourceFileName,
                                                    const GALGAS_unifiedScalarTypeMap constinArgument_inUnifiedScalarTypeMap,
                                                    const GALGAS_scenarioList constinArgument_inScenarioList,
                                                    const GALGAS_functionMap constinArgument_inFunctionMap,
                                                    GALGAS_string & ioArgument_ioGenerationString,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dotFileContents_8832 = GALGAS_string ("digraph G {\n") ;
  var_dotFileContents_8832.plusAssign_operation(GALGAS_string ("  node [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 310)) ;
  var_dotFileContents_8832.plusAssign_operation(GALGAS_string ("  edge [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 311)) ;
  GALGAS_uint var_bddStartBitIndex_9055 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_varMap var_varMap_9076 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 314)) ;
  GALGAS_varList var_varList_9100 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 315)) ;
  GALGAS_binaryset var_varContraintSet_9134 = GALGAS_binaryset::constructor_fullBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 316)) ;
  const GALGAS_machineList_2D_element temp_0 = inObject ;
  cEnumerator_enumVarDeclarationList enumerator_9200 (temp_0.getter_mEnumVarDeclarationList (HERE), kENUMERATION_UP) ;
  while (enumerator_9200.hasCurrentObject ()) {
    GALGAS_enumConstantMap var_constantMap_9282 ;
    GALGAS_lstringlist var_constantList_9300 ;
    GALGAS_bool joker_9302 ; // Joker input parameter
    constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_9200.current (HERE).getter_mEnumTypeName (HERE), var_constantMap_9282, var_constantList_9300, joker_9302, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 318)) ;
    GALGAS_uint var_initialValueIndex_9384 ;
    var_constantMap_9282.method_searchKey (enumerator_9200.current (HERE).getter_mConstantName (HERE), var_initialValueIndex_9384, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 319)) ;
    GALGAS_uint var_bddBitCount_9411 = var_constantList_9300.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 320)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 320)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 320)) ;
    {
    var_varMap_9076.setter_insertKey (enumerator_9200.current (HERE).getter_mEnumVarName (HERE), var_constantList_9300, var_constantMap_9282, var_bddStartBitIndex_9055, var_bddBitCount_9411, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 321)) ;
    }
    var_varList_9100.addAssign_operation (enumerator_9200.current (HERE).getter_mEnumVarName (HERE), var_constantList_9300, var_bddStartBitIndex_9055, var_bddBitCount_9411, var_initialValueIndex_9384  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 328)) ;
    var_varContraintSet_9134 = var_varContraintSet_9134.operator_and (GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_bddStartBitIndex_9055, var_bddBitCount_9411, var_constantList_9300.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 337)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 337)).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 334)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 334)) ;
    var_bddStartBitIndex_9055 = var_bddStartBitIndex_9055.add_operation (var_bddBitCount_9411, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 339)) ;
    enumerator_9200.gotoNextObject () ;
  }
  GALGAS_uint var_varTotalBitCount_10003 = var_bddStartBitIndex_9055 ;
  GALGAS_binaryset var_initValueSet_10151 = var_varContraintSet_9134 ;
  cEnumerator_varList enumerator_10195 (var_varList_9100, kENUMERATION_UP) ;
  while (enumerator_10195.hasCurrentObject ()) {
    GALGAS_binaryset var_s_10208 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (enumerator_10195.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_10195.current (HERE).getter_mBDDBitCount (HERE), enumerator_10195.current (HERE).getter_mInitialValueIndex (HERE).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 346)) ;
    var_initValueSet_10151 = var_initValueSet_10151.operator_and (var_s_10208 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 351)) ;
    enumerator_10195.gotoNextObject () ;
  }
  GALGAS_uint_36__34_list var_initValueList_10439 = var_initValueSet_10151.getter_uint_36__34_ValueList (var_varTotalBitCount_10003 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 353)) ;
  cEnumerator_uint_36__34_list enumerator_10515 (var_initValueList_10439, kENUMERATION_UP) ;
  while (enumerator_10515.hasCurrentObject ()) {
    var_dotFileContents_8832.plusAssign_operation(GALGAS_string ("  \"\" [shape=plaintext]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 355)) ;
    var_dotFileContents_8832.plusAssign_operation(GALGAS_string ("  \"\" -> \"").add_operation (function_nameForValue (enumerator_10515.current (HERE).getter_mValue (HERE), var_varList_9100, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)) ;
    enumerator_10515.gotoNextObject () ;
  }
  {
  const GALGAS_machineList_2D_element temp_1 = inObject ;
  routine_displayVarValueSet (temp_1.getter_mMachineName (HERE).getter_string (HERE).add_operation (GALGAS_string (" init configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 359)), var_initValueSet_10151, var_varList_9100, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 358)) ;
  }
  GALGAS_binarysetList var_invariantList_10894 = GALGAS_binarysetList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 365)) ;
  GALGAS_binaryset var_invariantValueSet_10930 = var_varContraintSet_9134 ;
  const GALGAS_machineList_2D_element temp_2 = inObject ;
  cEnumerator_expressionList enumerator_10991 (temp_2.getter_mInvariantExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_10991.hasCurrentObject ()) {
    GALGAS_binaryset var_expressionBDD_11092 ;
    callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) enumerator_10991.current (HERE).getter_mExpression (HERE).ptr (), var_varMap_9076, var_varTotalBitCount_10003, var_expressionBDD_11092, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 368)) ;
    GALGAS_binaryset var_inv_11116 = var_expressionBDD_11092.operator_and (var_varContraintSet_9134 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 369)) ;
    var_invariantList_10894.addAssign_operation (enumerator_10991.current (HERE).getter_mLabel (HERE), var_inv_11116  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 370)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_inv_11116.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 371)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_10991.current (HERE).getter_mLabel (HERE).getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 372)), GALGAS_string ("this invariant is empty"), fixItArray4  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372)) ;
      }
    }
    var_invariantValueSet_10930 = var_invariantValueSet_10930.operator_and (var_inv_11116 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 374)) ;
    enumerator_10991.gotoNextObject () ;
  }
  GALGAS_uint_36__34_list var_valueList_11354 = var_invariantValueSet_10930.getter_uint_36__34_ValueList (var_varTotalBitCount_10003 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 376)) ;
  const GALGAS_machineList_2D_element temp_5 = inObject ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_valueList_11354.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 377)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string var_m_11418 = temp_5.getter_mMachineName (HERE).getter_string (HERE).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)).add_operation (var_valueList_11354.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 377)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)).add_operation (GALGAS_string (" configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)) ;
  {
  routine_displayVarValueSet (GALGAS_string (" Invariant of ").add_operation (var_m_11418, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 379)), var_invariantValueSet_10930, var_varList_9100, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 378)) ;
  }
  inCompiler->printMessage (GALGAS_string (" Invariant of ").add_operation (var_m_11418, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 384)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 384))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 384)) ;
  cEnumerator_uint_36__34_list enumerator_11720 (var_valueList_11354, kENUMERATION_UP) ;
  while (enumerator_11720.hasCurrentObject ()) {
    var_dotFileContents_8832.plusAssign_operation(GALGAS_string ("  \"").add_operation (function_nameForValue (enumerator_11720.current (HERE).getter_mValue (HERE), var_varList_9100, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)).add_operation (GALGAS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)) ;
    enumerator_11720.gotoNextObject () ;
  }
  GALGAS_binaryset var_oldVar_5F_Var_5F_EqualitySet_11962 = var_varContraintSet_9134 ;
  cEnumerator_varList enumerator_12006 (var_varList_9100, kENUMERATION_UP) ;
  while (enumerator_12006.hasCurrentObject ()) {
    GALGAS_binaryset var_constraint_12028 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (enumerator_12006.current (HERE).getter_mBDDStartBitIndex (HERE), enumerator_12006.current (HERE).getter_mBDDBitCount (HERE), enumerator_12006.current (HERE).getter_mBDDStartBitIndex (HERE).add_operation (var_varTotalBitCount_10003, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 392)) ;
    var_oldVar_5F_Var_5F_EqualitySet_11962 = var_oldVar_5F_Var_5F_EqualitySet_11962.operator_and (var_constraint_12028 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 397)) ;
    enumerator_12006.gotoNextObject () ;
  }
  GALGAS_varMap var_varMapForEventInstructionComputing_12310 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 399)) ;
  cEnumerator_varMap enumerator_12340 (var_varMap_9076, kENUMERATION_UP) ;
  while (enumerator_12340.hasCurrentObject ()) {
    {
    var_varMapForEventInstructionComputing_12310.setter_insertKey (enumerator_12340.current (HERE).getter_lkey (HERE), enumerator_12340.current (HERE).getter_mConstantList (HERE), enumerator_12340.current (HERE).getter_mConstantMap (HERE), enumerator_12340.current (HERE).getter_mBDDStartBit (HERE).add_operation (var_varTotalBitCount_10003, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 405)), enumerator_12340.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 401)) ;
    }
    enumerator_12340.gotoNextObject () ;
  }
  GALGAS_binaryset var_allTransitions_12591 = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 409)) ;
  GALGAS_transitionEventMap var_transitionEventMap_12650 = GALGAS_transitionEventMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 410)) ;
  cEnumerator_eventDeclarationList enumerator_12681 (inObject.mProperty_mEventList, kENUMERATION_UP) ;
  while (enumerator_12681.hasCurrentObject ()) {
    GALGAS_varList var_argumentList_12734 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 413)) ;
    GALGAS_varMap var_argVarMap_12761 = var_varMapForEventInstructionComputing_12310 ;
    GALGAS_uint var_bddArgOldVarVarTotalBitCount_12837 = var_varTotalBitCount_10003.add_operation (var_varTotalBitCount_10003, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 415)) ;
    GALGAS_binaryset var_eventTransformationSet_12913 = var_invariantValueSet_10930.operator_and (var_oldVar_5F_Var_5F_EqualitySet_11962 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 416)) ;
    cEnumerator_eventArgumentList enumerator_12998 (enumerator_12681.current (HERE).getter_mEventArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_12998.hasCurrentObject ()) {
      GALGAS_enumConstantMap var_constantMap_13081 ;
      GALGAS_lstringlist var_constantList_13099 ;
      GALGAS_bool joker_13101 ; // Joker input parameter
      constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_12998.current (HERE).getter_mArgumentTypeName (HERE), var_constantMap_13081, var_constantList_13099, joker_13101, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 418)) ;
      GALGAS_uint var_bddBitCount_13131 = var_constantList_13099.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 419)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 419)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 419)) ;
      {
      var_argVarMap_12761.setter_insertKey (enumerator_12998.current (HERE).getter_mArgumentVarName (HERE), var_constantList_13099, var_constantMap_13081, var_bddArgOldVarVarTotalBitCount_12837, var_bddBitCount_13131, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 420)) ;
      }
      var_argumentList_12734.addAssign_operation (enumerator_12998.current (HERE).getter_mArgumentVarName (HERE), var_constantList_13099, var_bddArgOldVarVarTotalBitCount_12837, var_bddBitCount_13131, GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 427)) ;
      var_eventTransformationSet_12913 = var_eventTransformationSet_12913.operator_and (GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_bddArgOldVarVarTotalBitCount_12837, var_bddBitCount_13131, var_constantList_13099.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 436)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 436)).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 433)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 433)) ;
      var_bddArgOldVarVarTotalBitCount_12837 = var_bddArgOldVarVarTotalBitCount_12837.add_operation (var_bddBitCount_13131, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 437)) ;
      enumerator_12998.gotoNextObject () ;
    }
    extensionMethod_computeInstructionListBDD (enumerator_12681.current (HERE).getter_mEventInstructionList (HERE), var_varTotalBitCount_10003, var_argVarMap_12761, constinArgument_inFunctionMap, var_bddArgOldVarVarTotalBitCount_12837, var_eventTransformationSet_12913, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 440)) ;
    {
    const GALGAS_machineList_2D_element temp_8 = inObject ;
    routine_displayArgVarVarValueSet (GALGAS_string (" Running ").add_operation (temp_8.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 449)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 449)).add_operation (enumerator_12681.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 449)).add_operation (GALGAS_string (" event"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 449)), var_eventTransformationSet_12913, var_argumentList_12734, var_varList_9100, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 448)) ;
    }
    GALGAS_binaryset var_transitions_14264 = var_eventTransformationSet_12913.getter_existOnBitIndexAndBeyond (var_varTotalBitCount_10003.add_operation (var_varTotalBitCount_10003, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 455)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 455)) ;
    {
    var_transitionEventMap_12650.setter_insertKey (enumerator_12681.current (HERE).getter_mEventName (HERE), enumerator_12681.current (HERE).getter_mEventArgumentList (HERE), var_eventTransformationSet_12913, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 456)) ;
    }
    var_allTransitions_12591 = var_allTransitions_12591.operator_or (var_transitions_14264 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 461)) ;
    {
    routine_addTransitionsToGraphvizString (enumerator_12681.current (HERE), var_bddArgOldVarVarTotalBitCount_12837, var_eventTransformationSet_12913, var_varList_9100, var_varTotalBitCount_10003, var_argumentList_12734, var_dotFileContents_8832, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 463)) ;
    }
    GALGAS_binaryset var_ensureValueSet_14826 = var_varContraintSet_9134.operator_and (var_varContraintSet_9134.left_shift_operation (var_varTotalBitCount_10003 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 473)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 473)) ;
    cEnumerator_expressionList enumerator_14928 (enumerator_12681.current (HERE).getter_mEnsureExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_14928.hasCurrentObject ()) {
      GALGAS_binaryset var_s_15048 ;
      callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) enumerator_14928.current (HERE).getter_mExpression (HERE).ptr (), var_varMapForEventInstructionComputing_12310, var_varTotalBitCount_10003, var_s_15048, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 475)) ;
      var_ensureValueSet_14826 = var_ensureValueSet_14826.operator_and (var_s_15048 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 476)) ;
      enumerator_14928.gotoNextObject () ;
    }
    GALGAS_uint_36__34_ var_valueCount_15126 = var_ensureValueSet_14826.getter_valueCount (var_varTotalBitCount_10003.add_operation (var_varTotalBitCount_10003, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 478)) ;
    {
    const GALGAS_machineList_2D_element temp_9 = inObject ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_valueCount_15126.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString () ;
    }
    routine_displayVarVarValueSet (GALGAS_string (" Post-condition of ").add_operation (temp_9.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (enumerator_12681.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (GALGAS_string (" event: "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (var_valueCount_15126.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (GALGAS_string (" configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 481)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 481)), var_ensureValueSet_14826, var_varList_9100, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 479)) ;
    }
    const GALGAS_machineList_2D_element temp_12 = inObject ;
    GALGAS_string temp_13 ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_valueCount_15126.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
    if (kBoolTrue == test_14) {
      temp_13 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_14) {
      temp_13 = GALGAS_string::makeEmptyString () ;
    }
    inCompiler->printMessage (GALGAS_string (" Post-condition of ").add_operation (temp_12.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (enumerator_12681.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (GALGAS_string (" event: "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (var_valueCount_15126.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (GALGAS_string (" configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 487)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 487)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 487))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)) ;
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_ensureValueSet_14826.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 489)).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_12681.current (HERE).getter_mEndOfEnsureExpressionList (HERE), GALGAS_string ("ensure condition is empty"), fixItArray16  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 490)) ;
      }
    }
    if (kBoolFalse == test_15) {
      GALGAS_binaryset var_ensureAndInvariant_15863 = var_ensureValueSet_14826.operator_and (var_invariantValueSet_10930 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 492)) ;
      GALGAS_uint_36__34_ var_valueCount_15929 = var_ensureAndInvariant_15863.getter_valueCount (var_varTotalBitCount_10003.add_operation (var_varTotalBitCount_10003, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 493)) ;
      const GALGAS_machineList_2D_element temp_17 = inObject ;
      GALGAS_string temp_18 ;
      const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_valueCount_15929.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_19) {
        temp_18 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_19) {
        temp_18 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string var_m_16012 = GALGAS_string (" Post-condition and invariant of ").add_operation (temp_17.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (enumerator_12681.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (GALGAS_string (" event: "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (var_valueCount_15929.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (GALGAS_string (" configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 495)).add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 495)) ;
      {
      routine_displayVarVarValueSet (var_m_16012, var_ensureAndInvariant_15863, var_varList_9100, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 496)) ;
      }
      inCompiler->printMessage (var_m_16012.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 502))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 502)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = var_ensureAndInvariant_15863.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 503)).boolEnum () ;
        if (kBoolTrue == test_20) {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (enumerator_12681.current (HERE).getter_mEndOfEnsureExpressionList (HERE), GALGAS_string ("post condition condition is not compatible with invariant"), fixItArray21  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 504)) ;
        }
      }
      if (kBoolFalse == test_20) {
        GALGAS_binaryset var_ensureAndContext_16551 = var_transitions_14264.operator_and (var_ensureValueSet_14826 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 507)) ;
        {
        const GALGAS_machineList_2D_element temp_22 = inObject ;
        routine_displayVarVarValueSet (GALGAS_string ("Post-condition and execution of ").add_operation (temp_22.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 509)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 509)).add_operation (enumerator_12681.current (HERE).getter_mEventName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 509)), var_ensureAndContext_16551, var_varList_9100, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 508)) ;
        }
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GALGAS_bool (kIsNotEqual, var_ensureAndContext_16551.objectCompare (var_transitions_14264)).boolEnum () ;
          if (kBoolTrue == test_23) {
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_12681.current (HERE).getter_mEndOfEnsureExpressionList (HERE), GALGAS_string ("event instructions is not compatible with post condition"), fixItArray24  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 515)) ;
          }
        }
        if (kBoolFalse == test_23) {
          GALGAS_binaryset var_result_17009 = var_transitions_14264.right_shift_operation (var_varTotalBitCount_10003 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 518)) ;
          cEnumerator_binarysetList enumerator_17078 (var_invariantList_10894, kENUMERATION_UP) ;
          while (enumerator_17078.hasCurrentObject ()) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              test_25 = GALGAS_bool (kIsNotEqual, var_result_17009.objectCompare (var_result_17009.operator_and (enumerator_17078.current (HERE).getter_mSet (HERE) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 520)))).boolEnum () ;
              if (kBoolTrue == test_25) {
                TC_Array <C_FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (enumerator_12681.current (HERE).getter_mEndOfEnsureExpressionList (HERE), GALGAS_string ("event instructions is not compatible with invariant '").add_operation (enumerator_17078.current (HERE).getter_mLabel (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 522)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 522)), fixItArray26  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 521)) ;
              }
            }
            enumerator_17078.gotoNextObject () ;
          }
        }
      }
    }
    enumerator_12681.gotoNextObject () ;
  }
  var_dotFileContents_8832.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 530)) ;
  GALGAS_bool joker_17520 ; // Joker input parameter
  var_dotFileContents_8832.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 531)), joker_17520, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 531)) ;
  GALGAS_binaryset var_accessibleStates_17657 = var_allTransitions_12591.getter_accessibleStates (var_initValueSet_10151, var_varTotalBitCount_10003 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 533)) ;
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GALGAS_bool (kIsNotEqual, var_accessibleStates_17657.objectCompare (var_invariantValueSet_10930)).boolEnum () ;
    if (kBoolTrue == test_27) {
      GALGAS_binaryset var_inaccessibleStateSet_17813 = var_invariantValueSet_10930.operator_and (var_accessibleStates_17657.operator_tilde (SOURCE_FILE ("dynamicAnalysis.galgas", 535)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 535)) ;
      GALGAS_uint_36__34_ var_inaccessibleStateCount_17893 = var_inaccessibleStateSet_17813.getter_valueCount (var_varTotalBitCount_10003, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 536)) ;
      const GALGAS_machineList_2D_element temp_28 = inObject ;
      GALGAS_string temp_29 ;
      const enumGalgasBool test_30 = GALGAS_bool (kIsStrictSup, var_inaccessibleStateCount_17893.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_30) {
        temp_29 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_30) {
        temp_29 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_28.getter_mMachineName (HERE).getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 537)), var_inaccessibleStateCount_17893.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 537)).add_operation (GALGAS_string (" inaccessible invariant configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 537)).add_operation (temp_29, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 537)), fixItArray31  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 537)) ;
      {
      const GALGAS_machineList_2D_element temp_32 = inObject ;
      routine_displayVarValueSet (GALGAS_string ("Inaccessible ").add_operation (temp_32.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 540)).add_operation (GALGAS_string (" invariant configurations"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 540)), var_inaccessibleStateSet_17813, var_varList_9100, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 539)) ;
      }
    }
  }
  cEnumerator_scenarioList enumerator_18391 (constinArgument_inScenarioList, kENUMERATION_UP) ;
  while (enumerator_18391.hasCurrentObject ()) {
    enumGalgasBool test_33 = kBoolTrue ;
    if (kBoolTrue == test_33) {
      const GALGAS_machineList_2D_element temp_34 = inObject ;
      test_33 = GALGAS_bool (kIsEqual, enumerator_18391.current (HERE).getter_mMachineName (HERE).getter_string (HERE).objectCompare (temp_34.getter_mMachineName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_33) {
        const GALGAS_machineList_2D_element temp_35 = inObject ;
        inCompiler->printMessage (GALGAS_string (" Scenario \"").add_operation (enumerator_18391.current (HERE).getter_mScenarioName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549)).add_operation (GALGAS_string ("\" for "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549)).add_operation (temp_35.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549)).add_operation (GALGAS_string (" machine\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549)) ;
        const GALGAS_machineList_2D_element temp_36 = inObject ;
        ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("*** Scenario \"").add_operation (enumerator_18391.current (HERE).getter_mScenarioName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)).add_operation (GALGAS_string ("\" for "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)).add_operation (temp_36.getter_mMachineName (HERE).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)).add_operation (GALGAS_string (" machine:\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)) ;
        GALGAS_binaryset var_valueSet_18709 = var_initValueSet_10151 ;
        GALGAS_machineVarListForDisplay var_displayStateInfo_18777 = extensionGetter_displayVarInfo (var_varList_9100, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 552)) ;
        GALGAS_uint var_firstColumnLength_18873 = GALGAS_string ("Event").getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 554)) ;
        cEnumerator_scenarioEventSequence enumerator_18935 (enumerator_18391.current (HERE).getter_mEventSequence (HERE), kENUMERATION_UP) ;
        while (enumerator_18935.hasCurrentObject ()) {
          GALGAS_string var_eventString_18966 = enumerator_18935.current (HERE).getter_mEventName (HERE).getter_string (HERE).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 556)) ;
          cEnumerator_lstringlist enumerator_19045 (enumerator_18935.current (HERE).getter_mArgumentNameList (HERE), kENUMERATION_UP) ;
          while (enumerator_19045.hasCurrentObject ()) {
            var_eventString_18966.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_19045.current (HERE).getter_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 558)) ;
            if (enumerator_19045.hasNextObject ()) {
              var_eventString_18966.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 559)) ;
            }
            enumerator_19045.gotoNextObject () ;
          }
          var_eventString_18966.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 561)) ;
          GALGAS_uint var_lg_19193 = var_eventString_18966.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 562)) ;
          enumGalgasBool test_37 = kBoolTrue ;
          if (kBoolTrue == test_37) {
            test_37 = GALGAS_bool (kIsStrictInf, var_firstColumnLength_18873.objectCompare (var_lg_19193)).boolEnum () ;
            if (kBoolTrue == test_37) {
              var_firstColumnLength_18873 = var_lg_19193 ;
            }
          }
          enumerator_18935.gotoNextObject () ;
        }
        ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("Event").getter_stringByRightPadding (var_firstColumnLength_18873.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 568)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 568)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 568)) ;
        {
        routine_displayVarNames (var_displayStateInfo_18777, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 569)) ;
        }
        ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), var_firstColumnLength_18873.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 570))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 570)) ;
        {
        routine_displaySeparator (var_displayStateInfo_18777, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 571)) ;
        }
        cEnumerator_scenarioEventSequence enumerator_19674 (enumerator_18391.current (HERE).getter_mEventSequence (HERE), kENUMERATION_UP) ;
        while (enumerator_19674.hasCurrentObject ()) {
          GALGAS_eventArgumentList var_argumentList_19790 ;
          GALGAS_binaryset var_transitionSet_19830 ;
          var_transitionEventMap_12650.method_searchKey (enumerator_19674.current (HERE).getter_mEventName (HERE), var_argumentList_19790, var_transitionSet_19830, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 573)) ;
          GALGAS_uint var_bddBitIndex_19893 = var_varTotalBitCount_10003.add_operation (var_varTotalBitCount_10003, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 579)) ;
          GALGAS_string var_eventString_19959 = enumerator_19674.current (HERE).getter_mEventName (HERE).getter_string (HERE).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 580)) ;
          cEnumerator_eventArgumentList enumerator_20027 (var_argumentList_19790, kENUMERATION_UP) ;
          cEnumerator_lstringlist enumerator_20062 (enumerator_19674.current (HERE).getter_mArgumentNameList (HERE), kENUMERATION_UP) ;
          while (enumerator_20027.hasCurrentObject () && enumerator_20062.hasCurrentObject ()) {
            var_eventString_19959.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_20062.current (HERE).getter_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 583)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 583)) ;
            GALGAS_enumConstantMap var_constantMap_20229 ;
            GALGAS_lstringlist joker_20231_2 ; // Joker input parameter
            GALGAS_bool joker_20231_1 ; // Joker input parameter
            constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_20027.current (HERE).getter_mArgumentTypeName (HERE), var_constantMap_20229, joker_20231_2, joker_20231_1, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 584)) ;
            GALGAS_uint var_constantIndex_20307 ;
            var_constantMap_20229.method_searchKey (enumerator_20062.current (HERE).getter_mValue (HERE), var_constantIndex_20307, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 585)) ;
            GALGAS_uint var_bitCount_20337 = var_constantMap_20229.getter_count (SOURCE_FILE ("dynamicAnalysis.galgas", 586)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 586)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 586)) ;
            var_transitionSet_19830 = var_transitionSet_19830.operator_and (GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_bddBitIndex_19893, var_bitCount_20337, var_constantIndex_20307.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 587)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 587)) ;
            var_bddBitIndex_19893 = var_bddBitIndex_19893.add_operation (var_bitCount_20337, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 591)) ;
            if (enumerator_20027.hasNextObject () && enumerator_20062.hasNextObject ()) {
              var_eventString_19959.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 593)) ;
            }
            enumerator_20027.gotoNextObject () ;
            enumerator_20062.gotoNextObject () ;
          }
          var_eventString_19959.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 595)) ;
          var_valueSet_18709 = var_valueSet_18709.operator_and (var_transitionSet_19830 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 596)).right_shift_operation (var_varTotalBitCount_10003 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 596)).getter_existOnBitIndexAndBeyond (var_varTotalBitCount_10003 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 596)) ;
          ioArgument_ioGenerationString.plusAssign_operation(var_eventString_19959.getter_stringByRightPadding (var_firstColumnLength_18873, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 597)) ;
          GALGAS_uint_36__34_list var_valueList_20919 = var_valueSet_18709.getter_uint_36__34_ValueList (var_varTotalBitCount_10003 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 598)) ;
          enumGalgasBool test_38 = kBoolTrue ;
          if (kBoolTrue == test_38) {
            test_38 = GALGAS_bool (kIsEqual, var_valueList_20919.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 599)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_38) {
              TC_Array <C_FixItDescription> fixItArray39 ;
              inCompiler->emitSemanticError (enumerator_19674.current (HERE).getter_mEventName (HERE).getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 600)), GALGAS_string ("no configuration instead of 1"), fixItArray39  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 600)) ;
              ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 601)) ;
            }
          }
          if (kBoolFalse == test_38) {
            enumGalgasBool test_40 = kBoolTrue ;
            if (kBoolTrue == test_40) {
              test_40 = GALGAS_bool (kIsStrictSup, var_valueList_20919.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 602)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_40) {
                TC_Array <C_FixItDescription> fixItArray41 ;
                inCompiler->emitSemanticError (enumerator_19674.current (HERE).getter_mEventName (HERE).getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 603)), var_valueList_20919.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 603)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 603)).add_operation (GALGAS_string (" configurations instead of 1"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 603)), fixItArray41  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 603)) ;
                ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 604)) ;
              }
            }
            if (kBoolFalse == test_40) {
              ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 606)) ;
              {
              routine_displayValue (var_displayStateInfo_18777, var_valueList_20919.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 607)), ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 607)) ;
              }
            }
          }
          enumerator_19674.gotoNextObject () ;
        }
        ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 610)) ;
      }
    }
    enumerator_18391.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_BoolCommandLineOption gOption_omnibus_5F_options_generateCCode ("omnibus_options",
                                         "generateCCode",
                                         99,
                                         "generate-c-code",
                                         "Generate C code") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@implicationExpression analyzeExpression'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_implicationExpression_analyzeExpression (const cPtr_expression * inObject,
                                                                     const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                     const GALGAS_bool constinArgument_inEnsureClause,
                                                                     GALGAS_decoratedExpression & outArgument_outDecoratedExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implicationExpression * object = (const cPtr_implicationExpression *) inObject ;
  macroValidSharedObject (object, cPtr_implicationExpression) ;
  GALGAS_decoratedExpression var_leftDecoratedExpr_1831 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_leftDecoratedExpr_1831, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 54)) ;
  GALGAS_decoratedExpression var_rightDecoratedExpr_1954 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_rightDecoratedExpr_1954, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 59)) ;
  outArgument_outDecoratedExpression = GALGAS_implicationDecoratedExpression::constructor_new (var_leftDecoratedExpr_1831, var_rightDecoratedExpr_1954  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 64)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_implicationExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_implicationExpression.mSlotID,
                                          extensionMethod_implicationExpression_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_implicationExpression_analyzeExpression (defineExtensionMethod_implicationExpression_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@logicalOrExpression analyzeExpression'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_logicalOrExpression_analyzeExpression (const cPtr_expression * inObject,
                                                                   const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                   const GALGAS_bool constinArgument_inEnsureClause,
                                                                   GALGAS_decoratedExpression & outArgument_outDecoratedExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logicalOrExpression * object = (const cPtr_logicalOrExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalOrExpression) ;
  GALGAS_decoratedExpression var_leftDecoratedExpr_2435 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_leftDecoratedExpr_2435, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 75)) ;
  GALGAS_decoratedExpression var_rightDecoratedExpr_2558 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_rightDecoratedExpr_2558, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 80)) ;
  outArgument_outDecoratedExpression = GALGAS_logicalOrDecoratedExpression::constructor_new (var_leftDecoratedExpr_2435, var_rightDecoratedExpr_2558  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 85)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_logicalOrExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_logicalOrExpression.mSlotID,
                                          extensionMethod_logicalOrExpression_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_logicalOrExpression_analyzeExpression (defineExtensionMethod_logicalOrExpression_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@logicalAndExpression analyzeExpression'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_logicalAndExpression_analyzeExpression (const cPtr_expression * inObject,
                                                                    const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                    const GALGAS_bool constinArgument_inEnsureClause,
                                                                    GALGAS_decoratedExpression & outArgument_outDecoratedExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logicalAndExpression * object = (const cPtr_logicalAndExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalAndExpression) ;
  GALGAS_decoratedExpression var_leftDecoratedExpr_3038 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_leftDecoratedExpr_3038, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 96)) ;
  GALGAS_decoratedExpression var_rightDecoratedExpr_3161 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_rightDecoratedExpr_3161, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 101)) ;
  outArgument_outDecoratedExpression = GALGAS_logicalAndDecoratedExpression::constructor_new (var_leftDecoratedExpr_3038, var_rightDecoratedExpr_3161  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 106)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_logicalAndExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_logicalAndExpression.mSlotID,
                                          extensionMethod_logicalAndExpression_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_logicalAndExpression_analyzeExpression (defineExtensionMethod_logicalAndExpression_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@comparisonInExpression analyzeExpression'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_comparisonInExpression_analyzeExpression (const cPtr_expression * inObject,
                                                                      const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                      const GALGAS_bool constinArgument_inEnsureClause,
                                                                      GALGAS_decoratedExpression & outArgument_outDecoratedExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonInExpression * object = (const cPtr_comparisonInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonInExpression) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_attributeTypeProxy_3663 ;
  GALGAS_uint joker_3669 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mAttributeName, var_attributeTypeProxy_3663, joker_3669, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 118)) ;
  GALGAS_decoratedComparisonRightOperand var_decoratedOperandExpression_3846 ;
  callExtensionMethod_analyzeComparisonRightOperand ((const cPtr_comparisonRightOperand *) object->mProperty_mRightOperand.ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_decoratedOperandExpression_3846, var_attributeTypeProxy_3663, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 124)) ;
  outArgument_outDecoratedExpression = GALGAS_decoratedComparisonInExpression::constructor_new (object->mProperty_mAttributeName, object->mProperty_mOperator, var_decoratedOperandExpression_3846  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 130)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_comparisonInExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_comparisonInExpression.mSlotID,
                                          extensionMethod_comparisonInExpression_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_comparisonInExpression_analyzeExpression (defineExtensionMethod_comparisonInExpression_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@constantAsComparisonRightOperand analyzeComparisonRightOperand'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand (const cPtr_comparisonRightOperand * inObject,
                                                                                            const GALGAS_analyzeContext /* constinArgument_inAnalyzeContext */,
                                                                                            const GALGAS_bool /* constinArgument_inEnsureClause */,
                                                                                            GALGAS_decoratedComparisonRightOperand & outArgument_outDecoratedExpression,
                                                                                            const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inVarTypeProxy,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constantAsComparisonRightOperand * object = (const cPtr_constantAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_constantAsComparisonRightOperand) ;
  GALGAS_uint var_constantValue_5364 ;
  constinArgument_inVarTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 172)).method_searchKey (object->mProperty_mConstantName, var_constantValue_5364, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 172)) ;
  outArgument_outDecoratedExpression = GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (constinArgument_inVarTypeProxy, object->mProperty_mConstantName, var_constantValue_5364  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 173)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand (void) {
  enterExtensionMethod_analyzeComparisonRightOperand (kTypeDescriptor_GALGAS_constantAsComparisonRightOperand.mSlotID,
                                                      extensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand (defineExtensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@attributeAsComparisonRightOperand analyzeComparisonRightOperand'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand (const cPtr_comparisonRightOperand * inObject,
                                                                                             const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                                             const GALGAS_bool constinArgument_inEnsureClause,
                                                                                             GALGAS_decoratedComparisonRightOperand & outArgument_outDecoratedExpression,
                                                                                             const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inVarTypeProxy,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_attributeAsComparisonRightOperand * object = (const cPtr_attributeAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_attributeAsComparisonRightOperand) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mHasOldQualifier.operator_and (constinArgument_inEnsureClause.operator_not (SOURCE_FILE ("expressionStaticAnalysis.galgas", 183)) COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 183)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAttributeName.getter_location (SOURCE_FILE ("expressionStaticAnalysis.galgas", 184)), GALGAS_string ("'old' qualifier is allowed only in post condition"), fixItArray1  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 184)) ;
    }
  }
  GALGAS_unifiedScalarTypeMap_2D_proxy var_operandTypeProxy_6075 ;
  GALGAS_uint joker_6081 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mAttributeName, var_operandTypeProxy_6075, joker_6081, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 186)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inVarTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 192)).objectCompare (var_operandTypeProxy_6075.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 192)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mAttributeName.getter_location (SOURCE_FILE ("expressionStaticAnalysis.galgas", 193)), GALGAS_string ("var type is '%").add_operation (constinArgument_inVarTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 194)).add_operation (GALGAS_string ("', and is different from right expression type '%"), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 194)).add_operation (var_operandTypeProxy_6075.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 195)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 196)), fixItArray3  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 193)) ;
    }
  }
  outArgument_outDecoratedExpression = GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (object->mProperty_mAttributeName  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 198)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand (void) {
  enterExtensionMethod_analyzeComparisonRightOperand (kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand.mSlotID,
                                                      extensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand (defineExtensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@varAsAssignmentSourceExpression analyzeAssignmentSourceExpression'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (const cPtr_assignmentSourceExpression * inObject,
                                                                                               const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                                               const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inTargetTypeProxy,
                                                                                               GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAsAssignmentSourceExpression * object = (const cPtr_varAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_varAsAssignmentSourceExpression) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_sourceTypeProxy_4045 ;
  GALGAS_uint joker_4051 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mSourceVarName, var_sourceTypeProxy_4045, joker_4051, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 111)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 117)).objectCompare (var_sourceTypeProxy_4045.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 117)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mSourceVarName.getter_location (SOURCE_FILE ("instructionStaticAnalysis.galgas", 118)), GALGAS_string ("var type is '").add_operation (constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 119)).add_operation (GALGAS_string ("', and is different from right expression type '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 119)).add_operation (var_sourceTypeProxy_4045.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 120)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 121)), fixItArray1  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 118)) ;
    }
  }
  outArgument_outDecoratedExpression = GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (object->mProperty_mSourceVarName  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 123)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@constantAsAssignmentSourceExpression analyzeAssignmentSourceExpression'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (const cPtr_assignmentSourceExpression * inObject,
                                                                                                    const GALGAS_analyzeContext /* constinArgument_inAnalyzeContext */,
                                                                                                    const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inTargetTypeProxy,
                                                                                                    GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constantAsAssignmentSourceExpression * object = (const cPtr_constantAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_constantAsAssignmentSourceExpression) ;
  GALGAS_uint var_cstValue_4869 ;
  constinArgument_inTargetTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 134)).method_searchKey (object->mProperty_mConstantName, var_cstValue_4869, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 134)) ;
  outArgument_outDecoratedExpression = GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_new (object->mProperty_mConstantName, var_cstValue_4869, constinArgument_inTargetTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 138)).getter_count (SOURCE_FILE ("instructionStaticAnalysis.galgas", 138)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 138)).getter_significantBitCount (SOURCE_FILE ("instructionStaticAnalysis.galgas", 138))  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 135)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@functionAsAssignmentSourceExpression analyzeAssignmentSourceExpression'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (const cPtr_assignmentSourceExpression * inObject,
                                                                                                    const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                                                    const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inTargetTypeProxy,
                                                                                                    GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionAsAssignmentSourceExpression * object = (const cPtr_functionAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_functionAsAssignmentSourceExpression) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_operandTypeProxy_5582 ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_resultTypeProxy_5635 ;
  GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_5699 ;
  constinArgument_inAnalyzeContext.getter_mFunctionMap (HERE).method_searchKey (object->mProperty_mFunctionName, var_operandTypeProxy_5582, var_resultTypeProxy_5635, var_decoratedFunctionValueList_5699, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 149)) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_attributeTypeProxy_5861 ;
  GALGAS_uint joker_5937 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mOperandName, var_attributeTypeProxy_5861, joker_5937, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 156)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_operandTypeProxy_5582.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 164)).objectCompare (var_attributeTypeProxy_5861.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 164)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mOperandName.getter_location (SOURCE_FILE ("instructionStaticAnalysis.galgas", 165)), GALGAS_string ("the '").add_operation (object->mProperty_mOperandName.getter_string (SOURCE_FILE ("instructionStaticAnalysis.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 165)).add_operation (GALGAS_string ("' belongs to the '%"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 165)).add_operation (var_attributeTypeProxy_5861.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 166)).add_operation (GALGAS_string ("', but '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 166)).add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("instructionStaticAnalysis.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 167)).add_operation (GALGAS_string ("' function requires an '%"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 167)).add_operation (var_operandTypeProxy_5582.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 167)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 168)), fixItArray1  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 165)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 171)).objectCompare (var_resultTypeProxy_5635.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 171)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperandName.getter_location (SOURCE_FILE ("instructionStaticAnalysis.galgas", 172)), GALGAS_string ("var type is '").add_operation (constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 173)).add_operation (GALGAS_string ("', and is different from function result type '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 173)).add_operation (var_resultTypeProxy_5635.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 174)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 175)), fixItArray3  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 172)) ;
    }
  }
  outArgument_outDecoratedExpression = GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_new (object->mProperty_mFunctionName, object->mProperty_mOperandName, var_decoratedFunctionValueList_5699  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 178)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@assignmentInstruction analyzeInstruction'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_assignmentInstruction_analyzeInstruction (const cPtr_instruction * inObject,
                                                                      const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                      GALGAS_decoratedInstruction & outArgument_outDecoratedInstruction,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstruction * object = (const cPtr_assignmentInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstruction) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_targetTypeProxy_7098 ;
  GALGAS_uint joker_7104 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mTargetVarName, var_targetTypeProxy_7098, joker_7104, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 190)) ;
  GALGAS_decoratedAssignmentSourceExpression var_decoratedExpression_7274 ;
  callExtensionMethod_analyzeAssignmentSourceExpression ((const cPtr_assignmentSourceExpression *) object->mProperty_mSourceExpression.ptr (), constinArgument_inAnalyzeContext, var_targetTypeProxy_7098, var_decoratedExpression_7274, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 195)) ;
  outArgument_outDecoratedInstruction = GALGAS_assignmentDecoratedInstruction::constructor_new (var_targetTypeProxy_7098, object->mProperty_mTargetVarName, var_decoratedExpression_7274  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 200)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assignmentInstruction_analyzeInstruction (void) {
  enterExtensionMethod_analyzeInstruction (kTypeDescriptor_GALGAS_assignmentInstruction.mSlotID,
                                           extensionMethod_assignmentInstruction_analyzeInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignmentInstruction_analyzeInstruction (defineExtensionMethod_assignmentInstruction_analyzeInstruction, NULL) ;

