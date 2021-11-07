#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
// @logicalOrDecoratedExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_logicalOrDecoratedExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logicalOrDecoratedExpression * p = (const cPtr_logicalOrDecoratedExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logicalOrDecoratedExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_logicalOrDecoratedExpression::objectCompare (const GALGAS_logicalOrDecoratedExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression::GALGAS_logicalOrDecoratedExpression (void) :
GALGAS_decoratedExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression::GALGAS_logicalOrDecoratedExpression (const cPtr_logicalOrDecoratedExpression * inSourcePtr) :
GALGAS_decoratedExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalOrDecoratedExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression GALGAS_logicalOrDecoratedExpression::constructor_new (const GALGAS_decoratedExpression & inAttribute_mLeft,
                                                                                          const GALGAS_decoratedExpression & inAttribute_mRight
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_logicalOrDecoratedExpression result ;
  if (inAttribute_mLeft.isValid () && inAttribute_mRight.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logicalOrDecoratedExpression (inAttribute_mLeft, inAttribute_mRight COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logicalOrDecoratedExpression::setter_setMLeft (GALGAS_decoratedExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_logicalOrDecoratedExpression * p = (cPtr_logicalOrDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalOrDecoratedExpression) ;
    p->mProperty_mLeft = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logicalOrDecoratedExpression::setter_setMRight (GALGAS_decoratedExpression inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_logicalOrDecoratedExpression * p = (cPtr_logicalOrDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalOrDecoratedExpression) ;
    p->mProperty_mRight = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedExpression GALGAS_logicalOrDecoratedExpression::readProperty_mLeft (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedExpression () ;
  }else{
    cPtr_logicalOrDecoratedExpression * p = (cPtr_logicalOrDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalOrDecoratedExpression) ;
    return p->mProperty_mLeft ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedExpression GALGAS_logicalOrDecoratedExpression::readProperty_mRight (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedExpression () ;
  }else{
    cPtr_logicalOrDecoratedExpression * p = (cPtr_logicalOrDecoratedExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalOrDecoratedExpression) ;
    return p->mProperty_mRight ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @logicalOrDecoratedExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_logicalOrDecoratedExpression::cPtr_logicalOrDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
                                                                      const GALGAS_decoratedExpression & in_mRight
                                                                      COMMA_LOCATION_ARGS) :
cPtr_decoratedExpression (THERE),
mProperty_mLeft (in_mLeft),
mProperty_mRight (in_mRight) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_logicalOrDecoratedExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalOrDecoratedExpression ;
}

void cPtr_logicalOrDecoratedExpression::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@logicalOrDecoratedExpression:" ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logicalOrDecoratedExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logicalOrDecoratedExpression (mProperty_mLeft, mProperty_mRight COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@logicalOrDecoratedExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logicalOrDecoratedExpression ("logicalOrDecoratedExpression",
                                                     & kTypeDescriptor_GALGAS_decoratedExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logicalOrDecoratedExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalOrDecoratedExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logicalOrDecoratedExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalOrDecoratedExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression GALGAS_logicalOrDecoratedExpression::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logicalOrDecoratedExpression result ;
  const GALGAS_logicalOrDecoratedExpression * p = (const GALGAS_logicalOrDecoratedExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logicalOrDecoratedExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalOrDecoratedExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_logicalOrDecoratedExpression_2D_weak::objectCompare (const GALGAS_logicalOrDecoratedExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression_2D_weak::GALGAS_logicalOrDecoratedExpression_2D_weak (void) :
GALGAS_decoratedExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression_2D_weak & GALGAS_logicalOrDecoratedExpression_2D_weak::operator = (const GALGAS_logicalOrDecoratedExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression_2D_weak::GALGAS_logicalOrDecoratedExpression_2D_weak (const GALGAS_logicalOrDecoratedExpression & inSource) :
GALGAS_decoratedExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression_2D_weak GALGAS_logicalOrDecoratedExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_logicalOrDecoratedExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression GALGAS_logicalOrDecoratedExpression_2D_weak::bang_logicalOrDecoratedExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_logicalOrDecoratedExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logicalOrDecoratedExpression) ;
      result = GALGAS_logicalOrDecoratedExpression ((cPtr_logicalOrDecoratedExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@logicalOrDecoratedExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logicalOrDecoratedExpression_2D_weak ("logicalOrDecoratedExpression-weak",
                                                             & kTypeDescriptor_GALGAS_decoratedExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logicalOrDecoratedExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalOrDecoratedExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logicalOrDecoratedExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalOrDecoratedExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalOrDecoratedExpression_2D_weak GALGAS_logicalOrDecoratedExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logicalOrDecoratedExpression_2D_weak result ;
  const GALGAS_logicalOrDecoratedExpression_2D_weak * p = (const GALGAS_logicalOrDecoratedExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logicalOrDecoratedExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalOrDecoratedExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedComparisonRightOperand reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_decoratedComparisonRightOperand::objectCompare (const GALGAS_decoratedComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand::GALGAS_decoratedComparisonRightOperand (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand::GALGAS_decoratedComparisonRightOperand (const cPtr_decoratedComparisonRightOperand * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedComparisonRightOperand) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedComparisonRightOperand class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedComparisonRightOperand::cPtr_decoratedComparisonRightOperand (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedComparisonRightOperand type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedComparisonRightOperand ("decoratedComparisonRightOperand",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedComparisonRightOperand (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand GALGAS_decoratedComparisonRightOperand::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedComparisonRightOperand result ;
  const GALGAS_decoratedComparisonRightOperand * p = (const GALGAS_decoratedComparisonRightOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedComparisonRightOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedComparisonRightOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expression analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_expression_analyzeExpression> gExtensionMethodTable_expression_analyzeExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeExpression (const int32_t inClassIndex,
                                             extensionMethodSignature_expression_analyzeExpression inMethod) {
  gExtensionMethodTable_expression_analyzeExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_expression_analyzeExpression (void) {
  gExtensionMethodTable_expression_analyzeExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expression_analyzeExpression (NULL,
                                                         freeExtensionMethod_expression_analyzeExpression) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (const cPtr_expression * inObject,
                                            const GALGAS_analyzeContext constin_inAnalyzeContext,
                                            const GALGAS_bool constin_inEnsureClause,
                                            GALGAS_decoratedExpression & out_outDecoratedExpression,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outDecoratedExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expression_analyzeExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_expression_analyzeExpression.count ()) {
      f = gExtensionMethodTable_expression_analyzeExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_expression_analyzeExpression.count ()) {
          f = gExtensionMethodTable_expression_analyzeExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_expression_analyzeExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalyzeContext, constin_inEnsureClause, out_outDecoratedExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@expressionList analyzeExpressionList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeExpressionList (const GALGAS_expressionList inObject,
                                            const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                            const GALGAS_bool constinArgument_inEnsureClause,
                                            GALGAS_decoratedExpressionList & outArgument_outDecoratedExpressionList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDecoratedExpressionList.drop () ; // Release 'out' argument
  outArgument_outDecoratedExpressionList = GALGAS_decoratedExpressionList::constructor_emptyList (SOURCE_FILE ("expressionStaticAnalysis.galgas", 49)) ;
  const GALGAS_expressionList temp_0 = inObject ;
  cEnumerator_expressionList enumerator_1672 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1672.hasCurrentObject ()) {
    GALGAS_decoratedExpression var_decoratedExpression_1812 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expression *) enumerator_1672.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inAnalyzeContext, constinArgument_inEnsureClause, var_decoratedExpression_1812, inCompiler COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 51)) ;
    outArgument_outDecoratedExpressionList.addAssign_operation (enumerator_1672.current (HERE).readProperty_mLabel (), var_decoratedExpression_1812  COMMA_SOURCE_FILE ("expressionStaticAnalysis.galgas", 56)) ;
    enumerator_1672.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedComparisonRightOperand_2D_weak::objectCompare (const GALGAS_decoratedComparisonRightOperand_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand_2D_weak::GALGAS_decoratedComparisonRightOperand_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand_2D_weak & GALGAS_decoratedComparisonRightOperand_2D_weak::operator = (const GALGAS_decoratedComparisonRightOperand & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand_2D_weak::GALGAS_decoratedComparisonRightOperand_2D_weak (const GALGAS_decoratedComparisonRightOperand & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand_2D_weak GALGAS_decoratedComparisonRightOperand_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedComparisonRightOperand_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand GALGAS_decoratedComparisonRightOperand_2D_weak::bang_decoratedComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedComparisonRightOperand result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedComparisonRightOperand) ;
      result = GALGAS_decoratedComparisonRightOperand ((cPtr_decoratedComparisonRightOperand *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedComparisonRightOperand-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedComparisonRightOperand_2D_weak ("decoratedComparisonRightOperand-weak",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedComparisonRightOperand_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedComparisonRightOperand_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedComparisonRightOperand_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand_2D_weak GALGAS_decoratedComparisonRightOperand_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedComparisonRightOperand_2D_weak result ;
  const GALGAS_decoratedComparisonRightOperand_2D_weak * p = (const GALGAS_decoratedComparisonRightOperand_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedComparisonRightOperand_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedComparisonRightOperand-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@comparisonRightOperand analyzeComparisonRightOperand'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand> gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeComparisonRightOperand (const int32_t inClassIndex,
                                                         extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand inMethod) {
  gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_comparisonRightOperand_analyzeComparisonRightOperand (void) {
  gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_comparisonRightOperand_analyzeComparisonRightOperand (NULL,
                                                                                 freeExtensionMethod_comparisonRightOperand_analyzeComparisonRightOperand) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeComparisonRightOperand (const cPtr_comparisonRightOperand * inObject,
                                                        const GALGAS_analyzeContext constin_inAnalyzeContext,
                                                        const GALGAS_bool constin_inEnsureClause,
                                                        GALGAS_decoratedComparisonRightOperand & out_outDecoratedExpression,
                                                        const GALGAS_unifiedScalarTypeMap_2D_entry constin_inVarTypeProxy,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outDecoratedExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_comparisonRightOperand) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand f = NULL ;
    if (classIndex < gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.count ()) {
      f = gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.count ()) {
          f = gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_comparisonRightOperand_analyzeComparisonRightOperand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalyzeContext, constin_inEnsureClause, out_outDecoratedExpression, constin_inVarTypeProxy, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedAssignmentSourceExpression reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_decoratedAssignmentSourceExpression::objectCompare (const GALGAS_decoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression::GALGAS_decoratedAssignmentSourceExpression (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression::GALGAS_decoratedAssignmentSourceExpression (const cPtr_decoratedAssignmentSourceExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedAssignmentSourceExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedAssignmentSourceExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedAssignmentSourceExpression::cPtr_decoratedAssignmentSourceExpression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedAssignmentSourceExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression ("decoratedAssignmentSourceExpression",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression GALGAS_decoratedAssignmentSourceExpression::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAssignmentSourceExpression result ;
  const GALGAS_decoratedAssignmentSourceExpression * p = (const GALGAS_decoratedAssignmentSourceExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedAssignmentSourceExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedAssignmentSourceExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @ifDecoratedInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ifDecoratedInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifDecoratedInstruction * p = (const cPtr_ifDecoratedInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mIFinstructionLocation.objectCompare (p->mProperty_mIFinstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTestExpression.objectCompare (p->mProperty_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfTestExpression.objectCompare (p->mProperty_mEndOfTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenInstructionList.objectCompare (p->mProperty_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ifDecoratedInstruction::objectCompare (const GALGAS_ifDecoratedInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction::GALGAS_ifDecoratedInstruction (void) :
GALGAS_decoratedInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction::GALGAS_ifDecoratedInstruction (const cPtr_ifDecoratedInstruction * inSourcePtr) :
GALGAS_decoratedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifDecoratedInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction GALGAS_ifDecoratedInstruction::constructor_new (const GALGAS_location & inAttribute_mIFinstructionLocation,
                                                                              const GALGAS_decoratedExpression & inAttribute_mTestExpression,
                                                                              const GALGAS_location & inAttribute_mEndOfTestExpression,
                                                                              const GALGAS_decoratedInstructionList & inAttribute_mThenInstructionList,
                                                                              const GALGAS_decoratedInstructionList & inAttribute_mElseInstructionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifDecoratedInstruction result ;
  if (inAttribute_mIFinstructionLocation.isValid () && inAttribute_mTestExpression.isValid () && inAttribute_mEndOfTestExpression.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifDecoratedInstruction (inAttribute_mIFinstructionLocation, inAttribute_mTestExpression, inAttribute_mEndOfTestExpression, inAttribute_mThenInstructionList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifDecoratedInstruction::setter_setMIFinstructionLocation (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    p->mProperty_mIFinstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifDecoratedInstruction::setter_setMTestExpression (GALGAS_decoratedExpression inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    p->mProperty_mTestExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifDecoratedInstruction::setter_setMEndOfTestExpression (GALGAS_location inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    p->mProperty_mEndOfTestExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifDecoratedInstruction::setter_setMThenInstructionList (GALGAS_decoratedInstructionList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifDecoratedInstruction::setter_setMElseInstructionList (GALGAS_decoratedInstructionList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifDecoratedInstruction::readProperty_mIFinstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    return p->mProperty_mIFinstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedExpression GALGAS_ifDecoratedInstruction::readProperty_mTestExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedExpression () ;
  }else{
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    return p->mProperty_mTestExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifDecoratedInstruction::readProperty_mEndOfTestExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    return p->mProperty_mEndOfTestExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedInstructionList GALGAS_ifDecoratedInstruction::readProperty_mThenInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedInstructionList () ;
  }else{
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedInstructionList GALGAS_ifDecoratedInstruction::readProperty_mElseInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedInstructionList () ;
  }else{
    cPtr_ifDecoratedInstruction * p = (cPtr_ifDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifDecoratedInstruction) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ifDecoratedInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ifDecoratedInstruction::cPtr_ifDecoratedInstruction (const GALGAS_location & in_mIFinstructionLocation,
                                                          const GALGAS_decoratedExpression & in_mTestExpression,
                                                          const GALGAS_location & in_mEndOfTestExpression,
                                                          const GALGAS_decoratedInstructionList & in_mThenInstructionList,
                                                          const GALGAS_decoratedInstructionList & in_mElseInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedInstruction (THERE),
mProperty_mIFinstructionLocation (in_mIFinstructionLocation),
mProperty_mTestExpression (in_mTestExpression),
mProperty_mEndOfTestExpression (in_mEndOfTestExpression),
mProperty_mThenInstructionList (in_mThenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifDecoratedInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifDecoratedInstruction ;
}

void cPtr_ifDecoratedInstruction::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@ifDecoratedInstruction:" ;
  mProperty_mIFinstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifDecoratedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifDecoratedInstruction (mProperty_mIFinstructionLocation, mProperty_mTestExpression, mProperty_mEndOfTestExpression, mProperty_mThenInstructionList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ifDecoratedInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifDecoratedInstruction ("ifDecoratedInstruction",
                                               & kTypeDescriptor_GALGAS_decoratedInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifDecoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifDecoratedInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifDecoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifDecoratedInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction GALGAS_ifDecoratedInstruction::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ifDecoratedInstruction result ;
  const GALGAS_ifDecoratedInstruction * p = (const GALGAS_ifDecoratedInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifDecoratedInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifDecoratedInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ifDecoratedInstruction_2D_weak::objectCompare (const GALGAS_ifDecoratedInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction_2D_weak::GALGAS_ifDecoratedInstruction_2D_weak (void) :
GALGAS_decoratedInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction_2D_weak & GALGAS_ifDecoratedInstruction_2D_weak::operator = (const GALGAS_ifDecoratedInstruction & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction_2D_weak::GALGAS_ifDecoratedInstruction_2D_weak (const GALGAS_ifDecoratedInstruction & inSource) :
GALGAS_decoratedInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction_2D_weak GALGAS_ifDecoratedInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ifDecoratedInstruction_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction GALGAS_ifDecoratedInstruction_2D_weak::bang_ifDecoratedInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifDecoratedInstruction result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifDecoratedInstruction) ;
      result = GALGAS_ifDecoratedInstruction ((cPtr_ifDecoratedInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ifDecoratedInstruction-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifDecoratedInstruction_2D_weak ("ifDecoratedInstruction-weak",
                                                       & kTypeDescriptor_GALGAS_decoratedInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifDecoratedInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifDecoratedInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifDecoratedInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifDecoratedInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifDecoratedInstruction_2D_weak GALGAS_ifDecoratedInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ifDecoratedInstruction_2D_weak result ;
  const GALGAS_ifDecoratedInstruction_2D_weak * p = (const GALGAS_ifDecoratedInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifDecoratedInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifDecoratedInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @assertDecoratedInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assertDecoratedInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertDecoratedInstruction * p = (const cPtr_assertDecoratedInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertDecoratedInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assertDecoratedInstruction::objectCompare (const GALGAS_assertDecoratedInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction::GALGAS_assertDecoratedInstruction (void) :
GALGAS_decoratedInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction::GALGAS_assertDecoratedInstruction (const cPtr_assertDecoratedInstruction * inSourcePtr) :
GALGAS_decoratedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertDecoratedInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction GALGAS_assertDecoratedInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                      const GALGAS_decoratedExpression & inAttribute_mExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertDecoratedInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertDecoratedInstruction (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assertDecoratedInstruction::setter_setMInstructionLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assertDecoratedInstruction * p = (cPtr_assertDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertDecoratedInstruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assertDecoratedInstruction::setter_setMExpression (GALGAS_decoratedExpression inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assertDecoratedInstruction * p = (cPtr_assertDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertDecoratedInstruction) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_assertDecoratedInstruction::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_assertDecoratedInstruction * p = (cPtr_assertDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertDecoratedInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedExpression GALGAS_assertDecoratedInstruction::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedExpression () ;
  }else{
    cPtr_assertDecoratedInstruction * p = (cPtr_assertDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertDecoratedInstruction) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @assertDecoratedInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_assertDecoratedInstruction::cPtr_assertDecoratedInstruction (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_decoratedExpression & in_mExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_decoratedInstruction (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assertDecoratedInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertDecoratedInstruction ;
}

void cPtr_assertDecoratedInstruction::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@assertDecoratedInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assertDecoratedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertDecoratedInstruction (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@assertDecoratedInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertDecoratedInstruction ("assertDecoratedInstruction",
                                                   & kTypeDescriptor_GALGAS_decoratedInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertDecoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertDecoratedInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertDecoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertDecoratedInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction GALGAS_assertDecoratedInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assertDecoratedInstruction result ;
  const GALGAS_assertDecoratedInstruction * p = (const GALGAS_assertDecoratedInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertDecoratedInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertDecoratedInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assertDecoratedInstruction_2D_weak::objectCompare (const GALGAS_assertDecoratedInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction_2D_weak::GALGAS_assertDecoratedInstruction_2D_weak (void) :
GALGAS_decoratedInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction_2D_weak & GALGAS_assertDecoratedInstruction_2D_weak::operator = (const GALGAS_assertDecoratedInstruction & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction_2D_weak::GALGAS_assertDecoratedInstruction_2D_weak (const GALGAS_assertDecoratedInstruction & inSource) :
GALGAS_decoratedInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction_2D_weak GALGAS_assertDecoratedInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_assertDecoratedInstruction_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction GALGAS_assertDecoratedInstruction_2D_weak::bang_assertDecoratedInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assertDecoratedInstruction result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertDecoratedInstruction) ;
      result = GALGAS_assertDecoratedInstruction ((cPtr_assertDecoratedInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@assertDecoratedInstruction-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertDecoratedInstruction_2D_weak ("assertDecoratedInstruction-weak",
                                                           & kTypeDescriptor_GALGAS_decoratedInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assertDecoratedInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertDecoratedInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assertDecoratedInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertDecoratedInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assertDecoratedInstruction_2D_weak GALGAS_assertDecoratedInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assertDecoratedInstruction_2D_weak result ;
  const GALGAS_assertDecoratedInstruction_2D_weak * p = (const GALGAS_assertDecoratedInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertDecoratedInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertDecoratedInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionList analyzeInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeInstructionList (const GALGAS_instructionList inObject,
                                             const GALGAS_analyzeContext constinArgument_inAnalyzeContext,
                                             GALGAS_decoratedInstructionList & outArgument_outDecoratedInstructionList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDecoratedInstructionList.drop () ; // Release 'out' argument
  outArgument_outDecoratedInstructionList = GALGAS_decoratedInstructionList::constructor_emptyList (SOURCE_FILE ("instructionStaticAnalysis.galgas", 46)) ;
  const GALGAS_instructionList temp_0 = inObject ;
  cEnumerator_instructionList enumerator_1813 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1813.hasCurrentObject ()) {
    GALGAS_decoratedInstruction var_decoratedInstruction_1933 ;
    callExtensionMethod_analyzeInstruction ((const cPtr_instruction *) enumerator_1813.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inAnalyzeContext, var_decoratedInstruction_1933, inCompiler COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 48)) ;
    outArgument_outDecoratedInstructionList.addAssign_operation (var_decoratedInstruction_1933  COMMA_SOURCE_FILE ("instructionStaticAnalysis.galgas", 52)) ;
    enumerator_1813.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedAssignmentSourceExpression_2D_weak::objectCompare (const GALGAS_decoratedAssignmentSourceExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression_2D_weak::GALGAS_decoratedAssignmentSourceExpression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression_2D_weak & GALGAS_decoratedAssignmentSourceExpression_2D_weak::operator = (const GALGAS_decoratedAssignmentSourceExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression_2D_weak::GALGAS_decoratedAssignmentSourceExpression_2D_weak (const GALGAS_decoratedAssignmentSourceExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression_2D_weak GALGAS_decoratedAssignmentSourceExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedAssignmentSourceExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression GALGAS_decoratedAssignmentSourceExpression_2D_weak::bang_decoratedAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedAssignmentSourceExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedAssignmentSourceExpression) ;
      result = GALGAS_decoratedAssignmentSourceExpression ((cPtr_decoratedAssignmentSourceExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedAssignmentSourceExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression_2D_weak ("decoratedAssignmentSourceExpression-weak",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedAssignmentSourceExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedAssignmentSourceExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedAssignmentSourceExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression_2D_weak GALGAS_decoratedAssignmentSourceExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAssignmentSourceExpression_2D_weak result ;
  const GALGAS_decoratedAssignmentSourceExpression_2D_weak * p = (const GALGAS_decoratedAssignmentSourceExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedAssignmentSourceExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedAssignmentSourceExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instruction analyzeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_instruction_analyzeInstruction> gExtensionMethodTable_instruction_analyzeInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeInstruction (const int32_t inClassIndex,
                                              extensionMethodSignature_instruction_analyzeInstruction inMethod) {
  gExtensionMethodTable_instruction_analyzeInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_instruction_analyzeInstruction (void) {
  gExtensionMethodTable_instruction_analyzeInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_instruction_analyzeInstruction (NULL,
                                                           freeExtensionMethod_instruction_analyzeInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@assignmentSourceExpression analyzeAssignmentSourceExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression> gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeAssignmentSourceExpression (const int32_t inClassIndex,
                                                             extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression inMethod) {
  gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_assignmentSourceExpression_analyzeAssignmentSourceExpression (void) {
  gExtensionMethodTable_assignmentSourceExpression_analyzeAssignmentSourceExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentSourceExpression_analyzeAssignmentSourceExpression (NULL,
                                                                                         freeExtensionMethod_assignmentSourceExpression_analyzeAssignmentSourceExpression) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeAssignmentSourceExpression (const cPtr_assignmentSourceExpression * inObject,
                                                            const GALGAS_analyzeContext constin_inAnalyzeContext,
                                                            const GALGAS_unifiedScalarTypeMap_2D_entry constin_inTargetTypeProxy,
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
  GALGAS_lstringlist var_cstList_1249 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 55)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_1307 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 57)) ;
    var_cstList_1249.addAssign_operation (var_constantName_1307  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 58)) ;
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
  ioArgument_ioAST.mProperty_mEnumTypeList.addAssign_operation (var_enumName_1216, var_cstList_1249, GALGAS_bool (true)  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 63)) ;
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
  GALGAS_lstring var_functionName_1582 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 71)) ;
  GALGAS_lstring var_operandEnumName_1631 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2D__3E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 73)) ;
  GALGAS_lstring var_resultEnumName_1686 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 74)) ;
  GALGAS_functionValueList var_functionValueList_1710 = GALGAS_functionValueList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_operandConstantName_1799 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 78)) ;
    GALGAS_lstring var_resultConstantName_1857 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 79)) ;
    var_functionValueList_1710.addAssign_operation (var_operandConstantName_1799, var_resultConstantName_1857  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 80)) ;
    switch (select_omnibus_5F_syntax_4 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 83)) ;
  ioArgument_ioAST.mProperty_mFunctionDefinitionList.addAssign_operation (var_functionName_1582, var_operandEnumName_1631, var_resultEnumName_1686, var_functionValueList_1710  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 84)) ;
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
  GALGAS_lstring var_machineTypeName_2206 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 91)) ;
  GALGAS_expressionList var_invariantExpressionList_2241 = GALGAS_expressionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 93)) ;
  GALGAS_enumVarDeclarationList var_enumVarDeclarationList_2299 = GALGAS_enumVarDeclarationList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 94)) ;
  GALGAS_eventDeclarationList var_eventList_2348 = GALGAS_eventDeclarationList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_var COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 98)) ;
      GALGAS_lstring var_variableName_2450 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 99)) ;
      GALGAS_lstring var_enumTypeName_2498 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 100)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__2E_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 102)) ;
      GALGAS_lstring var_constantName_2558 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 103)) ;
      var_enumVarDeclarationList_2299.addAssign_operation (var_enumTypeName_2498, var_variableName_2450, var_constantName_2558  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 104)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_invariant COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 106)) ;
      GALGAS_lstring var_lbl_2694 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_literal_5F_string COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 108)) ;
      GALGAS_expression var_expression_2747 ;
      nt_expression_ (var_expression_2747, inCompiler) ;
      var_invariantExpressionList_2241.addAssign_operation (var_lbl_2694, var_expression_2747  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 110)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_event COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 112)) ;
      GALGAS_lstring var_eventName_2856 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 114)) ;
      GALGAS_eventArgumentList var_eventArgumentList_2890 = GALGAS_eventArgumentList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 115)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_omnibus_5F_syntax_6 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3F_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 118)) ;
          GALGAS_lstring var_argumentName_2995 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 119)) ;
          GALGAS_lstring var_enumTypeName_3045 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_enum_2D_type_2D_name COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 120)) ;
          var_eventArgumentList_2890.addAssign_operation (var_enumTypeName_3045, var_argumentName_2995  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 121)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 124)) ;
      GALGAS_instructionList var_eventInstructionList_3173 = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 125)) ;
      nt_instruction_5F_list_ (var_eventInstructionList_3173, inCompiler) ;
      GALGAS_expressionList var_ensureExpressionList_3253 = GALGAS_expressionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 127)) ;
      switch (select_omnibus_5F_syntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_ensures COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 130)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          GALGAS_lstring var_lbl_3368 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_literal_5F_string COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 132)) ;
          inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3A_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 133)) ;
          GALGAS_expression var_expression_3429 ;
          nt_expression_ (var_expression_3429, inCompiler) ;
          var_ensureExpressionList_3253.addAssign_operation (var_lbl_3368, var_expression_3429  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 135)) ;
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
      GALGAS_location var_endOfEnsureExpressionList_3552 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 140)) ;
      var_eventList_2348.addAssign_operation (var_eventName_2856, var_eventArgumentList_2890, var_eventInstructionList_3173, var_ensureExpressionList_3253, var_endOfEnsureExpressionList_3552  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 149)) ;
  ioArgument_ioAST.mProperty_mMachineList.addAssign_operation (var_machineTypeName_2206, var_enumVarDeclarationList_2299, var_invariantExpressionList_2241, var_eventList_2348  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 150)) ;
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
    GALGAS_expression var_expr_4075 ;
    nt_expression_31__ (var_expr_4075, inCompiler) ;
    outArgument_outExpression = GALGAS_implicationExpression::constructor_new (outArgument_outExpression, var_expr_4075  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 165)) ;
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
      GALGAS_expression var_expr_4372 ;
      nt_expression_32__ (var_expr_4372, inCompiler) ;
      outArgument_outExpression = GALGAS_logicalOrExpression::constructor_new (outArgument_outExpression, var_expr_4372  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 177)) ;
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
      GALGAS_expression var_expr_4667 ;
      nt_expression_34__ (var_expr_4667, inCompiler) ;
      outArgument_outExpression = GALGAS_logicalAndExpression::constructor_new (outArgument_outExpression, var_expr_4667  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 189)) ;
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
  GALGAS_lstring var_propertyName_5074 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 204)) ;
  GALGAS_enumComparisonOperator var_comparisonOperator_5123 ;
  switch (select_omnibus_5F_syntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 207)) ;
    var_comparisonOperator_5123 = GALGAS_enumComparisonOperator::constructor_equal (SOURCE_FILE ("omnibus_syntax.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__21__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 210)) ;
    var_comparisonOperator_5123 = GALGAS_enumComparisonOperator::constructor_notEqual (SOURCE_FILE ("omnibus_syntax.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_comparisonRightOperand var_comparisonRightOperand_5355 ;
  nt_comparison_5F_right_5F_operand_ (var_comparisonRightOperand_5355, inCompiler) ;
  outArgument_outExpression = GALGAS_comparisonInExpression::constructor_new (var_propertyName_5074, var_comparisonOperator_5123, var_comparisonRightOperand_5355  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 214)) ;
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
  GALGAS_lstring var_constantName_5685 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 225)) ;
  outArgument_outComparisonRightOperand = GALGAS_constantAsComparisonRightOperand::constructor_new (var_constantName_5685  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 226)) ;
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
  GALGAS_bool var_hasOldQualifier_5963 ;
  switch (select_omnibus_5F_syntax_13 (inCompiler)) {
  case 1: {
    var_hasOldQualifier_5963 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_old COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 237)) ;
    var_hasOldQualifier_5963 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyName_6090 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 240)) ;
  outArgument_outComparisonRightOperand = GALGAS_attributeAsComparisonRightOperand::constructor_new (var_propertyName_6090, var_hasOldQualifier_5963  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 241)) ;
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
      GALGAS_instruction var_instruction_6405 ;
      nt_instruction_ (var_instruction_6405, inCompiler) ;
      ioArgument_ioInstructionList.addAssign_operation (var_instruction_6405  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 252)) ;
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
  GALGAS_location var_instructionLocation_6621 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 260)) ;
  GALGAS_expression var_assertExpression_6687 ;
  nt_expression_ (var_assertExpression_6687, inCompiler) ;
  outArgument_outInstruction = GALGAS_assertInstruction::constructor_new (var_instructionLocation_6621, var_assertExpression_6687  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 262)) ;
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
  GALGAS_lstring var_variableName_6939 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__3D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 269)) ;
  GALGAS_assignmentSourceExpression var_expression_7022 ;
  nt_assignment_5F_source_5F_expression_ (var_expression_7022, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstruction::constructor_new (var_variableName_6939, var_expression_7022  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 271)) ;
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
  GALGAS_lstring var_propertyName_7289 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 277)) ;
  outArgument_outExp = GALGAS_varAsAssignmentSourceExpression::constructor_new (var_propertyName_7289  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 278)) ;
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
  GALGAS_lstring var_constantName_7552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 285)) ;
  outArgument_outExp = GALGAS_constantAsAssignmentSourceExpression::constructor_new (var_constantName_7552  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 286)) ;
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
  GALGAS_lstring var_functionName_7814 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 292)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__28_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 293)) ;
  GALGAS_lstring var_propertyName_7862 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken_identifier COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__29_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 295)) ;
  outArgument_outExp = GALGAS_functionAsAssignmentSourceExpression::constructor_new (var_functionName_7814, var_propertyName_7862  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 296)) ;
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
  GALGAS_location var_IFinstructionLocation_8936 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 336)) ;
  GALGAS_expression var_testExpression_9000 ;
  nt_expression_ (var_testExpression_9000, inCompiler) ;
  GALGAS_location var_endOfTestExpression_9036 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 339)) ;
  GALGAS_instructionList var_thenInstructionList_9102 = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 340)) ;
  nt_instruction_5F_list_ (var_thenInstructionList_9102, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 342)) ;
  GALGAS_instructionList var_elseInstructionList_9212 ;
  nt_else_5F_part_ (var_elseInstructionList_9212, inCompiler) ;
  outArgument_outInstruction = GALGAS_ifInstruction::constructor_new (var_IFinstructionLocation_8936, var_testExpression_9000, var_endOfTestExpression_9036, var_thenInstructionList_9102, var_elseInstructionList_9212  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 344)) ;
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
  GALGAS_location var_IFinstructionLocation_9940 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 374)) ;
  GALGAS_expression var_testExpression_10004 ;
  nt_expression_ (var_testExpression_10004, inCompiler) ;
  GALGAS_location var_endOfTestExpression_10040 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 376)) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7B_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 377)) ;
  GALGAS_instructionList var_thenInstructionList_10106 = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 378)) ;
  nt_instruction_5F_list_ (var_thenInstructionList_10106, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_lexicalAnalyzer::kToken__7D_ COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 380)) ;
  GALGAS_instructionList var_elseInstructionList_10216 ;
  nt_else_5F_part_ (var_elseInstructionList_10216, inCompiler) ;
  outArgument_outInstructionList = GALGAS_instructionList::constructor_emptyList (SOURCE_FILE ("omnibus_syntax.galgas", 382)) ;
  outArgument_outInstructionList.addAssign_operation (GALGAS_ifInstruction::constructor_new (var_IFinstructionLocation_9940, var_testExpression_10004, var_endOfTestExpression_10040, var_thenInstructionList_10106, var_elseInstructionList_10216  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 383))  COMMA_SOURCE_FILE ("omnibus_syntax.galgas", 383)) ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@machineVarListForDisplay' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_machineVarListForDisplay : public cCollectionElement {
  public: GALGAS_machineVarListForDisplay_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_machineVarListForDisplay (const GALGAS_string & in_mAttributeName,
                                                       const GALGAS_uint & in_mBDDStartIndex,
                                                       const GALGAS_uint & in_mBDDBitCount,
                                                       const GALGAS_lstringlist & in_mValueList,
                                                       const GALGAS_uint & in_mColumnLength
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_machineVarListForDisplay (const GALGAS_machineVarListForDisplay_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_machineVarListForDisplay::cCollectionElement_machineVarListForDisplay (const GALGAS_string & in_mAttributeName,
                                                                                          const GALGAS_uint & in_mBDDStartIndex,
                                                                                          const GALGAS_uint & in_mBDDBitCount,
                                                                                          const GALGAS_lstringlist & in_mValueList,
                                                                                          const GALGAS_uint & in_mColumnLength
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mBDDStartIndex, in_mBDDBitCount, in_mValueList, in_mColumnLength) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_machineVarListForDisplay::cCollectionElement_machineVarListForDisplay (const GALGAS_machineVarListForDisplay_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mBDDStartIndex, inElement.mProperty_mBDDBitCount, inElement.mProperty_mValueList, inElement.mProperty_mColumnLength) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_machineVarListForDisplay::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_machineVarListForDisplay::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_machineVarListForDisplay (mObject.mProperty_mAttributeName, mObject.mProperty_mBDDStartIndex, mObject.mProperty_mBDDBitCount, mObject.mProperty_mValueList, mObject.mProperty_mColumnLength COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_machineVarListForDisplay::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_machineVarListForDisplay * operand = (cCollectionElement_machineVarListForDisplay *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_machineVarListForDisplay) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay::GALGAS_machineVarListForDisplay (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay::GALGAS_machineVarListForDisplay (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarListForDisplay  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::addAssign_operation (const GALGAS_string & inOperand0,
                                                           const GALGAS_uint & inOperand1,
                                                           const GALGAS_uint & inOperand2,
                                                           const GALGAS_lstringlist & inOperand3,
                                                           const GALGAS_uint & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_machineVarListForDisplay (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::setter_append (GALGAS_machineVarListForDisplay_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_machineVarListForDisplay (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                            const GALGAS_uint inOperand1,
                                                            const GALGAS_uint inOperand2,
                                                            const GALGAS_lstringlist inOperand3,
                                                            const GALGAS_uint inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_machineVarListForDisplay (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                            GALGAS_uint & outOperand1,
                                                            GALGAS_uint & outOperand2,
                                                            GALGAS_lstringlist & outOperand3,
                                                            GALGAS_uint & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
        outOperand0 = p->mObject.mProperty_mAttributeName ;
        outOperand1 = p->mObject.mProperty_mBDDStartIndex ;
        outOperand2 = p->mObject.mProperty_mBDDBitCount ;
        outOperand3 = p->mObject.mProperty_mValueList ;
        outOperand4 = p->mObject.mProperty_mColumnLength ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay GALGAS_machineVarListForDisplay::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_machineVarListForDisplay result = GALGAS_machineVarListForDisplay::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::plusAssign_operation (const GALGAS_machineVarListForDisplay inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::setter_setMAttributeNameAtIndex (GALGAS_string inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::setter_setMBDDStartIndexAtIndex (GALGAS_uint inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBDDStartIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::setter_setMBDDBitCountAtIndex (GALGAS_uint inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBDDBitCount = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::setter_setMValueListAtIndex (GALGAS_lstringlist inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValueList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay::setter_setMColumnLengthAtIndex (GALGAS_uint inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_machineVarListForDisplay * p = (cCollectionElement_machineVarListForDisplay *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnLength = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_machineVarListForDisplay::cEnumerator_machineVarListForDisplay (const GALGAS_machineVarListForDisplay & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay_2D_element cEnumerator_machineVarListForDisplay::current (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_machineVarListForDisplay::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mBDDStartIndex (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mBDDStartIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mBDDBitCount (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mBDDBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_machineVarListForDisplay::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mValueList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_machineVarListForDisplay::current_mColumnLength (LOCATION_ARGS) const {
  const cCollectionElement_machineVarListForDisplay * p = (const cCollectionElement_machineVarListForDisplay *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_machineVarListForDisplay) ;
  return p->mObject.mProperty_mColumnLength ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@machineVarListForDisplay type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarListForDisplay ("machineVarListForDisplay",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_machineVarListForDisplay::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarListForDisplay ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_machineVarListForDisplay::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarListForDisplay (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@varList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_varList : public cCollectionElement {
  public: GALGAS_varList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_varList (const GALGAS_lstring & in_mVarName,
                                      const GALGAS_lstringlist & in_mValueList,
                                      const GALGAS_uint & in_mBDDStartBitIndex,
                                      const GALGAS_uint & in_mBDDBitCount,
                                      const GALGAS_uint & in_mInitialValueIndex
                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_varList (const GALGAS_varList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_lstring & in_mVarName,
                                                        const GALGAS_lstringlist & in_mValueList,
                                                        const GALGAS_uint & in_mBDDStartBitIndex,
                                                        const GALGAS_uint & in_mBDDBitCount,
                                                        const GALGAS_uint & in_mInitialValueIndex
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mValueList, in_mBDDStartBitIndex, in_mBDDBitCount, in_mInitialValueIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_varList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mVarName, inElement.mProperty_mValueList, inElement.mProperty_mBDDStartBitIndex, inElement.mProperty_mBDDBitCount, inElement.mProperty_mInitialValueIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_varList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_varList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_varList (mObject.mProperty_mVarName, mObject.mProperty_mValueList, mObject.mProperty_mBDDStartBitIndex, mObject.mProperty_mBDDBitCount, mObject.mProperty_mInitialValueIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_varList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_varList * operand = (cCollectionElement_varList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_varList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList::GALGAS_varList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList::GALGAS_varList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                          const GALGAS_lstringlist & inOperand1,
                                          const GALGAS_uint & inOperand2,
                                          const GALGAS_uint & inOperand3,
                                          const GALGAS_uint & inOperand4
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_append (GALGAS_varList_2D_element inElement,
                                    C_Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_varList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                           const GALGAS_lstringlist inOperand1,
                                           const GALGAS_uint inOperand2,
                                           const GALGAS_uint inOperand3,
                                           const GALGAS_uint inOperand4,
                                           const GALGAS_uint inInsertionIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
                                           GALGAS_uint & outOperand2,
                                           GALGAS_uint & outOperand3,
                                           GALGAS_uint & outOperand4,
                                           const GALGAS_uint inRemoveIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_varList) ;
        outOperand0 = p->mObject.mProperty_mVarName ;
        outOperand1 = p->mObject.mProperty_mValueList ;
        outOperand2 = p->mObject.mProperty_mBDDStartBitIndex ;
        outOperand3 = p->mObject.mProperty_mBDDBitCount ;
        outOperand4 = p->mObject.mProperty_mInitialValueIndex ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListWithRange (const GALGAS_range & inRange,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::plusAssign_operation (const GALGAS_varList inOperand,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMVarNameAtIndex (GALGAS_lstring inOperand,
                                                GALGAS_uint inIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mVarName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMValueListAtIndex (GALGAS_lstringlist inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValueList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMBDDStartBitIndexAtIndex (GALGAS_uint inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBDDStartBitIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMBDDBitCountAtIndex (GALGAS_uint inOperand,
                                                    GALGAS_uint inIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBDDBitCount = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMInitialValueIndexAtIndex (GALGAS_uint inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialValueIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_varList::cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element cEnumerator_varList::current (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_varList::current_mValueList (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mValueList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varList::current_mBDDStartBitIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBDDStartBitIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varList::current_mBDDBitCount (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBDDBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varList::current_mInitialValueIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mInitialValueIndex ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@varList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList ("varList",
                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@varList displayVarVarInfo'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay extensionGetter_displayVarVarInfo (const GALGAS_varList & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 39)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_1222 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1222.hasCurrentObject ()) {
    GALGAS_string var_columnName_1244 = GALGAS_string ("old ").add_operation (enumerator_1222.current (HERE).readProperty_mVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 41)) ;
    GALGAS_uint var_columnLength_1293 = var_columnName_1244.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 42)) ;
    cEnumerator_lstringlist enumerator_1341 (enumerator_1222.current (HERE).readProperty_mValueList (), kENUMERATION_UP) ;
    while (enumerator_1341.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_1374 = enumerator_1341.current (HERE).readProperty_mValue ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 44)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_1293.objectCompare (var_cstNameLength_1374)).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_columnLength_1293 = var_cstNameLength_1374 ;
        }
      }
      enumerator_1341.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (var_columnName_1244, enumerator_1222.current (HERE).readProperty_mBDDStartBitIndex (), enumerator_1222.current (HERE).readProperty_mBDDBitCount (), enumerator_1222.current (HERE).readProperty_mValueList (), var_columnLength_1293  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 49)) ;
    enumerator_1222.gotoNextObject () ;
  }
  const GALGAS_varList temp_2 = inObject ;
  cEnumerator_varList enumerator_1645 (temp_2, kENUMERATION_UP) ;
  while (enumerator_1645.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_1675 = enumerator_1645.current (HERE).readProperty_mVarName ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 57)) ;
    cEnumerator_lstringlist enumerator_1723 (enumerator_1645.current (HERE).readProperty_mValueList (), kENUMERATION_UP) ;
    while (enumerator_1723.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_1756 = enumerator_1723.current (HERE).readProperty_mValue ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 59)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsStrictInf, var_columnLength_1675.objectCompare (var_cstNameLength_1756)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_columnLength_1675 = var_cstNameLength_1756 ;
        }
      }
      enumerator_1723.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (enumerator_1645.current (HERE).readProperty_mVarName ().readProperty_string (), enumerator_1645.current (HERE).readProperty_mBDDStartBitIndex (), enumerator_1645.current (HERE).readProperty_mBDDBitCount (), enumerator_1645.current (HERE).readProperty_mValueList (), var_columnLength_1675  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 64)) ;
    enumerator_1645.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@varList displayArgVarVarInfo'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay extensionGetter_displayArgVarVarInfo (const GALGAS_varList & inObject,
                                                                      const GALGAS_varList & constinArgument_inArgumentList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 78)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_2310 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2310.hasCurrentObject ()) {
    GALGAS_string var_columnName_2332 = GALGAS_string ("old ").add_operation (enumerator_2310.current (HERE).readProperty_mVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 80)) ;
    GALGAS_uint var_columnLength_2381 = var_columnName_2332.getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 81)) ;
    cEnumerator_lstringlist enumerator_2429 (enumerator_2310.current (HERE).readProperty_mValueList (), kENUMERATION_UP) ;
    while (enumerator_2429.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_2462 = enumerator_2429.current (HERE).readProperty_mValue ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 83)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_2381.objectCompare (var_cstNameLength_2462)).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_columnLength_2381 = var_cstNameLength_2462 ;
        }
      }
      enumerator_2429.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (var_columnName_2332, enumerator_2310.current (HERE).readProperty_mBDDStartBitIndex (), enumerator_2310.current (HERE).readProperty_mBDDBitCount (), enumerator_2310.current (HERE).readProperty_mValueList (), var_columnLength_2381  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 88)) ;
    enumerator_2310.gotoNextObject () ;
  }
  const GALGAS_varList temp_2 = inObject ;
  cEnumerator_varList enumerator_2733 (temp_2, kENUMERATION_UP) ;
  while (enumerator_2733.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_2763 = enumerator_2733.current (HERE).readProperty_mVarName ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 96)) ;
    cEnumerator_lstringlist enumerator_2811 (enumerator_2733.current (HERE).readProperty_mValueList (), kENUMERATION_UP) ;
    while (enumerator_2811.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_2844 = enumerator_2811.current (HERE).readProperty_mValue ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 98)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsStrictInf, var_columnLength_2763.objectCompare (var_cstNameLength_2844)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_columnLength_2763 = var_cstNameLength_2844 ;
        }
      }
      enumerator_2811.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (enumerator_2733.current (HERE).readProperty_mVarName ().readProperty_string (), enumerator_2733.current (HERE).readProperty_mBDDStartBitIndex (), enumerator_2733.current (HERE).readProperty_mBDDBitCount (), enumerator_2733.current (HERE).readProperty_mValueList (), var_columnLength_2763  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 103)) ;
    enumerator_2733.gotoNextObject () ;
  }
  cEnumerator_varList enumerator_3125 (constinArgument_inArgumentList, kENUMERATION_UP) ;
  while (enumerator_3125.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_3155 = enumerator_3125.current (HERE).readProperty_mVarName ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 111)) ;
    cEnumerator_lstringlist enumerator_3203 (enumerator_3125.current (HERE).readProperty_mValueList (), kENUMERATION_UP) ;
    while (enumerator_3203.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_3236 = enumerator_3203.current (HERE).readProperty_mValue ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 113)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsStrictInf, var_columnLength_3155.objectCompare (var_cstNameLength_3236)).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_columnLength_3155 = var_cstNameLength_3236 ;
        }
      }
      enumerator_3203.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (enumerator_3125.current (HERE).readProperty_mVarName ().readProperty_string (), enumerator_3125.current (HERE).readProperty_mBDDStartBitIndex (), enumerator_3125.current (HERE).readProperty_mBDDBitCount (), enumerator_3125.current (HERE).readProperty_mValueList (), var_columnLength_3155  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 118)) ;
    enumerator_3125.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------

cMapElement_transitionEventMap::cMapElement_transitionEventMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_eventArgumentList & in_mArgumentList,
                                                                const GALGAS_binaryset & in_mTransitionBinarySet
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mArgumentList (in_mArgumentList),
mProperty_mTransitionBinarySet (in_mTransitionBinarySet) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_transitionEventMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentList.isValid () && mProperty_mTransitionBinarySet.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_transitionEventMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_transitionEventMap (mProperty_lkey, mProperty_mArgumentList, mProperty_mTransitionBinarySet COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap::GALGAS_transitionEventMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap::GALGAS_transitionEventMap (const GALGAS_transitionEventMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap & GALGAS_transitionEventMap::operator = (const GALGAS_transitionEventMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap GALGAS_transitionEventMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_transitionEventMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap GALGAS_transitionEventMap::constructor_mapWithMapToOverride (const GALGAS_transitionEventMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_transitionEventMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap GALGAS_transitionEventMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_transitionEventMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_transitionEventMap_searchKey = "there is no '%K' event" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_transitionEventMap * GALGAS_transitionEventMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_transitionEventMap * result = (cMapElement_transitionEventMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_transitionEventMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_transitionEventMap::cEnumerator_transitionEventMap (const GALGAS_transitionEventMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap_2D_element cEnumerator_transitionEventMap::current (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return GALGAS_transitionEventMap_2D_element (p->mProperty_lkey, p->mProperty_mArgumentList, p->mProperty_mTransitionBinarySet) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_transitionEventMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventArgumentList cEnumerator_transitionEventMap::current_mArgumentList (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return p->mProperty_mArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cEnumerator_transitionEventMap::current_mTransitionBinarySet (LOCATION_ARGS) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_transitionEventMap) ;
  return p->mProperty_mTransitionBinarySet ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_transitionEventMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_eventArgumentList & outArgument0,
                                                    GALGAS_binaryset & outArgument1) const {
  const cMapElement_transitionEventMap * p = (const cMapElement_transitionEventMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_transitionEventMap) ;
    outArgument0 = p->mProperty_mArgumentList ;
    outArgument1 = p->mProperty_mTransitionBinarySet ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@transitionEventMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transitionEventMap ("transitionEventMap",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transitionEventMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transitionEventMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transitionEventMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transitionEventMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@binarysetList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_binarysetList : public cCollectionElement {
  public: GALGAS_binarysetList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_binarysetList (const GALGAS_lstring & in_mLabel,
                                            const GALGAS_binaryset & in_mSet
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_binarysetList (const GALGAS_binarysetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_binarysetList::cCollectionElement_binarysetList (const GALGAS_lstring & in_mLabel,
                                                                    const GALGAS_binaryset & in_mSet
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabel, in_mSet) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_binarysetList::cCollectionElement_binarysetList (const GALGAS_binarysetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabel, inElement.mProperty_mSet) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_binarysetList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_binarysetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_binarysetList (mObject.mProperty_mLabel, mObject.mProperty_mSet COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_binarysetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_binarysetList * operand = (cCollectionElement_binarysetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_binarysetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList::GALGAS_binarysetList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList::GALGAS_binarysetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList GALGAS_binarysetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_binarysetList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binarysetList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                const GALGAS_binaryset & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_binarysetList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binarysetList::setter_append (GALGAS_binarysetList_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_binarysetList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binarysetList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                 const GALGAS_binaryset inOperand1,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_binarysetList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binarysetList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                 GALGAS_binaryset & outOperand1,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_binarysetList) ;
        outOperand0 = p->mObject.mProperty_mLabel ;
        outOperand1 = p->mObject.mProperty_mSet ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList GALGAS_binarysetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList GALGAS_binarysetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList GALGAS_binarysetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetList result = GALGAS_binarysetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binarysetList::plusAssign_operation (const GALGAS_binarysetList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binarysetList::setter_setMLabelAtIndex (GALGAS_lstring inOperand,
                                                    GALGAS_uint inIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_binarysetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabel = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binarysetList::setter_setMSetAtIndex (GALGAS_binaryset inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_binarysetList * p = (cCollectionElement_binarysetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_binarysetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSet = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_binarysetList::cEnumerator_binarysetList (const GALGAS_binarysetList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetList_2D_element cEnumerator_binarysetList::current (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_binarysetList::current_mLabel (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject.mProperty_mLabel ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cEnumerator_binarysetList::current_mSet (LOCATION_ARGS) const {
  const cCollectionElement_binarysetList * p = (const cCollectionElement_binarysetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_binarysetList) ;
  return p->mObject.mProperty_mSet ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@binarysetList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetList ("binarysetList",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binarysetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binarysetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_varMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantList.isValid () && mProperty_mConstantMap.isValid () && mProperty_mBDDStartBit.isValid () && mProperty_mBDDBitCount.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_varMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_varMap (mProperty_lkey, mProperty_mConstantList, mProperty_mConstantMap, mProperty_mBDDStartBit, mProperty_mBDDBitCount COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap::GALGAS_varMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap::GALGAS_varMap (const GALGAS_varMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap & GALGAS_varMap::operator = (const GALGAS_varMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::constructor_mapWithMapToOverride (const GALGAS_varMap & inMapToOverride
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::getter_overriddenMap (C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_varMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_varMap_searchKey = "there is var '%K' key" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_varMap * GALGAS_varMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                       const GALGAS_string & inKey
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_varMap * result = (cMapElement_varMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_varMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_varMap::cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element cEnumerator_varMap::current (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return GALGAS_varMap_2D_element (p->mProperty_lkey, p->mProperty_mConstantList, p->mProperty_mConstantMap, p->mProperty_mBDDStartBit, p->mProperty_mBDDBitCount) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_varMap::current_mConstantList (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap cEnumerator_varMap::current_mConstantMap (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mConstantMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varMap::current_mBDDStartBit (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBDDStartBit ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varMap::current_mBDDBitCount (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBDDBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_varMap::optional_searchKey (const GALGAS_string & inKey,
                                        GALGAS_lstringlist & outArgument0,
                                        GALGAS_enumConstantMap & outArgument1,
                                        GALGAS_uint & outArgument2,
                                        GALGAS_uint & outArgument3) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    outArgument0 = p->mProperty_mConstantList ;
    outArgument1 = p->mProperty_mConstantMap ;
    outArgument2 = p->mProperty_mBDDStartBit ;
    outArgument3 = p->mProperty_mBDDBitCount ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@varMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap ("varMap",
                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expression computeExpressionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_expression_computeExpressionBDD> gExtensionMethodTable_expression_computeExpressionBDD ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeExpressionBDD (const int32_t inClassIndex,
                                                extensionMethodSignature_expression_computeExpressionBDD inMethod) {
  gExtensionMethodTable_expression_computeExpressionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_expression_computeExpressionBDD (void) {
  gExtensionMethodTable_expression_computeExpressionBDD.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expression_computeExpressionBDD (NULL,
                                                            freeExtensionMethod_expression_computeExpressionBDD) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@comparisonRightOperand computeRightOperandBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD> gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeRightOperandBDD (const int32_t inClassIndex,
                                                  extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD inMethod) {
  gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_comparisonRightOperand_computeRightOperandBDD (void) {
  gExtensionMethodTable_comparisonRightOperand_computeRightOperandBDD.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_comparisonRightOperand_computeRightOperandBDD (NULL,
                                                                          freeExtensionMethod_comparisonRightOperand_computeRightOperandBDD) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instruction computeInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_instruction_computeInstructionBDD> gExtensionMethodTable_instruction_computeInstructionBDD ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeInstructionBDD (const int32_t inClassIndex,
                                                 extensionMethodSignature_instruction_computeInstructionBDD inMethod) {
  gExtensionMethodTable_instruction_computeInstructionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_instruction_computeInstructionBDD (void) {
  gExtensionMethodTable_instruction_computeInstructionBDD.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_instruction_computeInstructionBDD (NULL,
                                                              freeExtensionMethod_instruction_computeInstructionBDD) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionList computeInstructionListBDD'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_computeInstructionListBDD (const GALGAS_instructionList inObject,
                                                const GALGAS_uint constinArgument_inVarTotalBDDBitCount,
                                                const GALGAS_varMap constinArgument_inVarMap,
                                                const GALGAS_functionMap constinArgument_inFunctionMap,
                                                const GALGAS_uint constinArgument_inArgOldVarVarBDDBitCount,
                                                GALGAS_binaryset & ioArgument_ioArgOldVarVarValueSet,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionList temp_0 = inObject ;
  cEnumerator_instructionList enumerator_29113 (temp_0, kENUMERATION_UP) ;
  while (enumerator_29113.hasCurrentObject ()) {
    callExtensionMethod_computeInstructionBDD ((const cPtr_instruction *) enumerator_29113.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inVarTotalBDDBitCount, constinArgument_inVarMap, constinArgument_inFunctionMap, constinArgument_inArgOldVarVarBDDBitCount, ioArgument_ioArgOldVarVarValueSet, inCompiler COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 822)) ;
    enumerator_29113.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@assignmentSourceExpression computeAssignmentInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD> gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeAssignmentInstructionBDD (const int32_t inClassIndex,
                                                           extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD inMethod) {
  gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_assignmentSourceExpression_computeAssignmentInstructionBDD (void) {
  gExtensionMethodTable_assignmentSourceExpression_computeAssignmentInstructionBDD.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentSourceExpression_computeAssignmentInstructionBDD (NULL,
                                                                                       freeExtensionMethod_assignmentSourceExpression_computeAssignmentInstructionBDD) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@decoratedInstructionList generateCCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateCCode (const GALGAS_decoratedInstructionList & inObject,
                                             const GALGAS_string & constinArgument_inIndentationString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  const GALGAS_decoratedInstructionList temp_0 = inObject ;
  cEnumerator_decoratedInstructionList enumerator_4236 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4236.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_generateCCode ((const cPtr_decoratedInstruction *) enumerator_4236.current (HERE).readProperty_mDecoratedInstruction ().ptr (), constinArgument_inIndentationString, inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("cCodeGeneration.galgas", 108)) ;
    enumerator_4236.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@decoratedInstruction generateCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_decoratedInstruction_generateCCode> gExtensionGetterTable_decoratedInstruction_generateCCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCCode (const int32_t inClassIndex,
                                         enterExtensionGetter_decoratedInstruction_generateCCode inGetter) {
  gExtensionGetterTable_decoratedInstruction_generateCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_decoratedInstruction_generateCCode (void) {
  gExtensionGetterTable_decoratedInstruction_generateCCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_decoratedInstruction_generateCCode (NULL,
                                                               freeExtensionGetter_decoratedInstruction_generateCCode) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@decoratedAssignmentSourceExpression generateSourceExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode> gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateSourceExpressionCCode (const int32_t inClassIndex,
                                                         enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode (void) {
  gExtensionGetterTable_decoratedAssignmentSourceExpression_generateSourceExpressionCCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode (NULL,
                                                                                              freeExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateSourceExpressionCCode (const cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                 const GALGAS_unifiedScalarTypeMap_2D_entry in_inTargetTypeProxy,
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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@decoratedExpression generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_decoratedExpression_generateExpressionCCode> gExtensionGetterTable_decoratedExpression_generateExpressionCCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedExpression_generateExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedExpression_generateExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_decoratedExpression_generateExpressionCCode (void) {
  gExtensionGetterTable_decoratedExpression_generateExpressionCCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_decoratedExpression_generateExpressionCCode (NULL,
                                                                        freeExtensionGetter_decoratedExpression_generateExpressionCCode) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@decoratedComparisonRightOperand generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode> gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode inGetter) {
  gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode (void) {
  gExtensionGetterTable_decoratedComparisonRightOperand_generateExpressionCCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_decoratedComparisonRightOperand_generateExpressionCCode (NULL,
                                                                                    freeExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionList_2D_element::GALGAS_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionList_2D_element::~ GALGAS_instructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionList_2D_element::GALGAS_instructionList_2D_element (const GALGAS_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionList_2D_element GALGAS_instructionList_2D_element::constructor_new (const GALGAS_instruction & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_instructionList_2D_element::objectCompare (const GALGAS_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@instructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionList_2D_element ("instructionList-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedInstructionList_2D_element::GALGAS_decoratedInstructionList_2D_element (void) :
mProperty_mDecoratedInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedInstructionList_2D_element::~ GALGAS_decoratedInstructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedInstructionList_2D_element::GALGAS_decoratedInstructionList_2D_element (const GALGAS_decoratedInstruction & inOperand0) :
mProperty_mDecoratedInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedInstructionList_2D_element GALGAS_decoratedInstructionList_2D_element::constructor_new (const GALGAS_decoratedInstruction & inOperand0 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_decoratedInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedInstructionList_2D_element::objectCompare (const GALGAS_decoratedInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedInstruction.objectCompare (inOperand.mProperty_mDecoratedInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_decoratedInstructionList_2D_element::isValid (void) const {
  return mProperty_mDecoratedInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedInstructionList_2D_element::drop (void) {
  mProperty_mDecoratedInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedInstructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedInstructionList_2D_element ("decoratedInstructionList-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedInstructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay_2D_element::GALGAS_machineVarListForDisplay_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mBDDStartIndex (),
mProperty_mBDDBitCount (),
mProperty_mValueList (),
mProperty_mColumnLength () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay_2D_element::~ GALGAS_machineVarListForDisplay_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay_2D_element GALGAS_machineVarListForDisplay_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarListForDisplay_2D_element (GALGAS_string::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                                     GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_machineVarListForDisplay_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mBDDStartIndex.isValid () && mProperty_mBDDBitCount.isValid () && mProperty_mValueList.isValid () && mProperty_mColumnLength.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarListForDisplay_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mBDDStartIndex.drop () ;
  mProperty_mBDDBitCount.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mColumnLength.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@machineVarListForDisplay-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarListForDisplay_2D_element ("machineVarListForDisplay-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_machineVarListForDisplay_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarListForDisplay_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_machineVarListForDisplay_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarListForDisplay_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @constantAsComparisonRightOperand reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_constantAsComparisonRightOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constantAsComparisonRightOperand * p = (const cPtr_constantAsComparisonRightOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constantAsComparisonRightOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_constantAsComparisonRightOperand::objectCompare (const GALGAS_constantAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand::GALGAS_constantAsComparisonRightOperand (void) :
GALGAS_comparisonRightOperand () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand GALGAS_constantAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_constantAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand::GALGAS_constantAsComparisonRightOperand (const cPtr_constantAsComparisonRightOperand * inSourcePtr) :
GALGAS_comparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constantAsComparisonRightOperand) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand GALGAS_constantAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mConstantName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constantAsComparisonRightOperand result ;
  if (inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constantAsComparisonRightOperand (inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantAsComparisonRightOperand::setter_setMConstantName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_constantAsComparisonRightOperand * p = (cPtr_constantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constantAsComparisonRightOperand) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constantAsComparisonRightOperand::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_constantAsComparisonRightOperand * p = (cPtr_constantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constantAsComparisonRightOperand) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @constantAsComparisonRightOperand class
//----------------------------------------------------------------------------------------------------------------------

cPtr_constantAsComparisonRightOperand::cPtr_constantAsComparisonRightOperand (const GALGAS_lstring & in_mConstantName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_comparisonRightOperand (THERE),
mProperty_mConstantName (in_mConstantName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_constantAsComparisonRightOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ;
}

void cPtr_constantAsComparisonRightOperand::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@constantAsComparisonRightOperand:" ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_constantAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constantAsComparisonRightOperand (mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@constantAsComparisonRightOperand type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ("constantAsComparisonRightOperand",
                                                         & kTypeDescriptor_GALGAS_comparisonRightOperand) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constantAsComparisonRightOperand_2D_weak::objectCompare (const GALGAS_constantAsComparisonRightOperand_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand_2D_weak::GALGAS_constantAsComparisonRightOperand_2D_weak (void) :
GALGAS_comparisonRightOperand_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand_2D_weak & GALGAS_constantAsComparisonRightOperand_2D_weak::operator = (const GALGAS_constantAsComparisonRightOperand & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand_2D_weak::GALGAS_constantAsComparisonRightOperand_2D_weak (const GALGAS_constantAsComparisonRightOperand & inSource) :
GALGAS_comparisonRightOperand_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand_2D_weak GALGAS_constantAsComparisonRightOperand_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_constantAsComparisonRightOperand_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand GALGAS_constantAsComparisonRightOperand_2D_weak::bang_constantAsComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_constantAsComparisonRightOperand result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_constantAsComparisonRightOperand) ;
      result = GALGAS_constantAsComparisonRightOperand ((cPtr_constantAsComparisonRightOperand *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constantAsComparisonRightOperand-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantAsComparisonRightOperand_2D_weak ("constantAsComparisonRightOperand-weak",
                                                                 & kTypeDescriptor_GALGAS_comparisonRightOperand_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantAsComparisonRightOperand_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsComparisonRightOperand_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantAsComparisonRightOperand_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantAsComparisonRightOperand_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsComparisonRightOperand_2D_weak GALGAS_constantAsComparisonRightOperand_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constantAsComparisonRightOperand_2D_weak result ;
  const GALGAS_constantAsComparisonRightOperand_2D_weak * p = (const GALGAS_constantAsComparisonRightOperand_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantAsComparisonRightOperand_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantAsComparisonRightOperand-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @attributeAsComparisonRightOperand reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_attributeAsComparisonRightOperand::objectCompare (const GALGAS_attributeAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand::GALGAS_attributeAsComparisonRightOperand (void) :
GALGAS_comparisonRightOperand () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand GALGAS_attributeAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_attributeAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand::GALGAS_attributeAsComparisonRightOperand (const cPtr_attributeAsComparisonRightOperand * inSourcePtr) :
GALGAS_comparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_attributeAsComparisonRightOperand) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand GALGAS_attributeAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName,
                                                                                                    const GALGAS_bool & inAttribute_mHasOldQualifier
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_attributeAsComparisonRightOperand result ;
  if (inAttribute_mAttributeName.isValid () && inAttribute_mHasOldQualifier.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_attributeAsComparisonRightOperand (inAttribute_mAttributeName, inAttribute_mHasOldQualifier COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_attributeAsComparisonRightOperand::setter_setMAttributeName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_attributeAsComparisonRightOperand * p = (cPtr_attributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
    p->mProperty_mAttributeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_attributeAsComparisonRightOperand::setter_setMHasOldQualifier (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_attributeAsComparisonRightOperand * p = (cPtr_attributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
    p->mProperty_mHasOldQualifier = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_attributeAsComparisonRightOperand::readProperty_mAttributeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_attributeAsComparisonRightOperand * p = (cPtr_attributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
    return p->mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_attributeAsComparisonRightOperand::readProperty_mHasOldQualifier (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_attributeAsComparisonRightOperand * p = (cPtr_attributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeAsComparisonRightOperand) ;
    return p->mProperty_mHasOldQualifier ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @attributeAsComparisonRightOperand class
//----------------------------------------------------------------------------------------------------------------------

cPtr_attributeAsComparisonRightOperand::cPtr_attributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName,
                                                                                const GALGAS_bool & in_mHasOldQualifier
                                                                                COMMA_LOCATION_ARGS) :
cPtr_comparisonRightOperand (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mHasOldQualifier (in_mHasOldQualifier) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_attributeAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_attributeAsComparisonRightOperand (mProperty_mAttributeName, mProperty_mHasOldQualifier COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@attributeAsComparisonRightOperand type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ("attributeAsComparisonRightOperand",
                                                          & kTypeDescriptor_GALGAS_comparisonRightOperand) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_attributeAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_attributeAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_attributeAsComparisonRightOperand_2D_weak::objectCompare (const GALGAS_attributeAsComparisonRightOperand_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand_2D_weak::GALGAS_attributeAsComparisonRightOperand_2D_weak (void) :
GALGAS_comparisonRightOperand_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand_2D_weak & GALGAS_attributeAsComparisonRightOperand_2D_weak::operator = (const GALGAS_attributeAsComparisonRightOperand & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand_2D_weak::GALGAS_attributeAsComparisonRightOperand_2D_weak (const GALGAS_attributeAsComparisonRightOperand & inSource) :
GALGAS_comparisonRightOperand_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand_2D_weak GALGAS_attributeAsComparisonRightOperand_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_attributeAsComparisonRightOperand_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand GALGAS_attributeAsComparisonRightOperand_2D_weak::bang_attributeAsComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_attributeAsComparisonRightOperand result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_attributeAsComparisonRightOperand) ;
      result = GALGAS_attributeAsComparisonRightOperand ((cPtr_attributeAsComparisonRightOperand *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@attributeAsComparisonRightOperand-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand_2D_weak ("attributeAsComparisonRightOperand-weak",
                                                                  & kTypeDescriptor_GALGAS_comparisonRightOperand_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_attributeAsComparisonRightOperand_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_attributeAsComparisonRightOperand_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeAsComparisonRightOperand_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeAsComparisonRightOperand_2D_weak GALGAS_attributeAsComparisonRightOperand_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_attributeAsComparisonRightOperand_2D_weak result ;
  const GALGAS_attributeAsComparisonRightOperand_2D_weak * p = (const GALGAS_attributeAsComparisonRightOperand_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeAsComparisonRightOperand_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeAsComparisonRightOperand-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @comparisonInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonInExpression::objectCompare (const GALGAS_comparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonInExpression::GALGAS_comparisonInExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonInExpression::GALGAS_comparisonInExpression (const cPtr_comparisonInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonInExpression::setter_setMAttributeName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonInExpression * p = (cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    p->mProperty_mAttributeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonInExpression::setter_setMOperator (GALGAS_enumComparisonOperator inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonInExpression * p = (cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    p->mProperty_mOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonInExpression::setter_setMRightOperand (GALGAS_comparisonRightOperand inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonInExpression * p = (cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_comparisonInExpression::readProperty_mAttributeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_comparisonInExpression * p = (cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    return p->mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumComparisonOperator GALGAS_comparisonInExpression::readProperty_mOperator (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_enumComparisonOperator () ;
  }else{
    cPtr_comparisonInExpression * p = (cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    return p->mProperty_mOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonRightOperand GALGAS_comparisonInExpression::readProperty_mRightOperand (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_comparisonRightOperand () ;
  }else{
    cPtr_comparisonInExpression * p = (cPtr_comparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonInExpression) ;
    return p->mProperty_mRightOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonInExpression::cPtr_comparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                                          const GALGAS_enumComparisonOperator & in_mOperator,
                                                          const GALGAS_comparisonRightOperand & in_mRightOperand
                                                          COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mOperator (in_mOperator),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonInExpression (mProperty_mAttributeName, mProperty_mOperator, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonInExpression ("comparisonInExpression",
                                               & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparisonInExpression_2D_weak::objectCompare (const GALGAS_comparisonInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonInExpression_2D_weak::GALGAS_comparisonInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonInExpression_2D_weak & GALGAS_comparisonInExpression_2D_weak::operator = (const GALGAS_comparisonInExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonInExpression_2D_weak::GALGAS_comparisonInExpression_2D_weak (const GALGAS_comparisonInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonInExpression_2D_weak GALGAS_comparisonInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_comparisonInExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonInExpression GALGAS_comparisonInExpression_2D_weak::bang_comparisonInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonInExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonInExpression) ;
      result = GALGAS_comparisonInExpression ((cPtr_comparisonInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonInExpression_2D_weak ("comparisonInExpression-weak",
                                                       & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonInExpression_2D_weak GALGAS_comparisonInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonInExpression_2D_weak result ;
  const GALGAS_comparisonInExpression_2D_weak * p = (const GALGAS_comparisonInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @varAsAssignmentSourceExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varAsAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varAsAssignmentSourceExpression * p = (const cPtr_varAsAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varAsAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mSourceVarName.objectCompare (p->mProperty_mSourceVarName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varAsAssignmentSourceExpression::objectCompare (const GALGAS_varAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression::GALGAS_varAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression GALGAS_varAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_varAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression::GALGAS_varAsAssignmentSourceExpression (const cPtr_varAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varAsAssignmentSourceExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression GALGAS_varAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mSourceVarName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varAsAssignmentSourceExpression result ;
  if (inAttribute_mSourceVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varAsAssignmentSourceExpression (inAttribute_mSourceVarName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varAsAssignmentSourceExpression::setter_setMSourceVarName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varAsAssignmentSourceExpression * p = (cPtr_varAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAsAssignmentSourceExpression) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varAsAssignmentSourceExpression::readProperty_mSourceVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varAsAssignmentSourceExpression * p = (cPtr_varAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varAsAssignmentSourceExpression) ;
    return p->mProperty_mSourceVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varAsAssignmentSourceExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varAsAssignmentSourceExpression::cPtr_varAsAssignmentSourceExpression (const GALGAS_lstring & in_mSourceVarName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mSourceVarName (in_mSourceVarName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varAsAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ;
}

void cPtr_varAsAssignmentSourceExpression::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varAsAssignmentSourceExpression:" ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varAsAssignmentSourceExpression (mProperty_mSourceVarName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@varAsAssignmentSourceExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ("varAsAssignmentSourceExpression",
                                                        & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varAsAssignmentSourceExpression_2D_weak::objectCompare (const GALGAS_varAsAssignmentSourceExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression_2D_weak::GALGAS_varAsAssignmentSourceExpression_2D_weak (void) :
GALGAS_assignmentSourceExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression_2D_weak & GALGAS_varAsAssignmentSourceExpression_2D_weak::operator = (const GALGAS_varAsAssignmentSourceExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression_2D_weak::GALGAS_varAsAssignmentSourceExpression_2D_weak (const GALGAS_varAsAssignmentSourceExpression & inSource) :
GALGAS_assignmentSourceExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression_2D_weak GALGAS_varAsAssignmentSourceExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_varAsAssignmentSourceExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression GALGAS_varAsAssignmentSourceExpression_2D_weak::bang_varAsAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varAsAssignmentSourceExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varAsAssignmentSourceExpression) ;
      result = GALGAS_varAsAssignmentSourceExpression ((cPtr_varAsAssignmentSourceExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@varAsAssignmentSourceExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression_2D_weak ("varAsAssignmentSourceExpression-weak",
                                                                & kTypeDescriptor_GALGAS_assignmentSourceExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varAsAssignmentSourceExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varAsAssignmentSourceExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varAsAssignmentSourceExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varAsAssignmentSourceExpression_2D_weak GALGAS_varAsAssignmentSourceExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varAsAssignmentSourceExpression_2D_weak result ;
  const GALGAS_varAsAssignmentSourceExpression_2D_weak * p = (const GALGAS_varAsAssignmentSourceExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varAsAssignmentSourceExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varAsAssignmentSourceExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @constantAsAssignmentSourceExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_constantAsAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constantAsAssignmentSourceExpression * p = (const cPtr_constantAsAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constantAsAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_constantAsAssignmentSourceExpression::objectCompare (const GALGAS_constantAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression::GALGAS_constantAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression GALGAS_constantAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_constantAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression::GALGAS_constantAsAssignmentSourceExpression (const cPtr_constantAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constantAsAssignmentSourceExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression GALGAS_constantAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mConstantName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_constantAsAssignmentSourceExpression result ;
  if (inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constantAsAssignmentSourceExpression (inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantAsAssignmentSourceExpression::setter_setMConstantName (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_constantAsAssignmentSourceExpression * p = (cPtr_constantAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constantAsAssignmentSourceExpression) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constantAsAssignmentSourceExpression::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_constantAsAssignmentSourceExpression * p = (cPtr_constantAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constantAsAssignmentSourceExpression) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @constantAsAssignmentSourceExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_constantAsAssignmentSourceExpression::cPtr_constantAsAssignmentSourceExpression (const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mConstantName (in_mConstantName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_constantAsAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ;
}

void cPtr_constantAsAssignmentSourceExpression::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@constantAsAssignmentSourceExpression:" ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_constantAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constantAsAssignmentSourceExpression (mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@constantAsAssignmentSourceExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ("constantAsAssignmentSourceExpression",
                                                             & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constantAsAssignmentSourceExpression_2D_weak::objectCompare (const GALGAS_constantAsAssignmentSourceExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression_2D_weak::GALGAS_constantAsAssignmentSourceExpression_2D_weak (void) :
GALGAS_assignmentSourceExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression_2D_weak & GALGAS_constantAsAssignmentSourceExpression_2D_weak::operator = (const GALGAS_constantAsAssignmentSourceExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression_2D_weak::GALGAS_constantAsAssignmentSourceExpression_2D_weak (const GALGAS_constantAsAssignmentSourceExpression & inSource) :
GALGAS_assignmentSourceExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression_2D_weak GALGAS_constantAsAssignmentSourceExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_constantAsAssignmentSourceExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression GALGAS_constantAsAssignmentSourceExpression_2D_weak::bang_constantAsAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_constantAsAssignmentSourceExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_constantAsAssignmentSourceExpression) ;
      result = GALGAS_constantAsAssignmentSourceExpression ((cPtr_constantAsAssignmentSourceExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constantAsAssignmentSourceExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression_2D_weak ("constantAsAssignmentSourceExpression-weak",
                                                                     & kTypeDescriptor_GALGAS_assignmentSourceExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantAsAssignmentSourceExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantAsAssignmentSourceExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantAsAssignmentSourceExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantAsAssignmentSourceExpression_2D_weak GALGAS_constantAsAssignmentSourceExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constantAsAssignmentSourceExpression_2D_weak result ;
  const GALGAS_constantAsAssignmentSourceExpression_2D_weak * p = (const GALGAS_constantAsAssignmentSourceExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantAsAssignmentSourceExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantAsAssignmentSourceExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @functionAsAssignmentSourceExpression reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_functionAsAssignmentSourceExpression::objectCompare (const GALGAS_functionAsAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression::GALGAS_functionAsAssignmentSourceExpression (void) :
GALGAS_assignmentSourceExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression GALGAS_functionAsAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionAsAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression::GALGAS_functionAsAssignmentSourceExpression (const cPtr_functionAsAssignmentSourceExpression * inSourcePtr) :
GALGAS_assignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionAsAssignmentSourceExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression GALGAS_functionAsAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                                          const GALGAS_lstring & inAttribute_mOperandName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionAsAssignmentSourceExpression result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mOperandName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionAsAssignmentSourceExpression (inAttribute_mFunctionName, inAttribute_mOperandName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionAsAssignmentSourceExpression::setter_setMFunctionName (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionAsAssignmentSourceExpression * p = (cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionAsAssignmentSourceExpression::setter_setMOperandName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionAsAssignmentSourceExpression * p = (cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
    p->mProperty_mOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionAsAssignmentSourceExpression::readProperty_mFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionAsAssignmentSourceExpression * p = (cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
    return p->mProperty_mFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionAsAssignmentSourceExpression::readProperty_mOperandName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionAsAssignmentSourceExpression * p = (cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionAsAssignmentSourceExpression) ;
    return p->mProperty_mOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionAsAssignmentSourceExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionAsAssignmentSourceExpression::cPtr_functionAsAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                                                      const GALGAS_lstring & in_mOperandName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_assignmentSourceExpression (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mOperandName (in_mOperandName) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionAsAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionAsAssignmentSourceExpression (mProperty_mFunctionName, mProperty_mOperandName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@functionAsAssignmentSourceExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ("functionAsAssignmentSourceExpression",
                                                             & kTypeDescriptor_GALGAS_assignmentSourceExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionAsAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionAsAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionAsAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionAsAssignmentSourceExpression_2D_weak::objectCompare (const GALGAS_functionAsAssignmentSourceExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression_2D_weak::GALGAS_functionAsAssignmentSourceExpression_2D_weak (void) :
GALGAS_assignmentSourceExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression_2D_weak & GALGAS_functionAsAssignmentSourceExpression_2D_weak::operator = (const GALGAS_functionAsAssignmentSourceExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression_2D_weak::GALGAS_functionAsAssignmentSourceExpression_2D_weak (const GALGAS_functionAsAssignmentSourceExpression & inSource) :
GALGAS_assignmentSourceExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression_2D_weak GALGAS_functionAsAssignmentSourceExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionAsAssignmentSourceExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression GALGAS_functionAsAssignmentSourceExpression_2D_weak::bang_functionAsAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionAsAssignmentSourceExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionAsAssignmentSourceExpression) ;
      result = GALGAS_functionAsAssignmentSourceExpression ((cPtr_functionAsAssignmentSourceExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionAsAssignmentSourceExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression_2D_weak ("functionAsAssignmentSourceExpression-weak",
                                                                     & kTypeDescriptor_GALGAS_assignmentSourceExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionAsAssignmentSourceExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionAsAssignmentSourceExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionAsAssignmentSourceExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionAsAssignmentSourceExpression_2D_weak GALGAS_functionAsAssignmentSourceExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionAsAssignmentSourceExpression_2D_weak result ;
  const GALGAS_functionAsAssignmentSourceExpression_2D_weak * p = (const GALGAS_functionAsAssignmentSourceExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionAsAssignmentSourceExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionAsAssignmentSourceExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @assignmentInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignmentInstruction::objectCompare (const GALGAS_assignmentInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction::GALGAS_assignmentInstruction (void) :
GALGAS_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction::GALGAS_assignmentInstruction (const cPtr_assignmentInstruction * inSourcePtr) :
GALGAS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction GALGAS_assignmentInstruction::constructor_new (const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                            const GALGAS_assignmentSourceExpression & inAttribute_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstruction result ;
  if (inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstruction (inAttribute_mTargetVarName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstruction::setter_setMTargetVarName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentInstruction * p = (cPtr_assignmentInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstruction) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentInstruction::setter_setMSourceExpression (GALGAS_assignmentSourceExpression inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentInstruction * p = (cPtr_assignmentInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstruction) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_assignmentInstruction::readProperty_mTargetVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_assignmentInstruction * p = (cPtr_assignmentInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstruction) ;
    return p->mProperty_mTargetVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentSourceExpression GALGAS_assignmentInstruction::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_assignmentSourceExpression () ;
  }else{
    cPtr_assignmentInstruction * p = (cPtr_assignmentInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstruction) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_assignmentInstruction::cPtr_assignmentInstruction (const GALGAS_lstring & in_mTargetVarName,
                                                        const GALGAS_assignmentSourceExpression & in_mSourceExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_instruction (THERE),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstruction (mProperty_mTargetVarName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstruction ("assignmentInstruction",
                                              & kTypeDescriptor_GALGAS_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentInstruction_2D_weak::objectCompare (const GALGAS_assignmentInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction_2D_weak::GALGAS_assignmentInstruction_2D_weak (void) :
GALGAS_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction_2D_weak & GALGAS_assignmentInstruction_2D_weak::operator = (const GALGAS_assignmentInstruction & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction_2D_weak::GALGAS_assignmentInstruction_2D_weak (const GALGAS_assignmentInstruction & inSource) :
GALGAS_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction_2D_weak GALGAS_assignmentInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_assignmentInstruction_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction GALGAS_assignmentInstruction_2D_weak::bang_assignmentInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentInstruction result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstruction) ;
      result = GALGAS_assignmentInstruction ((cPtr_assignmentInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentInstruction-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstruction_2D_weak ("assignmentInstruction-weak",
                                                      & kTypeDescriptor_GALGAS_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstruction_2D_weak GALGAS_assignmentInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstruction_2D_weak result ;
  const GALGAS_assignmentInstruction_2D_weak * p = (const GALGAS_assignmentInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedComparisonInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedComparisonInExpression::objectCompare (const GALGAS_decoratedComparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonInExpression::GALGAS_decoratedComparisonInExpression (void) :
GALGAS_decoratedExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonInExpression::GALGAS_decoratedComparisonInExpression (const cPtr_decoratedComparisonInExpression * inSourcePtr) :
GALGAS_decoratedExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedComparisonInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedComparisonInExpression::setter_setMAttributeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedComparisonInExpression * p = (cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    p->mProperty_mAttributeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedComparisonInExpression::setter_setMOperator (GALGAS_enumComparisonOperator inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedComparisonInExpression * p = (cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    p->mProperty_mOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedComparisonInExpression::setter_setMRightOperand (GALGAS_decoratedComparisonRightOperand inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedComparisonInExpression * p = (cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedComparisonInExpression::readProperty_mAttributeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedComparisonInExpression * p = (cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    return p->mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumComparisonOperator GALGAS_decoratedComparisonInExpression::readProperty_mOperator (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_enumComparisonOperator () ;
  }else{
    cPtr_decoratedComparisonInExpression * p = (cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    return p->mProperty_mOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonRightOperand GALGAS_decoratedComparisonInExpression::readProperty_mRightOperand (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedComparisonRightOperand () ;
  }else{
    cPtr_decoratedComparisonInExpression * p = (cPtr_decoratedComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedComparisonInExpression) ;
    return p->mProperty_mRightOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedComparisonInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedComparisonInExpression::cPtr_decoratedComparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                                                            const GALGAS_enumComparisonOperator & in_mOperator,
                                                                            const GALGAS_decoratedComparisonRightOperand & in_mRightOperand
                                                                            COMMA_LOCATION_ARGS) :
cPtr_decoratedExpression (THERE),
mProperty_mAttributeName (in_mAttributeName),
mProperty_mOperator (in_mOperator),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedComparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedComparisonInExpression (mProperty_mAttributeName, mProperty_mOperator, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedComparisonInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedComparisonInExpression ("decoratedComparisonInExpression",
                                                        & kTypeDescriptor_GALGAS_decoratedExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedComparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedComparisonInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedComparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedComparisonInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedComparisonInExpression_2D_weak::objectCompare (const GALGAS_decoratedComparisonInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonInExpression_2D_weak::GALGAS_decoratedComparisonInExpression_2D_weak (void) :
GALGAS_decoratedExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonInExpression_2D_weak & GALGAS_decoratedComparisonInExpression_2D_weak::operator = (const GALGAS_decoratedComparisonInExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonInExpression_2D_weak::GALGAS_decoratedComparisonInExpression_2D_weak (const GALGAS_decoratedComparisonInExpression & inSource) :
GALGAS_decoratedExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonInExpression_2D_weak GALGAS_decoratedComparisonInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedComparisonInExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonInExpression GALGAS_decoratedComparisonInExpression_2D_weak::bang_decoratedComparisonInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedComparisonInExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedComparisonInExpression) ;
      result = GALGAS_decoratedComparisonInExpression ((cPtr_decoratedComparisonInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedComparisonInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedComparisonInExpression_2D_weak ("decoratedComparisonInExpression-weak",
                                                                & kTypeDescriptor_GALGAS_decoratedExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedComparisonInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedComparisonInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedComparisonInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedComparisonInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedComparisonInExpression_2D_weak GALGAS_decoratedComparisonInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedComparisonInExpression_2D_weak result ;
  const GALGAS_decoratedComparisonInExpression_2D_weak * p = (const GALGAS_decoratedComparisonInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedComparisonInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedComparisonInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedConstantAsComparisonRightOperand reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedConstantAsComparisonRightOperand::objectCompare (const GALGAS_decoratedConstantAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand::GALGAS_decoratedConstantAsComparisonRightOperand (void) :
GALGAS_decoratedComparisonRightOperand () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand GALGAS_decoratedConstantAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (GALGAS_unifiedScalarTypeMap_2D_entry::constructor_null (HERE),
                                                                            GALGAS_lstring::constructor_default (HERE),
                                                                            GALGAS_uint::constructor_default (HERE)
                                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand::GALGAS_decoratedConstantAsComparisonRightOperand (const cPtr_decoratedConstantAsComparisonRightOperand * inSourcePtr) :
GALGAS_decoratedComparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedConstantAsComparisonRightOperand) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand GALGAS_decoratedConstantAsComparisonRightOperand::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_entry & inAttribute_mConstantTypeProxy,
                                                                                                                    const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                    const GALGAS_uint & inAttribute_mConstantValue
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedConstantAsComparisonRightOperand result ;
  if (inAttribute_mConstantTypeProxy.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mConstantValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedConstantAsComparisonRightOperand (inAttribute_mConstantTypeProxy, inAttribute_mConstantName, inAttribute_mConstantValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedConstantAsComparisonRightOperand::setter_setMConstantTypeProxy (GALGAS_unifiedScalarTypeMap_2D_entry inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedConstantAsComparisonRightOperand * p = (cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    p->mProperty_mConstantTypeProxy = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedConstantAsComparisonRightOperand::setter_setMConstantName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedConstantAsComparisonRightOperand * p = (cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedConstantAsComparisonRightOperand::setter_setMConstantValue (GALGAS_uint inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedConstantAsComparisonRightOperand * p = (cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    p->mProperty_mConstantValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedScalarTypeMap_2D_entry GALGAS_decoratedConstantAsComparisonRightOperand::readProperty_mConstantTypeProxy (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedScalarTypeMap_2D_entry () ;
  }else{
    cPtr_decoratedConstantAsComparisonRightOperand * p = (cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    return p->mProperty_mConstantTypeProxy ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedConstantAsComparisonRightOperand::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedConstantAsComparisonRightOperand * p = (cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_decoratedConstantAsComparisonRightOperand::readProperty_mConstantValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_decoratedConstantAsComparisonRightOperand * p = (cPtr_decoratedConstantAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedConstantAsComparisonRightOperand) ;
    return p->mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedConstantAsComparisonRightOperand class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedConstantAsComparisonRightOperand::cPtr_decoratedConstantAsComparisonRightOperand (const GALGAS_unifiedScalarTypeMap_2D_entry & in_mConstantTypeProxy,
                                                                                                const GALGAS_lstring & in_mConstantName,
                                                                                                const GALGAS_uint & in_mConstantValue
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_decoratedComparisonRightOperand (THERE),
mProperty_mConstantTypeProxy (in_mConstantTypeProxy),
mProperty_mConstantName (in_mConstantName),
mProperty_mConstantValue (in_mConstantValue) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedConstantAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedConstantAsComparisonRightOperand (mProperty_mConstantTypeProxy, mProperty_mConstantName, mProperty_mConstantValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedConstantAsComparisonRightOperand type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ("decoratedConstantAsComparisonRightOperand",
                                                                  & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedConstantAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedConstantAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedConstantAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::objectCompare (const GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak (void) :
GALGAS_decoratedComparisonRightOperand_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak & GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::operator = (const GALGAS_decoratedConstantAsComparisonRightOperand & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak (const GALGAS_decoratedConstantAsComparisonRightOperand & inSource) :
GALGAS_decoratedComparisonRightOperand_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::bang_decoratedConstantAsComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedConstantAsComparisonRightOperand result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedConstantAsComparisonRightOperand) ;
      result = GALGAS_decoratedConstantAsComparisonRightOperand ((cPtr_decoratedConstantAsComparisonRightOperand *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedConstantAsComparisonRightOperand-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak ("decoratedConstantAsComparisonRightOperand-weak",
                                                                          & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak result ;
  const GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak * p = (const GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedConstantAsComparisonRightOperand-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedAttributeAsComparisonRightOperand reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_decoratedAttributeAsComparisonRightOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedAttributeAsComparisonRightOperand * p = (const cPtr_decoratedAttributeAsComparisonRightOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedAttributeAsComparisonRightOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedAttributeAsComparisonRightOperand::objectCompare (const GALGAS_decoratedAttributeAsComparisonRightOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand::GALGAS_decoratedAttributeAsComparisonRightOperand (void) :
GALGAS_decoratedComparisonRightOperand () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand::GALGAS_decoratedAttributeAsComparisonRightOperand (const cPtr_decoratedAttributeAsComparisonRightOperand * inSourcePtr) :
GALGAS_decoratedComparisonRightOperand (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedAttributeAsComparisonRightOperand) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand GALGAS_decoratedAttributeAsComparisonRightOperand::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAttributeAsComparisonRightOperand result ;
  if (inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedAttributeAsComparisonRightOperand (inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedAttributeAsComparisonRightOperand::setter_setMAttributeName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedAttributeAsComparisonRightOperand * p = (cPtr_decoratedAttributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedAttributeAsComparisonRightOperand) ;
    p->mProperty_mAttributeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedAttributeAsComparisonRightOperand::readProperty_mAttributeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedAttributeAsComparisonRightOperand * p = (cPtr_decoratedAttributeAsComparisonRightOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedAttributeAsComparisonRightOperand) ;
    return p->mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedAttributeAsComparisonRightOperand class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedAttributeAsComparisonRightOperand::cPtr_decoratedAttributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_decoratedComparisonRightOperand (THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedAttributeAsComparisonRightOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ;
}

void cPtr_decoratedAttributeAsComparisonRightOperand::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@decoratedAttributeAsComparisonRightOperand:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedAttributeAsComparisonRightOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedAttributeAsComparisonRightOperand (mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedAttributeAsComparisonRightOperand type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ("decoratedAttributeAsComparisonRightOperand",
                                                                   & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedAttributeAsComparisonRightOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedAttributeAsComparisonRightOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedAttributeAsComparisonRightOperand (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::objectCompare (const GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak (void) :
GALGAS_decoratedComparisonRightOperand_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak & GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::operator = (const GALGAS_decoratedAttributeAsComparisonRightOperand & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak (const GALGAS_decoratedAttributeAsComparisonRightOperand & inSource) :
GALGAS_decoratedComparisonRightOperand_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::bang_decoratedAttributeAsComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedAttributeAsComparisonRightOperand result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedAttributeAsComparisonRightOperand) ;
      result = GALGAS_decoratedAttributeAsComparisonRightOperand ((cPtr_decoratedAttributeAsComparisonRightOperand *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedAttributeAsComparisonRightOperand-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak ("decoratedAttributeAsComparisonRightOperand-weak",
                                                                           & kTypeDescriptor_GALGAS_decoratedComparisonRightOperand_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak result ;
  const GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak * p = (const GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedAttributeAsComparisonRightOperand-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @assignmentDecoratedInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignmentDecoratedInstruction::objectCompare (const GALGAS_assignmentDecoratedInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction::GALGAS_assignmentDecoratedInstruction (void) :
GALGAS_decoratedInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction::GALGAS_assignmentDecoratedInstruction (const cPtr_assignmentDecoratedInstruction * inSourcePtr) :
GALGAS_decoratedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentDecoratedInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction GALGAS_assignmentDecoratedInstruction::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_entry & inAttribute_mTargetTypeProxy,
                                                                                              const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                              const GALGAS_decoratedAssignmentSourceExpression & inAttribute_mSourceExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_assignmentDecoratedInstruction result ;
  if (inAttribute_mTargetTypeProxy.isValid () && inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentDecoratedInstruction (inAttribute_mTargetTypeProxy, inAttribute_mTargetVarName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentDecoratedInstruction::setter_setMTargetTypeProxy (GALGAS_unifiedScalarTypeMap_2D_entry inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentDecoratedInstruction * p = (cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    p->mProperty_mTargetTypeProxy = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentDecoratedInstruction::setter_setMTargetVarName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentDecoratedInstruction * p = (cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentDecoratedInstruction::setter_setMSourceExpression (GALGAS_decoratedAssignmentSourceExpression inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentDecoratedInstruction * p = (cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedScalarTypeMap_2D_entry GALGAS_assignmentDecoratedInstruction::readProperty_mTargetTypeProxy (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedScalarTypeMap_2D_entry () ;
  }else{
    cPtr_assignmentDecoratedInstruction * p = (cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    return p->mProperty_mTargetTypeProxy ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_assignmentDecoratedInstruction::readProperty_mTargetVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_assignmentDecoratedInstruction * p = (cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    return p->mProperty_mTargetVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedAssignmentSourceExpression GALGAS_assignmentDecoratedInstruction::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedAssignmentSourceExpression () ;
  }else{
    cPtr_assignmentDecoratedInstruction * p = (cPtr_assignmentDecoratedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentDecoratedInstruction) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @assignmentDecoratedInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_assignmentDecoratedInstruction::cPtr_assignmentDecoratedInstruction (const GALGAS_unifiedScalarTypeMap_2D_entry & in_mTargetTypeProxy,
                                                                          const GALGAS_lstring & in_mTargetVarName,
                                                                          const GALGAS_decoratedAssignmentSourceExpression & in_mSourceExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedInstruction (THERE),
mProperty_mTargetTypeProxy (in_mTargetTypeProxy),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentDecoratedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentDecoratedInstruction (mProperty_mTargetTypeProxy, mProperty_mTargetVarName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentDecoratedInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ("assignmentDecoratedInstruction",
                                                       & kTypeDescriptor_GALGAS_decoratedInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentDecoratedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentDecoratedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentDecoratedInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentDecoratedInstruction_2D_weak::objectCompare (const GALGAS_assignmentDecoratedInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction_2D_weak::GALGAS_assignmentDecoratedInstruction_2D_weak (void) :
GALGAS_decoratedInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction_2D_weak & GALGAS_assignmentDecoratedInstruction_2D_weak::operator = (const GALGAS_assignmentDecoratedInstruction & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction_2D_weak::GALGAS_assignmentDecoratedInstruction_2D_weak (const GALGAS_assignmentDecoratedInstruction & inSource) :
GALGAS_decoratedInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction_2D_weak GALGAS_assignmentDecoratedInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_assignmentDecoratedInstruction_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction GALGAS_assignmentDecoratedInstruction_2D_weak::bang_assignmentDecoratedInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentDecoratedInstruction result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentDecoratedInstruction) ;
      result = GALGAS_assignmentDecoratedInstruction ((cPtr_assignmentDecoratedInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentDecoratedInstruction-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentDecoratedInstruction_2D_weak ("assignmentDecoratedInstruction-weak",
                                                               & kTypeDescriptor_GALGAS_decoratedInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentDecoratedInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentDecoratedInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentDecoratedInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentDecoratedInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentDecoratedInstruction_2D_weak GALGAS_assignmentDecoratedInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_assignmentDecoratedInstruction_2D_weak result ;
  const GALGAS_assignmentDecoratedInstruction_2D_weak * p = (const GALGAS_assignmentDecoratedInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentDecoratedInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentDecoratedInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @attributeInDecoratedAssignmentSourceExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_attributeInDecoratedAssignmentSourceExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_attributeInDecoratedAssignmentSourceExpression * p = (const cPtr_attributeInDecoratedAssignmentSourceExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_attributeInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_attributeInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression::GALGAS_attributeInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression::GALGAS_attributeInDecoratedAssignmentSourceExpression (const cPtr_attributeInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression GALGAS_attributeInDecoratedAssignmentSourceExpression::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_attributeInDecoratedAssignmentSourceExpression result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_attributeInDecoratedAssignmentSourceExpression (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_attributeInDecoratedAssignmentSourceExpression::setter_setMVarName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_attributeInDecoratedAssignmentSourceExpression * p = (cPtr_attributeInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_attributeInDecoratedAssignmentSourceExpression::readProperty_mVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_attributeInDecoratedAssignmentSourceExpression * p = (cPtr_attributeInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @attributeInDecoratedAssignmentSourceExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_attributeInDecoratedAssignmentSourceExpression::cPtr_attributeInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mVarName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mVarName (in_mVarName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_attributeInDecoratedAssignmentSourceExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ;
}

void cPtr_attributeInDecoratedAssignmentSourceExpression::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@attributeInDecoratedAssignmentSourceExpression:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_attributeInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_attributeInDecoratedAssignmentSourceExpression (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@attributeInDecoratedAssignmentSourceExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ("attributeInDecoratedAssignmentSourceExpression",
                                                                       & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_attributeInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_attributeInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::objectCompare (const GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak (void) :
GALGAS_decoratedAssignmentSourceExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak & GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::operator = (const GALGAS_attributeInDecoratedAssignmentSourceExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak (const GALGAS_attributeInDecoratedAssignmentSourceExpression & inSource) :
GALGAS_decoratedAssignmentSourceExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::bang_attributeInDecoratedAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_attributeInDecoratedAssignmentSourceExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_attributeInDecoratedAssignmentSourceExpression) ;
      result = GALGAS_attributeInDecoratedAssignmentSourceExpression ((cPtr_attributeInDecoratedAssignmentSourceExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@attributeInDecoratedAssignmentSourceExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak ("attributeInDecoratedAssignmentSourceExpression-weak",
                                                                               & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak result ;
  const GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak * p = (const GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeInDecoratedAssignmentSourceExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @cstInDecoratedAssignmentSourceExpression reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_cstInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_cstInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression::GALGAS_cstInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_cstInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                           GALGAS_uint::constructor_default (HERE),
                                                                           GALGAS_uint::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression::GALGAS_cstInDecoratedAssignmentSourceExpression (const cPtr_cstInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_cstInDecoratedAssignmentSourceExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_cstInDecoratedAssignmentSourceExpression::setter_setMEnumCstName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_cstInDecoratedAssignmentSourceExpression * p = (cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    p->mProperty_mEnumCstName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_cstInDecoratedAssignmentSourceExpression::setter_setMValue (GALGAS_uint inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_cstInDecoratedAssignmentSourceExpression * p = (cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_cstInDecoratedAssignmentSourceExpression::setter_setMBDDBitCount (GALGAS_uint inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_cstInDecoratedAssignmentSourceExpression * p = (cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    p->mProperty_mBDDBitCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_cstInDecoratedAssignmentSourceExpression::readProperty_mEnumCstName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_cstInDecoratedAssignmentSourceExpression * p = (cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    return p->mProperty_mEnumCstName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_cstInDecoratedAssignmentSourceExpression::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_cstInDecoratedAssignmentSourceExpression * p = (cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_cstInDecoratedAssignmentSourceExpression::readProperty_mBDDBitCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_cstInDecoratedAssignmentSourceExpression * p = (cPtr_cstInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cstInDecoratedAssignmentSourceExpression) ;
    return p->mProperty_mBDDBitCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @cstInDecoratedAssignmentSourceExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_cstInDecoratedAssignmentSourceExpression::cPtr_cstInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mEnumCstName,
                                                                                              const GALGAS_uint & in_mValue,
                                                                                              const GALGAS_uint & in_mBDDBitCount
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mEnumCstName (in_mEnumCstName),
mProperty_mValue (in_mValue),
mProperty_mBDDBitCount (in_mBDDBitCount) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_cstInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_cstInDecoratedAssignmentSourceExpression (mProperty_mEnumCstName, mProperty_mValue, mProperty_mBDDBitCount COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@cstInDecoratedAssignmentSourceExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ("cstInDecoratedAssignmentSourceExpression",
                                                                 & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_cstInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_cstInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_cstInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::objectCompare (const GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak (void) :
GALGAS_decoratedAssignmentSourceExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak & GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::operator = (const GALGAS_cstInDecoratedAssignmentSourceExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak (const GALGAS_cstInDecoratedAssignmentSourceExpression & inSource) :
GALGAS_decoratedAssignmentSourceExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::bang_cstInDecoratedAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_cstInDecoratedAssignmentSourceExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_cstInDecoratedAssignmentSourceExpression) ;
      result = GALGAS_cstInDecoratedAssignmentSourceExpression ((cPtr_cstInDecoratedAssignmentSourceExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@cstInDecoratedAssignmentSourceExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak ("cstInDecoratedAssignmentSourceExpression-weak",
                                                                         & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak result ;
  const GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak * p = (const GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("cstInDecoratedAssignmentSourceExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @functionInDecoratedAssignmentSourceExpression reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_functionInDecoratedAssignmentSourceExpression::objectCompare (const GALGAS_functionInDecoratedAssignmentSourceExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression::GALGAS_functionInDecoratedAssignmentSourceExpression (void) :
GALGAS_decoratedAssignmentSourceExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionInDecoratedAssignmentSourceExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_decoratedFunctionValueList::constructor_emptySortedList (HERE)
                                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression::GALGAS_functionInDecoratedAssignmentSourceExpression (const cPtr_functionInDecoratedAssignmentSourceExpression * inSourcePtr) :
GALGAS_decoratedAssignmentSourceExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionInDecoratedAssignmentSourceExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionInDecoratedAssignmentSourceExpression::setter_setMFunctionName (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionInDecoratedAssignmentSourceExpression * p = (cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionInDecoratedAssignmentSourceExpression::setter_setMOperandName (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionInDecoratedAssignmentSourceExpression * p = (cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    p->mProperty_mOperandName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionInDecoratedAssignmentSourceExpression::setter_setMDecoratedFunctionValueList (GALGAS_decoratedFunctionValueList inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_functionInDecoratedAssignmentSourceExpression * p = (cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    p->mProperty_mDecoratedFunctionValueList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionInDecoratedAssignmentSourceExpression::readProperty_mFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionInDecoratedAssignmentSourceExpression * p = (cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    return p->mProperty_mFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionInDecoratedAssignmentSourceExpression::readProperty_mOperandName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionInDecoratedAssignmentSourceExpression * p = (cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    return p->mProperty_mOperandName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedFunctionValueList GALGAS_functionInDecoratedAssignmentSourceExpression::readProperty_mDecoratedFunctionValueList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedFunctionValueList () ;
  }else{
    cPtr_functionInDecoratedAssignmentSourceExpression * p = (cPtr_functionInDecoratedAssignmentSourceExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionInDecoratedAssignmentSourceExpression) ;
    return p->mProperty_mDecoratedFunctionValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionInDecoratedAssignmentSourceExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionInDecoratedAssignmentSourceExpression::cPtr_functionInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                                                                        const GALGAS_lstring & in_mOperandName,
                                                                                                        const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_decoratedAssignmentSourceExpression (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mOperandName (in_mOperandName),
mProperty_mDecoratedFunctionValueList (in_mDecoratedFunctionValueList) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionInDecoratedAssignmentSourceExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionInDecoratedAssignmentSourceExpression (mProperty_mFunctionName, mProperty_mOperandName, mProperty_mDecoratedFunctionValueList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@functionInDecoratedAssignmentSourceExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ("functionInDecoratedAssignmentSourceExpression",
                                                                      & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionInDecoratedAssignmentSourceExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionInDecoratedAssignmentSourceExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionInDecoratedAssignmentSourceExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::objectCompare (const GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak (void) :
GALGAS_decoratedAssignmentSourceExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak & GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::operator = (const GALGAS_functionInDecoratedAssignmentSourceExpression & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak (const GALGAS_functionInDecoratedAssignmentSourceExpression & inSource) :
GALGAS_decoratedAssignmentSourceExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::bang_functionInDecoratedAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionInDecoratedAssignmentSourceExpression result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionInDecoratedAssignmentSourceExpression) ;
      result = GALGAS_functionInDecoratedAssignmentSourceExpression ((cPtr_functionInDecoratedAssignmentSourceExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionInDecoratedAssignmentSourceExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak ("functionInDecoratedAssignmentSourceExpression-weak",
                                                                              & kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak result ;
  const GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak * p = (const GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionInDecoratedAssignmentSourceExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
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
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@varList displayVarInfo'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarListForDisplay extensionGetter_displayVarInfo (const GALGAS_varList & inObject,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarListForDisplay result_outResult ; // Returned variable
  result_outResult = GALGAS_machineVarListForDisplay::constructor_emptyList (SOURCE_FILE ("dynamicAnalysis.galgas", 17)) ;
  const GALGAS_varList temp_0 = inObject ;
  cEnumerator_varList enumerator_590 (temp_0, kENUMERATION_UP) ;
  while (enumerator_590.hasCurrentObject ()) {
    GALGAS_uint var_columnLength_620 = enumerator_590.current (HERE).readProperty_mVarName ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 19)) ;
    cEnumerator_lstringlist enumerator_668 (enumerator_590.current (HERE).readProperty_mValueList (), kENUMERATION_UP) ;
    while (enumerator_668.hasCurrentObject ()) {
      GALGAS_uint var_cstNameLength_701 = enumerator_668.current (HERE).readProperty_mValue ().readProperty_string ().getter_length (SOURCE_FILE ("dynamicAnalysis.galgas", 21)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_columnLength_620.objectCompare (var_cstNameLength_701)).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_columnLength_620 = var_cstNameLength_701 ;
        }
      }
      enumerator_668.gotoNextObject () ;
    }
    result_outResult.addAssign_operation (enumerator_590.current (HERE).readProperty_mVarName ().readProperty_string (), enumerator_590.current (HERE).readProperty_mBDDStartBitIndex (), enumerator_590.current (HERE).readProperty_mBDDBitCount (), enumerator_590.current (HERE).readProperty_mValueList (), var_columnLength_620  COMMA_SOURCE_FILE ("dynamicAnalysis.galgas", 26)) ;
    enumerator_590.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineList_2D_element::GALGAS_machineList_2D_element (void) :
mProperty_mMachineName (),
mProperty_mEnumVarDeclarationList (),
mProperty_mInvariantExpressionList (),
mProperty_mEventList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineList_2D_element::~ GALGAS_machineList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineList_2D_element::GALGAS_machineList_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_enumVarDeclarationList & inOperand1,
                                                              const GALGAS_expressionList & inOperand2,
                                                              const GALGAS_eventDeclarationList & inOperand3) :
mProperty_mMachineName (inOperand0),
mProperty_mEnumVarDeclarationList (inOperand1),
mProperty_mInvariantExpressionList (inOperand2),
mProperty_mEventList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineList_2D_element GALGAS_machineList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_enumVarDeclarationList::constructor_emptyList (HERE),
                                        GALGAS_expressionList::constructor_emptyList (HERE),
                                        GALGAS_eventDeclarationList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_machineList_2D_element::isValid (void) const {
  return mProperty_mMachineName.isValid () && mProperty_mEnumVarDeclarationList.isValid () && mProperty_mInvariantExpressionList.isValid () && mProperty_mEventList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineList_2D_element::drop (void) {
  mProperty_mMachineName.drop () ;
  mProperty_mEnumVarDeclarationList.drop () ;
  mProperty_mInvariantExpressionList.drop () ;
  mProperty_mEventList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@machineList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineList_2D_element ("machineList-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_machineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_machineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeList_2D_element::GALGAS_enumTypeList_2D_element (void) :
mProperty_mEnumListName (),
mProperty_mEnumConstantList (),
mProperty_mGenerateCode () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeList_2D_element::~ GALGAS_enumTypeList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeList_2D_element::GALGAS_enumTypeList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1,
                                                                const GALGAS_bool & inOperand2) :
mProperty_mEnumListName (inOperand0),
mProperty_mEnumConstantList (inOperand1),
mProperty_mGenerateCode (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeList_2D_element GALGAS_enumTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumTypeList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lstringlist::constructor_emptyList (HERE),
                                         GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumTypeList_2D_element::isValid (void) const {
  return mProperty_mEnumListName.isValid () && mProperty_mEnumConstantList.isValid () && mProperty_mGenerateCode.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumTypeList_2D_element::drop (void) {
  mProperty_mEnumListName.drop () ;
  mProperty_mEnumConstantList.drop () ;
  mProperty_mGenerateCode.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@enumTypeList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeList_2D_element ("enumTypeList-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumVarDeclarationList_2D_element::GALGAS_enumVarDeclarationList_2D_element (void) :
mProperty_mEnumTypeName (),
mProperty_mEnumVarName (),
mProperty_mConstantName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumVarDeclarationList_2D_element::~ GALGAS_enumVarDeclarationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumVarDeclarationList_2D_element::GALGAS_enumVarDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mProperty_mEnumTypeName (inOperand0),
mProperty_mEnumVarName (inOperand1),
mProperty_mConstantName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumVarDeclarationList_2D_element GALGAS_enumVarDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumVarDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumVarDeclarationList_2D_element::isValid (void) const {
  return mProperty_mEnumTypeName.isValid () && mProperty_mEnumVarName.isValid () && mProperty_mConstantName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumVarDeclarationList_2D_element::drop (void) {
  mProperty_mEnumTypeName.drop () ;
  mProperty_mEnumVarName.drop () ;
  mProperty_mConstantName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@enumVarDeclarationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumVarDeclarationList_2D_element ("enumVarDeclarationList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumVarDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumVarDeclarationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumVarDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumVarDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventDeclarationList_2D_element::GALGAS_eventDeclarationList_2D_element (void) :
mProperty_mEventName (),
mProperty_mEventArgumentList (),
mProperty_mEventInstructionList (),
mProperty_mEnsureExpressionList (),
mProperty_mEndOfEnsureExpressionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventDeclarationList_2D_element::~ GALGAS_eventDeclarationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventDeclarationList_2D_element GALGAS_eventDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_eventArgumentList::constructor_emptyList (HERE),
                                                 GALGAS_instructionList::constructor_emptyList (HERE),
                                                 GALGAS_expressionList::constructor_emptyList (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_eventDeclarationList_2D_element::isValid (void) const {
  return mProperty_mEventName.isValid () && mProperty_mEventArgumentList.isValid () && mProperty_mEventInstructionList.isValid () && mProperty_mEnsureExpressionList.isValid () && mProperty_mEndOfEnsureExpressionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_eventDeclarationList_2D_element::drop (void) {
  mProperty_mEventName.drop () ;
  mProperty_mEventArgumentList.drop () ;
  mProperty_mEventInstructionList.drop () ;
  mProperty_mEnsureExpressionList.drop () ;
  mProperty_mEndOfEnsureExpressionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@eventDeclarationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventDeclarationList_2D_element ("eventDeclarationList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_eventDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventDeclarationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_eventDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventArgumentList_2D_element::GALGAS_eventArgumentList_2D_element (void) :
mProperty_mArgumentTypeName (),
mProperty_mArgumentVarName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventArgumentList_2D_element::~ GALGAS_eventArgumentList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventArgumentList_2D_element::GALGAS_eventArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mArgumentTypeName (inOperand0),
mProperty_mArgumentVarName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventArgumentList_2D_element GALGAS_eventArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventArgumentList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventArgumentList_2D_element GALGAS_eventArgumentList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_eventArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_eventArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_eventArgumentList_2D_element::isValid (void) const {
  return mProperty_mArgumentTypeName.isValid () && mProperty_mArgumentVarName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_eventArgumentList_2D_element::drop (void) {
  mProperty_mArgumentTypeName.drop () ;
  mProperty_mArgumentVarName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@eventArgumentList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventArgumentList_2D_element ("eventArgumentList-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_eventArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventArgumentList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_eventArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionList_2D_element::GALGAS_expressionList_2D_element (void) :
mProperty_mLabel (),
mProperty_mExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionList_2D_element::~ GALGAS_expressionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionList_2D_element::GALGAS_expressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_expression & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mExpression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionList_2D_element GALGAS_expressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_expression & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_expressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_expressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_expressionList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@expressionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionList_2D_element ("expressionList-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionValueList_2D_element::GALGAS_functionValueList_2D_element (void) :
mProperty_mOperandName (),
mProperty_mResultName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionValueList_2D_element::~ GALGAS_functionValueList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionValueList_2D_element::GALGAS_functionValueList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mOperandName (inOperand0),
mProperty_mResultName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionValueList_2D_element GALGAS_functionValueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionValueList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionValueList_2D_element GALGAS_functionValueList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionValueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionValueList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_functionValueList_2D_element::isValid (void) const {
  return mProperty_mOperandName.isValid () && mProperty_mResultName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionValueList_2D_element::drop (void) {
  mProperty_mOperandName.drop () ;
  mProperty_mResultName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@functionValueList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionValueList_2D_element ("functionValueList-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionValueList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionValueList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDefinitionList_2D_element::GALGAS_functionDefinitionList_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mOperandEnumTypeName (),
mProperty_mResultEnumTypeName (),
mProperty_mValueList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDefinitionList_2D_element::~ GALGAS_functionDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDefinitionList_2D_element::GALGAS_functionDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_functionValueList & inOperand3) :
mProperty_mFunctionName (inOperand0),
mProperty_mOperandEnumTypeName (inOperand1),
mProperty_mResultEnumTypeName (inOperand2),
mProperty_mValueList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionDefinitionList_2D_element GALGAS_functionDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_functionValueList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_functionDefinitionList_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mOperandEnumTypeName.isValid () && mProperty_mResultEnumTypeName.isValid () && mProperty_mValueList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionDefinitionList_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mOperandEnumTypeName.drop () ;
  mProperty_mResultEnumTypeName.drop () ;
  mProperty_mValueList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@functionDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDefinitionList_2D_element ("functionDefinitionList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioEventSequence_2D_element::GALGAS_scenarioEventSequence_2D_element (void) :
mProperty_mEventName (),
mProperty_mArgumentNameList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioEventSequence_2D_element::~ GALGAS_scenarioEventSequence_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioEventSequence_2D_element::GALGAS_scenarioEventSequence_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEventName (inOperand0),
mProperty_mArgumentNameList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioEventSequence_2D_element GALGAS_scenarioEventSequence_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_scenarioEventSequence_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioEventSequence_2D_element GALGAS_scenarioEventSequence_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scenarioEventSequence_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_scenarioEventSequence_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_scenarioEventSequence_2D_element::isValid (void) const {
  return mProperty_mEventName.isValid () && mProperty_mArgumentNameList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scenarioEventSequence_2D_element::drop (void) {
  mProperty_mEventName.drop () ;
  mProperty_mArgumentNameList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@scenarioEventSequence-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scenarioEventSequence_2D_element ("scenarioEventSequence-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scenarioEventSequence_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scenarioEventSequence_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scenarioEventSequence_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scenarioEventSequence_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioList_2D_element::GALGAS_scenarioList_2D_element (void) :
mProperty_mMachineName (),
mProperty_mScenarioName (),
mProperty_mEventSequence () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioList_2D_element::~ GALGAS_scenarioList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioList_2D_element::GALGAS_scenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_scenarioEventSequence & inOperand2) :
mProperty_mMachineName (inOperand0),
mProperty_mScenarioName (inOperand1),
mProperty_mEventSequence (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scenarioList_2D_element GALGAS_scenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_scenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_scenarioEventSequence::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_scenarioList_2D_element::isValid (void) const {
  return mProperty_mMachineName.isValid () && mProperty_mScenarioName.isValid () && mProperty_mEventSequence.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scenarioList_2D_element::drop (void) {
  mProperty_mMachineName.drop () ;
  mProperty_mScenarioName.drop () ;
  mProperty_mEventSequence.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@scenarioList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scenarioList_2D_element ("scenarioList-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scenarioList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scenarioList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedExpressionList_2D_element::GALGAS_decoratedExpressionList_2D_element (void) :
mProperty_mLabel (),
mProperty_mDecoratedExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedExpressionList_2D_element::~ GALGAS_decoratedExpressionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedExpressionList_2D_element::GALGAS_decoratedExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_decoratedExpression & inOperand1) :
mProperty_mLabel (inOperand0),
mProperty_mDecoratedExpression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedExpressionList_2D_element GALGAS_decoratedExpressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_decoratedExpression & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedExpressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_decoratedExpressionList_2D_element::isValid (void) const {
  return mProperty_mLabel.isValid () && mProperty_mDecoratedExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedExpressionList_2D_element::drop (void) {
  mProperty_mLabel.drop () ;
  mProperty_mDecoratedExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedExpressionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedExpressionList_2D_element ("decoratedExpressionList-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedExpressionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@enumConstantMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedArgumentList_2D_element::GALGAS_decoratedArgumentList_2D_element (void) :
mProperty_mArgumentTypeProxy (),
mProperty_mArgumentName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedArgumentList_2D_element::~ GALGAS_decoratedArgumentList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedArgumentList_2D_element::GALGAS_decoratedArgumentList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1) :
mProperty_mArgumentTypeProxy (inOperand0),
mProperty_mArgumentName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedArgumentList_2D_element GALGAS_decoratedArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedArgumentList_2D_element (GALGAS_unifiedScalarTypeMap_2D_entry::constructor_null (HERE),
                                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedArgumentList_2D_element GALGAS_decoratedArgumentList_2D_element::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_decoratedArgumentList_2D_element::isValid (void) const {
  return mProperty_mArgumentTypeProxy.isValid () && mProperty_mArgumentName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedArgumentList_2D_element::drop (void) {
  mProperty_mArgumentTypeProxy.drop () ;
  mProperty_mArgumentName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedArgumentList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedArgumentList_2D_element ("decoratedArgumentList-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedArgumentList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventMap_2D_element::GALGAS_eventMap_2D_element (void) :
mProperty_lkey (),
mProperty_mDecoratedArgumentList (),
mProperty_mDecoratedEventInstructionList (),
mProperty_mEnsureDecoratedExpressionList (),
mProperty_mEndOfEnsureExpressionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventMap_2D_element::~ GALGAS_eventMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_eventMap_2D_element GALGAS_eventMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_eventMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_decoratedArgumentList::constructor_emptyList (HERE),
                                     GALGAS_decoratedInstructionList::constructor_emptyList (HERE),
                                     GALGAS_decoratedExpressionList::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_eventMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDecoratedArgumentList.isValid () && mProperty_mDecoratedEventInstructionList.isValid () && mProperty_mEnsureDecoratedExpressionList.isValid () && mProperty_mEndOfEnsureExpressionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_eventMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDecoratedArgumentList.drop () ;
  mProperty_mDecoratedEventInstructionList.drop () ;
  mProperty_mEnsureDecoratedExpressionList.drop () ;
  mProperty_mEndOfEnsureExpressionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@eventMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_eventMap_2D_element ("eventMap-element",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_eventMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_eventMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_eventMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_eventMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarMap_2D_element::GALGAS_machineVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTypeProxy (),
mProperty_mMaxValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarMap_2D_element::~ GALGAS_machineVarMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarMap_2D_element::GALGAS_machineVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand1,
                                                                  const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mTypeProxy (inOperand1),
mProperty_mMaxValue (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarMap_2D_element GALGAS_machineVarMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_unifiedScalarTypeMap_2D_entry::constructor_null (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarMap_2D_element GALGAS_machineVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand1,
                                                                                  const GALGAS_uint & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_machineVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_machineVarMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_machineVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mMaxValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTypeProxy.drop () ;
  mProperty_mMaxValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@machineVarMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarMap_2D_element ("machineVarMap-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_machineVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_machineVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarList_2D_element::GALGAS_machineVarList_2D_element (void) :
mProperty_mTypeProxy (),
mProperty_mVarName (),
mProperty_mValueList (),
mProperty_mInitialValueConstantName (),
mProperty_mInitialValueConstantIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarList_2D_element::~ GALGAS_machineVarList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarList_2D_element::GALGAS_machineVarList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarList_2D_element GALGAS_machineVarList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineVarList_2D_element (GALGAS_unifiedScalarTypeMap_2D_entry::constructor_null (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineVarList_2D_element GALGAS_machineVarList_2D_element::constructor_new (const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_machineVarList_2D_element::isValid (void) const {
  return mProperty_mTypeProxy.isValid () && mProperty_mVarName.isValid () && mProperty_mValueList.isValid () && mProperty_mInitialValueConstantName.isValid () && mProperty_mInitialValueConstantIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineVarList_2D_element::drop (void) {
  mProperty_mTypeProxy.drop () ;
  mProperty_mVarName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mInitialValueConstantName.drop () ;
  mProperty_mInitialValueConstantIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@machineVarList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineVarList_2D_element ("machineVarList-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_machineVarList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineVarList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_machineVarList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineVarList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedScenarioList_2D_element::GALGAS_decoratedScenarioList_2D_element (void) :
mProperty_mScenarioName (),
mProperty_mEventSequence () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedScenarioList_2D_element::~ GALGAS_decoratedScenarioList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedScenarioList_2D_element::GALGAS_decoratedScenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_scenarioEventSequence & inOperand1) :
mProperty_mScenarioName (inOperand0),
mProperty_mEventSequence (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedScenarioList_2D_element GALGAS_decoratedScenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedScenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_scenarioEventSequence::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedScenarioList_2D_element GALGAS_decoratedScenarioList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_scenarioEventSequence & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedScenarioList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedScenarioList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_decoratedScenarioList_2D_element::isValid (void) const {
  return mProperty_mScenarioName.isValid () && mProperty_mEventSequence.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedScenarioList_2D_element::drop (void) {
  mProperty_mScenarioName.drop () ;
  mProperty_mEventSequence.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedScenarioList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedScenarioList_2D_element ("decoratedScenarioList-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedScenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedScenarioList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedScenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedScenarioList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineMap_2D_element::GALGAS_machineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAttributeMap (),
mProperty_mAttributeList (),
mProperty_mInvariantDecoratedExpressionList (),
mProperty_mEventMap (),
mProperty_mDecoratedScenarioList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineMap_2D_element::~ GALGAS_machineMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_machineMap_2D_element GALGAS_machineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_machineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_machineVarMap::constructor_emptyMap (HERE),
                                       GALGAS_machineVarList::constructor_emptyList (HERE),
                                       GALGAS_decoratedExpressionList::constructor_emptyList (HERE),
                                       GALGAS_eventMap::constructor_emptyMap (HERE),
                                       GALGAS_decoratedScenarioList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_machineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAttributeMap.isValid () && mProperty_mAttributeList.isValid () && mProperty_mInvariantDecoratedExpressionList.isValid () && mProperty_mEventMap.isValid () && mProperty_mDecoratedScenarioList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_machineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAttributeMap.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mInvariantDecoratedExpressionList.drop () ;
  mProperty_mEventMap.drop () ;
  mProperty_mDecoratedScenarioList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@machineMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_machineMap_2D_element ("machineMap-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_machineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_machineMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_machineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_machineMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedFunctionValueList_2D_element::GALGAS_decoratedFunctionValueList_2D_element (void) :
mProperty_mOperandName (),
mProperty_mOperandValue (),
mProperty_mResultName (),
mProperty_mResultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedFunctionValueList_2D_element::~ GALGAS_decoratedFunctionValueList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedFunctionValueList_2D_element::GALGAS_decoratedFunctionValueList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_uint & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_uint & inOperand3) :
mProperty_mOperandName (inOperand0),
mProperty_mOperandValue (inOperand1),
mProperty_mResultName (inOperand2),
mProperty_mResultValue (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedFunctionValueList_2D_element GALGAS_decoratedFunctionValueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedFunctionValueList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_decoratedFunctionValueList_2D_element::isValid (void) const {
  return mProperty_mOperandName.isValid () && mProperty_mOperandValue.isValid () && mProperty_mResultName.isValid () && mProperty_mResultValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedFunctionValueList_2D_element::drop (void) {
  mProperty_mOperandName.drop () ;
  mProperty_mOperandValue.drop () ;
  mProperty_mResultName.drop () ;
  mProperty_mResultValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedFunctionValueList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedFunctionValueList_2D_element ("decoratedFunctionValueList-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedFunctionValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedFunctionValueList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedFunctionValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedFunctionValueList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOperandTypeProxy (),
mProperty_mResultTypeProxy (),
mProperty_mDecoratedFunctionValueList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand1,
                                                              const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand2,
                                                              const GALGAS_decoratedFunctionValueList & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mOperandTypeProxy (inOperand1),
mProperty_mResultTypeProxy (inOperand2),
mProperty_mDecoratedFunctionValueList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_unifiedScalarTypeMap_2D_entry::constructor_null (HERE),
                                        GALGAS_unifiedScalarTypeMap_2D_entry::constructor_null (HERE),
                                        GALGAS_decoratedFunctionValueList::constructor_emptySortedList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand1,
                                                                              const GALGAS_unifiedScalarTypeMap_2D_entry & inOperand2,
                                                                              const GALGAS_decoratedFunctionValueList & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperandTypeProxy.isValid () && mProperty_mResultTypeProxy.isValid () && mProperty_mDecoratedFunctionValueList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOperandTypeProxy.drop () ;
  mProperty_mResultTypeProxy.drop () ;
  mProperty_mDecoratedFunctionValueList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@functionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap_2D_element::GALGAS_transitionEventMap_2D_element (void) :
mProperty_lkey (),
mProperty_mArgumentList (),
mProperty_mTransitionBinarySet () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap_2D_element::~ GALGAS_transitionEventMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap_2D_element::GALGAS_transitionEventMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_eventArgumentList & inOperand1,
                                                                            const GALGAS_binaryset & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mArgumentList (inOperand1),
mProperty_mTransitionBinarySet (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transitionEventMap_2D_element GALGAS_transitionEventMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transitionEventMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_eventArgumentList::constructor_emptyList (HERE),
                                               GALGAS_binaryset::constructor_emptyBinarySet (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_transitionEventMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentList.isValid () && mProperty_mTransitionBinarySet.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transitionEventMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentList.drop () ;
  mProperty_mTransitionBinarySet.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@transitionEventMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transitionEventMap_2D_element ("transitionEventMap-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transitionEventMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transitionEventMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transitionEventMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transitionEventMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element::GALGAS_varList_2D_element (void) :
mProperty_mVarName (),
mProperty_mValueList (),
mProperty_mBDDStartBitIndex (),
mProperty_mBDDBitCount (),
mProperty_mInitialValueIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element::~ GALGAS_varList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element GALGAS_varList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                    GALGAS_uint::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_varList_2D_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mValueList.isValid () && mProperty_mBDDStartBitIndex.isValid () && mProperty_mBDDBitCount.isValid () && mProperty_mInitialValueIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList_2D_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mBDDStartBitIndex.drop () ;
  mProperty_mBDDBitCount.drop () ;
  mProperty_mInitialValueIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@varList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList_2D_element ("varList-element",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

