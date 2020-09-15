#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_omnibus_5F_options_generateCCode ("omnibus_options",
                                         "generateCCode",
                                         99,
                                         "generate-c-code",
                                         "Generate C code") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implicationExpression analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_implicationExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_implicationExpression.mSlotID,
                                          extensionMethod_implicationExpression_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_implicationExpression_analyzeExpression (defineExtensionMethod_implicationExpression_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logicalOrExpression analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logicalOrExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_logicalOrExpression.mSlotID,
                                          extensionMethod_logicalOrExpression_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logicalOrExpression_analyzeExpression (defineExtensionMethod_logicalOrExpression_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logicalAndExpression analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logicalAndExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_logicalAndExpression.mSlotID,
                                          extensionMethod_logicalAndExpression_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logicalAndExpression_analyzeExpression (defineExtensionMethod_logicalAndExpression_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonInExpression analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_comparisonInExpression_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_comparisonInExpression.mSlotID,
                                          extensionMethod_comparisonInExpression_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_comparisonInExpression_analyzeExpression (defineExtensionMethod_comparisonInExpression_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constantAsComparisonRightOperand analyzeComparisonRightOperand'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand (void) {
  enterExtensionMethod_analyzeComparisonRightOperand (kTypeDescriptor_GALGAS_constantAsComparisonRightOperand.mSlotID,
                                                      extensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand (defineExtensionMethod_constantAsComparisonRightOperand_analyzeComparisonRightOperand, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@attributeAsComparisonRightOperand analyzeComparisonRightOperand'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand (void) {
  enterExtensionMethod_analyzeComparisonRightOperand (kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand.mSlotID,
                                                      extensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand (defineExtensionMethod_attributeAsComparisonRightOperand_analyzeComparisonRightOperand, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varAsAssignmentSourceExpression analyzeAssignmentSourceExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_varAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constantAsAssignmentSourceExpression analyzeAssignmentSourceExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_constantAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionAsAssignmentSourceExpression analyzeAssignmentSourceExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  enterExtensionMethod_analyzeAssignmentSourceExpression (kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression.mSlotID,
                                                          extensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression (defineExtensionMethod_functionAsAssignmentSourceExpression_analyzeAssignmentSourceExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstruction analyzeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstruction_analyzeInstruction (void) {
  enterExtensionMethod_analyzeInstruction (kTypeDescriptor_GALGAS_assignmentInstruction.mSlotID,
                                           extensionMethod_assignmentInstruction_analyzeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstruction_analyzeInstruction (defineExtensionMethod_assignmentInstruction_analyzeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstruction analyzeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstruction_analyzeInstruction (const cPtr_instruction * inObject,
                                                                  const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                  GALGAS_decoratedInstruction & outArgument_outDecoratedInstruction,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstruction * object = (const cPtr_switchInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstruction) ;
  GALGAS_unifiedScalarTypeMap_2D_proxy var_variableTypeProxy_7823 ;
  GALGAS_uint joker_7829 ; // Joker input parameter
  constinArgument_inAnalyzeContext.getter_mMachineVarMap (HERE).method_searchKey (object->mProperty_mVariableName, var_variableTypeProxy_7823, joker_7829, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 213)) ;
  GALGAS_switchDecoratedCaseList var_switchDecoratedCaseList_7908 = GALGAS_switchDecoratedCaseList::constructor_emptyList (SOURCE_FILE ("instructionStaticAnalysis.galgas", 219)) ;
  GALGAS_stringset var_usedConstantNameSet_7946 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instructionStaticAnalysis.galgas", 220)) ;
  cEnumerator_switchCaseList enumerator_8009 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_8009.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_8051 (enumerator_8009.current_mConstantNameList (HERE), kENUMERATION_UP) ;
    while (enumerator_8051.hasCurrentObject ()) {
      GALGAS_uint joker_8120 ; // Joker input parameter
      var_variableTypeProxy_7823.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 223)).method_searchKey (enumerator_8051.current_mValue (HERE), joker_8120, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 223)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_usedConstantNameSet_7946.getter_hasKey (enumerator_8051.current_mValue (HERE).getter_string (SOURCE_FILE ("instructionStaticAnalysis.galgas", 224)) COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 224)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_8051.current_mValue (HERE).getter_location (SOURCE_FILE ("instructionStaticAnalysis.galgas", 225)), GALGAS_string ("duplicated constant"), fixItArray1  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 225)) ;
        }
      }
      var_usedConstantNameSet_7946.addAssign_operation (enumerator_8051.current_mValue (HERE).getter_string (SOURCE_FILE ("instructionStaticAnalysis.galgas", 227))  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 227)) ;
      enumerator_8051.gotoNextObject () ;
    }
    GALGAS_decoratedInstructionList var_decoratedInstructionList_8421 ;
    extensionMethod_analyzeInstructionList (enumerator_8009.current_mInstructionList (HERE), constinArgument_inAnalyzeContext, var_decoratedInstructionList_8421, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 229)) ;
    var_switchDecoratedCaseList_7908.addAssign_operation (enumerator_8009.current_mConstantNameList (HERE), var_decoratedInstructionList_8421  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 233)) ;
    enumerator_8009.gotoNextObject () ;
  }
  GALGAS_stringset var_missingConstantSet_8569 = var_variableTypeProxy_7823.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 236)).getter_keySet (SOURCE_FILE ("instructionStaticAnalysis.galgas", 236)).substract_operation (var_usedConstantNameSet_7946, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 236)) ;
  cEnumerator_stringset enumerator_8678 (var_missingConstantSet_8569, kENUMERATION_UP) ;
  while (enumerator_8678.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfSwitchExpression, GALGAS_string ("missing constant '").add_operation (enumerator_8678.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 238)).add_operation (GALGAS_string ("' in switch instruction"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 238)), fixItArray2  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 238)) ;
    enumerator_8678.gotoNextObject () ;
  }
  outArgument_outDecoratedInstruction = GALGAS_switchDecoratedInstruction::constructor_new (object->mProperty_mVariableName, var_switchDecoratedCaseList_7908  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 241)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstruction_analyzeInstruction (void) {
  enterExtensionMethod_analyzeInstruction (kTypeDescriptor_GALGAS_switchInstruction.mSlotID,
                                           extensionMethod_switchInstruction_analyzeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstruction_analyzeInstruction (defineExtensionMethod_switchInstruction_analyzeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstruction analyzeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstruction_analyzeInstruction (const cPtr_instruction * inObject,
                                                              const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                              GALGAS_decoratedInstruction & outArgument_outDecoratedInstruction,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstruction * object = (const cPtr_ifInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstruction) ;
  GALGAS_decoratedExpression var_decoratedExpression_9312 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mTestExpression.ptr (), constinArgument_inAnalyzeContext, GALGAS_bool (false), var_decoratedExpression_9312, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 253)) ;
  GALGAS_decoratedInstructionList var_decoratedThenInstructionList_9449 ;
  extensionMethod_analyzeInstructionList (object->mProperty_mThenInstructionList, constinArgument_inAnalyzeContext, var_decoratedThenInstructionList_9449, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 258)) ;
  GALGAS_decoratedInstructionList var_decoratedElseInstructionList_9586 ;
  extensionMethod_analyzeInstructionList (object->mProperty_mElseInstructionList, constinArgument_inAnalyzeContext, var_decoratedElseInstructionList_9586, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 262)) ;
  outArgument_outDecoratedInstruction = GALGAS_ifDecoratedInstruction::constructor_new (object->mProperty_mIFinstructionLocation, var_decoratedExpression_9312, object->mProperty_mEndOfTestExpression, var_decoratedThenInstructionList_9449, var_decoratedElseInstructionList_9586  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 266)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstruction_analyzeInstruction (void) {
  enterExtensionMethod_analyzeInstruction (kTypeDescriptor_GALGAS_ifInstruction.mSlotID,
                                           extensionMethod_ifInstruction_analyzeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstruction_analyzeInstruction (defineExtensionMethod_ifInstruction_analyzeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstruction analyzeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstruction_analyzeInstruction (const cPtr_instruction * inObject,
                                                                  const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                                                  GALGAS_decoratedInstruction & outArgument_outDecoratedInstruction,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstruction * object = (const cPtr_assertInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstruction) ;
  GALGAS_decoratedExpression var_decoratedExpression_10193 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) object->mProperty_mAssertExpression.ptr (), constinArgument_inAnalyzeContext, GALGAS_bool (false), var_decoratedExpression_10193, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 281)) ;
  outArgument_outDecoratedInstruction = GALGAS_assertDecoratedInstruction::constructor_new (object->mProperty_mAssertInstructionLocation, var_decoratedExpression_10193  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 286)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstruction_analyzeInstruction (void) {
  enterExtensionMethod_analyzeInstruction (kTypeDescriptor_GALGAS_assertInstruction.mSlotID,
                                           extensionMethod_assertInstruction_analyzeInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstruction_analyzeInstruction (defineExtensionMethod_assertInstruction_analyzeInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performStaticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performStaticAnalysis (const GALGAS_ast constinArgument_inAST,
                                    GALGAS_unifiedScalarTypeMap & outArgument_outUnifiedScalarTypeMap,
                                    GALGAS_functionMap & outArgument_outFunctionMap,
                                    GALGAS_machineMap & outArgument_outClassTypeMap,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnifiedScalarTypeMap.drop () ; // Release 'out' argument
  outArgument_outFunctionMap.drop () ; // Release 'out' argument
  outArgument_outClassTypeMap.drop () ; // Release 'out' argument
  GALGAS_stringset var_allEnumerationConstants_336 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("staticAnalysis.galgas", 12)) ;
  outArgument_outUnifiedScalarTypeMap = GALGAS_unifiedScalarTypeMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 13)) ;
  cEnumerator_enumTypeList enumerator_430 (constinArgument_inAST.getter_mEnumTypeList (HERE), kENUMERATION_UP) ;
  while (enumerator_430.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, enumerator_430.current (HERE).getter_mEnumConstantList (HERE).getter_length (SOURCE_FILE ("staticAnalysis.galgas", 15)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_430.current (HERE).getter_mEnumListName (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 16)), GALGAS_string ("an enumeration should define 2 constants or more"), fixItArray1  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 16)) ;
      }
    }
    GALGAS_enumConstantMap var_enumConstantMap_603 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 18)) ;
    cEnumerator_lstringlist enumerator_641 (enumerator_430.current (HERE).getter_mEnumConstantList (HERE), kENUMERATION_UP) ;
    GALGAS_uint index_616 ((uint32_t) 0) ;
    while (enumerator_641.hasCurrentObject ()) {
      {
      var_enumConstantMap_603.setter_insertKey (enumerator_641.current (HERE).getter_mValue (HERE), index_616, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 20)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_allEnumerationConstants_336.getter_hasKey (enumerator_641.current (HERE).getter_mValue (HERE).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 21)) COMMA_SOURCE_FILE ("staticAnalysis.galgas", 21)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_641.current (HERE).getter_mValue (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 22)), GALGAS_string ("this enumeration constant is already defined"), fixItArray3  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 22)) ;
        }
      }
      var_allEnumerationConstants_336.addAssign_operation (enumerator_641.current (HERE).getter_mValue (HERE).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 24))  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 24)) ;
      enumerator_641.gotoNextObject () ;
      index_616.increment_operation (inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 19)) ;
    }
    {
    outArgument_outUnifiedScalarTypeMap.setter_insertKey (enumerator_430.current (HERE).getter_mEnumListName (HERE), var_enumConstantMap_603, enumerator_430.current (HERE).getter_mEnumConstantList (HERE), enumerator_430.current (HERE).getter_mGenerateCode (HERE), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 26)) ;
    }
    enumerator_430.gotoNextObject () ;
  }
  outArgument_outFunctionMap = GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 34)) ;
  cEnumerator_functionDefinitionList enumerator_1186 (constinArgument_inAST.getter_mFunctionDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_1186.hasCurrentObject ()) {
    GALGAS_enumConstantMap var_operandEnumMap_1309 ;
    GALGAS_lstringlist joker_1311_2 ; // Joker input parameter
    GALGAS_bool joker_1311_1 ; // Joker input parameter
    outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_1186.current (HERE).getter_mOperandEnumTypeName (HERE), var_operandEnumMap_1309, joker_1311_2, joker_1311_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 37)) ;
    GALGAS_enumConstantMap var_resultEnumMap_1431 ;
    GALGAS_lstringlist joker_1433_2 ; // Joker input parameter
    GALGAS_bool joker_1433_1 ; // Joker input parameter
    outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_1186.current (HERE).getter_mResultEnumTypeName (HERE), var_resultEnumMap_1431, joker_1433_2, joker_1433_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 39)) ;
    GALGAS_stringset var_handledOperandSet_1491 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("staticAnalysis.galgas", 41)) ;
    GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_1546 = GALGAS_decoratedFunctionValueList::constructor_emptySortedList (SOURCE_FILE ("staticAnalysis.galgas", 42)) ;
    cEnumerator_functionValueList enumerator_1609 (enumerator_1186.current (HERE).getter_mValueList (HERE), kENUMERATION_UP) ;
    while (enumerator_1609.hasCurrentObject ()) {
      GALGAS_uint var_operandValue_1684 ;
      var_operandEnumMap_1309.method_searchKey (enumerator_1609.current (HERE).getter_mOperandName (HERE), var_operandValue_1684, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 44)) ;
      GALGAS_uint var_resultValue_1754 ;
      var_resultEnumMap_1431.method_searchKey (enumerator_1609.current (HERE).getter_mResultName (HERE), var_resultValue_1754, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 45)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_handledOperandSet_1491.getter_hasKey (enumerator_1609.current (HERE).getter_mOperandName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("staticAnalysis.galgas", 46)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_1609.current (HERE).getter_mOperandName (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 47)), GALGAS_string ("the '").add_operation (enumerator_1609.current (HERE).getter_mOperandName (HERE).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 47)).add_operation (GALGAS_string ("' value is already used"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 47)), fixItArray5  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 47)) ;
        }
      }
      var_handledOperandSet_1491.addAssign_operation (enumerator_1609.current (HERE).getter_mOperandName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 49)) ;
      var_decoratedFunctionValueList_1546.addAssign_operation (enumerator_1609.current (HERE).getter_mOperandName (HERE), var_operandValue_1684, enumerator_1609.current (HERE).getter_mResultName (HERE), var_resultValue_1754  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 50)) ;
      enumerator_1609.gotoNextObject () ;
    }
    cEnumerator_enumConstantMap enumerator_2161 (var_operandEnumMap_1309, kENUMERATION_UP) ;
    while (enumerator_2161.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_handledOperandSet_1491.getter_hasKey (enumerator_2161.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("staticAnalysis.galgas", 58)).operator_not (SOURCE_FILE ("staticAnalysis.galgas", 58)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_1186.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 59)), GALGAS_string ("this function is not define for '").add_operation (enumerator_2161.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 59)).add_operation (GALGAS_string ("' value"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 59)), fixItArray7  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 59)) ;
        }
      }
      enumerator_2161.gotoNextObject () ;
    }
    {
    outArgument_outFunctionMap.setter_insertKey (enumerator_1186.current (HERE).getter_mFunctionName (HERE), GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_1186.current (HERE).getter_mOperandEnumTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 65)), GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_1186.current (HERE).getter_mResultEnumTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 66)), var_decoratedFunctionValueList_1546, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 63)) ;
    }
    enumerator_1186.gotoNextObject () ;
  }
  outArgument_outClassTypeMap = GALGAS_machineMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 71)) ;
  cEnumerator_machineList enumerator_2768 (constinArgument_inAST.getter_mMachineList (HERE), kENUMERATION_UP) ;
  while (enumerator_2768.hasCurrentObject ()) {
    GALGAS_machineVarMap var_machineVarMap_2793 = GALGAS_machineVarMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 73)) ;
    GALGAS_machineVarList var_machineVarList_2840 = GALGAS_machineVarList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 74)) ;
    cEnumerator_enumVarDeclarationList enumerator_2927 (enumerator_2768.current (HERE).getter_mEnumVarDeclarationList (HERE), kENUMERATION_UP) ;
    while (enumerator_2927.hasCurrentObject ()) {
      GALGAS_enumConstantMap var_enumCstMap_3037 ;
      GALGAS_lstringlist var_constantList_3076 ;
      GALGAS_bool joker_3086 ; // Joker input parameter
      outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_2927.current (HERE).getter_mEnumTypeName (HERE), var_enumCstMap_3037, var_constantList_3076, joker_3086, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 77)) ;
      GALGAS_uint var_constantIndex_3165 ;
      var_enumCstMap_3037.method_searchKey (enumerator_2927.current (HERE).getter_mConstantName (HERE), var_constantIndex_3165, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 83)) ;
      GALGAS_unifiedScalarTypeMap_2D_proxy var_t_3178 = GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_2927.current (HERE).getter_mEnumTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 84)) ;
      {
      var_machineVarMap_2793.setter_insertKey (enumerator_2927.current (HERE).getter_mEnumVarName (HERE), var_t_3178, var_enumCstMap_3037.getter_count (SOURCE_FILE ("staticAnalysis.galgas", 88)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 85)) ;
      }
      var_machineVarList_2840.addAssign_operation (var_t_3178, enumerator_2927.current (HERE).getter_mEnumVarName (HERE), var_constantList_3076, enumerator_2927.current (HERE).getter_mConstantName (HERE), var_constantIndex_3165  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 90)) ;
      enumerator_2927.gotoNextObject () ;
    }
    GALGAS_analyzeContext var_analyzeContext_3554 = GALGAS_analyzeContext::constructor_new (outArgument_outUnifiedScalarTypeMap, var_machineVarMap_2793, outArgument_outFunctionMap  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 98)) ;
    GALGAS_decoratedExpressionList var_invariantDecoratedExpressionList_3831 ;
    extensionMethod_analyzeExpressionList (enumerator_2768.current (HERE).getter_mInvariantExpressionList (HERE), var_analyzeContext_3554, GALGAS_bool (false), var_invariantDecoratedExpressionList_3831, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 104)) ;
    GALGAS_eventMap var_eventMap_3912 = GALGAS_eventMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 110)) ;
    cEnumerator_eventDeclarationList enumerator_3961 (enumerator_2768.current (HERE).getter_mEventList (HERE), kENUMERATION_UP) ;
    while (enumerator_3961.hasCurrentObject ()) {
      GALGAS_analyzeContext var_analyzeContextForEvent_4028 = var_analyzeContext_3554 ;
      GALGAS_decoratedArgumentList var_decoratedArgumentList_4077 = GALGAS_decoratedArgumentList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 114)) ;
      cEnumerator_eventArgumentList enumerator_4151 (enumerator_3961.current (HERE).getter_mEventArgumentList (HERE), kENUMERATION_UP) ;
      while (enumerator_4151.hasCurrentObject ()) {
        GALGAS_lstringlist var_enumConstantList_4260 ;
        GALGAS_enumConstantMap joker_4222 ; // Joker input parameter
        GALGAS_bool joker_4262 ; // Joker input parameter
        outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_4151.current (HERE).getter_mArgumentTypeName (HERE), joker_4222, var_enumConstantList_4260, joker_4262, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 116)) ;
        {
        var_analyzeContextForEvent_4028.mProperty_mMachineVarMap.setter_insertKey (enumerator_4151.current (HERE).getter_mArgumentVarName (HERE), GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_4151.current (HERE).getter_mArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 119)), var_enumConstantList_4260.getter_length (SOURCE_FILE ("staticAnalysis.galgas", 120)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 117)) ;
        }
        var_decoratedArgumentList_4077.addAssign_operation (GALGAS_unifiedScalarTypeMap_2D_proxy::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_4151.current (HERE).getter_mArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 123)), enumerator_4151.current (HERE).getter_mArgumentVarName (HERE)  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 122)) ;
        enumerator_4151.gotoNextObject () ;
      }
      GALGAS_decoratedInstructionList var_decoratedEventInstructionList_4864 ;
      extensionMethod_analyzeInstructionList (enumerator_3961.current (HERE).getter_mEventInstructionList (HERE), var_analyzeContextForEvent_4028, var_decoratedEventInstructionList_4864, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 127)) ;
      GALGAS_decoratedExpressionList var_ensureDecoratedExpressionList_5059 ;
      extensionMethod_analyzeExpressionList (enumerator_3961.current (HERE).getter_mEnsureExpressionList (HERE), var_analyzeContext_3554, GALGAS_bool (true), var_ensureDecoratedExpressionList_5059, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 132)) ;
      {
      var_eventMap_3912.setter_insertKey (enumerator_3961.current (HERE).getter_mEventName (HERE), var_decoratedArgumentList_4077, var_decoratedEventInstructionList_4864, var_ensureDecoratedExpressionList_5059, enumerator_3961.current (HERE).getter_mEndOfEnsureExpressionList (HERE), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 138)) ;
      }
      enumerator_3961.gotoNextObject () ;
    }
    GALGAS_decoratedScenarioList var_decoratedScenarioList_5412 = GALGAS_decoratedScenarioList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 147)) ;
    cEnumerator_scenarioList enumerator_5488 (constinArgument_inAST.getter_mScenarioList (HERE), kENUMERATION_UP) ;
    while (enumerator_5488.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, enumerator_5488.current (HERE).getter_mMachineName (HERE).getter_string (HERE).objectCompare (enumerator_2768.current (HERE).getter_mMachineName (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_8) {
          cEnumerator_scenarioEventSequence enumerator_5604 (enumerator_5488.current (HERE).getter_mEventSequence (HERE), kENUMERATION_UP) ;
          while (enumerator_5604.hasCurrentObject ()) {
            GALGAS_decoratedArgumentList var_decoratedArgumentList_5705 ;
            GALGAS_decoratedInstructionList joker_5707_3 ; // Joker input parameter
            GALGAS_decoratedExpressionList joker_5707_2 ; // Joker input parameter
            GALGAS_location joker_5707_1 ; // Joker input parameter
            var_eventMap_3912.method_searchKey (enumerator_5604.current (HERE).getter_mEventName (HERE), var_decoratedArgumentList_5705, joker_5707_3, joker_5707_2, joker_5707_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 151)) ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, enumerator_5604.current (HERE).getter_mArgumentNameList (HERE).getter_length (SOURCE_FILE ("staticAnalysis.galgas", 152)).objectCompare (var_decoratedArgumentList_5705.getter_length (SOURCE_FILE ("staticAnalysis.galgas", 152)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                GALGAS_string temp_10 ;
                const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, enumerator_5604.current (HERE).getter_mArgumentNameList (HERE).getter_length (SOURCE_FILE ("staticAnalysis.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  temp_10 = GALGAS_string ("s") ;
                }else if (kBoolFalse == test_11) {
                  temp_10 = GALGAS_string::makeEmptyString () ;
                }
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_5604.current (HERE).getter_mEventName (HERE).getter_location (SOURCE_FILE ("staticAnalysis.galgas", 153)), GALGAS_string ("this event requires ").add_operation (enumerator_5604.current (HERE).getter_mArgumentNameList (HERE).getter_length (SOURCE_FILE ("staticAnalysis.galgas", 153)).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 153)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 153)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 154)), fixItArray12  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 153)) ;
              }
            }
            cEnumerator_lstringlist enumerator_6040 (enumerator_5604.current (HERE).getter_mArgumentNameList (HERE), kENUMERATION_UP) ;
            cEnumerator_decoratedArgumentList enumerator_6070 (var_decoratedArgumentList_5705, kENUMERATION_UP) ;
            while (enumerator_6040.hasCurrentObject () && enumerator_6070.hasCurrentObject ()) {
              GALGAS_uint joker_6148 ; // Joker input parameter
              enumerator_6070.current (HERE).getter_mArgumentTypeProxy (HERE).getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 157)).method_searchKey (enumerator_6040.current (HERE).getter_mValue (HERE), joker_6148, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 157)) ;
              enumerator_6040.gotoNextObject () ;
              enumerator_6070.gotoNextObject () ;
            }
            enumerator_5604.gotoNextObject () ;
          }
          var_decoratedScenarioList_5412.addAssign_operation (enumerator_5488.current (HERE).getter_mScenarioName (HERE), enumerator_5488.current (HERE).getter_mEventSequence (HERE)  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 160)) ;
        }
      }
      enumerator_5488.gotoNextObject () ;
    }
    {
    outArgument_outClassTypeMap.setter_insertKey (enumerator_2768.current (HERE).getter_mMachineName (HERE), var_machineVarMap_2793, var_machineVarList_2840, var_invariantDecoratedExpressionList_3831, var_eventMap_3912, var_decoratedScenarioList_5412, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 164)) ;
    }
    enumerator_2768.gotoNextObject () ;
  }
  cEnumerator_scenarioList enumerator_6600 (constinArgument_inAST.getter_mScenarioList (HERE), kENUMERATION_UP) ;
  while (enumerator_6600.hasCurrentObject ()) {
    GALGAS_machineVarMap joker_6659_5 ; // Joker input parameter
    GALGAS_machineVarList joker_6659_4 ; // Joker input parameter
    GALGAS_decoratedExpressionList joker_6659_3 ; // Joker input parameter
    GALGAS_eventMap joker_6659_2 ; // Joker input parameter
    GALGAS_decoratedScenarioList joker_6659_1 ; // Joker input parameter
    outArgument_outClassTypeMap.method_searchKey (enumerator_6600.current (HERE).getter_mMachineName (HERE), joker_6659_5, joker_6659_4, joker_6659_3, joker_6659_2, joker_6659_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 175)) ;
    enumerator_6600.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayVarValueSet'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayVarValueSet (const GALGAS_string constinArgument_inTitle,
                                 const GALGAS_binaryset constinArgument_inValueSet,
                                 const GALGAS_varList constinArgument_inVarList,
                                 GALGAS_string & ioArgument_ioGenerationString,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_performDisplay (constinArgument_inTitle, constinArgument_inValueSet, extensionGetter_displayVarInfo (constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 138)), ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 135)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayArgVarVarValueSet'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayArgVarVarValueSet (const GALGAS_string constinArgument_inTitle,
                                       const GALGAS_binaryset constinArgument_inValueSet,
                                       const GALGAS_varList constinArgument_inArgumentList,
                                       const GALGAS_varList constinArgument_inVarList,
                                       GALGAS_string & ioArgument_ioGenerationString,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_performDisplay (constinArgument_inTitle, constinArgument_inValueSet, extensionGetter_displayArgVarVarInfo (constinArgument_inVarList, constinArgument_inArgumentList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 155)), ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 152)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayVarVarValueSet'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayVarVarValueSet (const GALGAS_string constinArgument_inTitle,
                                    const GALGAS_binaryset constinArgument_inValueSet,
                                    const GALGAS_varList constinArgument_inVarList,
                                    GALGAS_string & ioArgument_ioGenerationString,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_performDisplay (constinArgument_inTitle, constinArgument_inValueSet, extensionGetter_displayVarVarInfo (constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 171)), ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 168)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'nameForValue'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_nameForValue (const GALGAS_uint_36__34_ & constinArgument_inValue,
                                     const GALGAS_varList & constinArgument_inVarList,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  GALGAS_uint_36__34_ var_v_4829 = constinArgument_inValue ;
  cEnumerator_varList enumerator_4860 (constinArgument_inVarList, kENUMERATION_UP) ;
  while (enumerator_4860.hasCurrentObject ()) {
    GALGAS_uint_36__34_ var_mask_4886 = GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_4860.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 187)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 187)) ;
    GALGAS_lstring var_cstName_4941 = enumerator_4860.current (HERE).getter_mValueList (HERE).getter_mValueAtIndex (var_v_4829.operator_and (var_mask_4886 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 188)).getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 188)) ;
    result_outResult.plusAssign_operation(var_cstName_4941.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 189)) ;
    var_v_4829 = var_v_4829.right_shift_operation (enumerator_4860.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 190)) ;
    if (enumerator_4860.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 192)) ;
    }
    enumerator_4860.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_nameForValue [3] = {
  & kTypeDescriptor_GALGAS_uint_36__34_,
  & kTypeDescriptor_GALGAS_varList,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_nameForValue (C_Compiler * inCompiler,
                                                             const cObjectArray & inEffectiveParameterArray,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_uint_36__34_ operand0 = GALGAS_uint_36__34_::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                           inCompiler
                                                                           COMMA_THERE) ;
  const GALGAS_varList operand1 = GALGAS_varList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_nameForValue (operand0,
                                operand1,
                                inCompiler
                                COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_nameForValue ("nameForValue",
                                                              functionWithGenericHeader_nameForValue,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              2,
                                                              functionArgs_nameForValue) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayVarNames'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayVarNames (const GALGAS_machineVarListForDisplay constinArgument_inAttributeList,
                              GALGAS_string & ioArgument_ioString,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("|"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 201)) ;
  cEnumerator_machineVarListForDisplay enumerator_5349 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_5349.hasCurrentObject ()) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_5349.current (HERE).getter_mAttributeName (HERE).getter_stringByRightPadding (enumerator_5349.current (HERE).getter_mColumnLength (HERE), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)).add_operation (GALGAS_string (" |"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)) ;
    enumerator_5349.gotoNextObject () ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 205)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displaySeparator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displaySeparator (const GALGAS_machineVarListForDisplay constinArgument_inAttributeList,
                               GALGAS_string & ioArgument_ioString,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("|"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 214)) ;
  cEnumerator_machineVarListForDisplay enumerator_5732 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_5732.hasCurrentObject ()) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), enumerator_5732.current (HERE).getter_mColumnLength (HERE).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 216))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 216)).add_operation (GALGAS_string ("|"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 216)) ;
    enumerator_5732.gotoNextObject () ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 218)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayValue (const GALGAS_machineVarListForDisplay constinArgument_inAttributeList,
                           const GALGAS_uint_36__34_ constinArgument_inValue,
                           GALGAS_string & ioArgument_ioString,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("|"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 228)) ;
  GALGAS_uint_36__34_ var_aValue_6123 = constinArgument_inValue ;
  cEnumerator_machineVarListForDisplay enumerator_6160 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_6160.hasCurrentObject ()) {
    GALGAS_uint_36__34_ var_mask_6184 = GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_6160.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231)) ;
    GALGAS_lstring var_cstName_6239 = enumerator_6160.current (HERE).getter_mValueList (HERE).getter_mValueAtIndex (var_aValue_6123.operator_and (var_mask_6184 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 232)).getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 232)) ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string (" ").add_operation (var_cstName_6239.getter_string (HERE).getter_stringByRightPadding (enumerator_6160.current (HERE).getter_mColumnLength (HERE), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 233)).add_operation (GALGAS_string (" |"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 233)) ;
    var_aValue_6123 = var_aValue_6123.right_shift_operation (enumerator_6160.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 234)) ;
    enumerator_6160.gotoNextObject () ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 236)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performDisplay (const GALGAS_string constinArgument_inTitle,
                             const GALGAS_binaryset constinArgument_inValueSet,
                             const GALGAS_machineVarListForDisplay constinArgument_inAttributeList,
                             GALGAS_string & ioArgument_ioGenerationString,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("*** ").add_operation (constinArgument_inTitle, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 247)).getter_stringByRightPadding (GALGAS_uint ((uint32_t) 50U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 247)) ;
  GALGAS_uint var_bitCount_6857 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_machineVarListForDisplay enumerator_6888 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_6888.hasCurrentObject ()) {
    var_bitCount_6857 = var_bitCount_6857.add_operation (enumerator_6888.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 251)) ;
    enumerator_6888.gotoNextObject () ;
  }
  {
  routine_displayVarNames (constinArgument_inAttributeList, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 254)) ;
  }
  {
  routine_displaySeparator (constinArgument_inAttributeList, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 255)) ;
  }
  GALGAS_uint_36__34_list var_values_7100 = constinArgument_inValueSet.getter_uint_36__34_ValueList (var_bitCount_6857 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 256)) ;
  cEnumerator_uint_36__34_list enumerator_7159 (var_values_7100, kENUMERATION_UP) ;
  while (enumerator_7159.hasCurrentObject ()) {
    {
    routine_displayValue (constinArgument_inAttributeList, enumerator_7159.current (HERE).getter_mValue (HERE), ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 258)) ;
    }
    enumerator_7159.gotoNextObject () ;
  }
  ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 260)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addTransitionsToGraphvizString'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addTransitionsToGraphvizString (const GALGAS_eventDeclarationList_2D_element constinArgument_inEvent,
                                             const GALGAS_uint constinArgument_inArgVarVarTotalBitCount,
                                             const GALGAS_binaryset constinArgument_inEventTransformationSet,
                                             const GALGAS_varList constinArgument_inVarList,
                                             const GALGAS_uint constinArgument_inVarTotalBitCount,
                                             const GALGAS_varList constinArgument_inArgumentList,
                                             GALGAS_string & ioArgument_ioDotFileContents,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint_36__34_list var_valueList_21932 = constinArgument_inEventTransformationSet.getter_uint_36__34_ValueList (constinArgument_inArgVarVarTotalBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 625)) ;
  cEnumerator_uint_36__34_list enumerator_22028 (var_valueList_21932, kENUMERATION_UP) ;
  while (enumerator_22028.hasCurrentObject ()) {
    GALGAS_string var_eventName_22053 = constinArgument_inEvent.getter_mEventName (HERE).getter_string (HERE) ;
    GALGAS_uint_36__34_ var_v_22095 = enumerator_22028.current (HERE).getter_mValue (HERE) ;
    GALGAS_uint_36__34_ var_source_22133 = var_v_22095.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (constinArgument_inVarTotalBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)) ;
    var_v_22095 = var_v_22095.right_shift_operation (constinArgument_inVarTotalBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 630)) ;
    GALGAS_uint_36__34_ var_target_22228 = var_v_22095.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (constinArgument_inVarTotalBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 631)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 631)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 631)) ;
    var_v_22095 = var_v_22095.right_shift_operation (constinArgument_inVarTotalBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 632)) ;
    cEnumerator_varList enumerator_22330 (constinArgument_inArgumentList, kENUMERATION_UP) ;
    while (enumerator_22330.hasCurrentObject ()) {
      GALGAS_uint_36__34_ var_argValue_22360 = var_v_22095.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_22330.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 634)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 634)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 634)) ;
      var_v_22095 = var_v_22095.right_shift_operation (enumerator_22330.current (HERE).getter_mBDDBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 635)) ;
      var_eventName_22053.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_22330.current (HERE).getter_mValueList (HERE).getter_mValueAtIndex (var_argValue_22360.getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 636)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 636)) ;
      enumerator_22330.gotoNextObject () ;
    }
    ioArgument_ioDotFileContents.plusAssign_operation(GALGAS_string ("  \"").add_operation (function_nameForValue (var_source_22133, constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 638)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 638)).add_operation (function_nameForValue (var_target_22228, constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 639)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 639)).add_operation (var_eventName_22053, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 640)).add_operation (GALGAS_string ("\"] ;\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 638)) ;
    enumerator_22028.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performDynamicAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performDynamicAnalysis (const GALGAS_string constinArgument_inSourceFileName,
                                     const GALGAS_ast constinArgument_inAST,
                                     const GALGAS_unifiedScalarTypeMap constinArgument_inUnifiedScalarTypeMap,
                                     const GALGAS_functionMap constinArgument_inFunctionMap,
                                     const GALGAS_machineMap /* constinArgument_inMachineMap */,
                                     GALGAS_string & outArgument_outGenerationString,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGenerationString.drop () ; // Release 'out' argument
  inCompiler->printMessage (GALGAS_string ("*** File ").add_operation (constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("dynamicAnalysis.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 654)).add_operation (GALGAS_string (" ***\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 654))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 654)) ;
  outArgument_outGenerationString = GALGAS_string ("*** File ").add_operation (constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("dynamicAnalysis.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 655)).add_operation (GALGAS_string (" ***\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 655)) ;
  cEnumerator_machineList enumerator_23232 (constinArgument_inAST.getter_mMachineList (HERE), kENUMERATION_UP) ;
  while (enumerator_23232.hasCurrentObject ()) {
    extensionMethod_performMachineDynamicAnalysis (enumerator_23232.current (HERE), constinArgument_inSourceFileName, constinArgument_inUnifiedScalarTypeMap, constinArgument_inAST.getter_mScenarioList (HERE), constinArgument_inFunctionMap, outArgument_outGenerationString, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 657)) ;
    enumerator_23232.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implicationExpression computeExpressionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_implicationExpression_computeExpressionBDD (const cPtr_expression * inObject,
                                                                        const GALGAS_varMap constinArgument_inVarMap,
                                                                        const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                        GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implicationExpression * object = (const cPtr_implicationExpression *) inObject ;
  macroValidSharedObject (object, cPtr_implicationExpression) ;
  GALGAS_binaryset var_left_24038 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_24038, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 681)) ;
  GALGAS_binaryset var_right_24125 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_24125, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 682)) ;
  outArgument_outExpressionBDD = var_left_24038.getter_implies (var_right_24125 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 683)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_implicationExpression_computeExpressionBDD (void) {
  enterExtensionMethod_computeExpressionBDD (kTypeDescriptor_GALGAS_implicationExpression.mSlotID,
                                             extensionMethod_implicationExpression_computeExpressionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_implicationExpression_computeExpressionBDD (defineExtensionMethod_implicationExpression_computeExpressionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logicalOrExpression computeExpressionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_logicalOrExpression_computeExpressionBDD (const cPtr_expression * inObject,
                                                                      const GALGAS_varMap constinArgument_inVarMap,
                                                                      const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                      GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logicalOrExpression * object = (const cPtr_logicalOrExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalOrExpression) ;
  GALGAS_binaryset var_left_24529 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_24529, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 692)) ;
  GALGAS_binaryset var_right_24616 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_24616, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 693)) ;
  outArgument_outExpressionBDD = var_left_24529.operator_or (var_right_24616 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 694)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logicalOrExpression_computeExpressionBDD (void) {
  enterExtensionMethod_computeExpressionBDD (kTypeDescriptor_GALGAS_logicalOrExpression.mSlotID,
                                             extensionMethod_logicalOrExpression_computeExpressionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logicalOrExpression_computeExpressionBDD (defineExtensionMethod_logicalOrExpression_computeExpressionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logicalAndExpression computeExpressionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_logicalAndExpression_computeExpressionBDD (const cPtr_expression * inObject,
                                                                       const GALGAS_varMap constinArgument_inVarMap,
                                                                       const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                       GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logicalAndExpression * object = (const cPtr_logicalAndExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalAndExpression) ;
  GALGAS_binaryset var_left_25012 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mLeft.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_25012, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 703)) ;
  GALGAS_binaryset var_right_25099 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mRight.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_25099, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 704)) ;
  outArgument_outExpressionBDD = var_left_25012.operator_and (var_right_25099 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 705)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logicalAndExpression_computeExpressionBDD (void) {
  enterExtensionMethod_computeExpressionBDD (kTypeDescriptor_GALGAS_logicalAndExpression.mSlotID,
                                             extensionMethod_logicalAndExpression_computeExpressionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logicalAndExpression_computeExpressionBDD (defineExtensionMethod_logicalAndExpression_computeExpressionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonInExpression computeExpressionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_comparisonInExpression_computeExpressionBDD (const cPtr_expression * inObject,
                                                                         const GALGAS_varMap constinArgument_inVarMap,
                                                                         const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                         GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonInExpression * object = (const cPtr_comparisonInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonInExpression) ;
  GALGAS_enumConstantMap var_constantMap_25450 ;
  GALGAS_uint var_leftVarBDDStartBit_25484 ;
  GALGAS_uint var_leftVarBDDBitCount_25518 ;
  GALGAS_lstringlist joker_25411 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mAttributeName, joker_25411, var_constantMap_25450, var_leftVarBDDStartBit_25484, var_leftVarBDDBitCount_25518, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 715)) ;
  callExtensionMethod_computeRightOperandBDD ((const cPtr_comparisonRightOperand *) object->mProperty_mRightOperand.ptr (), constinArgument_inVarMap, var_constantMap_25450, var_leftVarBDDStartBit_25484, var_leftVarBDDBitCount_25518, object->mProperty_mOperator, constinArgument_inVarTotalBDDBitCount, outArgument_outExpressionBDD, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 722)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_comparisonInExpression_computeExpressionBDD (void) {
  enterExtensionMethod_computeExpressionBDD (kTypeDescriptor_GALGAS_comparisonInExpression.mSlotID,
                                             extensionMethod_comparisonInExpression_computeExpressionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_comparisonInExpression_computeExpressionBDD (defineExtensionMethod_comparisonInExpression_computeExpressionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@attributeAsComparisonRightOperand computeRightOperandBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_attributeAsComparisonRightOperand_computeRightOperandBDD (const cPtr_comparisonRightOperand * inObject,
                                                                                      const GALGAS_varMap constinArgument_inVarMap,
                                                                                      const GALGAS_enumConstantMap /* constinArgument_inConstantMap */,
                                                                                      const GALGAS_uint constinArgument_leftVarBDDStartBit,
                                                                                      const GALGAS_uint constinArgument_leftVarBDDBitCount,
                                                                                      const GALGAS_enumComparisonOperator constinArgument_inOperator,
                                                                                      const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                                      GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_attributeAsComparisonRightOperand * object = (const cPtr_attributeAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_attributeAsComparisonRightOperand) ;
  GALGAS_uint var_rightVarBDDStartBit_26657 ;
  GALGAS_lstringlist joker_26620_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_26620_1 ; // Joker input parameter
  GALGAS_uint joker_26663 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mAttributeName, joker_26620_2, joker_26620_1, var_rightVarBDDStartBit_26657, joker_26663, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 754)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mHasOldQualifier.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_rightVarBDDStartBit_26657 = var_rightVarBDDStartBit_26657.substract_operation (constinArgument_inVarTotalBDDBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 761)) ;
    }
  }
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_enumComparisonOperator::kNotBuilt:
    break ;
  case GALGAS_enumComparisonOperator::kEnum_equal:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_rightVarBDDStartBit_26657, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 765)) ;
    }
    break ;
  case GALGAS_enumComparisonOperator::kEnum_notEqual:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_rightVarBDDStartBit_26657, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 770)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_attributeAsComparisonRightOperand_computeRightOperandBDD (void) {
  enterExtensionMethod_computeRightOperandBDD (kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand.mSlotID,
                                               extensionMethod_attributeAsComparisonRightOperand_computeRightOperandBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_attributeAsComparisonRightOperand_computeRightOperandBDD (defineExtensionMethod_attributeAsComparisonRightOperand_computeRightOperandBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constantAsComparisonRightOperand computeRightOperandBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constantAsComparisonRightOperand_computeRightOperandBDD (const cPtr_comparisonRightOperand * inObject,
                                                                                     const GALGAS_varMap /* constinArgument_inVarMap */,
                                                                                     const GALGAS_enumConstantMap constinArgument_inConstantMap,
                                                                                     const GALGAS_uint constinArgument_leftVarBDDStartBit,
                                                                                     const GALGAS_uint constinArgument_leftVarBDDBitCount,
                                                                                     const GALGAS_enumComparisonOperator constinArgument_inOperator,
                                                                                     const GALGAS_uint /* constinArgument_inVarTotalBDDBitCount */,
                                                                                     GALGAS_binaryset & outArgument_outExpressionBDD,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constantAsComparisonRightOperand * object = (const cPtr_constantAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_constantAsComparisonRightOperand) ;
  GALGAS_uint var_constantValue_27640 ;
  constinArgument_inConstantMap.method_searchKey (object->mProperty_mConstantName, var_constantValue_27640, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 787)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_enumComparisonOperator::kNotBuilt:
    break ;
  case GALGAS_enumComparisonOperator::kEnum_equal:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_constantValue_27640.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 793)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 790)) ;
    }
    break ;
  case GALGAS_enumComparisonOperator::kEnum_notEqual:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithNotEqualToConstant (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_constantValue_27640.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 796)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constantAsComparisonRightOperand_computeRightOperandBDD (void) {
  enterExtensionMethod_computeRightOperandBDD (kTypeDescriptor_GALGAS_constantAsComparisonRightOperand.mSlotID,
                                               extensionMethod_constantAsComparisonRightOperand_computeRightOperandBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constantAsComparisonRightOperand_computeRightOperandBDD (defineExtensionMethod_constantAsComparisonRightOperand_computeRightOperandBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstruction computeInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstruction_computeInstructionBDD (const cPtr_instruction * inObject,
                                                                         const GALGAS_uint /* constinArgument_inVarTotalBDDBitCount */,
                                                                         const GALGAS_varMap constinArgument_inVarMap,
                                                                         const GALGAS_functionMap constinArgument_inFunctionMap,
                                                                         const GALGAS_uint constinArgument_inArgOldVarVarBDDBitCount,
                                                                         GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstruction * object = (const cPtr_assignmentInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstruction) ;
  GALGAS_enumConstantMap var_constantMap_29358 ;
  GALGAS_uint var_leftVarBDDStartBit_29392 ;
  GALGAS_uint var_leftVarBDDBitCount_29426 ;
  GALGAS_lstringlist joker_29319 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mTargetVarName, joker_29319, var_constantMap_29358, var_leftVarBDDStartBit_29392, var_leftVarBDDBitCount_29426, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 840)) ;
  GALGAS_binaryset var_oldAttributeValueSet_29468 = ioArgument_ioArgOldVarVarValueSet ;
  callExtensionMethod_computeAssignmentInstructionBDD ((const cPtr_assignmentSourceExpression *) object->mProperty_mSourceExpression.ptr (), constinArgument_inVarMap, constinArgument_inFunctionMap, var_constantMap_29358, var_leftVarBDDStartBit_29392, var_leftVarBDDBitCount_29426, constinArgument_inArgOldVarVarBDDBitCount, ioArgument_ioArgOldVarVarValueSet, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 848)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_oldAttributeValueSet_29468.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetVarName.getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 858)), GALGAS_string ("this assignment has no effect and is useless"), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 858)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstruction_computeInstructionBDD (void) {
  enterExtensionMethod_computeInstructionBDD (kTypeDescriptor_GALGAS_assignmentInstruction.mSlotID,
                                              extensionMethod_assignmentInstruction_computeInstructionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstruction_computeInstructionBDD (defineExtensionMethod_assignmentInstruction_computeInstructionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstruction computeInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstruction_computeInstructionBDD (const cPtr_instruction * inObject,
                                                                     const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                     const GALGAS_varMap constinArgument_inVarMap,
                                                                     const GALGAS_functionMap /* constinArgument_inFunctionMap */,
                                                                     const GALGAS_uint /* constinArgument_inArgOldVarVarBDDBitCount */,
                                                                     GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstruction * object = (const cPtr_assertInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstruction) ;
  GALGAS_binaryset var_expressionValueSet_30325 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mAssertExpression.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_expressionValueSet_30325, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 870)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_expressionValueSet_30325.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 871)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("assert expression is always false"), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 872)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_expressionValueSet_30325.getter_isFull (SOURCE_FILE ("dynamicAnalysis.galgas", 873)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("assert expression is always true"), fixItArray3  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 874)) ;
      }
    }
    if (kBoolFalse == test_2) {
      GALGAS_binaryset var_v_30583 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_30325 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 876)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_v_30583.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("assert expression violation"), fixItArray5  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 878)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstruction_computeInstructionBDD (void) {
  enterExtensionMethod_computeInstructionBDD (kTypeDescriptor_GALGAS_assertInstruction.mSlotID,
                                              extensionMethod_assertInstruction_computeInstructionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstruction_computeInstructionBDD (defineExtensionMethod_assertInstruction_computeInstructionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstruction computeInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstruction_computeInstructionBDD (const cPtr_instruction * inObject,
                                                                     const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                     const GALGAS_varMap constinArgument_inVarMap,
                                                                     const GALGAS_functionMap constinArgument_inFunctionMap,
                                                                     const GALGAS_uint constinArgument_inArgOldVarVarBDDBitCount,
                                                                     GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstruction * object = (const cPtr_switchInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstruction) ;
  GALGAS_binaryset var_oldAttributeValueSet_31146 = ioArgument_ioArgOldVarVarValueSet ;
  GALGAS_enumConstantMap var_constantMap_31295 ;
  GALGAS_uint var_leftVarBDDStartBit_31329 ;
  GALGAS_uint var_leftVarBDDBitCount_31363 ;
  GALGAS_lstringlist joker_31256 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mVariableName, joker_31256, var_constantMap_31295, var_leftVarBDDStartBit_31329, var_leftVarBDDBitCount_31363, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 894)) ;
  ioArgument_ioArgOldVarVarValueSet = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 902)) ;
  cEnumerator_switchCaseList enumerator_31505 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_31505.hasCurrentObject ()) {
    GALGAS_binaryset var_testExpression_31538 = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 904)) ;
    cEnumerator_lstringlist enumerator_31595 (enumerator_31505.current_mConstantNameList (HERE), kENUMERATION_UP) ;
    while (enumerator_31595.hasCurrentObject ()) {
      GALGAS_uint var_constantValue_31660 ;
      var_constantMap_31295.method_searchKey (enumerator_31595.current_mValue (HERE), var_constantValue_31660, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 906)) ;
      GALGAS_binaryset var_comparisonExpressionBDD_31695 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_leftVarBDDStartBit_31329, var_leftVarBDDBitCount_31363, var_constantValue_31660.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 910)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 907)) ;
      var_testExpression_31538 = var_testExpression_31538.operator_or (var_comparisonExpressionBDD_31695 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 912)) ;
      enumerator_31595.gotoNextObject () ;
    }
    GALGAS_binaryset var_resultingThenCondition_31949 = var_oldAttributeValueSet_31146.operator_and (var_testExpression_31538 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 914)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_testExpression_31538.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 916)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_31505.current_mEndOfConstantList (HERE), GALGAS_string ("expression is always false"), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 917)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_testExpression_31538.getter_isFull (SOURCE_FILE ("dynamicAnalysis.galgas", 918)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_31505.current_mEndOfConstantList (HERE), GALGAS_string ("expression is always true"), fixItArray3  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 919)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_resultingThenCondition_31949.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 920)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_31505.current_mEndOfConstantList (HERE), GALGAS_string ("expression is always false within current context"), fixItArray5  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 921)) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_resultingThenCondition_31949.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_31505.current_mEndOfConstantList (HERE), GALGAS_string ("expression is always true within current context"), fixItArray7  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 923)) ;
            }
          }
        }
      }
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_resultingThenCondition_31949.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 929)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_31505.current_mEndOfConstantList (HERE), GALGAS_string ("this case branch is never executed"), fixItArray9  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 930)) ;
        ioArgument_ioArgOldVarVarValueSet.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_8) {
      GALGAS_binaryset var_thenBranchAttributeValueSet_33011 = var_resultingThenCondition_31949 ;
      extensionMethod_computeInstructionListBDD (enumerator_31505.current_mInstructionList (HERE), constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, var_thenBranchAttributeValueSet_33011, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 933)) ;
      ioArgument_ioArgOldVarVarValueSet = ioArgument_ioArgOldVarVarValueSet.operator_or (var_thenBranchAttributeValueSet_33011 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 939)) ;
    }
    enumerator_31505.gotoNextObject () ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, var_oldAttributeValueSet_31146.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (object->mProperty_mSWITCHinstructionLocation, GALGAS_string ("this 'switch' instruction has no effect and is useless"), fixItArray11  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 944)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstruction_computeInstructionBDD (void) {
  enterExtensionMethod_computeInstructionBDD (kTypeDescriptor_GALGAS_switchInstruction.mSlotID,
                                              extensionMethod_switchInstruction_computeInstructionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstruction_computeInstructionBDD (defineExtensionMethod_switchInstruction_computeInstructionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstruction computeInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstruction_computeInstructionBDD (const cPtr_instruction * inObject,
                                                                 const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                                 const GALGAS_varMap constinArgument_inVarMap,
                                                                 const GALGAS_functionMap constinArgument_inFunctionMap,
                                                                 const GALGAS_uint constinArgument_inArgOldVarVarBDDBitCount,
                                                                 GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstruction * object = (const cPtr_ifInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstruction) ;
  GALGAS_binaryset var_oldAttributeValueSet_33894 = ioArgument_ioArgOldVarVarValueSet ;
  GALGAS_binaryset var_expressionValueSet_34048 ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) object->mProperty_mTestExpression.ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_expressionValueSet_34048, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 959)) ;
  GALGAS_binaryset var_resultingThenCondition_34089 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_34048 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 960)) ;
  GALGAS_binaryset var_resultingElseCondition_34175 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_34048.operator_tilde (SOURCE_FILE ("dynamicAnalysis.galgas", 961)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 961)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_expressionValueSet_34048.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 962)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always false"), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 963)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_expressionValueSet_34048.getter_isFull (SOURCE_FILE ("dynamicAnalysis.galgas", 964)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always true"), fixItArray3  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 965)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_resultingThenCondition_34089.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 966)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always false within current context"), fixItArray5  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 967)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, var_resultingThenCondition_34089.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always true within current context"), fixItArray7  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 969)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_resultingElseCondition_34175.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 970)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always true"), fixItArray9  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 971)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_resultingElseCondition_34175.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("expression is always false within current context"), fixItArray11  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 973)) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = var_resultingThenCondition_34089.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 977)).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("then branch is never executed"), fixItArray13  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 978)) ;
      ioArgument_ioArgOldVarVarValueSet.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_12) {
    GALGAS_binaryset var_thenBranchAttributeValueSet_35193 = var_resultingThenCondition_34089 ;
    extensionMethod_computeInstructionListBDD (object->mProperty_mThenInstructionList, constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, var_thenBranchAttributeValueSet_35193, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 981)) ;
    ioArgument_ioArgOldVarVarValueSet = var_thenBranchAttributeValueSet_35193 ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_resultingElseCondition_34175.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 990)).boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfTestExpression, GALGAS_string ("else branch is never executed"), fixItArray15  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 991)) ;
    }
  }
  if (kBoolFalse == test_14) {
    GALGAS_binaryset var_elseBranchAttributeValueSet_35643 = var_resultingElseCondition_34175 ;
    extensionMethod_computeInstructionListBDD (object->mProperty_mElseInstructionList, constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, var_elseBranchAttributeValueSet_35643, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 994)) ;
    ioArgument_ioArgOldVarVarValueSet = ioArgument_ioArgOldVarVarValueSet.operator_or (var_elseBranchAttributeValueSet_35643 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1001)) ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, var_oldAttributeValueSet_33894.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (object->mProperty_mIFinstructionLocation, GALGAS_string ("this 'if' instruction has no effect and is useless"), fixItArray17  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1005)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstruction_computeInstructionBDD (void) {
  enterExtensionMethod_computeInstructionBDD (kTypeDescriptor_GALGAS_ifInstruction.mSlotID,
                                              extensionMethod_ifInstruction_computeInstructionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstruction_computeInstructionBDD (defineExtensionMethod_ifInstruction_computeInstructionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varAsAssignmentSourceExpression computeAssignmentInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD (const cPtr_assignmentSourceExpression * inObject,
                                                                                             const GALGAS_varMap constinArgument_inVarMap,
                                                                                             const GALGAS_functionMap /* constinArgument_inFunctionMap */,
                                                                                             const GALGAS_enumConstantMap /* constinArgument_inConstantMap */,
                                                                                             const GALGAS_uint constinArgument_inTargetVarBDDStartBit,
                                                                                             const GALGAS_uint constinArgument_inTargetVarBDDBitCount,
                                                                                             const GALGAS_uint constinArgument_inArgOldVarVarBDDBitCount,
                                                                                             GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAsAssignmentSourceExpression * object = (const cPtr_varAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_varAsAssignmentSourceExpression) ;
  GALGAS_uint var_sourceVarBDDStartBit_37106 ;
  GALGAS_uint var_sourceVarBDDBitCount_37142 ;
  GALGAS_lstringlist joker_37068_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_37068_1 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mSourceVarName, joker_37068_2, joker_37068_1, var_sourceVarBDDStartBit_37106, var_sourceVarBDDBitCount_37142, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1030)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetVarBDDBitCount.objectCompare (var_sourceVarBDDBitCount_37142)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mSourceVarName.getter_location (SOURCE_FILE ("dynamicAnalysis.galgas", 1037)), GALGAS_string ("*** INTERNAL ERROR ").add_operation (constinArgument_inTargetVarBDDBitCount.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 1037)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)).add_operation (var_sourceVarBDDBitCount_37142.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 1037)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)).add_operation (GALGAS_string (" ***"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)), fixItArray1  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetVarBDDStartBit.objectCompare (var_sourceVarBDDStartBit_37106)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_binaryset var_equality_37616 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, constinArgument_inArgOldVarVarBDDBitCount, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1042)) ;
      GALGAS_binaryset var_expressionValueSet_37796 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_equality_37616 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1048)) ;
      GALGAS_binaryset var_v_37853 = var_expressionValueSet_37796.getter_existsOnBitRange (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1049)) ;
      GALGAS_binaryset var_constraint_38083 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, var_sourceVarBDDStartBit_37106, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1055)) ;
      ioArgument_ioArgOldVarVarValueSet = var_v_37853.operator_and (var_constraint_38083 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1061)).getter_existOnBitIndexAndBeyond (constinArgument_inArgOldVarVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1061)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  enterExtensionMethod_computeAssignmentInstructionBDD (kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression.mSlotID,
                                                        extensionMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD (defineExtensionMethod_varAsAssignmentSourceExpression_computeAssignmentInstructionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constantAsAssignmentSourceExpression computeAssignmentInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD (const cPtr_assignmentSourceExpression * inObject,
                                                                                                  const GALGAS_varMap /* constinArgument_inVarMap */,
                                                                                                  const GALGAS_functionMap /* constinArgument_inFunctionMap */,
                                                                                                  const GALGAS_enumConstantMap constinArgument_constantMap,
                                                                                                  const GALGAS_uint constinArgument_inTargetVarBDDStartBit,
                                                                                                  const GALGAS_uint constinArgument_inTargetVarBDDBitCount,
                                                                                                  const GALGAS_uint /* constinArgument_inArgOldVarVarBDDBitCount */,
                                                                                                  GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constantAsAssignmentSourceExpression * object = (const cPtr_constantAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_constantAsAssignmentSourceExpression) ;
  GALGAS_uint var_constantValue_38967 ;
  constinArgument_constantMap.method_searchKey (object->mProperty_mConstantName, var_constantValue_38967, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1076)) ;
  GALGAS_binaryset var_expressionValueSet_38993 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, var_constantValue_38967.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 1080)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1077)) ;
  GALGAS_binaryset var_v_39144 = ioArgument_ioArgOldVarVarValueSet.getter_existsOnBitRange (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1082)) ;
  ioArgument_ioArgOldVarVarValueSet = var_v_39144.operator_and (var_expressionValueSet_38993 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1086)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  enterExtensionMethod_computeAssignmentInstructionBDD (kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression.mSlotID,
                                                        extensionMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD (defineExtensionMethod_constantAsAssignmentSourceExpression_computeAssignmentInstructionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionAsAssignmentSourceExpression computeAssignmentInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD (const cPtr_assignmentSourceExpression * inObject,
                                                                                                  const GALGAS_varMap constinArgument_inVarMap,
                                                                                                  const GALGAS_functionMap constinArgument_inFunctionMap,
                                                                                                  const GALGAS_enumConstantMap /* constinArgument_constantMap */,
                                                                                                  const GALGAS_uint constinArgument_leftVarBDDStartBit,
                                                                                                  const GALGAS_uint constinArgument_leftVarBDDBitCount,
                                                                                                  const GALGAS_uint constinArgument_inArgOldVarVarBDDBitCount,
                                                                                                  GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionAsAssignmentSourceExpression * object = (const cPtr_functionAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_functionAsAssignmentSourceExpression) ;
  GALGAS_uint var_operandVarBDDStartBit_40132 ;
  GALGAS_uint var_operandVarBDDBitCount_40169 ;
  GALGAS_lstringlist joker_40093_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_40093_1 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (object->mProperty_mOperandName, joker_40093_2, joker_40093_1, var_operandVarBDDStartBit_40132, var_operandVarBDDBitCount_40169, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1105)) ;
  GALGAS_binaryset var_functionTable_40194 = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 1112)) ;
  GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_40329 ;
  GALGAS_unifiedScalarTypeMap_2D_proxy joker_40267_2 ; // Joker input parameter
  GALGAS_unifiedScalarTypeMap_2D_proxy joker_40267_1 ; // Joker input parameter
  constinArgument_inFunctionMap.method_searchKey (object->mProperty_mFunctionName, joker_40267_2, joker_40267_1, var_decoratedFunctionValueList_40329, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1113)) ;
  cEnumerator_decoratedFunctionValueList enumerator_40368 (var_decoratedFunctionValueList_40329, kENUMERATION_UP) ;
  while (enumerator_40368.hasCurrentObject ()) {
    GALGAS_binaryset var_op_40382 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_operandVarBDDStartBit_40132, var_operandVarBDDBitCount_40169, enumerator_40368.current (HERE).getter_mOperandValue (HERE).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 1118)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1115)) ;
    GALGAS_binaryset var_result_40537 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_inArgOldVarVarBDDBitCount, constinArgument_leftVarBDDBitCount, enumerator_40368.current (HERE).getter_mResultValue (HERE).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 1123)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1120)) ;
    var_functionTable_40194 = var_functionTable_40194.operator_or (var_op_40382.operator_and (var_result_40537 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1125)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1125)) ;
    enumerator_40368.gotoNextObject () ;
  }
  GALGAS_binaryset var_expressionValueSet_40766 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_functionTable_40194 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1128)) ;
  GALGAS_binaryset var_constraint_40824 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, constinArgument_inArgOldVarVarBDDBitCount, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1129)) ;
  GALGAS_binaryset var_v_40970 = var_expressionValueSet_40766.getter_existsOnBitRange (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1134)) ;
  ioArgument_ioArgOldVarVarValueSet = var_v_40970.operator_and (var_constraint_40824 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1139)).getter_existOnBitIndexAndBeyond (constinArgument_inArgOldVarVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1139)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  enterExtensionMethod_computeAssignmentInstructionBDD (kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression.mSlotID,
                                                        extensionMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD (defineExtensionMethod_functionAsAssignmentSourceExpression_computeAssignmentInstructionBDD, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'CCodeGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_CCodeGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_CCodeGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_CCodeGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_CCodeGenerationTemplates_0,
  0,
  gWrapperAllDirectories_CCodeGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates enumerationDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_enumerationDeclaration (C_Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & in_ENUMERATION_5F_NAME,
                                                                                   const GALGAS_lstringlist & in_CONSTANT_5F_LIST
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE HAS BEEN GENERATED BY OMNIBUS TOOL. DO NOT MODIFY IT!\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#pragma once\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "typedef enum {\n" ;
  GALGAS_uint index_492_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_492 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_492.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_492.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("enum-declaration.h.galgasTemplate", 12)).stringValue () ;
      if (enumerator_492.hasNextObject ()) {
        result << ",\n" ;
      }
      index_492_.increment () ;
      enumerator_492.gotoNextObject () ;
    }
  }
  result << "\n"
    "} " ;
  result << in_ENUMERATION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("enum-declaration.h.galgasTemplate", 15)).stringValue () ;
  result << " ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates machineDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_machineDeclaration (C_Compiler * inCompiler,
                                                                               const GALGAS_string & /* in_FILE_5F_NAME */,
                                                                               const GALGAS_unifiedScalarTypeMap & in_ENUM_5F_DECLARATION_5F_MAP,
                                                                               const GALGAS_string & in_MACHINE_5F_NAME,
                                                                               const GALGAS_machineVarList & in_ATTRIBUTE_5F_LIST,
                                                                               const GALGAS_eventMap & in_EVENT_5F_MAP
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE HAS BEEN GENERATED BY OMNIBUS TOOL. DO NOT MODIFY IT!\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#pragma once\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  GALGAS_uint index_483_ (0) ;
  if (in_ENUM_5F_DECLARATION_5F_MAP.isValid ()) {
    cEnumerator_unifiedScalarTypeMap enumerator_483 (in_ENUM_5F_DECLARATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_483.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_483.current_mGenerate (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "#include \"" ;
        result << enumerator_483.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << ".h\"\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_483_.increment () ;
      enumerator_483.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "class " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " {\n"
    "//--- Default constructor\n"
    "  public : " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " (const " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " &) ;\n"
    "  private : " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " & operator = (const " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Attributes\n" ;
  GALGAS_uint index_948_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_948 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_948.hasCurrentObject ()) {
      result << "  private : " ;
      result << enumerator_948.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).stringValue () ;
      result << " " ;
      result << enumerator_948.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).stringValue () ;
      result << " ;\n"
        "  private : " ;
      result << enumerator_948.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 29)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 29)).stringValue () ;
      result << " old_" ;
      result << enumerator_948.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 29)).stringValue () ;
      result << " ;\n" ;
      index_948_.increment () ;
      enumerator_948.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Accessors\n" ;
  GALGAS_uint index_1229_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_1229 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1229.hasCurrentObject ()) {
      result << "  public : inline " ;
      result << enumerator_1229.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 34)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 34)).stringValue () ;
      result << " get_" ;
      result << enumerator_1229.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 34)).stringValue () ;
      result << " (void) const {\n"
        "    return " ;
      result << enumerator_1229.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 35)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  public : inline bool " ;
      result << enumerator_1229.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 37)).stringValue () ;
      result << "_didChange (void) const {\n"
        "    return old_" ;
      result << enumerator_1229.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 38)).stringValue () ;
      result << " != " ;
      result << enumerator_1229.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 38)).stringValue () ;
      result << " ;\n"
        "  }\n" ;
      index_1229_.increment () ;
      enumerator_1229.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---\n"
    "  public : void update (void) ;\n"
    " \n"
    "//--- Events\n" ;
  GALGAS_uint index_1751_ (0) ;
  if (in_EVENT_5F_MAP.isValid ()) {
    cEnumerator_eventMap enumerator_1751 (in_EVENT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1751.hasCurrentObject ()) {
      result << "  public : void event_" ;
      result << enumerator_1751.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 47)).stringValue () ;
      result << " (" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1751.current_mDecoratedArgumentList (HERE).getter_length (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "void" ;
      }else if (kBoolFalse == test_1) {
        GALGAS_uint index_1923_ (0) ;
        if (enumerator_1751.current_mDecoratedArgumentList (HERE).isValid ()) {
          cEnumerator_decoratedArgumentList enumerator_1923 (enumerator_1751.current_mDecoratedArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_1923.hasCurrentObject ()) {
            result << "const " ;
            result << enumerator_1923.current_mArgumentTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 52)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 52)).stringValue () ;
            result << " " ;
            result << enumerator_1923.current_mArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 52)).stringValue () ;
            if (enumerator_1923.hasNextObject ()) {
              result << ", " ;
            }
            index_1923_.increment () ;
            enumerator_1923.gotoNextObject () ;
          }
        }
      }
      result << ") ;\n" ;
      index_1751_.increment () ;
      enumerator_1751.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates machineImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_machineImplementation (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_FILE_5F_NAME */,
                                                                                  const GALGAS_unifiedScalarTypeMap & /* in_ENUM_5F_DECLARATION_5F_MAP */,
                                                                                  const GALGAS_string & in_MACHINE_5F_NAME,
                                                                                  const GALGAS_machineVarList & in_ATTRIBUTE_5F_LIST,
                                                                                  const GALGAS_eventMap & in_EVENT_5F_MAP,
                                                                                  const GALGAS_functionMap & in_FUNCTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE HAS BEEN GENERATED BY OMNIBUS TOOL. DO NOT MODIFY IT!\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#include \"" ;
  result << in_MACHINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 5)).stringValue () ;
  result << ".h\"\n" ;
  GALGAS_uint index_395_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    cEnumerator_functionMap enumerator_395 (in_FUNCTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_395.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_395.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 8)).stringValue () ;
      result << ".h\"\n" ;
      index_395_.increment () ;
      enumerator_395.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << "::" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " (void) :\n" ;
  GALGAS_uint index_649_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_649 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_649.hasCurrentObject ()) {
      result << enumerator_649.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 16)).stringValue () ;
      result << " (" ;
      result << enumerator_649.current_mInitialValueConstantName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 16)).stringValue () ;
      result << "),\n"
        "old_" ;
      result << enumerator_649.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 17)).stringValue () ;
      result << " (" ;
      result << enumerator_649.current_mInitialValueConstantName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 17)).stringValue () ;
      result << ")" ;
      if (enumerator_649.hasNextObject ()) {
        result << ",\n" ;
      }
      index_649_.increment () ;
      enumerator_649.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "void " ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << "::update (void) {\n" ;
  GALGAS_uint index_1086_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_1086 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1086.hasCurrentObject ()) {
      result << "  old_" ;
      result << enumerator_1086.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 28)).stringValue () ;
      result << " = " ;
      result << enumerator_1086.current_mVarName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 28)).stringValue () ;
      result << " ;\n" ;
      index_1086_.increment () ;
      enumerator_1086.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n" ;
  GALGAS_uint index_1227_ (0) ;
  if (in_EVENT_5F_MAP.isValid ()) {
    cEnumerator_eventMap enumerator_1227 (in_EVENT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1227.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "\n"
        "\n"
        "void " ;
      result << in_MACHINE_5F_NAME.stringValue () ;
      result << "::event_" ;
      result << enumerator_1227.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 36)).stringValue () ;
      result << " (" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1227.current_mDecoratedArgumentList (HERE).getter_length (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 37)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "void" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_1536_ (0) ;
        if (enumerator_1227.current_mDecoratedArgumentList (HERE).isValid ()) {
          cEnumerator_decoratedArgumentList enumerator_1536 (enumerator_1227.current_mDecoratedArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_1536.hasCurrentObject ()) {
            result << "const " ;
            result << enumerator_1536.current_mArgumentTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).stringValue () ;
            result << " " ;
            result << enumerator_1536.current_mArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).stringValue () ;
            if (enumerator_1536.hasNextObject ()) {
              result << ", " ;
            }
            index_1536_.increment () ;
            enumerator_1536.gotoNextObject () ;
          }
        }
      }
      result << ") {\n" ;
      result << extensionGetter_generateCCode (enumerator_1227.current_mDecoratedEventInstructionList (HERE), GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 46)).stringValue () ;
      result << "}\n"
        "\n" ;
      index_1227_.increment () ;
      enumerator_1227.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates functionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_functionDeclaration (C_Compiler * /* inCompiler */,
                                                                                const GALGAS_string & /* in_FILE_5F_NAME */,
                                                                                const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                const GALGAS_string & in_RESULT_5F_TYPE_5F_NAME,
                                                                                const GALGAS_uint & in_OPERAND_5F_VALUE_5F_COUNT
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE HAS BEEN GENERATED BY OMNIBUS TOOL. DO NOT MODIFY IT!\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#pragma once\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#include \"" ;
  result << in_RESULT_5F_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 9)).stringValue () ;
  result << ".h\"\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "extern const ::" ;
  result << in_RESULT_5F_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 13)).stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 13)).stringValue () ;
  result << " [" ;
  result << in_OPERAND_5F_VALUE_5F_COUNT.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 13)).stringValue () ;
  result << "] ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates functionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_functionImplementation (C_Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & /* in_FILE_5F_NAME */,
                                                                                   const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                   const GALGAS_string & in_RESULT_5F_TYPE_5F_NAME,
                                                                                   const GALGAS_decoratedFunctionValueList & in_VALUE_5F_LIST
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE HAS BEEN GENERATED BY OMNIBUS TOOL. DO NOT MODIFY IT!\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "#include \"" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 5)).stringValue () ;
  result << ".h\"\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "const " ;
  result << in_RESULT_5F_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 9)).stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 9)).stringValue () ;
  result << " [" ;
  result << in_VALUE_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 9)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 9)).stringValue () ;
  result << "] = {" ;
  GALGAS_uint index_661_ (0) ;
  if (in_VALUE_5F_LIST.isValid ()) {
    cEnumerator_decoratedFunctionValueList enumerator_661 (in_VALUE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_661.hasCurrentObject ()) {
      result << "\n"
        "  " ;
      result << enumerator_661.current_mResultName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
      result << " /* " ;
      result << enumerator_661.current_mOperandName (HERE).getter_string (HERE).stringValue () ;
      result << " */" ;
      if (enumerator_661.hasNextObject ()) {
        result << "," ;
      }
      index_661_.increment () ;
      enumerator_661.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performCCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performCCodeGeneration (const GALGAS_string constinArgument_inSourceFileName,
                                     const GALGAS_unifiedScalarTypeMap constinArgument_inUnifiedScalarTypeMap,
                                     const GALGAS_functionMap constinArgument_inFunctionMap,
                                     const GALGAS_machineMap constinArgument_inClassTypeMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_unifiedScalarTypeMap enumerator_1799 (constinArgument_inUnifiedScalarTypeMap, kENUMERATION_UP) ;
  while (enumerator_1799.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_1799.current_mGenerate (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_1844 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_enumerationDeclaration (inCompiler, enumerator_1799.current_lkey (HERE).getter_string (HERE), enumerator_1799.current_mEnumConstantList (HERE) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 50))) ;
        GALGAS_string var_fileName_1988 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 54)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 54)).add_operation (enumerator_1799.current_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 54)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 54)) ;
        GALGAS_bool joker_2117 ; // Joker input parameter
        var_s_1844.method_writeToFileWhenDifferentContents (var_fileName_1988, joker_2117, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 55)) ;
      }
    }
    enumerator_1799.gotoNextObject () ;
  }
  cEnumerator_functionMap enumerator_2196 (constinArgument_inFunctionMap, kENUMERATION_UP) ;
  while (enumerator_2196.hasCurrentObject ()) {
    GALGAS_string var_s_2212 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_functionDeclaration (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 61)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 61)), enumerator_2196.current_lkey (HERE).getter_string (HERE), enumerator_2196.current_mResultTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 63)), enumerator_2196.current_mDecoratedFunctionValueList (HERE).getter_length (SOURCE_FILE ("cCodeGeneration.galgas", 64)) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 60))) ;
    GALGAS_string var_fileName_2462 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 66)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 66)).add_operation (enumerator_2196.current_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 66)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 66)) ;
    GALGAS_bool joker_2588 ; // Joker input parameter
    var_s_2212.method_writeToFileWhenDifferentContents (var_fileName_2462, joker_2588, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 67)) ;
    var_s_2212 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_functionImplementation (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 69)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 69)), enumerator_2196.current_lkey (HERE).getter_string (HERE), enumerator_2196.current_mResultTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 71)), enumerator_2196.current_mDecoratedFunctionValueList (HERE) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 68))) ;
    var_fileName_2462 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 74)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 74)).add_operation (enumerator_2196.current_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 74)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 74)) ;
    GALGAS_bool joker_2959 ; // Joker input parameter
    var_s_2212.method_writeToFileWhenDifferentContents (var_fileName_2462, joker_2959, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 75)) ;
    enumerator_2196.gotoNextObject () ;
  }
  cEnumerator_machineMap enumerator_3046 (constinArgument_inClassTypeMap, kENUMERATION_UP) ;
  while (enumerator_3046.hasCurrentObject ()) {
    GALGAS_string var_h_3066 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_machineDeclaration (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 80)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 80)), constinArgument_inUnifiedScalarTypeMap, enumerator_3046.current (HERE).getter_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 82)), enumerator_3046.current (HERE).getter_mAttributeList (HERE), enumerator_3046.current (HERE).getter_mEventMap (HERE) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 79))) ;
    GALGAS_string var_fileName_3346 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 86)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 86)).add_operation (enumerator_3046.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 86)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 86)) ;
    GALGAS_bool joker_3474 ; // Joker input parameter
    var_h_3066.method_writeToFileWhenDifferentContents (var_fileName_3346, joker_3474, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 87)) ;
    GALGAS_string var_cpp_3495 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_machineImplementation (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 89)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 89)), constinArgument_inUnifiedScalarTypeMap, enumerator_3046.current (HERE).getter_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 91)), enumerator_3046.current (HERE).getter_mAttributeList (HERE), enumerator_3046.current (HERE).getter_mEventMap (HERE), constinArgument_inFunctionMap COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 88))) ;
    var_fileName_3346 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 96)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 96)).add_operation (enumerator_3046.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 96)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 96)) ;
    GALGAS_bool joker_3918 ; // Joker input parameter
    var_cpp_3495.method_writeToFileWhenDifferentContents (var_fileName_3346, joker_3918, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 97)) ;
    enumerator_3046.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@assignmentDecoratedInstruction generateCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_assignmentDecoratedInstruction_generateCCode (const cPtr_decoratedInstruction * inObject,
                                                                                   const GALGAS_string constinArgument_inIndentationString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_assignmentDecoratedInstruction * object = (const cPtr_assignmentDecoratedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentDecoratedInstruction) ;
  result_outResult = constinArgument_inIndentationString.add_operation (object->mProperty_mTargetVarName.getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 123)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 123)) ;
  result_outResult.plusAssign_operation(callExtensionGetter_generateSourceExpressionCCode ((const cPtr_decoratedAssignmentSourceExpression *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mTargetTypeProxy, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 124)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 125)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_assignmentDecoratedInstruction_generateCCode (void) {
  enterExtensionGetter_generateCCode (kTypeDescriptor_GALGAS_assignmentDecoratedInstruction.mSlotID,
                                      extensionGetter_assignmentDecoratedInstruction_generateCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_assignmentDecoratedInstruction_generateCCode (defineExtensionGetter_assignmentDecoratedInstruction_generateCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@assertDecoratedInstruction generateCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_assertDecoratedInstruction_generateCCode (const cPtr_decoratedInstruction * /* inObject */,
                                                                               const GALGAS_string /* constinArgument_inIndentationString */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_assertDecoratedInstruction_generateCCode (void) {
  enterExtensionGetter_generateCCode (kTypeDescriptor_GALGAS_assertDecoratedInstruction.mSlotID,
                                      extensionGetter_assertDecoratedInstruction_generateCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_assertDecoratedInstruction_generateCCode (defineExtensionGetter_assertDecoratedInstruction_generateCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ifDecoratedInstruction generateCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ifDecoratedInstruction_generateCCode (const cPtr_decoratedInstruction * inObject,
                                                                           const GALGAS_string constinArgument_inIndentationString,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ifDecoratedInstruction * object = (const cPtr_ifDecoratedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_ifDecoratedInstruction) ;
  result_outResult = constinArgument_inIndentationString.add_operation (GALGAS_string ("if "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 141)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mTestExpression.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 141)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 141)) ;
  result_outResult.plusAssign_operation(extensionGetter_generateCCode (object->mProperty_mThenInstructionList, constinArgument_inIndentationString.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 142)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("cCodeGeneration.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(constinArgument_inIndentationString.add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 144)) ;
      result_outResult.plusAssign_operation(extensionGetter_generateCCode (object->mProperty_mElseInstructionList, constinArgument_inIndentationString.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 145)) ;
    }
  }
  result_outResult.plusAssign_operation(constinArgument_inIndentationString.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 147)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ifDecoratedInstruction_generateCCode (void) {
  enterExtensionGetter_generateCCode (kTypeDescriptor_GALGAS_ifDecoratedInstruction.mSlotID,
                                      extensionGetter_ifDecoratedInstruction_generateCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ifDecoratedInstruction_generateCCode (defineExtensionGetter_ifDecoratedInstruction_generateCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@switchDecoratedInstruction generateCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_switchDecoratedInstruction_generateCCode (const cPtr_decoratedInstruction * inObject,
                                                                               const GALGAS_string constinArgument_inIndentationString,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_switchDecoratedInstruction * object = (const cPtr_switchDecoratedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_switchDecoratedInstruction) ;
  result_outResult = constinArgument_inIndentationString.add_operation (GALGAS_string ("switch "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 153)).add_operation (object->mProperty_mVarName.getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 153)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 153)) ;
  cEnumerator_switchDecoratedCaseList enumerator_5887 (object->mProperty_mSwitchDecoratedCaseList, kENUMERATION_UP) ;
  while (enumerator_5887.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(constinArgument_inIndentationString.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 155)) ;
    cEnumerator_lstringlist enumerator_5972 (enumerator_5887.current_mConstantNameList (HERE), kENUMERATION_UP) ;
    while (enumerator_5972.hasCurrentObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (" case ").add_operation (enumerator_5972.current_mValue (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 157)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 157)) ;
      enumerator_5972.gotoNextObject () ;
    }
    result_outResult.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 159)) ;
    result_outResult.plusAssign_operation(extensionGetter_generateCCode (enumerator_5887.current_mInstructionList (HERE), constinArgument_inIndentationString.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 160)) ;
    result_outResult.plusAssign_operation(constinArgument_inIndentationString.add_operation (GALGAS_string ("break ;\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 161)) ;
    enumerator_5887.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(constinArgument_inIndentationString.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 163)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_switchDecoratedInstruction_generateCCode (void) {
  enterExtensionGetter_generateCCode (kTypeDescriptor_GALGAS_switchDecoratedInstruction.mSlotID,
                                      extensionGetter_switchDecoratedInstruction_generateCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_switchDecoratedInstruction_generateCCode (defineExtensionGetter_switchDecoratedInstruction_generateCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@attributeInDecoratedAssignmentSourceExpression generateSourceExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                                                                   const GALGAS_unifiedScalarTypeMap_2D_proxy /* constinArgument_inTargetTypeProxy */,
                                                                                                                   C_Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_attributeInDecoratedAssignmentSourceExpression * object = (const cPtr_attributeInDecoratedAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
  result_outResult = object->mProperty_mVarName.getter_string (HERE) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  enterExtensionGetter_generateSourceExpressionCCode (kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression.mSlotID,
                                                      extensionGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (defineExtensionGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@cstInDecoratedAssignmentSourceExpression generateSourceExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                                                             const GALGAS_unifiedScalarTypeMap_2D_proxy /* constinArgument_inTargetTypeProxy */,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_cstInDecoratedAssignmentSourceExpression * object = (const cPtr_cstInDecoratedAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_cstInDecoratedAssignmentSourceExpression) ;
  result_outResult = object->mProperty_mEnumCstName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 187)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  enterExtensionGetter_generateSourceExpressionCCode (kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression.mSlotID,
                                                      extensionGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (defineExtensionGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionInDecoratedAssignmentSourceExpression generateSourceExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                                                                  const GALGAS_unifiedScalarTypeMap_2D_proxy /* constinArgument_inTargetTypeProxy */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_functionInDecoratedAssignmentSourceExpression * object = (const cPtr_functionInDecoratedAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_functionInDecoratedAssignmentSourceExpression) ;
  result_outResult = GALGAS_string ("function_").add_operation (object->mProperty_mFunctionName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 195)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 195)).add_operation (object->mProperty_mOperandName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 195)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 195)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  enterExtensionGetter_generateSourceExpressionCCode (kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression.mSlotID,
                                                      extensionGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (defineExtensionGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@logicalAndDecoratedExpression generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_logicalAndDecoratedExpression_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_logicalAndDecoratedExpression * object = (const cPtr_logicalAndDecoratedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalAndDecoratedExpression) ;
  result_outResult = GALGAS_string ("(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mLeft.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mRight.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_logicalAndDecoratedExpression_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_logicalAndDecoratedExpression.mSlotID,
                                                extensionGetter_logicalAndDecoratedExpression_generateExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_logicalAndDecoratedExpression_generateExpressionCCode (defineExtensionGetter_logicalAndDecoratedExpression_generateExpressionCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@logicalOrDecoratedExpression generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_logicalOrDecoratedExpression_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_logicalOrDecoratedExpression * object = (const cPtr_logicalOrDecoratedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalOrDecoratedExpression) ;
  result_outResult = GALGAS_string ("(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mLeft.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mRight.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_logicalOrDecoratedExpression_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_logicalOrDecoratedExpression.mSlotID,
                                                extensionGetter_logicalOrDecoratedExpression_generateExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_logicalOrDecoratedExpression_generateExpressionCCode (defineExtensionGetter_logicalOrDecoratedExpression_generateExpressionCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implicationDecoratedExpression generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_implicationDecoratedExpression_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_implicationDecoratedExpression * object = (const cPtr_implicationDecoratedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_implicationDecoratedExpression) ;
  result_outResult = GALGAS_string ("( !(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mLeft.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)).add_operation (GALGAS_string (") || "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mRight.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_implicationDecoratedExpression_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_implicationDecoratedExpression.mSlotID,
                                                extensionGetter_implicationDecoratedExpression_generateExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_implicationDecoratedExpression_generateExpressionCCode (defineExtensionGetter_implicationDecoratedExpression_generateExpressionCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@decoratedComparisonInExpression generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_decoratedComparisonInExpression_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_decoratedComparisonInExpression * object = (const cPtr_decoratedComparisonInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedComparisonInExpression) ;
  result_outResult = GALGAS_string ("(").add_operation (object->mProperty_mAttributeName.getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 229)) ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_enumComparisonOperator::kNotBuilt:
    break ;
  case GALGAS_enumComparisonOperator::kEnum_equal:
    {
      result_outResult.plusAssign_operation(GALGAS_string (" == "), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 231)) ;
    }
    break ;
  case GALGAS_enumComparisonOperator::kEnum_notEqual:
    {
      result_outResult.plusAssign_operation(GALGAS_string (" != "), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 232)) ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedComparisonRightOperand *) object->mProperty_mRightOperand.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 234)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 234)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_decoratedComparisonInExpression_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_decoratedComparisonInExpression.mSlotID,
                                                extensionGetter_decoratedComparisonInExpression_generateExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_decoratedComparisonInExpression_generateExpressionCCode (defineExtensionGetter_decoratedComparisonInExpression_generateExpressionCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@decoratedAttributeAsComparisonRightOperand generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode (const cPtr_decoratedComparisonRightOperand * inObject,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_decoratedAttributeAsComparisonRightOperand * object = (const cPtr_decoratedAttributeAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedAttributeAsComparisonRightOperand) ;
  result_outResult = object->mProperty_mAttributeName.getter_string (HERE) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand.mSlotID,
                                                extensionGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode (defineExtensionGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@decoratedConstantAsComparisonRightOperand generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode (const cPtr_decoratedComparisonRightOperand * inObject,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_decoratedConstantAsComparisonRightOperand * object = (const cPtr_decoratedConstantAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedConstantAsComparisonRightOperand) ;
  result_outResult = object->mProperty_mConstantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 255)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand.mSlotID,
                                                extensionGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode (defineExtensionGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode, NULL) ;

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "omnibus",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .plm extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "1.0.0" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast_230 ;
  var_ast_230.drop () ;
  cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_230  COMMA_SOURCE_FILE ("main.galgas", 8)) ;
  GALGAS_unifiedScalarTypeMap var_unifiedScalarTypeMap_344 ;
  GALGAS_functionMap var_functionMap_378 ;
  GALGAS_machineMap var_machineMap_410 ;
  {
  routine_performStaticAnalysis (var_ast_230, var_unifiedScalarTypeMap_344, var_functionMap_378, var_machineMap_410, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 10)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("main.galgas", 17)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_generationString_574 ;
      {
      routine_performDynamicAnalysis (constinArgument_inSourceFile.getter_string (HERE), var_ast_230, var_unifiedScalarTypeMap_344, var_functionMap_378, var_machineMap_410, var_generationString_574, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 18)) ;
      }
      GALGAS_bool joker_662 ; // Joker input parameter
      var_generationString_574.method_writeToFileWhenDifferentContents (constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".txt"), inCompiler COMMA_SOURCE_FILE ("main.galgas", 19)), joker_662, inCompiler COMMA_SOURCE_FILE ("main.galgas", 19)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("main.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_omnibus_5F_options_generateCCode.getter_value ()) COMMA_SOURCE_FILE ("main.galgas", 22)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_performCCodeGeneration (constinArgument_inSourceFile.getter_string (HERE), var_unifiedScalarTypeMap_344, var_functionMap_378, var_machineMap_410, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 23)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "omnibus") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_omnibus_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_omnibus_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_omnibus_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_omnibus_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

