#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList_2D_element::GALGAS_binarysetList_2D_element (void) :
mProperty_mLabel (),
mProperty_mSet () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList_2D_element::~ GALGAS_binarysetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList_2D_element::GALGAS_binarysetList_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_binaryset & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mSet (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList_2D_element GALGAS_binarysetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_binarysetList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_binaryset::constructor_emptyBinarySet (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList_2D_element GALGAS_binarysetList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_binaryset & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binarysetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_binarysetList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binarysetList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mSet.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binarysetList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mSet.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@binarysetList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetList_2D_element ("binarysetList-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binarysetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binarysetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstantList (),
mProperty_mConstantMap (),
mProperty_mBDDStartBit (),
mProperty_mBDDBitCount () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element::~ GALGAS_varMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_enumConstantMap::constructor_emptyMap (HERE),
                                   GALGAS_uint::constructor_default (HERE),
                                   GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_varMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantList.isValid () && mProperty_mConstantMap.isValid () && mProperty_mBDDStartBit.isValid () && mProperty_mBDDBitCount.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantList.drop () ;
  mProperty_mConstantMap.drop () ;
  mProperty_mBDDStartBit.drop () ;
  mProperty_mBDDBitCount.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@varMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap_2D_element ("varMap-element",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@machineList-element performMachineDynamicAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_performMachineDynamicAnalysis (const GALGAS_machineList_2D_element inObject,
                                                    const GALGAS_string constinArgument_inSourceFileName,
                                                    const GALGAS_unifiedScalarTypeMap constinArgument_inUnifiedScalarTypeMap,
                                                    const GALGAS_scenarioList constinArgument_inScenarioList,
                                                    const GALGAS_functionMap constinArgument_inFunctionMap,
                                                    GALGAS_string & ioArgument_ioGenerationString,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dotFileContents_9070 = GALGAS_string ("digraph G {\n") ;
  var_dotFileContents_9070.plusAssign_operation(GALGAS_string ("  node [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 310)) ;
  var_dotFileContents_9070.plusAssign_operation(GALGAS_string ("  edge [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 311)) ;
  GALGAS_uint var_bddStartBitIndex_9297 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_varMap var_varMap_9322 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 314)) ;
  GALGAS_varList var_varList_9350 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 315)) ;
  GALGAS_binaryset var_varContraintSet_9388 = GALGAS_binaryset::constructor_fullBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 316)) ;
  const GALGAS_machineList_2D_element temp_0 = inObject ;
  cEnumerator_enumVarDeclarationList enumerator_9454 (temp_0.readProperty_mEnumVarDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_9454.hasCurrentObject ()) {
    GALGAS_enumConstantMap var_constantMap_9536 ;
    GALGAS_lstringlist var_constantList_9554 ;
    GALGAS_bool joker_9556 ; // Joker input parameter
    constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_9454.current (HERE).readProperty_mEnumTypeName (), var_constantMap_9536, var_constantList_9554, joker_9556, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 318)) ;
    GALGAS_uint var_initialValueIndex_9638 ;
    var_constantMap_9536.method_searchKey (enumerator_9454.current (HERE).readProperty_mConstantName (), var_initialValueIndex_9638, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 319)) ;
    GALGAS_uint var_bddBitCount_9665 = var_constantList_9554.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 320)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 320)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 320)) ;
    {
    var_varMap_9322.setter_insertKey (enumerator_9454.current (HERE).readProperty_mEnumVarName (), var_constantList_9554, var_constantMap_9536, var_bddStartBitIndex_9297, var_bddBitCount_9665, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 321)) ;
    }
    var_varList_9350.addAssign_operation (enumerator_9454.current (HERE).readProperty_mEnumVarName (), var_constantList_9554, var_bddStartBitIndex_9297, var_bddBitCount_9665, var_initialValueIndex_9638  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 328)) ;
    var_varContraintSet_9388 = var_varContraintSet_9388.operator_and (GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_bddStartBitIndex_9297, var_bddBitCount_9665, var_constantList_9554.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 337)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 337)).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 334)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 334)) ;
    var_bddStartBitIndex_9297 = var_bddStartBitIndex_9297.add_operation (var_bddBitCount_9665, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 339)) ;
    enumerator_9454.gotoNextObject () ;
  }
  GALGAS_uint var_varTotalBitCount_10257 = var_bddStartBitIndex_9297 ;
  GALGAS_binaryset var_initValueSet_10409 = var_varContraintSet_9388 ;
  cEnumerator_varList enumerator_10453 (var_varList_9350, kENUMERATION_UP) ;
  while (enumerator_10453.hasCurrentObject ()) {
    GALGAS_binaryset var_s_10466 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (enumerator_10453.current (HERE).readProperty_mBDDStartBitIndex (), enumerator_10453.current (HERE).readProperty_mBDDBitCount (), enumerator_10453.current (HERE).readProperty_mInitialValueIndex ().getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 346)) ;
    var_initValueSet_10409 = var_initValueSet_10409.operator_and (var_s_10466 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 351)) ;
    enumerator_10453.gotoNextObject () ;
  }
  GALGAS_uint_36__34_list var_initValueList_10697 = var_initValueSet_10409.getter_uint_36__34_ValueList (var_varTotalBitCount_10257 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 353)) ;
  cEnumerator_uint_36__34_list enumerator_10773 (var_initValueList_10697, kENUMERATION_UP) ;
  while (enumerator_10773.hasCurrentObject ()) {
    var_dotFileContents_9070.plusAssign_operation(GALGAS_string ("  \"\" [shape=plaintext]\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 355)) ;
    var_dotFileContents_9070.plusAssign_operation(GALGAS_string ("  \"\" -> \"").add_operation (function_nameForValue (enumerator_10773.current (HERE).readProperty_mValue (), var_varList_9350, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 356)) ;
    enumerator_10773.gotoNextObject () ;
  }
  {
  const GALGAS_machineList_2D_element temp_1 = inObject ;
  routine_displayVarValueSet (temp_1.readProperty_mMachineName ().readProperty_string ().add_operation (GALGAS_string (" init configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 359)), var_initValueSet_10409, var_varList_9350, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 358)) ;
  }
  GALGAS_binarysetList var_invariantList_11156 = GALGAS_binarysetList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 365)) ;
  GALGAS_binaryset var_invariantValueSet_11196 = var_varContraintSet_9388 ;
  const GALGAS_machineList_2D_element temp_2 = inObject ;
  cEnumerator_expressionList enumerator_11257 (temp_2.readProperty_mInvariantExpressionList (), kENUMERATION_UP) ;
  while (enumerator_11257.hasCurrentObject ()) {
    GALGAS_binaryset var_expressionBDD_11358 ;
    callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) enumerator_11257.current (HERE).readProperty_mExpression ().ptr (), var_varMap_9322, var_varTotalBitCount_10257, var_expressionBDD_11358, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 368)) ;
    GALGAS_binaryset var_inv_11382 = var_expressionBDD_11358.operator_and (var_varContraintSet_9388 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 369)) ;
    var_invariantList_11156.addAssign_operation (enumerator_11257.current (HERE).readProperty_mLabel (), var_inv_11382  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 370)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_inv_11382.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 371)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_11257.current (HERE).readProperty_mLabel ().readProperty_location (), GALGAS_string ("this invariant is empty"), fixItArray4  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 372)) ;
      }
    }
    var_invariantValueSet_11196 = var_invariantValueSet_11196.operator_and (var_inv_11382 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 374)) ;
    enumerator_11257.gotoNextObject () ;
  }
  GALGAS_uint_36__34_list var_valueList_11620 = var_invariantValueSet_11196.getter_uint_36__34_ValueList (var_varTotalBitCount_10257 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 376)) ;
  const GALGAS_machineList_2D_element temp_5 = inObject ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_valueList_11620.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 377)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string var_m_11684 = temp_5.readProperty_mMachineName ().readProperty_string ().add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)).add_operation (var_valueList_11620.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 377)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)).add_operation (GALGAS_string (" configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 377)) ;
  {
  routine_displayVarValueSet (GALGAS_string (" Invariant of ").add_operation (var_m_11684, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 379)), var_invariantValueSet_11196, var_varList_9350, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 378)) ;
  }
  inCompiler->printMessage (GALGAS_string (" Invariant of ").add_operation (var_m_11684, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 384)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 384))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 384)) ;
  cEnumerator_uint_36__34_list enumerator_11986 (var_valueList_11620, kENUMERATION_UP) ;
  while (enumerator_11986.hasCurrentObject ()) {
    var_dotFileContents_9070.plusAssign_operation(GALGAS_string ("  \"").add_operation (function_nameForValue (enumerator_11986.current (HERE).readProperty_mValue (), var_varList_9350, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)).add_operation (GALGAS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 386)) ;
    enumerator_11986.gotoNextObject () ;
  }
  GALGAS_binaryset var_oldVar_5F_Var_5F_EqualitySet_12232 = var_varContraintSet_9388 ;
  cEnumerator_varList enumerator_12276 (var_varList_9350, kENUMERATION_UP) ;
  while (enumerator_12276.hasCurrentObject ()) {
    GALGAS_binaryset var_constraint_12298 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (enumerator_12276.current (HERE).readProperty_mBDDStartBitIndex (), enumerator_12276.current (HERE).readProperty_mBDDBitCount (), enumerator_12276.current (HERE).readProperty_mBDDStartBitIndex ().add_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 392)) ;
    var_oldVar_5F_Var_5F_EqualitySet_12232 = var_oldVar_5F_Var_5F_EqualitySet_12232.operator_and (var_constraint_12298 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 397)) ;
    enumerator_12276.gotoNextObject () ;
  }
  GALGAS_varMap var_varMapForEventInstructionComputing_12584 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 399)) ;
  cEnumerator_varMap enumerator_12614 (var_varMap_9322, kENUMERATION_UP) ;
  while (enumerator_12614.hasCurrentObject ()) {
    {
    var_varMapForEventInstructionComputing_12584.setter_insertKey (enumerator_12614.current (HERE).readProperty_lkey (), enumerator_12614.current (HERE).readProperty_mConstantList (), enumerator_12614.current (HERE).readProperty_mConstantMap (), enumerator_12614.current (HERE).readProperty_mBDDStartBit ().add_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 405)), enumerator_12614.current (HERE).readProperty_mBDDBitCount (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 401)) ;
    }
    enumerator_12614.gotoNextObject () ;
  }
  GALGAS_binaryset var_allTransitions_12869 = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 409)) ;
  GALGAS_transitionEventMap var_transitionEventMap_12932 = GALGAS_transitionEventMap::constructor_emptyMap (SOURCE_FILE ("dynamicAnalysis.galgas", 410)) ;
  const GALGAS_machineList_2D_element temp_8 = inObject ;
  cEnumerator_eventDeclarationList enumerator_12968 (temp_8.readProperty_mEventList (), kENUMERATION_UP) ;
  while (enumerator_12968.hasCurrentObject ()) {
    GALGAS_varList var_argumentList_13025 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 413)) ;
    GALGAS_varMap var_argVarMap_13056 = var_varMapForEventInstructionComputing_12584 ;
    GALGAS_uint var_bddArgOldVarVarTotalBitCount_13136 = var_varTotalBitCount_10257.add_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 415)) ;
    GALGAS_binaryset var_eventTransformationSet_13216 = var_invariantValueSet_11196.operator_and (var_oldVar_5F_Var_5F_EqualitySet_12232 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 416)) ;
    cEnumerator_eventArgumentList enumerator_13301 (enumerator_12968.current (HERE).readProperty_mEventArgumentList (), kENUMERATION_UP) ;
    while (enumerator_13301.hasCurrentObject ()) {
      GALGAS_enumConstantMap var_constantMap_13384 ;
      GALGAS_lstringlist var_constantList_13402 ;
      GALGAS_bool joker_13404 ; // Joker input parameter
      constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_13301.current (HERE).readProperty_mArgumentTypeName (), var_constantMap_13384, var_constantList_13402, joker_13404, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 418)) ;
      GALGAS_uint var_bddBitCount_13434 = var_constantList_13402.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 419)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 419)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 419)) ;
      {
      var_argVarMap_13056.setter_insertKey (enumerator_13301.current (HERE).readProperty_mArgumentVarName (), var_constantList_13402, var_constantMap_13384, var_bddArgOldVarVarTotalBitCount_13136, var_bddBitCount_13434, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 420)) ;
      }
      var_argumentList_13025.addAssign_operation (enumerator_13301.current (HERE).readProperty_mArgumentVarName (), var_constantList_13402, var_bddArgOldVarVarTotalBitCount_13136, var_bddBitCount_13434, GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 427)) ;
      var_eventTransformationSet_13216 = var_eventTransformationSet_13216.operator_and (GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_bddArgOldVarVarTotalBitCount_13136, var_bddBitCount_13434, var_constantList_13402.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 436)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 436)).getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 433)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 433)) ;
      var_bddArgOldVarVarTotalBitCount_13136 = var_bddArgOldVarVarTotalBitCount_13136.add_operation (var_bddBitCount_13434, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 437)) ;
      enumerator_13301.gotoNextObject () ;
    }
    extensionMethod_computeInstructionListBDD (enumerator_12968.current (HERE).readProperty_mEventInstructionList (), var_varTotalBitCount_10257, var_argVarMap_13056, constinArgument_inFunctionMap, var_bddArgOldVarVarTotalBitCount_13136, var_eventTransformationSet_13216, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 440)) ;
    {
    const GALGAS_machineList_2D_element temp_9 = inObject ;
    routine_displayArgVarVarValueSet (GALGAS_string (" Running ").add_operation (temp_9.readProperty_mMachineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 449)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 449)).add_operation (enumerator_12968.current (HERE).readProperty_mEventName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 449)).add_operation (GALGAS_string (" event"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 449)), var_eventTransformationSet_13216, var_argumentList_13025, var_varList_9350, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 448)) ;
    }
    GALGAS_binaryset var_transitions_14567 = var_eventTransformationSet_13216.getter_existOnBitIndexAndBeyond (var_varTotalBitCount_10257.add_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 455)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 455)) ;
    {
    var_transitionEventMap_12932.setter_insertKey (enumerator_12968.current (HERE).readProperty_mEventName (), enumerator_12968.current (HERE).readProperty_mEventArgumentList (), var_eventTransformationSet_13216, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 456)) ;
    }
    var_allTransitions_12869 = var_allTransitions_12869.operator_or (var_transitions_14567 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 461)) ;
    {
    routine_addTransitionsToGraphvizString (enumerator_12968.current (HERE), var_bddArgOldVarVarTotalBitCount_13136, var_eventTransformationSet_13216, var_varList_9350, var_varTotalBitCount_10257, var_argumentList_13025, var_dotFileContents_9070, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 463)) ;
    }
    GALGAS_binaryset var_ensureValueSet_15133 = var_varContraintSet_9388.operator_and (var_varContraintSet_9388.left_shift_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 473)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 473)) ;
    cEnumerator_expressionList enumerator_15235 (enumerator_12968.current (HERE).readProperty_mEnsureExpressionList (), kENUMERATION_UP) ;
    while (enumerator_15235.hasCurrentObject ()) {
      GALGAS_binaryset var_s_15355 ;
      callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) enumerator_15235.current (HERE).readProperty_mExpression ().ptr (), var_varMapForEventInstructionComputing_12584, var_varTotalBitCount_10257, var_s_15355, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 475)) ;
      var_ensureValueSet_15133 = var_ensureValueSet_15133.operator_and (var_s_15355 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 476)) ;
      enumerator_15235.gotoNextObject () ;
    }
    GALGAS_uint_36__34_ var_valueCount_15433 = var_ensureValueSet_15133.getter_valueCount (var_varTotalBitCount_10257.add_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 478)) ;
    {
    const GALGAS_machineList_2D_element temp_10 = inObject ;
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_valueCount_15433.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString () ;
    }
    routine_displayVarVarValueSet (GALGAS_string (" Post-condition of ").add_operation (temp_10.readProperty_mMachineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (enumerator_12968.current (HERE).readProperty_mEventName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (GALGAS_string (" event: "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (var_valueCount_15433.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 480)).add_operation (GALGAS_string (" configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 481)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 481)), var_ensureValueSet_15133, var_varList_9350, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 479)) ;
    }
    const GALGAS_machineList_2D_element temp_13 = inObject ;
    GALGAS_string temp_14 ;
    const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_valueCount_15433.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
    if (kBoolTrue == test_15) {
      temp_14 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_15) {
      temp_14 = GALGAS_string::makeEmptyString () ;
    }
    inCompiler->printMessage (GALGAS_string (" Post-condition of ").add_operation (temp_13.readProperty_mMachineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (enumerator_12968.current (HERE).readProperty_mEventName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (GALGAS_string (" event: "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (var_valueCount_15433.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)).add_operation (GALGAS_string (" configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 487)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 487)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 487))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 486)) ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_ensureValueSet_15133.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 489)).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_12968.current (HERE).readProperty_mEndOfEnsureExpressionList (), GALGAS_string ("ensure condition is empty"), fixItArray17  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 490)) ;
      }
    }
    if (kBoolFalse == test_16) {
      GALGAS_binaryset var_ensureAndInvariant_16170 = var_ensureValueSet_15133.operator_and (var_invariantValueSet_11196 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 492)) ;
      GALGAS_uint_36__34_ var_valueCount_16236 = var_ensureAndInvariant_16170.getter_valueCount (var_varTotalBitCount_10257.add_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 493)) ;
      const GALGAS_machineList_2D_element temp_18 = inObject ;
      GALGAS_string temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsStrictSup, var_valueCount_16236.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_20) {
        temp_19 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string var_m_16319 = GALGAS_string (" Post-condition and invariant of ").add_operation (temp_18.readProperty_mMachineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (enumerator_12968.current (HERE).readProperty_mEventName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (GALGAS_string (" event: "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (var_valueCount_16236.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 494)).add_operation (GALGAS_string (" configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 495)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 495)) ;
      {
      routine_displayVarVarValueSet (var_m_16319, var_ensureAndInvariant_16170, var_varList_9350, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 496)) ;
      }
      inCompiler->printMessage (var_m_16319.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 502))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 502)) ;
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = var_ensureAndInvariant_16170.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 503)).boolEnum () ;
        if (kBoolTrue == test_21) {
          TC_Array <C_FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (enumerator_12968.current (HERE).readProperty_mEndOfEnsureExpressionList (), GALGAS_string ("post condition condition is not compatible with invariant"), fixItArray22  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 504)) ;
        }
      }
      if (kBoolFalse == test_21) {
        GALGAS_binaryset var_ensureAndContext_16858 = var_transitions_14567.operator_and (var_ensureValueSet_15133 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 507)) ;
        {
        const GALGAS_machineList_2D_element temp_23 = inObject ;
        routine_displayVarVarValueSet (GALGAS_string ("Post-condition and execution of ").add_operation (temp_23.readProperty_mMachineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 509)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 509)).add_operation (enumerator_12968.current (HERE).readProperty_mEventName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 509)), var_ensureAndContext_16858, var_varList_9350, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 508)) ;
        }
        enumGalgasBool test_24 = kBoolTrue ;
        if (kBoolTrue == test_24) {
          test_24 = GALGAS_bool (kIsNotEqual, var_ensureAndContext_16858.objectCompare (var_transitions_14567)).boolEnum () ;
          if (kBoolTrue == test_24) {
            TC_Array <C_FixItDescription> fixItArray25 ;
            inCompiler->emitSemanticError (enumerator_12968.current (HERE).readProperty_mEndOfEnsureExpressionList (), GALGAS_string ("event instructions is not compatible with post condition"), fixItArray25  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 515)) ;
          }
        }
        if (kBoolFalse == test_24) {
          GALGAS_binaryset var_result_17316 = var_transitions_14567.right_shift_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 518)) ;
          cEnumerator_binarysetList enumerator_17385 (var_invariantList_11156, kENUMERATION_UP) ;
          while (enumerator_17385.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsNotEqual, var_result_17316.objectCompare (var_result_17316.operator_and (enumerator_17385.current (HERE).readProperty_mSet () COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 520)))).boolEnum () ;
              if (kBoolTrue == test_26) {
                TC_Array <C_FixItDescription> fixItArray27 ;
                inCompiler->emitSemanticError (enumerator_12968.current (HERE).readProperty_mEndOfEnsureExpressionList (), GALGAS_string ("event instructions is not compatible with invariant '").add_operation (enumerator_17385.current (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 522)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 522)), fixItArray27  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 521)) ;
              }
            }
            enumerator_17385.gotoNextObject () ;
          }
        }
      }
    }
    enumerator_12968.gotoNextObject () ;
  }
  var_dotFileContents_9070.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 530)) ;
  GALGAS_bool joker_17827 ; // Joker input parameter
  var_dotFileContents_9070.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 531)), joker_17827, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 531)) ;
  GALGAS_binaryset var_accessibleStates_17964 = var_allTransitions_12869.getter_accessibleStates (var_initValueSet_10409, var_varTotalBitCount_10257 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 533)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    test_28 = GALGAS_bool (kIsNotEqual, var_accessibleStates_17964.objectCompare (var_invariantValueSet_11196)).boolEnum () ;
    if (kBoolTrue == test_28) {
      GALGAS_binaryset var_inaccessibleStateSet_18120 = var_invariantValueSet_11196.operator_and (var_accessibleStates_17964.operator_tilde (SOURCE_FILE ("dynamicAnalysis.galgas", 535)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 535)) ;
      GALGAS_uint_36__34_ var_inaccessibleStateCount_18200 = var_inaccessibleStateSet_18120.getter_valueCount (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 536)) ;
      const GALGAS_machineList_2D_element temp_29 = inObject ;
      GALGAS_string temp_30 ;
      const enumGalgasBool test_31 = GALGAS_bool (kIsStrictSup, var_inaccessibleStateCount_18200.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_31) {
        temp_30 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_31) {
        temp_30 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray32 ;
      inCompiler->emitSemanticError (temp_29.readProperty_mMachineName ().readProperty_location (), var_inaccessibleStateCount_18200.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 537)).add_operation (GALGAS_string (" inaccessible invariant configuration"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 537)).add_operation (temp_30, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 537)), fixItArray32  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 537)) ;
      {
      const GALGAS_machineList_2D_element temp_33 = inObject ;
      routine_displayVarValueSet (GALGAS_string ("Inaccessible ").add_operation (temp_33.readProperty_mMachineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 540)).add_operation (GALGAS_string (" invariant configurations"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 540)), var_inaccessibleStateSet_18120, var_varList_9350, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 539)) ;
      }
    }
  }
  cEnumerator_scenarioList enumerator_18698 (constinArgument_inScenarioList, kENUMERATION_UP) ;
  while (enumerator_18698.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      const GALGAS_machineList_2D_element temp_35 = inObject ;
      test_34 = GALGAS_bool (kIsEqual, enumerator_18698.current (HERE).readProperty_mMachineName ().readProperty_string ().objectCompare (temp_35.readProperty_mMachineName ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_34) {
        const GALGAS_machineList_2D_element temp_36 = inObject ;
        inCompiler->printMessage (GALGAS_string (" Scenario \"").add_operation (enumerator_18698.current (HERE).readProperty_mScenarioName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549)).add_operation (GALGAS_string ("\" for "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549)).add_operation (temp_36.readProperty_mMachineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549)).add_operation (GALGAS_string (" machine\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 549)) ;
        const GALGAS_machineList_2D_element temp_37 = inObject ;
        ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("*** Scenario \"").add_operation (enumerator_18698.current (HERE).readProperty_mScenarioName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)).add_operation (GALGAS_string ("\" for "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)).add_operation (temp_37.readProperty_mMachineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)).add_operation (GALGAS_string (" machine:\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 550)) ;
        GALGAS_binaryset var_valueSet_19020 = var_initValueSet_10409 ;
        GALGAS_machineVarListForDisplay var_displayStateInfo_19088 = extensionGetter_displayVarInfo (var_varList_9350, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 552)) ;
        GALGAS_uint var_firstColumnLength_19188 = GALGAS_string ("Event").getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 554)) ;
        cEnumerator_scenarioEventSequence enumerator_19250 (enumerator_18698.current (HERE).readProperty_mEventSequence (), kENUMERATION_UP) ;
        while (enumerator_19250.hasCurrentObject ()) {
          GALGAS_string var_eventString_19285 = enumerator_19250.current (HERE).readProperty_mEventName ().readProperty_string ().add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 556)) ;
          cEnumerator_lstringlist enumerator_19364 (enumerator_19250.current (HERE).readProperty_mArgumentNameList (), kENUMERATION_UP) ;
          while (enumerator_19364.hasCurrentObject ()) {
            var_eventString_19285.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_19364.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 558)) ;
            if (enumerator_19364.hasNextObject ()) {
              var_eventString_19285.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 559)) ;
            }
            enumerator_19364.gotoNextObject () ;
          }
          var_eventString_19285.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 561)) ;
          GALGAS_uint var_lg_19512 = var_eventString_19285.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 562)) ;
          enumGalgasBool test_38 = kBoolTrue ;
          if (kBoolTrue == test_38) {
            test_38 = GALGAS_bool (kIsStrictInf, var_firstColumnLength_19188.objectCompare (var_lg_19512)).boolEnum () ;
            if (kBoolTrue == test_38) {
              var_firstColumnLength_19188 = var_lg_19512 ;
            }
          }
          enumerator_19250.gotoNextObject () ;
        }
        ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("Event").getter_stringByRightPadding (var_firstColumnLength_19188.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 568)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 568)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 568)) ;
        {
        routine_displayVarNames (var_displayStateInfo_19088, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 569)) ;
        }
        ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), var_firstColumnLength_19188.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 570))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 570)) ;
        {
        routine_displaySeparator (var_displayStateInfo_19088, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 571)) ;
        }
        cEnumerator_scenarioEventSequence enumerator_19993 (enumerator_18698.current (HERE).readProperty_mEventSequence (), kENUMERATION_UP) ;
        while (enumerator_19993.hasCurrentObject ()) {
          GALGAS_eventArgumentList var_argumentList_20109 ;
          GALGAS_binaryset var_transitionSet_20149 ;
          var_transitionEventMap_12932.method_searchKey (enumerator_19993.current (HERE).readProperty_mEventName (), var_argumentList_20109, var_transitionSet_20149, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 573)) ;
          GALGAS_uint var_bddBitIndex_20216 = var_varTotalBitCount_10257.add_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 579)) ;
          GALGAS_string var_eventString_20286 = enumerator_19993.current (HERE).readProperty_mEventName ().readProperty_string ().add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 580)) ;
          cEnumerator_eventArgumentList enumerator_20354 (var_argumentList_20109, kENUMERATION_UP) ;
          cEnumerator_lstringlist enumerator_20389 (enumerator_19993.current (HERE).readProperty_mArgumentNameList (), kENUMERATION_UP) ;
          while (enumerator_20354.hasCurrentObject () && enumerator_20389.hasCurrentObject ()) {
            var_eventString_20286.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_20389.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 583)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 583)) ;
            GALGAS_enumConstantMap var_constantMap_20556 ;
            GALGAS_lstringlist joker_20558_2 ; // Joker input parameter
            GALGAS_bool joker_20558_1 ; // Joker input parameter
            constinArgument_inUnifiedScalarTypeMap.method_searchKey (enumerator_20354.current (HERE).readProperty_mArgumentTypeName (), var_constantMap_20556, joker_20558_2, joker_20558_1, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 584)) ;
            GALGAS_uint var_constantIndex_20634 ;
            var_constantMap_20556.method_searchKey (enumerator_20389.current (HERE).readProperty_mValue (), var_constantIndex_20634, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 585)) ;
            GALGAS_uint var_bitCount_20664 = var_constantMap_20556.getter_count (SOURCE_FILE ("dynamicAnalysis.galgas", 586)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 586)).getter_significantBitCount (SOURCE_FILE ("dynamicAnalysis.galgas", 586)) ;
            var_transitionSet_20149 = var_transitionSet_20149.operator_and (GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_bddBitIndex_20216, var_bitCount_20664, var_constantIndex_20634.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 587)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 587)) ;
            var_bddBitIndex_20216 = var_bddBitIndex_20216.add_operation (var_bitCount_20664, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 591)) ;
            if (enumerator_20354.hasNextObject () && enumerator_20389.hasNextObject ()) {
              var_eventString_20286.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 593)) ;
            }
            enumerator_20354.gotoNextObject () ;
            enumerator_20389.gotoNextObject () ;
          }
          var_eventString_20286.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 595)) ;
          var_valueSet_19020 = var_valueSet_19020.operator_and (var_transitionSet_20149 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 596)).right_shift_operation (var_varTotalBitCount_10257, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 596)).getter_existOnBitIndexAndBeyond (var_varTotalBitCount_10257 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 596)) ;
          ioArgument_ioGenerationString.plusAssign_operation(var_eventString_20286.getter_stringByRightPadding (var_firstColumnLength_19188, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 597)) ;
          GALGAS_uint_36__34_list var_valueList_21246 = var_valueSet_19020.getter_uint_36__34_ValueList (var_varTotalBitCount_10257 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 598)) ;
          enumGalgasBool test_39 = kBoolTrue ;
          if (kBoolTrue == test_39) {
            test_39 = GALGAS_bool (kIsEqual, var_valueList_21246.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 599)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_39) {
              TC_Array <C_FixItDescription> fixItArray40 ;
              inCompiler->emitSemanticError (enumerator_19993.current (HERE).readProperty_mEventName ().readProperty_location (), GALGAS_string ("no configuration instead of 1"), fixItArray40  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 600)) ;
              ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 601)) ;
            }
          }
          if (kBoolFalse == test_39) {
            enumGalgasBool test_41 = kBoolTrue ;
            if (kBoolTrue == test_41) {
              test_41 = GALGAS_bool (kIsStrictSup, var_valueList_21246.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 602)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_41) {
                TC_Array <C_FixItDescription> fixItArray42 ;
                inCompiler->emitSemanticError (enumerator_19993.current (HERE).readProperty_mEventName ().readProperty_location (), var_valueList_21246.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 603)).getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 603)).add_operation (GALGAS_string (" configurations instead of 1"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 603)), fixItArray42  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 603)) ;
                ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 604)) ;
              }
            }
            if (kBoolFalse == test_41) {
              ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 606)) ;
              {
              routine_displayValue (var_displayStateInfo_19088, var_valueList_21246.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 607)), ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 607)) ;
              }
            }
          }
          enumerator_19993.gotoNextObject () ;
        }
        ioArgument_ioGenerationString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 610)) ;
      }
    }
    enumerator_18698.gotoNextObject () ;
  }
}


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
  GALGAS_decoratedExpression var_leftDecoratedExpr_2261 ;
  const GALGAS_implicationExpression temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) temp_0.readProperty_mLeft ().ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_leftDecoratedExpr_2261, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 66)) ;
  GALGAS_decoratedExpression var_rightDecoratedExpr_2389 ;
  const GALGAS_implicationExpression temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) temp_1.readProperty_mRight ().ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_rightDecoratedExpr_2389, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 71)) ;
  outArgument_outDecoratedExpression = GALGAS_implicationDecoratedExpression::constructor_new (var_leftDecoratedExpr_2261, var_rightDecoratedExpr_2389  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 76)) ;
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
  GALGAS_decoratedExpression var_leftDecoratedExpr_2875 ;
  const GALGAS_logicalOrExpression temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) temp_0.readProperty_mLeft ().ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_leftDecoratedExpr_2875, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 87)) ;
  GALGAS_decoratedExpression var_rightDecoratedExpr_3003 ;
  const GALGAS_logicalOrExpression temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) temp_1.readProperty_mRight ().ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_rightDecoratedExpr_3003, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 92)) ;
  outArgument_outDecoratedExpression = GALGAS_logicalOrDecoratedExpression::constructor_new (var_leftDecoratedExpr_2875, var_rightDecoratedExpr_3003  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 97)) ;
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
  GALGAS_decoratedExpression var_leftDecoratedExpr_3488 ;
  const GALGAS_logicalAndExpression temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) temp_0.readProperty_mLeft ().ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_leftDecoratedExpr_3488, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 108)) ;
  GALGAS_decoratedExpression var_rightDecoratedExpr_3616 ;
  const GALGAS_logicalAndExpression temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) temp_1.readProperty_mRight ().ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_rightDecoratedExpr_3616, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 113)) ;
  outArgument_outDecoratedExpression = GALGAS_logicalAndDecoratedExpression::constructor_new (var_leftDecoratedExpr_3488, var_rightDecoratedExpr_3616  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 118)) ;
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
  GALGAS_unifiedScalarTypeMap_2D_entry var_attributeTypeProxy_4123 ;
  const GALGAS_comparisonInExpression temp_0 = object ;
  GALGAS_uint joker_4129 ; // Joker input parameter
  constinArgument_inAnalyzeContext.readProperty_mMachineVarMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeTypeProxy_4123, joker_4129, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 130)) ;
  GALGAS_decoratedComparisonRightOperand var_decoratedOperandExpression_4311 ;
  const GALGAS_comparisonInExpression temp_1 = object ;
  callExtensionMethod_analyzeComparisonRightOperand ((const cPtr_comparisonRightOperand *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_decoratedOperandExpression_4311, var_attributeTypeProxy_4123, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 136)) ;
  const GALGAS_comparisonInExpression temp_2 = object ;
  const GALGAS_comparisonInExpression temp_3 = object ;
  outArgument_outDecoratedExpression = GALGAS_decoratedComparisonInExpression::constructor_new (temp_2.readProperty_mAttributeName (), temp_3.readProperty_mOperator (), var_decoratedOperandExpression_4311  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 142)) ;
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
                                                                                            const GALGAS_unifiedScalarTypeMap_2D_entry constinArgument_inVarTypeProxy,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constantAsComparisonRightOperand * object = (const cPtr_constantAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_constantAsComparisonRightOperand) ;
  GALGAS_uint var_constantValue_5897 ;
  const GALGAS_constantAsComparisonRightOperand temp_0 = object ;
  constinArgument_inVarTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 184)).method_searchKey (temp_0.readProperty_mConstantName (), var_constantValue_5897, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 184)) ;
  const GALGAS_constantAsComparisonRightOperand temp_1 = object ;
  outArgument_outDecoratedExpression = GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (constinArgument_inVarTypeProxy, temp_1.readProperty_mConstantName (), var_constantValue_5897  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 185)) ;
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
                                                                                             const GALGAS_unifiedScalarTypeMap_2D_entry constinArgument_inVarTypeProxy,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_attributeAsComparisonRightOperand * object = (const cPtr_attributeAsComparisonRightOperand *) inObject ;
  macroValidSharedObject (object, cPtr_attributeAsComparisonRightOperand) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_attributeAsComparisonRightOperand temp_1 = object ;
    test_0 = temp_1.readProperty_mHasOldQualifier ().operator_and (constinArgument_inEnsureClause.operator_not (SOURCE_FILE ("expressionStaticAnalysis.galgas", 195)) COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 195)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_attributeAsComparisonRightOperand temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("'old' qualifier is allowed only in post condition"), fixItArray3  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 196)) ;
    }
  }
  GALGAS_unifiedScalarTypeMap_2D_entry var_operandTypeProxy_6628 ;
  const GALGAS_attributeAsComparisonRightOperand temp_4 = object ;
  GALGAS_uint joker_6634 ; // Joker input parameter
  constinArgument_inAnalyzeContext.readProperty_mMachineVarMap ().method_searchKey (temp_4.readProperty_mAttributeName (), var_operandTypeProxy_6628, joker_6634, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 198)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inVarTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 204)).objectCompare (var_operandTypeProxy_6628.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 204)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_attributeAsComparisonRightOperand temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("var type is '%").add_operation (constinArgument_inVarTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 206)).add_operation (GALGAS_string ("', and is different from right expression type '%"), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 206)).add_operation (var_operandTypeProxy_6628.getter_key (inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 207)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 208)), fixItArray7  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 205)) ;
    }
  }
  const GALGAS_attributeAsComparisonRightOperand temp_8 = object ;
  outArgument_outDecoratedExpression = GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (temp_8.readProperty_mAttributeName ()  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 210)) ;
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
                                                                                               const GALGAS_unifiedScalarTypeMap_2D_entry constinArgument_inTargetTypeProxy,
                                                                                               GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAsAssignmentSourceExpression * object = (const cPtr_varAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_varAsAssignmentSourceExpression) ;
  GALGAS_unifiedScalarTypeMap_2D_entry var_sourceTypeProxy_4273 ;
  const GALGAS_varAsAssignmentSourceExpression temp_0 = object ;
  GALGAS_uint joker_4279 ; // Joker input parameter
  constinArgument_inAnalyzeContext.readProperty_mMachineVarMap ().method_searchKey (temp_0.readProperty_mSourceVarName (), var_sourceTypeProxy_4273, joker_4279, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 111)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 117)).objectCompare (var_sourceTypeProxy_4273.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 117)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varAsAssignmentSourceExpression temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mSourceVarName ().readProperty_location (), GALGAS_string ("var type is '").add_operation (constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 119)).add_operation (GALGAS_string ("', and is different from right expression type '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 119)).add_operation (var_sourceTypeProxy_4273.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 120)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 121)), fixItArray3  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 118)) ;
    }
  }
  const GALGAS_varAsAssignmentSourceExpression temp_4 = object ;
  outArgument_outDecoratedExpression = GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (temp_4.readProperty_mSourceVarName ()  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 123)) ;
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
                                                                                                    const GALGAS_unifiedScalarTypeMap_2D_entry constinArgument_inTargetTypeProxy,
                                                                                                    GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constantAsAssignmentSourceExpression * object = (const cPtr_constantAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_constantAsAssignmentSourceExpression) ;
  GALGAS_uint var_cstValue_5112 ;
  const GALGAS_constantAsAssignmentSourceExpression temp_0 = object ;
  constinArgument_inTargetTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 134)).method_searchKey (temp_0.readProperty_mConstantName (), var_cstValue_5112, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 134)) ;
  const GALGAS_constantAsAssignmentSourceExpression temp_1 = object ;
  outArgument_outDecoratedExpression = GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_new (temp_1.readProperty_mConstantName (), var_cstValue_5112, constinArgument_inTargetTypeProxy.getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 138)).getter_count (SOURCE_FILE ("instructionStaticAnalysis.galgas", 138)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 138)).getter_significantBitCount (SOURCE_FILE ("instructionStaticAnalysis.galgas", 138))  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 135)) ;
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
                                                                                                    const GALGAS_unifiedScalarTypeMap_2D_entry constinArgument_inTargetTypeProxy,
                                                                                                    GALGAS_decoratedAssignmentSourceExpression & outArgument_outDecoratedExpression,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionAsAssignmentSourceExpression * object = (const cPtr_functionAsAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_functionAsAssignmentSourceExpression) ;
  GALGAS_unifiedScalarTypeMap_2D_entry var_operandTypeProxy_5835 ;
  GALGAS_unifiedScalarTypeMap_2D_entry var_resultTypeProxy_5888 ;
  GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_5952 ;
  const GALGAS_functionAsAssignmentSourceExpression temp_0 = object ;
  constinArgument_inAnalyzeContext.readProperty_mFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_operandTypeProxy_5835, var_resultTypeProxy_5888, var_decoratedFunctionValueList_5952, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 149)) ;
  GALGAS_unifiedScalarTypeMap_2D_entry var_attributeTypeProxy_6119 ;
  const GALGAS_functionAsAssignmentSourceExpression temp_1 = object ;
  GALGAS_uint joker_6195 ; // Joker input parameter
  constinArgument_inAnalyzeContext.readProperty_mMachineVarMap ().method_searchKey (temp_1.readProperty_mOperandName (), var_attributeTypeProxy_6119, joker_6195, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 156)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_operandTypeProxy_5835.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 164)).objectCompare (var_attributeTypeProxy_6119.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 164)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionAsAssignmentSourceExpression temp_3 = object ;
      const GALGAS_functionAsAssignmentSourceExpression temp_4 = object ;
      const GALGAS_functionAsAssignmentSourceExpression temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperandName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_4.readProperty_mOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 165)).add_operation (GALGAS_string ("' belongs to the '%"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 165)).add_operation (var_attributeTypeProxy_6119.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 166)).add_operation (GALGAS_string ("', but '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 166)).add_operation (temp_5.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 167)).add_operation (GALGAS_string ("' function requires an '%"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 167)).add_operation (var_operandTypeProxy_5835.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 167)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 168)), fixItArray6  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 165)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 171)).objectCompare (var_resultTypeProxy_5888.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 171)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_functionAsAssignmentSourceExpression temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mOperandName ().readProperty_location (), GALGAS_string ("var type is '").add_operation (constinArgument_inTargetTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 173)).add_operation (GALGAS_string ("', and is different from function result type '"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 173)).add_operation (var_resultTypeProxy_5888.getter_key (inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 174)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 175)), fixItArray9  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 172)) ;
    }
  }
  const GALGAS_functionAsAssignmentSourceExpression temp_10 = object ;
  const GALGAS_functionAsAssignmentSourceExpression temp_11 = object ;
  outArgument_outDecoratedExpression = GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_new (temp_10.readProperty_mFunctionName (), temp_11.readProperty_mOperandName (), var_decoratedFunctionValueList_5952  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 178)) ;
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
  GALGAS_unifiedScalarTypeMap_2D_entry var_targetTypeProxy_7391 ;
  const GALGAS_assignmentInstruction temp_0 = object ;
  GALGAS_uint joker_7397 ; // Joker input parameter
  constinArgument_inAnalyzeContext.readProperty_mMachineVarMap ().method_searchKey (temp_0.readProperty_mTargetVarName (), var_targetTypeProxy_7391, joker_7397, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 190)) ;
  GALGAS_decoratedAssignmentSourceExpression var_decoratedExpression_7572 ;
  const GALGAS_assignmentInstruction temp_1 = object ;
  callExtensionMethod_analyzeAssignmentSourceExpression ((const cPtr_assignmentSourceExpression *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inAnalyzeContext, var_targetTypeProxy_7391, var_decoratedExpression_7572, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 195)) ;
  const GALGAS_assignmentInstruction temp_2 = object ;
  outArgument_outDecoratedInstruction = GALGAS_assignmentDecoratedInstruction::constructor_new (var_targetTypeProxy_7391, temp_2.readProperty_mTargetVarName (), var_decoratedExpression_7572  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 200)) ;
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
  GALGAS_decoratedExpression var_decoratedExpression_9678 ;
  const GALGAS_ifInstruction temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) temp_0.readProperty_mTestExpression ().ptr (), constinArgument_inAnalyzeContext, GALGAS_bool (false), var_decoratedExpression_9678, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 253)) ;
  GALGAS_decoratedInstructionList var_decoratedThenInstructionList_9820 ;
  const GALGAS_ifInstruction temp_1 = object ;
  extensionMethod_analyzeInstructionList (temp_1.readProperty_mThenInstructionList (), constinArgument_inAnalyzeContext, var_decoratedThenInstructionList_9820, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 258)) ;
  GALGAS_decoratedInstructionList var_decoratedElseInstructionList_9962 ;
  const GALGAS_ifInstruction temp_2 = object ;
  extensionMethod_analyzeInstructionList (temp_2.readProperty_mElseInstructionList (), constinArgument_inAnalyzeContext, var_decoratedElseInstructionList_9962, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 262)) ;
  const GALGAS_ifInstruction temp_3 = object ;
  const GALGAS_ifInstruction temp_4 = object ;
  outArgument_outDecoratedInstruction = GALGAS_ifDecoratedInstruction::constructor_new (temp_3.readProperty_mIFinstructionLocation (), var_decoratedExpression_9678, temp_4.readProperty_mEndOfTestExpression (), var_decoratedThenInstructionList_9820, var_decoratedElseInstructionList_9962  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 266)) ;
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
  GALGAS_decoratedExpression var_decoratedExpression_10584 ;
  const GALGAS_assertInstruction temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expression *) temp_0.readProperty_mAssertExpression ().ptr (), constinArgument_inAnalyzeContext, GALGAS_bool (false), var_decoratedExpression_10584, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 281)) ;
  const GALGAS_assertInstruction temp_1 = object ;
  outArgument_outDecoratedInstruction = GALGAS_assertDecoratedInstruction::constructor_new (temp_1.readProperty_mAssertInstructionLocation (), var_decoratedExpression_10584  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 286)) ;
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
  GALGAS_stringset var_allEnumerationConstants_340 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("staticAnalysis.galgas", 12)) ;
  outArgument_outUnifiedScalarTypeMap = GALGAS_unifiedScalarTypeMap::constructor_emptySharedMap (SOURCE_FILE ("staticAnalysis.galgas", 13)) ;
  cEnumerator_enumTypeList enumerator_434 (constinArgument_inAST.readProperty_mEnumTypeList (), kENUMERATION_UP) ;
  while (enumerator_434.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, enumerator_434.current (HERE).readProperty_mEnumConstantList ().getter_length (SOURCE_FILE ("staticAnalysis.galgas", 15)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_434.current (HERE).readProperty_mEnumListName ().readProperty_location (), GALGAS_string ("an enumeration should define 2 constants or more"), fixItArray1  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 16)) ;
      }
    }
    GALGAS_enumConstantMap var_enumConstantMap_611 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 18)) ;
    cEnumerator_lstringlist enumerator_649 (enumerator_434.current (HERE).readProperty_mEnumConstantList (), kENUMERATION_UP) ;
    GALGAS_uint index_624 ((uint32_t) 0) ;
    while (enumerator_649.hasCurrentObject ()) {
      {
      var_enumConstantMap_611.setter_insertKey (enumerator_649.current (HERE).readProperty_mValue (), index_624, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 20)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_allEnumerationConstants_340.getter_hasKey (enumerator_649.current (HERE).readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("staticAnalysis.galgas", 21)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_649.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("this enumeration constant is already defined"), fixItArray3  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 22)) ;
        }
      }
      var_allEnumerationConstants_340.addAssign_operation (enumerator_649.current (HERE).readProperty_mValue ().readProperty_string ()  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 24)) ;
      enumerator_649.gotoNextObject () ;
      index_624.increment_operation (inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 19)) ;
    }
    {
    outArgument_outUnifiedScalarTypeMap.setter_insertKey (enumerator_434.current (HERE).readProperty_mEnumListName (), var_enumConstantMap_611, enumerator_434.current (HERE).readProperty_mEnumConstantList (), enumerator_434.current (HERE).readProperty_mGenerateCode (), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 26)) ;
    }
    enumerator_434.gotoNextObject () ;
  }
  outArgument_outFunctionMap = GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 34)) ;
  cEnumerator_functionDefinitionList enumerator_1194 (constinArgument_inAST.readProperty_mFunctionDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_1194.hasCurrentObject ()) {
    GALGAS_enumConstantMap var_operandEnumMap_1317 ;
    GALGAS_lstringlist joker_1319_2 ; // Joker input parameter
    GALGAS_bool joker_1319_1 ; // Joker input parameter
    outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_1194.current (HERE).readProperty_mOperandEnumTypeName (), var_operandEnumMap_1317, joker_1319_2, joker_1319_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 37)) ;
    GALGAS_enumConstantMap var_resultEnumMap_1439 ;
    GALGAS_lstringlist joker_1441_2 ; // Joker input parameter
    GALGAS_bool joker_1441_1 ; // Joker input parameter
    outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_1194.current (HERE).readProperty_mResultEnumTypeName (), var_resultEnumMap_1439, joker_1441_2, joker_1441_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 39)) ;
    GALGAS_stringset var_handledOperandSet_1499 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("staticAnalysis.galgas", 41)) ;
    GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_1554 = GALGAS_decoratedFunctionValueList::constructor_emptySortedList (SOURCE_FILE ("staticAnalysis.galgas", 42)) ;
    cEnumerator_functionValueList enumerator_1617 (enumerator_1194.current (HERE).readProperty_mValueList (), kENUMERATION_UP) ;
    while (enumerator_1617.hasCurrentObject ()) {
      GALGAS_uint var_operandValue_1692 ;
      var_operandEnumMap_1317.method_searchKey (enumerator_1617.current (HERE).readProperty_mOperandName (), var_operandValue_1692, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 44)) ;
      GALGAS_uint var_resultValue_1762 ;
      var_resultEnumMap_1439.method_searchKey (enumerator_1617.current (HERE).readProperty_mResultName (), var_resultValue_1762, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 45)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_handledOperandSet_1499.getter_hasKey (enumerator_1617.current (HERE).readProperty_mOperandName ().readProperty_string () COMMA_SOURCE_FILE ("staticAnalysis.galgas", 46)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_1617.current (HERE).readProperty_mOperandName ().readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_1617.current (HERE).readProperty_mOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 47)).add_operation (GALGAS_string ("' value is already used"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 47)), fixItArray5  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 47)) ;
        }
      }
      var_handledOperandSet_1499.addAssign_operation (enumerator_1617.current (HERE).readProperty_mOperandName ().readProperty_string ()  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 49)) ;
      var_decoratedFunctionValueList_1554.addAssign_operation (enumerator_1617.current (HERE).readProperty_mOperandName (), var_operandValue_1692, enumerator_1617.current (HERE).readProperty_mResultName (), var_resultValue_1762  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 50)) ;
      enumerator_1617.gotoNextObject () ;
    }
    cEnumerator_enumConstantMap enumerator_2169 (var_operandEnumMap_1317, kENUMERATION_UP) ;
    while (enumerator_2169.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_handledOperandSet_1499.getter_hasKey (enumerator_2169.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("staticAnalysis.galgas", 58)).operator_not (SOURCE_FILE ("staticAnalysis.galgas", 58)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_1194.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this function is not define for '").add_operation (enumerator_2169.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 59)).add_operation (GALGAS_string ("' value"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 59)), fixItArray7  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 59)) ;
        }
      }
      enumerator_2169.gotoNextObject () ;
    }
    {
    outArgument_outFunctionMap.setter_insertKey (enumerator_1194.current (HERE).readProperty_mFunctionName (), GALGAS_unifiedScalarTypeMap_2D_entry::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_1194.current (HERE).readProperty_mOperandEnumTypeName (), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 65)), GALGAS_unifiedScalarTypeMap_2D_entry::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_1194.current (HERE).readProperty_mResultEnumTypeName (), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 66)), var_decoratedFunctionValueList_1554, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 63)) ;
    }
    enumerator_1194.gotoNextObject () ;
  }
  outArgument_outClassTypeMap = GALGAS_machineMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 71)) ;
  cEnumerator_machineList enumerator_2776 (constinArgument_inAST.readProperty_mMachineList (), kENUMERATION_UP) ;
  while (enumerator_2776.hasCurrentObject ()) {
    GALGAS_machineVarMap var_machineVarMap_2801 = GALGAS_machineVarMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 73)) ;
    GALGAS_machineVarList var_machineVarList_2848 = GALGAS_machineVarList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 74)) ;
    cEnumerator_enumVarDeclarationList enumerator_2935 (enumerator_2776.current (HERE).readProperty_mEnumVarDeclarationList (), kENUMERATION_UP) ;
    while (enumerator_2935.hasCurrentObject ()) {
      GALGAS_enumConstantMap var_enumCstMap_3045 ;
      GALGAS_lstringlist var_constantList_3084 ;
      GALGAS_bool joker_3094 ; // Joker input parameter
      outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_2935.current (HERE).readProperty_mEnumTypeName (), var_enumCstMap_3045, var_constantList_3084, joker_3094, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 77)) ;
      GALGAS_uint var_constantIndex_3173 ;
      var_enumCstMap_3045.method_searchKey (enumerator_2935.current (HERE).readProperty_mConstantName (), var_constantIndex_3173, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 83)) ;
      GALGAS_unifiedScalarTypeMap_2D_entry var_t_3186 = GALGAS_unifiedScalarTypeMap_2D_entry::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_2935.current (HERE).readProperty_mEnumTypeName (), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 84)) ;
      {
      var_machineVarMap_2801.setter_insertKey (enumerator_2935.current (HERE).readProperty_mEnumVarName (), var_t_3186, var_enumCstMap_3045.getter_count (SOURCE_FILE ("staticAnalysis.galgas", 88)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 85)) ;
      }
      var_machineVarList_2848.addAssign_operation (var_t_3186, enumerator_2935.current (HERE).readProperty_mEnumVarName (), var_constantList_3084, enumerator_2935.current (HERE).readProperty_mConstantName (), var_constantIndex_3173  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 90)) ;
      enumerator_2935.gotoNextObject () ;
    }
    GALGAS_analyzeContext var_analyzeContext_3562 = GALGAS_analyzeContext::constructor_new (outArgument_outUnifiedScalarTypeMap, var_machineVarMap_2801, outArgument_outFunctionMap  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 98)) ;
    GALGAS_decoratedExpressionList var_invariantDecoratedExpressionList_3839 ;
    extensionMethod_analyzeExpressionList (enumerator_2776.current (HERE).readProperty_mInvariantExpressionList (), var_analyzeContext_3562, GALGAS_bool (false), var_invariantDecoratedExpressionList_3839, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 104)) ;
    GALGAS_eventMap var_eventMap_3920 = GALGAS_eventMap::constructor_emptyMap (SOURCE_FILE ("staticAnalysis.galgas", 110)) ;
    cEnumerator_eventDeclarationList enumerator_3969 (enumerator_2776.current (HERE).readProperty_mEventList (), kENUMERATION_UP) ;
    while (enumerator_3969.hasCurrentObject ()) {
      GALGAS_analyzeContext var_analyzeContextForEvent_4040 = var_analyzeContext_3562 ;
      GALGAS_decoratedArgumentList var_decoratedArgumentList_4089 = GALGAS_decoratedArgumentList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 114)) ;
      cEnumerator_eventArgumentList enumerator_4163 (enumerator_3969.current (HERE).readProperty_mEventArgumentList (), kENUMERATION_UP) ;
      while (enumerator_4163.hasCurrentObject ()) {
        GALGAS_lstringlist var_enumConstantList_4272 ;
        GALGAS_enumConstantMap joker_4234 ; // Joker input parameter
        GALGAS_bool joker_4274 ; // Joker input parameter
        outArgument_outUnifiedScalarTypeMap.method_searchKey (enumerator_4163.current (HERE).readProperty_mArgumentTypeName (), joker_4234, var_enumConstantList_4272, joker_4274, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 116)) ;
        {
        var_analyzeContextForEvent_4040.mProperty_mMachineVarMap.setter_insertKey (enumerator_4163.current (HERE).readProperty_mArgumentVarName (), GALGAS_unifiedScalarTypeMap_2D_entry::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_4163.current (HERE).readProperty_mArgumentTypeName (), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 119)), var_enumConstantList_4272.getter_length (SOURCE_FILE ("staticAnalysis.galgas", 120)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 117)) ;
        }
        var_decoratedArgumentList_4089.addAssign_operation (GALGAS_unifiedScalarTypeMap_2D_entry::constructor_searchKey (outArgument_outUnifiedScalarTypeMap, enumerator_4163.current (HERE).readProperty_mArgumentTypeName (), inCompiler  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 123)), enumerator_4163.current (HERE).readProperty_mArgumentVarName ()  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 122)) ;
        enumerator_4163.gotoNextObject () ;
      }
      GALGAS_decoratedInstructionList var_decoratedEventInstructionList_4876 ;
      extensionMethod_analyzeInstructionList (enumerator_3969.current (HERE).readProperty_mEventInstructionList (), var_analyzeContextForEvent_4040, var_decoratedEventInstructionList_4876, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 127)) ;
      GALGAS_decoratedExpressionList var_ensureDecoratedExpressionList_5071 ;
      extensionMethod_analyzeExpressionList (enumerator_3969.current (HERE).readProperty_mEnsureExpressionList (), var_analyzeContext_3562, GALGAS_bool (true), var_ensureDecoratedExpressionList_5071, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 132)) ;
      {
      var_eventMap_3920.setter_insertKey (enumerator_3969.current (HERE).readProperty_mEventName (), var_decoratedArgumentList_4089, var_decoratedEventInstructionList_4876, var_ensureDecoratedExpressionList_5071, enumerator_3969.current (HERE).readProperty_mEndOfEnsureExpressionList (), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 138)) ;
      }
      enumerator_3969.gotoNextObject () ;
    }
    GALGAS_decoratedScenarioList var_decoratedScenarioList_5424 = GALGAS_decoratedScenarioList::constructor_emptyList (SOURCE_FILE ("staticAnalysis.galgas", 147)) ;
    cEnumerator_scenarioList enumerator_5500 (constinArgument_inAST.readProperty_mScenarioList (), kENUMERATION_UP) ;
    while (enumerator_5500.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, enumerator_5500.current (HERE).readProperty_mMachineName ().readProperty_string ().objectCompare (enumerator_2776.current (HERE).readProperty_mMachineName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          cEnumerator_scenarioEventSequence enumerator_5616 (enumerator_5500.current (HERE).readProperty_mEventSequence (), kENUMERATION_UP) ;
          while (enumerator_5616.hasCurrentObject ()) {
            GALGAS_decoratedArgumentList var_decoratedArgumentList_5717 ;
            GALGAS_decoratedInstructionList joker_5719_3 ; // Joker input parameter
            GALGAS_decoratedExpressionList joker_5719_2 ; // Joker input parameter
            GALGAS_location joker_5719_1 ; // Joker input parameter
            var_eventMap_3920.method_searchKey (enumerator_5616.current (HERE).readProperty_mEventName (), var_decoratedArgumentList_5717, joker_5719_3, joker_5719_2, joker_5719_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 151)) ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, enumerator_5616.current (HERE).readProperty_mArgumentNameList ().getter_length (SOURCE_FILE ("staticAnalysis.galgas", 152)).objectCompare (var_decoratedArgumentList_5717.getter_length (SOURCE_FILE ("staticAnalysis.galgas", 152)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                GALGAS_string temp_10 ;
                const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, enumerator_5616.current (HERE).readProperty_mArgumentNameList ().getter_length (SOURCE_FILE ("staticAnalysis.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  temp_10 = GALGAS_string ("s") ;
                }else if (kBoolFalse == test_11) {
                  temp_10 = GALGAS_string::makeEmptyString () ;
                }
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_5616.current (HERE).readProperty_mEventName ().readProperty_location (), GALGAS_string ("this event requires ").add_operation (enumerator_5616.current (HERE).readProperty_mArgumentNameList ().getter_length (SOURCE_FILE ("staticAnalysis.galgas", 153)).getter_string (SOURCE_FILE ("staticAnalysis.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 153)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 153)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 154)), fixItArray12  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 153)) ;
              }
            }
            cEnumerator_lstringlist enumerator_6052 (enumerator_5616.current (HERE).readProperty_mArgumentNameList (), kENUMERATION_UP) ;
            cEnumerator_decoratedArgumentList enumerator_6082 (var_decoratedArgumentList_5717, kENUMERATION_UP) ;
            while (enumerator_6052.hasCurrentObject () && enumerator_6082.hasCurrentObject ()) {
              GALGAS_uint joker_6160 ; // Joker input parameter
              enumerator_6082.current (HERE).readProperty_mArgumentTypeProxy ().getter_mConstantMap (inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 157)).method_searchKey (enumerator_6052.current (HERE).readProperty_mValue (), joker_6160, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 157)) ;
              enumerator_6052.gotoNextObject () ;
              enumerator_6082.gotoNextObject () ;
            }
            enumerator_5616.gotoNextObject () ;
          }
          var_decoratedScenarioList_5424.addAssign_operation (enumerator_5500.current (HERE).readProperty_mScenarioName (), enumerator_5500.current (HERE).readProperty_mEventSequence ()  COMMA_SOURCE_FILE ("staticAnalysis.galgas", 160)) ;
        }
      }
      enumerator_5500.gotoNextObject () ;
    }
    {
    outArgument_outClassTypeMap.setter_insertKey (enumerator_2776.current (HERE).readProperty_mMachineName (), var_machineVarMap_2801, var_machineVarList_2848, var_invariantDecoratedExpressionList_3839, var_eventMap_3920, var_decoratedScenarioList_5424, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 164)) ;
    }
    enumerator_2776.gotoNextObject () ;
  }
  cEnumerator_scenarioList enumerator_6612 (constinArgument_inAST.readProperty_mScenarioList (), kENUMERATION_UP) ;
  while (enumerator_6612.hasCurrentObject ()) {
    GALGAS_machineVarMap joker_6671_5 ; // Joker input parameter
    GALGAS_machineVarList joker_6671_4 ; // Joker input parameter
    GALGAS_decoratedExpressionList joker_6671_3 ; // Joker input parameter
    GALGAS_eventMap joker_6671_2 ; // Joker input parameter
    GALGAS_decoratedScenarioList joker_6671_1 ; // Joker input parameter
    outArgument_outClassTypeMap.method_searchKey (enumerator_6612.current (HERE).readProperty_mMachineName (), joker_6671_5, joker_6671_4, joker_6671_3, joker_6671_2, joker_6671_1, inCompiler COMMA_SOURCE_FILE ("staticAnalysis.galgas", 175)) ;
    enumerator_6612.gotoNextObject () ;
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
  GALGAS_uint_36__34_ var_v_4912 = constinArgument_inValue ;
  cEnumerator_varList enumerator_4943 (constinArgument_inVarList, kENUMERATION_UP) ;
  while (enumerator_4943.hasCurrentObject ()) {
    GALGAS_uint_36__34_ var_mask_4969 = GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_4943.current (HERE).readProperty_mBDDBitCount (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 187)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 187)) ;
    GALGAS_lstring var_cstName_5024 = enumerator_4943.current (HERE).readProperty_mValueList ().getter_mValueAtIndex (var_v_4912.operator_and (var_mask_4969 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 188)).getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 188)) ;
    result_outResult.plusAssign_operation(var_cstName_5024.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 189)) ;
    var_v_4912 = var_v_4912.right_shift_operation (enumerator_4943.current (HERE).readProperty_mBDDBitCount (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 190)) ;
    if (enumerator_4943.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 192)) ;
    }
    enumerator_4943.gotoNextObject () ;
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
  cEnumerator_machineVarListForDisplay enumerator_5432 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_5432.hasCurrentObject ()) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_5432.current (HERE).readProperty_mAttributeName ().getter_stringByRightPadding (enumerator_5432.current (HERE).readProperty_mColumnLength (), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)).add_operation (GALGAS_string (" |"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 203)) ;
    enumerator_5432.gotoNextObject () ;
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
  cEnumerator_machineVarListForDisplay enumerator_5815 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_5815.hasCurrentObject ()) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), enumerator_5815.current (HERE).readProperty_mColumnLength ().add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 216))  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 216)).add_operation (GALGAS_string ("|"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 216)) ;
    enumerator_5815.gotoNextObject () ;
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
  GALGAS_uint_36__34_ var_aValue_6210 = constinArgument_inValue ;
  cEnumerator_machineVarListForDisplay enumerator_6247 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_6247.hasCurrentObject ()) {
    GALGAS_uint_36__34_ var_mask_6271 = GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_6247.current (HERE).readProperty_mBDDBitCount (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 231)) ;
    GALGAS_lstring var_cstName_6326 = enumerator_6247.current (HERE).readProperty_mValueList ().getter_mValueAtIndex (var_aValue_6210.operator_and (var_mask_6271 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 232)).getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 232)) ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string (" ").add_operation (var_cstName_6326.readProperty_string ().getter_stringByRightPadding (enumerator_6247.current (HERE).readProperty_mColumnLength (), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 233)).add_operation (GALGAS_string (" |"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 233)) ;
    var_aValue_6210 = var_aValue_6210.right_shift_operation (enumerator_6247.current (HERE).readProperty_mBDDBitCount (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 234)) ;
    enumerator_6247.gotoNextObject () ;
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
  GALGAS_uint var_bitCount_6948 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_machineVarListForDisplay enumerator_6979 (constinArgument_inAttributeList, kENUMERATION_UP) ;
  while (enumerator_6979.hasCurrentObject ()) {
    var_bitCount_6948 = var_bitCount_6948.add_operation (enumerator_6979.current (HERE).readProperty_mBDDBitCount (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 251)) ;
    enumerator_6979.gotoNextObject () ;
  }
  {
  routine_displayVarNames (constinArgument_inAttributeList, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 254)) ;
  }
  {
  routine_displaySeparator (constinArgument_inAttributeList, ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 255)) ;
  }
  GALGAS_uint_36__34_list var_values_7191 = constinArgument_inValueSet.getter_uint_36__34_ValueList (var_bitCount_6948 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 256)) ;
  cEnumerator_uint_36__34_list enumerator_7250 (var_values_7191, kENUMERATION_UP) ;
  while (enumerator_7250.hasCurrentObject ()) {
    {
    routine_displayValue (constinArgument_inAttributeList, enumerator_7250.current (HERE).readProperty_mValue (), ioArgument_ioGenerationString, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 258)) ;
    }
    enumerator_7250.gotoNextObject () ;
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
  GALGAS_uint_36__34_list var_valueList_22259 = constinArgument_inEventTransformationSet.getter_uint_36__34_ValueList (constinArgument_inArgVarVarTotalBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 625)) ;
  cEnumerator_uint_36__34_list enumerator_22355 (var_valueList_22259, kENUMERATION_UP) ;
  while (enumerator_22355.hasCurrentObject ()) {
    GALGAS_string var_eventName_22384 = constinArgument_inEvent.readProperty_mEventName ().readProperty_string () ;
    GALGAS_uint_36__34_ var_v_22430 = enumerator_22355.current (HERE).readProperty_mValue () ;
    GALGAS_uint_36__34_ var_source_22468 = var_v_22430.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (constinArgument_inVarTotalBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 629)) ;
    var_v_22430 = var_v_22430.right_shift_operation (constinArgument_inVarTotalBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 630)) ;
    GALGAS_uint_36__34_ var_target_22563 = var_v_22430.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (constinArgument_inVarTotalBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 631)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 631)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 631)) ;
    var_v_22430 = var_v_22430.right_shift_operation (constinArgument_inVarTotalBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 632)) ;
    cEnumerator_varList enumerator_22665 (constinArgument_inArgumentList, kENUMERATION_UP) ;
    while (enumerator_22665.hasCurrentObject ()) {
      GALGAS_uint_36__34_ var_argValue_22695 = var_v_22430.operator_and (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (enumerator_22665.current (HERE).readProperty_mBDDBitCount (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 634)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 634)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 634)) ;
      var_v_22430 = var_v_22430.right_shift_operation (enumerator_22665.current (HERE).readProperty_mBDDBitCount (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 635)) ;
      var_eventName_22384.plusAssign_operation(GALGAS_string ("\?").add_operation (enumerator_22665.current (HERE).readProperty_mValueList ().getter_mValueAtIndex (var_argValue_22695.getter_uint (inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 636)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 636)) ;
      enumerator_22665.gotoNextObject () ;
    }
    ioArgument_ioDotFileContents.plusAssign_operation(GALGAS_string ("  \"").add_operation (function_nameForValue (var_source_22468, constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 638)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 638)).add_operation (function_nameForValue (var_target_22563, constinArgument_inVarList, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 639)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 639)).add_operation (var_eventName_22384, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 640)).add_operation (GALGAS_string ("\"] ;\n"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 638)) ;
    enumerator_22355.gotoNextObject () ;
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
  cEnumerator_machineList enumerator_23567 (constinArgument_inAST.readProperty_mMachineList (), kENUMERATION_UP) ;
  while (enumerator_23567.hasCurrentObject ()) {
    extensionMethod_performMachineDynamicAnalysis (enumerator_23567.current (HERE), constinArgument_inSourceFileName, constinArgument_inUnifiedScalarTypeMap, constinArgument_inAST.readProperty_mScenarioList (), constinArgument_inFunctionMap, outArgument_outGenerationString, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 657)) ;
    enumerator_23567.gotoNextObject () ;
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
  GALGAS_binaryset var_left_24378 ;
  const GALGAS_implicationExpression temp_0 = object ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) temp_0.readProperty_mLeft ().ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_24378, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 681)) ;
  GALGAS_binaryset var_right_24470 ;
  const GALGAS_implicationExpression temp_1 = object ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) temp_1.readProperty_mRight ().ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_24470, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 682)) ;
  outArgument_outExpressionBDD = var_left_24378.getter_implies (var_right_24470 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 683)) ;
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
  GALGAS_binaryset var_left_24879 ;
  const GALGAS_logicalOrExpression temp_0 = object ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) temp_0.readProperty_mLeft ().ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_24879, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 692)) ;
  GALGAS_binaryset var_right_24971 ;
  const GALGAS_logicalOrExpression temp_1 = object ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) temp_1.readProperty_mRight ().ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_24971, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 693)) ;
  outArgument_outExpressionBDD = var_left_24879.operator_or (var_right_24971 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 694)) ;
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
  GALGAS_binaryset var_left_25372 ;
  const GALGAS_logicalAndExpression temp_0 = object ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) temp_0.readProperty_mLeft ().ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_left_25372, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 703)) ;
  GALGAS_binaryset var_right_25464 ;
  const GALGAS_logicalAndExpression temp_1 = object ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) temp_1.readProperty_mRight ().ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_right_25464, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 704)) ;
  outArgument_outExpressionBDD = var_left_25372.operator_and (var_right_25464 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 705)) ;
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
  GALGAS_enumConstantMap var_constantMap_25820 ;
  GALGAS_uint var_leftVarBDDStartBit_25854 ;
  GALGAS_uint var_leftVarBDDBitCount_25888 ;
  const GALGAS_comparisonInExpression temp_0 = object ;
  GALGAS_lstringlist joker_25781 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mAttributeName (), joker_25781, var_constantMap_25820, var_leftVarBDDStartBit_25854, var_leftVarBDDBitCount_25888, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 715)) ;
  const GALGAS_comparisonInExpression temp_1 = object ;
  const GALGAS_comparisonInExpression temp_2 = object ;
  callExtensionMethod_computeRightOperandBDD ((const cPtr_comparisonRightOperand *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inVarMap, var_constantMap_25820, var_leftVarBDDStartBit_25854, var_leftVarBDDBitCount_25888, temp_2.readProperty_mOperator (), constinArgument_inVarTotalBDDBitCount, outArgument_outExpressionBDD, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 722)) ;
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
  GALGAS_uint var_rightVarBDDStartBit_27042 ;
  const GALGAS_attributeAsComparisonRightOperand temp_0 = object ;
  GALGAS_lstringlist joker_27005_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_27005_1 ; // Joker input parameter
  GALGAS_uint joker_27048 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mAttributeName (), joker_27005_2, joker_27005_1, var_rightVarBDDStartBit_27042, joker_27048, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 754)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_attributeAsComparisonRightOperand temp_2 = object ;
    test_1 = temp_2.readProperty_mHasOldQualifier ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_rightVarBDDStartBit_27042 = var_rightVarBDDStartBit_27042.substract_operation (constinArgument_inVarTotalBDDBitCount, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 761)) ;
    }
  }
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_enumComparisonOperator::kNotBuilt:
    break ;
  case GALGAS_enumComparisonOperator::kEnum_equal:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_rightVarBDDStartBit_27042, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 765)) ;
    }
    break ;
  case GALGAS_enumComparisonOperator::kEnum_notEqual:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_rightVarBDDStartBit_27042, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 770)) ;
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
  GALGAS_uint var_constantValue_28035 ;
  const GALGAS_constantAsComparisonRightOperand temp_0 = object ;
  constinArgument_inConstantMap.method_searchKey (temp_0.readProperty_mConstantName (), var_constantValue_28035, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 787)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_enumComparisonOperator::kNotBuilt:
    break ;
  case GALGAS_enumComparisonOperator::kEnum_equal:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_constantValue_28035.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 793)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 790)) ;
    }
    break ;
  case GALGAS_enumComparisonOperator::kEnum_notEqual:
    {
      outArgument_outExpressionBDD = GALGAS_binaryset::constructor_binarySetWithNotEqualToConstant (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, var_constantValue_28035.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 796)) ;
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
  GALGAS_enumConstantMap var_constantMap_29758 ;
  GALGAS_uint var_leftVarBDDStartBit_29792 ;
  GALGAS_uint var_leftVarBDDBitCount_29826 ;
  const GALGAS_assignmentInstruction temp_0 = object ;
  GALGAS_lstringlist joker_29719 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mTargetVarName (), joker_29719, var_constantMap_29758, var_leftVarBDDStartBit_29792, var_leftVarBDDBitCount_29826, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 840)) ;
  GALGAS_binaryset var_oldAttributeValueSet_29868 = ioArgument_ioArgOldVarVarValueSet ;
  const GALGAS_assignmentInstruction temp_1 = object ;
  callExtensionMethod_computeAssignmentInstructionBDD ((const cPtr_assignmentSourceExpression *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inVarMap, constinArgument_inFunctionMap, var_constantMap_29758, var_leftVarBDDStartBit_29792, var_leftVarBDDBitCount_29826, constinArgument_inArgOldVarVarBDDBitCount, ioArgument_ioArgOldVarVarValueSet, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 848)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_oldAttributeValueSet_29868.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_assignmentInstruction temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTargetVarName ().readProperty_location (), GALGAS_string ("this assignment has no effect and is useless"), fixItArray4  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 858)) ;
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
  GALGAS_binaryset var_expressionValueSet_30740 ;
  const GALGAS_assertInstruction temp_0 = object ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) temp_0.readProperty_mAssertExpression ().ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_expressionValueSet_30740, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 870)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_expressionValueSet_30740.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 871)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_assertInstruction temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssertInstructionLocation (), GALGAS_string ("assert expression is always false"), fixItArray3  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 872)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_expressionValueSet_30740.getter_isFull (SOURCE_FILE ("dynamicAnalysis.galgas", 873)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_assertInstruction temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAssertInstructionLocation (), GALGAS_string ("assert expression is always true"), fixItArray6  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 874)) ;
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_binaryset var_v_31008 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_30740 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 876)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_v_31008.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_assertInstruction temp_8 = object ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mAssertInstructionLocation (), GALGAS_string ("assert expression violation"), fixItArray9  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 878)) ;
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
  GALGAS_binaryset var_oldAttributeValueSet_34401 = ioArgument_ioArgOldVarVarValueSet ;
  GALGAS_binaryset var_expressionValueSet_34560 ;
  const GALGAS_ifInstruction temp_0 = object ;
  callExtensionMethod_computeExpressionBDD ((const cPtr_expression *) temp_0.readProperty_mTestExpression ().ptr (), constinArgument_inVarMap, constinArgument_inVarTotalBDDBitCount, var_expressionValueSet_34560, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 959)) ;
  GALGAS_binaryset var_resultingThenCondition_34601 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_34560 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 960)) ;
  GALGAS_binaryset var_resultingElseCondition_34687 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_expressionValueSet_34560.operator_tilde (SOURCE_FILE ("dynamicAnalysis.galgas", 961)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 961)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_expressionValueSet_34560.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 962)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ifInstruction temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfTestExpression (), GALGAS_string ("expression is always false"), fixItArray3  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 963)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_expressionValueSet_34560.getter_isFull (SOURCE_FILE ("dynamicAnalysis.galgas", 964)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_ifInstruction temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mEndOfTestExpression (), GALGAS_string ("expression is always true"), fixItArray6  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 965)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_resultingThenCondition_34601.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 966)).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ifInstruction temp_8 = object ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mEndOfTestExpression (), GALGAS_string ("expression is always false within current context"), fixItArray9  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 967)) ;
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsEqual, var_resultingThenCondition_34601.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
          if (kBoolTrue == test_10) {
            const GALGAS_ifInstruction temp_11 = object ;
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (temp_11.readProperty_mEndOfTestExpression (), GALGAS_string ("expression is always true within current context"), fixItArray12  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 969)) ;
          }
        }
        if (kBoolFalse == test_10) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = var_resultingElseCondition_34687.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 970)).boolEnum () ;
            if (kBoolTrue == test_13) {
              const GALGAS_ifInstruction temp_14 = object ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mEndOfTestExpression (), GALGAS_string ("expression is always true"), fixItArray15  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 971)) ;
            }
          }
          if (kBoolFalse == test_13) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsEqual, var_resultingElseCondition_34687.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_ifInstruction temp_17 = object ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mEndOfTestExpression (), GALGAS_string ("expression is always false within current context"), fixItArray18  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 973)) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = var_resultingThenCondition_34601.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 977)).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_ifInstruction temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mEndOfTestExpression (), GALGAS_string ("then branch is never executed"), fixItArray21  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 978)) ;
      ioArgument_ioArgOldVarVarValueSet.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_19) {
    GALGAS_binaryset var_thenBranchAttributeValueSet_35744 = var_resultingThenCondition_34601 ;
    const GALGAS_ifInstruction temp_22 = object ;
    extensionMethod_computeInstructionListBDD (temp_22.readProperty_mThenInstructionList (), constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, var_thenBranchAttributeValueSet_35744, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 981)) ;
    ioArgument_ioArgOldVarVarValueSet = var_thenBranchAttributeValueSet_35744 ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = var_resultingElseCondition_34687.getter_isEmpty (SOURCE_FILE ("dynamicAnalysis.galgas", 990)).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_ifInstruction temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mEndOfTestExpression (), GALGAS_string ("else branch is never executed"), fixItArray25  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 991)) ;
    }
  }
  if (kBoolFalse == test_23) {
    GALGAS_binaryset var_elseBranchAttributeValueSet_36208 = var_resultingElseCondition_34687 ;
    const GALGAS_ifInstruction temp_26 = object ;
    extensionMethod_computeInstructionListBDD (temp_26.readProperty_mElseInstructionList (), constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, var_elseBranchAttributeValueSet_36208, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 994)) ;
    ioArgument_ioArgOldVarVarValueSet = ioArgument_ioArgOldVarVarValueSet.operator_or (var_elseBranchAttributeValueSet_36208 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1001)) ;
  }
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GALGAS_bool (kIsEqual, var_oldAttributeValueSet_34401.objectCompare (ioArgument_ioArgOldVarVarValueSet)).boolEnum () ;
    if (kBoolTrue == test_27) {
      const GALGAS_ifInstruction temp_28 = object ;
      TC_Array <C_FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mIFinstructionLocation (), GALGAS_string ("this 'if' instruction has no effect and is useless"), fixItArray29  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1005)) ;
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
  GALGAS_uint var_sourceVarBDDStartBit_37686 ;
  GALGAS_uint var_sourceVarBDDBitCount_37722 ;
  const GALGAS_varAsAssignmentSourceExpression temp_0 = object ;
  GALGAS_lstringlist joker_37648_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_37648_1 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mSourceVarName (), joker_37648_2, joker_37648_1, var_sourceVarBDDStartBit_37686, var_sourceVarBDDBitCount_37722, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1030)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetVarBDDBitCount.objectCompare (var_sourceVarBDDBitCount_37722)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varAsAssignmentSourceExpression temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mSourceVarName ().readProperty_location (), GALGAS_string ("*** INTERNAL ERROR ").add_operation (constinArgument_inTargetVarBDDBitCount.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 1037)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)).add_operation (var_sourceVarBDDBitCount_37722.getter_string (SOURCE_FILE ("dynamicAnalysis.galgas", 1037)), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)).add_operation (GALGAS_string (" ***"), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)), fixItArray3  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1037)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetVarBDDStartBit.objectCompare (var_sourceVarBDDStartBit_37686)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_binaryset var_equality_38201 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, constinArgument_inArgOldVarVarBDDBitCount, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1042)) ;
      GALGAS_binaryset var_expressionValueSet_38385 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_equality_38201 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1048)) ;
      GALGAS_binaryset var_v_38442 = var_expressionValueSet_38385.getter_existsOnBitRange (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1049)) ;
      GALGAS_binaryset var_constraint_38672 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, var_sourceVarBDDStartBit_37686, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1055)) ;
      ioArgument_ioArgOldVarVarValueSet = var_v_38442.operator_and (var_constraint_38672 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1061)).getter_existOnBitIndexAndBeyond (constinArgument_inArgOldVarVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1061)) ;
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
  GALGAS_uint var_constantValue_39561 ;
  const GALGAS_constantAsAssignmentSourceExpression temp_0 = object ;
  constinArgument_constantMap.method_searchKey (temp_0.readProperty_mConstantName (), var_constantValue_39561, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1076)) ;
  GALGAS_binaryset var_expressionValueSet_39587 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount, var_constantValue_39561.getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 1080)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1077)) ;
  GALGAS_binaryset var_v_39738 = ioArgument_ioArgOldVarVarValueSet.getter_existsOnBitRange (constinArgument_inTargetVarBDDStartBit, constinArgument_inTargetVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1082)) ;
  ioArgument_ioArgOldVarVarValueSet = var_v_39738.operator_and (var_expressionValueSet_39587 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1086)) ;
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
  GALGAS_uint var_operandVarBDDStartBit_40731 ;
  GALGAS_uint var_operandVarBDDBitCount_40768 ;
  const GALGAS_functionAsAssignmentSourceExpression temp_0 = object ;
  GALGAS_lstringlist joker_40692_2 ; // Joker input parameter
  GALGAS_enumConstantMap joker_40692_1 ; // Joker input parameter
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mOperandName (), joker_40692_2, joker_40692_1, var_operandVarBDDStartBit_40731, var_operandVarBDDBitCount_40768, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1105)) ;
  GALGAS_binaryset var_functionTable_40793 = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("dynamicAnalysis.galgas", 1112)) ;
  GALGAS_decoratedFunctionValueList var_decoratedFunctionValueList_40933 ;
  const GALGAS_functionAsAssignmentSourceExpression temp_1 = object ;
  GALGAS_unifiedScalarTypeMap_2D_entry joker_40871_2 ; // Joker input parameter
  GALGAS_unifiedScalarTypeMap_2D_entry joker_40871_1 ; // Joker input parameter
  constinArgument_inFunctionMap.method_searchKey (temp_1.readProperty_mFunctionName (), joker_40871_2, joker_40871_1, var_decoratedFunctionValueList_40933, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1113)) ;
  cEnumerator_decoratedFunctionValueList enumerator_40972 (var_decoratedFunctionValueList_40933, kENUMERATION_UP) ;
  while (enumerator_40972.hasCurrentObject ()) {
    GALGAS_binaryset var_op_40986 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_operandVarBDDStartBit_40731, var_operandVarBDDBitCount_40768, enumerator_40972.current (HERE).readProperty_mOperandValue ().getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 1118)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1115)) ;
    GALGAS_binaryset var_result_41141 = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (constinArgument_inArgOldVarVarBDDBitCount, constinArgument_leftVarBDDBitCount, enumerator_40972.current (HERE).readProperty_mResultValue ().getter_uint_36__34_ (SOURCE_FILE ("dynamicAnalysis.galgas", 1123)), inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1120)) ;
    var_functionTable_40793 = var_functionTable_40793.operator_or (var_op_40986.operator_and (var_result_41141 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1125)) COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1125)) ;
    enumerator_40972.gotoNextObject () ;
  }
  GALGAS_binaryset var_expressionValueSet_41374 = ioArgument_ioArgOldVarVarValueSet.operator_and (var_functionTable_40793 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1128)) ;
  GALGAS_binaryset var_constraint_41432 = GALGAS_binaryset::constructor_binarySetWithEqualComparison (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount, constinArgument_inArgOldVarVarBDDBitCount, inCompiler  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1129)) ;
  GALGAS_binaryset var_v_41578 = var_expressionValueSet_41374.getter_existsOnBitRange (constinArgument_leftVarBDDStartBit, constinArgument_leftVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1134)) ;
  ioArgument_ioArgOldVarVarValueSet = var_v_41578.operator_and (var_constraint_41432 COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1139)).getter_existOnBitIndexAndBeyond (constinArgument_inArgOldVarVarBDDBitCount COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 1139)) ;
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
  GALGAS_uint index_498_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_498 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_498.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_498.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("enum-declaration.h.galgasTemplate", 12)).stringValue () ;
      if (enumerator_498.hasNextObject ()) {
        result << ",\n" ;
      }
      index_498_.increment () ;
      enumerator_498.gotoNextObject () ;
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
  GALGAS_uint index_528_ (0) ;
  if (in_ENUM_5F_DECLARATION_5F_MAP.isValid ()) {
    cEnumerator_unifiedScalarTypeMap enumerator_528 (in_ENUM_5F_DECLARATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_528.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_528.current_mGenerate (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "#include \"" ;
        result << enumerator_528.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << ".h\"\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_528_.increment () ;
      enumerator_528.gotoNextObject () ;
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
  GALGAS_uint index_1076_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_1076 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1076.hasCurrentObject ()) {
      result << "  private : " ;
      result << enumerator_1076.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).stringValue () ;
      result << " " ;
      result << enumerator_1076.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 28)).stringValue () ;
      result << " ;\n"
        "  private : " ;
      result << enumerator_1076.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 29)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 29)).stringValue () ;
      result << " old_" ;
      result << enumerator_1076.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 29)).stringValue () ;
      result << " ;\n" ;
      index_1076_.increment () ;
      enumerator_1076.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Accessors\n" ;
  GALGAS_uint index_1440_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_1440 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1440.hasCurrentObject ()) {
      result << "  public : inline " ;
      result << enumerator_1440.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 34)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 34)).stringValue () ;
      result << " get_" ;
      result << enumerator_1440.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 34)).stringValue () ;
      result << " (void) const {\n"
        "    return " ;
      result << enumerator_1440.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 35)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  public : inline bool " ;
      result << enumerator_1440.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 37)).stringValue () ;
      result << "_didChange (void) const {\n"
        "    return old_" ;
      result << enumerator_1440.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 38)).stringValue () ;
      result << " != " ;
      result << enumerator_1440.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 38)).stringValue () ;
      result << " ;\n"
        "  }\n" ;
      index_1440_.increment () ;
      enumerator_1440.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---\n"
    "  public : void update (void) ;\n"
    " \n"
    "//--- Events\n" ;
  GALGAS_uint index_2078_ (0) ;
  if (in_EVENT_5F_MAP.isValid ()) {
    cEnumerator_eventMap enumerator_2078 (in_EVENT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2078.hasCurrentObject ()) {
      result << "  public : void event_" ;
      result << enumerator_2078.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 47)).stringValue () ;
      result << " (" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2078.current_mDecoratedArgumentList (HERE).getter_length (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "void" ;
      }else if (kBoolFalse == test_1) {
        GALGAS_uint index_2282_ (0) ;
        if (enumerator_2078.current_mDecoratedArgumentList (HERE).isValid ()) {
          cEnumerator_decoratedArgumentList enumerator_2282 (enumerator_2078.current_mDecoratedArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_2282.hasCurrentObject ()) {
            result << "const " ;
            result << enumerator_2282.current_mArgumentTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-declaration.h.galgasTemplate", 52)).getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 52)).stringValue () ;
            result << " " ;
            result << enumerator_2282.current_mArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-declaration.h.galgasTemplate", 52)).stringValue () ;
            if (enumerator_2282.hasNextObject ()) {
              result << ", " ;
            }
            index_2282_.increment () ;
            enumerator_2282.gotoNextObject () ;
          }
        }
      }
      result << ") ;\n" ;
      index_2078_.increment () ;
      enumerator_2078.gotoNextObject () ;
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
  GALGAS_uint index_462_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    cEnumerator_functionMap enumerator_462 (in_FUNCTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_462.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_462.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 8)).stringValue () ;
      result << ".h\"\n" ;
      index_462_.increment () ;
      enumerator_462.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << "::" ;
  result << in_MACHINE_5F_NAME.stringValue () ;
  result << " (void) :\n" ;
  GALGAS_uint index_799_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_799 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_799.hasCurrentObject ()) {
      result << enumerator_799.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 16)).stringValue () ;
      result << " (" ;
      result << enumerator_799.current_mInitialValueConstantName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 16)).stringValue () ;
      result << "),\n"
        "old_" ;
      result << enumerator_799.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 17)).stringValue () ;
      result << " (" ;
      result << enumerator_799.current_mInitialValueConstantName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 17)).stringValue () ;
      result << ")" ;
      if (enumerator_799.hasNextObject ()) {
        result << ",\n" ;
      }
      index_799_.increment () ;
      enumerator_799.gotoNextObject () ;
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
  GALGAS_uint index_1319_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_machineVarList enumerator_1319 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1319.hasCurrentObject ()) {
      result << "  old_" ;
      result << enumerator_1319.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 28)).stringValue () ;
      result << " = " ;
      result << enumerator_1319.current_mVarName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 28)).stringValue () ;
      result << " ;\n" ;
      index_1319_.increment () ;
      enumerator_1319.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n" ;
  GALGAS_uint index_1576_ (0) ;
  if (in_EVENT_5F_MAP.isValid ()) {
    cEnumerator_eventMap enumerator_1576 (in_EVENT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1576.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
        "\n"
        "\n"
        "void " ;
      result << in_MACHINE_5F_NAME.stringValue () ;
      result << "::event_" ;
      result << enumerator_1576.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 36)).stringValue () ;
      result << " (" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1576.current_mDecoratedArgumentList (HERE).getter_length (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 37)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "void" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_1917_ (0) ;
        if (enumerator_1576.current_mDecoratedArgumentList (HERE).isValid ()) {
          cEnumerator_decoratedArgumentList enumerator_1917 (enumerator_1576.current_mDecoratedArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_1917.hasCurrentObject ()) {
            result << "const " ;
            result << enumerator_1917.current_mArgumentTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).stringValue () ;
            result << " " ;
            result << enumerator_1917.current_mArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 41)).stringValue () ;
            if (enumerator_1917.hasNextObject ()) {
              result << ", " ;
            }
            index_1917_.increment () ;
            enumerator_1917.gotoNextObject () ;
          }
        }
      }
      result << ") {\n" ;
      result << extensionGetter_generateCCode (enumerator_1576.current_mDecoratedEventInstructionList (HERE), GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("machine-implementation.cpp.galgasTemplate", 46)).stringValue () ;
      result << "}\n"
        "\n" ;
      index_1576_.increment () ;
      enumerator_1576.gotoNextObject () ;
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
  GALGAS_uint index_712_ (0) ;
  if (in_VALUE_5F_LIST.isValid ()) {
    cEnumerator_decoratedFunctionValueList enumerator_712 (in_VALUE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_712.hasCurrentObject ()) {
      result << "\n"
        "  " ;
      result << enumerator_712.current_mResultName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
      result << " /* " ;
      result << enumerator_712.current_mOperandName (HERE).readProperty_string ().stringValue () ;
      result << " */" ;
      if (enumerator_712.hasNextObject ()) {
        result << "," ;
      }
      index_712_.increment () ;
      enumerator_712.gotoNextObject () ;
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
  cEnumerator_unifiedScalarTypeMap enumerator_1805 (constinArgument_inUnifiedScalarTypeMap, kENUMERATION_UP) ;
  while (enumerator_1805.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_1805.current_mGenerate (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_1878 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_enumerationDeclaration (inCompiler, enumerator_1805.current_lkey (HERE).readProperty_string (), enumerator_1805.current_mEnumConstantList (HERE) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 50))) ;
        GALGAS_string var_fileName_2022 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 54)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 54)).add_operation (enumerator_1805.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 54)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 54)) ;
        GALGAS_bool joker_2151 ; // Joker input parameter
        var_s_1878.method_writeToFileWhenDifferentContents (var_fileName_2022, joker_2151, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 55)) ;
      }
    }
    enumerator_1805.gotoNextObject () ;
  }
  cEnumerator_functionMap enumerator_2262 (constinArgument_inFunctionMap, kENUMERATION_UP) ;
  while (enumerator_2262.hasCurrentObject ()) {
    GALGAS_string var_s_2301 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_functionDeclaration (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 61)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 61)), enumerator_2262.current_lkey (HERE).readProperty_string (), enumerator_2262.current_mResultTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 63)), enumerator_2262.current_mDecoratedFunctionValueList (HERE).getter_length (SOURCE_FILE ("cCodeGeneration.galgas", 64)) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 60))) ;
    GALGAS_string var_fileName_2555 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 66)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 66)).add_operation (enumerator_2262.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 66)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 66)) ;
    GALGAS_bool joker_2681 ; // Joker input parameter
    var_s_2301.method_writeToFileWhenDifferentContents (var_fileName_2555, joker_2681, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 67)) ;
    var_s_2301 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_functionImplementation (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 69)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 69)), enumerator_2262.current_lkey (HERE).readProperty_string (), enumerator_2262.current_mResultTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 71)), enumerator_2262.current_mDecoratedFunctionValueList (HERE) COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 68))) ;
    var_fileName_2555 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 74)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 74)).add_operation (enumerator_2262.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 74)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 74)) ;
    GALGAS_bool joker_3052 ; // Joker input parameter
    var_s_2301.method_writeToFileWhenDifferentContents (var_fileName_2555, joker_3052, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 75)) ;
    enumerator_2262.gotoNextObject () ;
  }
  cEnumerator_machineMap enumerator_3139 (constinArgument_inClassTypeMap, kENUMERATION_UP) ;
  while (enumerator_3139.hasCurrentObject ()) {
    GALGAS_string var_h_3159 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_machineDeclaration (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 80)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 80)), constinArgument_inUnifiedScalarTypeMap, enumerator_3139.current (HERE).readProperty_lkey ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 82)), enumerator_3139.current (HERE).readProperty_mAttributeList (), enumerator_3139.current (HERE).readProperty_mEventMap () COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 79))) ;
    GALGAS_string var_fileName_3443 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 86)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 86)).add_operation (enumerator_3139.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 86)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 86)) ;
    GALGAS_bool joker_3571 ; // Joker input parameter
    var_h_3159.method_writeToFileWhenDifferentContents (var_fileName_3443, joker_3571, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 87)) ;
    GALGAS_string var_cpp_3592 = GALGAS_string (filewrapperTemplate_CCodeGenerationTemplates_machineImplementation (inCompiler, constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 89)).getter_stringByDeletingPathExtension (SOURCE_FILE ("cCodeGeneration.galgas", 89)), constinArgument_inUnifiedScalarTypeMap, enumerator_3139.current (HERE).readProperty_lkey ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 91)), enumerator_3139.current (HERE).readProperty_mAttributeList (), enumerator_3139.current (HERE).readProperty_mEventMap (), constinArgument_inFunctionMap COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 88))) ;
    var_fileName_3443 = constinArgument_inSourceFileName.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("cCodeGeneration.galgas", 96)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 96)).add_operation (enumerator_3139.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 96)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 96)) ;
    GALGAS_bool joker_4015 ; // Joker input parameter
    var_cpp_3592.method_writeToFileWhenDifferentContents (var_fileName_3443, joker_4015, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 97)) ;
    enumerator_3139.gotoNextObject () ;
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
  const GALGAS_assignmentDecoratedInstruction temp_0 = object ;
  result_outResult = constinArgument_inIndentationString.add_operation (temp_0.readProperty_mTargetVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 123)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 123)) ;
  const GALGAS_assignmentDecoratedInstruction temp_1 = object ;
  const GALGAS_assignmentDecoratedInstruction temp_2 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_generateSourceExpressionCCode ((const cPtr_decoratedAssignmentSourceExpression *) temp_1.readProperty_mSourceExpression ().ptr (), temp_2.readProperty_mTargetTypeProxy (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 124)) ;
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
  const GALGAS_ifDecoratedInstruction temp_0 = object ;
  result_outResult = constinArgument_inIndentationString.add_operation (GALGAS_string ("if "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 141)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) temp_0.readProperty_mTestExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 141)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 141)) ;
  const GALGAS_ifDecoratedInstruction temp_1 = object ;
  result_outResult.plusAssign_operation(extensionGetter_generateCCode (temp_1.readProperty_mThenInstructionList (), constinArgument_inIndentationString.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 142)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ifDecoratedInstruction temp_3 = object ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("cCodeGeneration.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult.plusAssign_operation(constinArgument_inIndentationString.add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 144)) ;
      const GALGAS_ifDecoratedInstruction temp_4 = object ;
      result_outResult.plusAssign_operation(extensionGetter_generateCCode (temp_4.readProperty_mElseInstructionList (), constinArgument_inIndentationString.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 145)) ;
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
//Overriding extension getter '@attributeInDecoratedAssignmentSourceExpression generateSourceExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_attributeInDecoratedAssignmentSourceExpression_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                                                                   const GALGAS_unifiedScalarTypeMap_2D_entry /* constinArgument_inTargetTypeProxy */,
                                                                                                                   C_Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_attributeInDecoratedAssignmentSourceExpression * object = (const cPtr_attributeInDecoratedAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
  const GALGAS_attributeInDecoratedAssignmentSourceExpression temp_0 = object ;
  result_outResult = temp_0.readProperty_mVarName ().readProperty_string () ;
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
                                                                                                             const GALGAS_unifiedScalarTypeMap_2D_entry /* constinArgument_inTargetTypeProxy */,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_cstInDecoratedAssignmentSourceExpression * object = (const cPtr_cstInDecoratedAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_cstInDecoratedAssignmentSourceExpression) ;
  const GALGAS_cstInDecoratedAssignmentSourceExpression temp_0 = object ;
  result_outResult = temp_0.readProperty_mEnumCstName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 187)) ;
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
                                                                                                                  const GALGAS_unifiedScalarTypeMap_2D_entry /* constinArgument_inTargetTypeProxy */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_functionInDecoratedAssignmentSourceExpression * object = (const cPtr_functionInDecoratedAssignmentSourceExpression *) inObject ;
  macroValidSharedObject (object, cPtr_functionInDecoratedAssignmentSourceExpression) ;
  const GALGAS_functionInDecoratedAssignmentSourceExpression temp_0 = object ;
  const GALGAS_functionInDecoratedAssignmentSourceExpression temp_1 = object ;
  result_outResult = GALGAS_string ("function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 195)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 195)).add_operation (temp_1.readProperty_mOperandName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 195)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 195)) ;
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
  const GALGAS_logicalAndDecoratedExpression temp_0 = object ;
  const GALGAS_logicalAndDecoratedExpression temp_1 = object ;
  result_outResult = GALGAS_string ("(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) temp_0.readProperty_mLeft ().ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) temp_1.readProperty_mRight ().ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 209)) ;
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
  const GALGAS_logicalOrDecoratedExpression temp_0 = object ;
  const GALGAS_logicalOrDecoratedExpression temp_1 = object ;
  result_outResult = GALGAS_string ("(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) temp_0.readProperty_mLeft ().ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) temp_1.readProperty_mRight ().ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 216)) ;
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
  const GALGAS_implicationDecoratedExpression temp_0 = object ;
  const GALGAS_implicationDecoratedExpression temp_1 = object ;
  result_outResult = GALGAS_string ("( !(").add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) temp_0.readProperty_mLeft ().ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)).add_operation (GALGAS_string (") || "), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)).add_operation (callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedExpression *) temp_1.readProperty_mRight ().ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 222)) ;
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
  const GALGAS_decoratedComparisonInExpression temp_0 = object ;
  result_outResult = GALGAS_string ("(").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 229)) ;
  const GALGAS_decoratedComparisonInExpression temp_1 = object ;
  switch (temp_1.readProperty_mOperator ().enumValue ()) {
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
  const GALGAS_decoratedComparisonInExpression temp_2 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_generateExpressionCCode ((const cPtr_decoratedComparisonRightOperand *) temp_2.readProperty_mRightOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 234)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 234)) ;
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
  const GALGAS_decoratedAttributeAsComparisonRightOperand temp_0 = object ;
  result_outResult = temp_0.readProperty_mAttributeName ().readProperty_string () ;
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
  const GALGAS_decoratedConstantAsComparisonRightOperand temp_0 = object ;
  result_outResult = temp_0.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("cCodeGeneration.galgas", 255)) ;
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
  GALGAS_ast var_ast_215 ;
  var_ast_215.drop () ;
  cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_215  COMMA_SOURCE_FILE ("main.galgas", 8)) ;
  GALGAS_unifiedScalarTypeMap var_unifiedScalarTypeMap_346 ;
  GALGAS_functionMap var_functionMap_380 ;
  GALGAS_machineMap var_machineMap_412 ;
  {
  routine_performStaticAnalysis (var_ast_215, var_unifiedScalarTypeMap_346, var_functionMap_380, var_machineMap_412, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 10)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("main.galgas", 17)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_generationString_576 ;
      {
      routine_performDynamicAnalysis (constinArgument_inSourceFile.readProperty_string (), var_ast_215, var_unifiedScalarTypeMap_346, var_functionMap_380, var_machineMap_412, var_generationString_576, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 18)) ;
      }
      GALGAS_bool joker_664 ; // Joker input parameter
      var_generationString_576.method_writeToFileWhenDifferentContents (constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".txt"), inCompiler COMMA_SOURCE_FILE ("main.galgas", 19)), joker_664, inCompiler COMMA_SOURCE_FILE ("main.galgas", 19)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("main.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_omnibus_5F_options_generateCCode.readProperty_value ()) COMMA_SOURCE_FILE ("main.galgas", 22)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_performCCodeGeneration (constinArgument_inSourceFile.readProperty_string (), var_unifiedScalarTypeMap_346, var_functionMap_380, var_machineMap_412, inCompiler  COMMA_SOURCE_FILE ("main.galgas", 23)) ;
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

