#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performCCodeGeneration'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performCCodeGeneration (const GALGAS_string constinArgument_inSourceFileName,
                                     const GALGAS_unifiedScalarTypeMap constinArgument_inUnifiedScalarTypeMap,
                                     const GALGAS_functionMap constinArgument_inFunctionMap,
                                     const GALGAS_machineMap constinArgument_inClassTypeMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_unifiedScalarTypeMap enumerator_1799 (constinArgument_inUnifiedScalarTypeMap, kENUMERATION_UP) ;
  while (enumerator_1799.hasCurrentObject ()) {
    GALGAS_string var_s_1819 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_enumerationDeclaration (inCompiler, enumerator_1799.current_lkey (HERE).getter_string (HERE), enumerator_1799.current_mEnumConstantList (HERE) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 49))) ;
    GALGAS_string var_fileName_1953 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 53)).add_operation (GALGAS_string ("-enum-"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 53)).add_operation (enumerator_1799.current_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 53)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 53)) ;
    GALGAS_bool joker_2080 ; // Joker input parameter
    var_s_1819.method_writeToFileWhenDifferentContents (var_fileName_1953, joker_2080, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 54)) ;
    enumerator_1799.gotoNextObject () ;
  }
  cEnumerator_functionMap enumerator_2151 (constinArgument_inFunctionMap, kENUMERATION_UP) ;
  while (enumerator_2151.hasCurrentObject ()) {
    GALGAS_string var_s_2167 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_functionDeclaration (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 59)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 59)), enumerator_2151.current_lkey (HERE).getter_string (HERE), enumerator_2151.current_mResultTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 61)), enumerator_2151.current_mDecoratedFunctionValueList (HERE).getter_length (SOURCE_FILE ("cCodeGeneration.galgas", 62)) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 58))) ;
    GALGAS_string var_fileName_2417 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 64)).add_operation (GALGAS_string ("-function-"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 64)).add_operation (enumerator_2151.current_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 64)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 64)) ;
    GALGAS_bool joker_2548 ; // Joker input parameter
    var_s_2167.method_writeToFileWhenDifferentContents (var_fileName_2417, joker_2548, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 65)) ;
    var_s_2167 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_functionImplementation (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 67)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 67)), enumerator_2151.current_lkey (HERE).getter_string (HERE), enumerator_2151.current_mResultTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 69)), enumerator_2151.current_mDecoratedFunctionValueList (HERE) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 66))) ;
    var_fileName_2417 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 72)).add_operation (GALGAS_string ("-function-"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 72)).add_operation (enumerator_2151.current_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 72)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 72)) ;
    GALGAS_bool joker_2924 ; // Joker input parameter
    var_s_2167.method_writeToFileWhenDifferentContents (var_fileName_2417, joker_2924, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 73)) ;
    enumerator_2151.gotoNextObject () ;
  }
  cEnumerator_machineMap enumerator_3011 (constinArgument_inClassTypeMap, kENUMERATION_UP) ;
  while (enumerator_3011.hasCurrentObject ()) {
    GALGAS_string var_h_3031 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_machineDeclaration (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 78)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 78)), constinArgument_inUnifiedScalarTypeMap, enumerator_3011.current (HERE).getter_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 80)), enumerator_3011.current (HERE).getter_mAttributeList (HERE), enumerator_3011.current (HERE).getter_mEventMap (HERE) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 77))) ;
    GALGAS_string var_fileName_3307 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 84)).add_operation (GALGAS_string ("-machine-"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 84)).add_operation (enumerator_3011.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 84)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 84)) ;
    GALGAS_bool joker_3439 ; // Joker input parameter
    var_h_3031.method_writeToFileWhenDifferentContents (var_fileName_3307, joker_3439, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 85)) ;
    GALGAS_string var_cpp_3460 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_machineImplementation (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 87)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 87)), constinArgument_inUnifiedScalarTypeMap, enumerator_3011.current (HERE).getter_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 89)), enumerator_3011.current (HERE).getter_mAttributeList (HERE), enumerator_3011.current (HERE).getter_mEventMap (HERE), constinArgument_inFunctionMap COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 86))) ;
    var_fileName_3307 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 94)).add_operation (GALGAS_string ("-machine-"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 94)).add_operation (enumerator_3011.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 94)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 94)) ;
    GALGAS_bool joker_3887 ; // Joker input parameter
    var_cpp_3460.method_writeToFileWhenDifferentContents (var_fileName_3307, joker_3887, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 95)) ;
    enumerator_3011.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@assignmentDecoratedInstruction generateCCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_assignmentDecoratedInstruction_generateCCode (const cPtr_decoratedInstruction * inObject,
                                                                                   const GALGAS_string constinArgument_inIndentationString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_assignmentDecoratedInstruction * object = (const cPtr_assignmentDecoratedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentDecoratedInstruction) ;
  result_outResult = constinArgument_inIndentationString.add_operation (object->mProperty_mTargetVarName.getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 121)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 121)) ;
  result_outResult.plusAssign_operation(callExtensionGetter_generateSourceExpressionCCode ((const cPtr_decoratedAssignmentSourceExpression *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mTargetTypeProxy, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 122)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 123)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_assignmentDecoratedInstruction_generateCCode (void) {
  enterExtensionGetter_generateCCode (kTypeDescriptor_GALGAS_assignmentDecoratedInstruction.mSlotID,
                                      extensionGetter_assignmentDecoratedInstruction_generateCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_assignmentDecoratedInstruction_generateCCode (defineExtensionGetter_assignmentDecoratedInstruction_generateCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@assertDecoratedInstruction generateCCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_assertDecoratedInstruction_generateCCode (const cPtr_decoratedInstruction * /* inObject */,
                                                                               const GALGAS_string /* constinArgument_inIndentationString */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_assertDecoratedInstruction_generateCCode (void) {
  enterExtensionGetter_generateCCode (kTypeDescriptor_GALGAS_assertDecoratedInstruction.mSlotID,
                                      extensionGetter_assertDecoratedInstruction_generateCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_assertDecoratedInstruction_generateCCode (defineExtensionGetter_assertDecoratedInstruction_generateCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@ifDecoratedInstruction generateCCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_ifDecoratedInstruction_generateCCode (const cPtr_decoratedInstruction * inObject,
                                                                           const GALGAS_string constinArgument_inIndentationString,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ifDecoratedInstruction * object = (const cPtr_ifDecoratedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_ifDecoratedInstruction) ;
  result_outResult = constinArgument_inIndentationString.add_operation (GALGAS_string ("if "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 139)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mTestExpression.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 139)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 139)) ;
  result_outResult.plusAssign_operation(extensionGetter_generateCCode (object->mProperty_mThenInstructionList, constinArgument_inIndentationString.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 140)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("cCodeGeneration.galgas", 141)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.plusAssign_operation(constinArgument_inIndentationString.add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 142)) ;
    result_outResult.plusAssign_operation(extensionGetter_generateCCode (object->mProperty_mElseInstructionList, constinArgument_inIndentationString.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 143)) ;
  }
  result_outResult.plusAssign_operation(constinArgument_inIndentationString.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 145)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_ifDecoratedInstruction_generateCCode (void) {
  enterExtensionGetter_generateCCode (kTypeDescriptor_GALGAS_ifDecoratedInstruction.mSlotID,
                                      extensionGetter_ifDecoratedInstruction_generateCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ifDecoratedInstruction_generateCCode (defineExtensionGetter_ifDecoratedInstruction_generateCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension getter '@attributeInDecoratedAssignmentSourceExpression generateSourceExpressionCCode'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  enterExtensionGetter_generateSourceExpressionCCode (kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression.mSlotID,
                                                      extensionGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (defineExtensionGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension getter '@cstInDecoratedAssignmentSourceExpression generateSourceExpressionCCode'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                                                             const GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument_inTargetTypeProxy,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_cstInDecoratedAssignmentSourceExpression * object = (const cPtr_cstInDecoratedAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_cstInDecoratedAssignmentSourceExpression) ;
  result_outResult = constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 169)).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 169)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 169)).add_operation (object->mProperty_mEnumCstName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 169)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  enterExtensionGetter_generateSourceExpressionCCode (kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression.mSlotID,
                                                      extensionGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (defineExtensionGetter_cstInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension getter '@functionInDecoratedAssignmentSourceExpression generateSourceExpressionCCode'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                                                                  const GALGAS_unifiedScalarTypeMap_2D_proxy /* constinArgument_inTargetTypeProxy */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_functionInDecoratedAssignmentSourceExpression * object = (const cPtr_functionInDecoratedAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_functionInDecoratedAssignmentSourceExpression) ;
  result_outResult = GALGAS_string ("function_").add_operation (object->mProperty_mFunctionName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 177)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 177)).add_operation (object->mProperty_mOperandName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 177)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 177)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  enterExtensionGetter_generateSourceExpressionCCode (kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression.mSlotID,
                                                      extensionGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (defineExtensionGetter_functionInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@logicalAndDecoratedExpression generateExpressionCCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_logicalAndDecoratedExpression_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_logicalAndDecoratedExpression * object = (const cPtr_logicalAndDecoratedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalAndDecoratedExpression) ;
  result_outResult = GALGAS_string ("(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mLeft.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 191)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 191)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mRight.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 191)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 191)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_logicalAndDecoratedExpression_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_logicalAndDecoratedExpression.mSlotID,
                                                extensionGetter_logicalAndDecoratedExpression_generateExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_logicalAndDecoratedExpression_generateExpressionCCode (defineExtensionGetter_logicalAndDecoratedExpression_generateExpressionCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@logicalOrDecoratedExpression generateExpressionCCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_logicalOrDecoratedExpression_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_logicalOrDecoratedExpression * object = (const cPtr_logicalOrDecoratedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_logicalOrDecoratedExpression) ;
  result_outResult = GALGAS_string ("(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mLeft.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 198)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 198)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mRight.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 198)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 198)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_logicalOrDecoratedExpression_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_logicalOrDecoratedExpression.mSlotID,
                                                extensionGetter_logicalOrDecoratedExpression_generateExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_logicalOrDecoratedExpression_generateExpressionCCode (defineExtensionGetter_logicalOrDecoratedExpression_generateExpressionCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@implicationDecoratedExpression generateExpressionCCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_implicationDecoratedExpression_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_implicationDecoratedExpression * object = (const cPtr_implicationDecoratedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_implicationDecoratedExpression) ;
  result_outResult = GALGAS_string ("( !(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mLeft.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 205)).add_operation (GALGAS_string (") || "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 205)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) object->mProperty_mRight.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 205)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 205)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_implicationDecoratedExpression_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_implicationDecoratedExpression.mSlotID,
                                                extensionGetter_implicationDecoratedExpression_generateExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_implicationDecoratedExpression_generateExpressionCCode (defineExtensionGetter_implicationDecoratedExpression_generateExpressionCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@decoratedComparisonInExpression generateExpressionCCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_decoratedComparisonInExpression_generateExpressionCCode (const cPtr_decoratedExpression * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_decoratedComparisonInExpression * object = (const cPtr_decoratedComparisonInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedComparisonInExpression) ;
  result_outResult = GALGAS_string ("(").add_operation (object->mProperty_mAttributeName.getter_string (SOURCE_FILE ("cCodeGeneration.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 212)) ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_enumComparisonOperator::kNotBuilt:
    break ;
  case GALGAS_enumComparisonOperator::kEnum_equal:
    {
      result_outResult.plusAssign_operation(GALGAS_string (" == "), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 214)) ;
    }
    break ;
  case GALGAS_enumComparisonOperator::kEnum_notEqual:
    {
      result_outResult.plusAssign_operation(GALGAS_string (" != "), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 215)) ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedComparisonRightOperand *) object->mProperty_mRightOperand.ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 217)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 217)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_decoratedComparisonInExpression_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_decoratedComparisonInExpression.mSlotID,
                                                extensionGetter_decoratedComparisonInExpression_generateExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_decoratedComparisonInExpression_generateExpressionCCode (defineExtensionGetter_decoratedComparisonInExpression_generateExpressionCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@decoratedAttributeAsComparisonRightOperand generateExpressionCCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand.mSlotID,
                                                extensionGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode (defineExtensionGetter_decoratedAttributeAsComparisonRightOperand_generateExpressionCCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@decoratedConstantAsComparisonRightOperand generateExpressionCCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode (const cPtr_decoratedComparisonRightOperand * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_decoratedConstantAsComparisonRightOperand * object = (const cPtr_decoratedConstantAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedConstantAsComparisonRightOperand) ;
  result_outResult = object->mProperty_mConstantTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 238)).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 238)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 238)).add_operation (object->mProperty_mConstantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 238)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode (void) {
  enterExtensionGetter_generateExpressionCCode (kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand.mSlotID,
                                                extensionGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode (defineExtensionGetter_decoratedConstantAsComparisonRightOperand_generateExpressionCCode, NULL) ;

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "omnibus",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .plm extension",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast_265 ;
  var_ast_265.drop () ;
  cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_265  COMMA_SOURCE_FILE ("main.galgas", 13)) ;
  GALGAS_unifiedScalarTypeMap var_unifiedScalarTypeMap_379 ;
  GALGAS_functionMap var_functionMap_413 ;
  GALGAS_machineMap var_machineMap_445 ;
  {
  routine_performStaticAnalysis (var_ast_265, var_unifiedScalarTypeMap_379, var_functionMap_413, var_machineMap_445, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 15)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("main.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_performDynamicAnalysis (constinArgument_inSourceFile.getter_string (HERE), var_ast_265, var_unifiedScalarTypeMap_379, var_functionMap_413, var_machineMap_445, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 23)) ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("main.galgas", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_omnibus_5F_options_generateCCode.getter_value ()) COMMA_SOURCE_FILE ("main.galgas", 26)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    routine_performCCodeGeneration (constinArgument_inSourceFile.getter_string (HERE), var_unifiedScalarTypeMap_379, var_functionMap_413, var_machineMap_445, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 27)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

