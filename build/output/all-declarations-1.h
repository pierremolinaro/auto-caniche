#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalOrDecoratedExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_logicalOrDecoratedExpression : public GALGAS_decoratedExpression {
//--------------------------------- Default constructor
  public: GALGAS_logicalOrDecoratedExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_logicalOrDecoratedExpression (const class cPtr_logicalOrDecoratedExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_decoratedExpression readProperty_mLeft (void) const ;

  public: class GALGAS_decoratedExpression readProperty_mRight (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalOrDecoratedExpression extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logicalOrDecoratedExpression constructor_new (const class GALGAS_decoratedExpression & inOperand0,
                                                                            const class GALGAS_decoratedExpression & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logicalOrDecoratedExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeft (class GALGAS_decoratedExpression inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRight (class GALGAS_decoratedExpression inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalOrDecoratedExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalOrDecoratedExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @logicalOrDecoratedExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_logicalOrDecoratedExpression : public cPtr_decoratedExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_decoratedExpression mProperty_mLeft ;
  public: GALGAS_decoratedExpression mProperty_mRight ;

//--- Constructor
  public: cPtr_logicalOrDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
                                             const GALGAS_decoratedExpression & in_mRight
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalOrDecoratedExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_logicalOrDecoratedExpression_2D_weak : public GALGAS_decoratedExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_logicalOrDecoratedExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_logicalOrDecoratedExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_logicalOrDecoratedExpression_2D_weak (const class GALGAS_logicalOrDecoratedExpression & inSource) ;

  public: GALGAS_logicalOrDecoratedExpression_2D_weak & operator = (const class GALGAS_logicalOrDecoratedExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_logicalOrDecoratedExpression bang_logicalOrDecoratedExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalOrDecoratedExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_logicalOrDecoratedExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_logicalOrDecoratedExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalOrDecoratedExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalOrDecoratedExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedComparisonRightOperand reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedComparisonRightOperand : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_decoratedComparisonRightOperand (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedComparisonRightOperand (const class cPtr_decoratedComparisonRightOperand * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedComparisonRightOperand class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedComparisonRightOperand ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedComparisonRightOperand class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedComparisonRightOperand : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_generateExpressionCCode (C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties

//--- Constructor
  public: cPtr_decoratedComparisonRightOperand (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expression analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_expression_analyzeExpression) (const class cPtr_expression * inObject,
                                                                       const class GALGAS_analyzeContext constinArgument0,
                                                                       const class GALGAS_bool constinArgument1,
                                                                       class GALGAS_decoratedExpression & outArgument2,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeExpression (const int32_t inClassIndex,
                                             extensionMethodSignature_expression_analyzeExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (const class cPtr_expression * inObject,
                                            const GALGAS_analyzeContext constin_inAnalyzeContext,
                                            const GALGAS_bool constin_inEnsureClause,
                                            GALGAS_decoratedExpression & out_outDecoratedExpression,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@expressionList analyzeExpressionList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeExpressionList (const class GALGAS_expressionList inObject,
                                            const class GALGAS_analyzeContext constin_inAnalyzeContext,
                                            const class GALGAS_bool constin_inEnsureClause,
                                            class GALGAS_decoratedExpressionList & out_outDecoratedExpressionList,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedComparisonRightOperand_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedComparisonRightOperand_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_decoratedComparisonRightOperand_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedComparisonRightOperand_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedComparisonRightOperand_2D_weak (const class GALGAS_decoratedComparisonRightOperand & inSource) ;

  public: GALGAS_decoratedComparisonRightOperand_2D_weak & operator = (const class GALGAS_decoratedComparisonRightOperand & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedComparisonRightOperand bang_decoratedComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedComparisonRightOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedComparisonRightOperand_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedComparisonRightOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedComparisonRightOperand_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedComparisonRightOperand_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@comparisonRightOperand analyzeComparisonRightOperand'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand) (const class cPtr_comparisonRightOperand * inObject,
                                                                                               const class GALGAS_analyzeContext constinArgument0,
                                                                                               const class GALGAS_bool constinArgument1,
                                                                                               class GALGAS_decoratedComparisonRightOperand & outArgument2,
                                                                                               const class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument3,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeComparisonRightOperand (const int32_t inClassIndex,
                                                         extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeComparisonRightOperand (const class cPtr_comparisonRightOperand * inObject,
                                                        const GALGAS_analyzeContext constin_inAnalyzeContext,
                                                        const GALGAS_bool constin_inEnsureClause,
                                                        GALGAS_decoratedComparisonRightOperand & out_outDecoratedExpression,
                                                        const GALGAS_unifiedScalarTypeMap_2D_entry constin_inVarTypeProxy,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedAssignmentSourceExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedAssignmentSourceExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_decoratedAssignmentSourceExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedAssignmentSourceExpression (const class cPtr_decoratedAssignmentSourceExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedAssignmentSourceExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedAssignmentSourceExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedAssignmentSourceExpression : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_generateSourceExpressionCCode (const GALGAS_unifiedScalarTypeMap_2D_entry inTargetTypeProxy,
           C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties

//--- Constructor
  public: cPtr_decoratedAssignmentSourceExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ifDecoratedInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifDecoratedInstruction : public GALGAS_decoratedInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ifDecoratedInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_ifDecoratedInstruction (const class cPtr_ifDecoratedInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mIFinstructionLocation (void) const ;

  public: class GALGAS_decoratedExpression readProperty_mTestExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfTestExpression (void) const ;

  public: class GALGAS_decoratedInstructionList readProperty_mThenInstructionList (void) const ;

  public: class GALGAS_decoratedInstructionList readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ifDecoratedInstruction extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifDecoratedInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_decoratedExpression & inOperand1,
                                                                      const class GALGAS_location & inOperand2,
                                                                      const class GALGAS_decoratedInstructionList & inOperand3,
                                                                      const class GALGAS_decoratedInstructionList & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifDecoratedInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (class GALGAS_decoratedInstructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfTestExpression (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIFinstructionLocation (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTestExpression (class GALGAS_decoratedExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMThenInstructionList (class GALGAS_decoratedInstructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifDecoratedInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifDecoratedInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifDecoratedInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ifDecoratedInstruction : public cPtr_decoratedInstruction {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mIFinstructionLocation ;
  public: GALGAS_decoratedExpression mProperty_mTestExpression ;
  public: GALGAS_location mProperty_mEndOfTestExpression ;
  public: GALGAS_decoratedInstructionList mProperty_mThenInstructionList ;
  public: GALGAS_decoratedInstructionList mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_ifDecoratedInstruction (const GALGAS_location & in_mIFinstructionLocation,
                                       const GALGAS_decoratedExpression & in_mTestExpression,
                                       const GALGAS_location & in_mEndOfTestExpression,
                                       const GALGAS_decoratedInstructionList & in_mThenInstructionList,
                                       const GALGAS_decoratedInstructionList & in_mElseInstructionList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ifDecoratedInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifDecoratedInstruction_2D_weak : public GALGAS_decoratedInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifDecoratedInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ifDecoratedInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifDecoratedInstruction_2D_weak (const class GALGAS_ifDecoratedInstruction & inSource) ;

  public: GALGAS_ifDecoratedInstruction_2D_weak & operator = (const class GALGAS_ifDecoratedInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifDecoratedInstruction bang_ifDecoratedInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ifDecoratedInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifDecoratedInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifDecoratedInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifDecoratedInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifDecoratedInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assertDecoratedInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assertDecoratedInstruction : public GALGAS_decoratedInstruction {
//--------------------------------- Default constructor
  public: GALGAS_assertDecoratedInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assertDecoratedInstruction (const class cPtr_assertDecoratedInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_decoratedExpression readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assertDecoratedInstruction extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assertDecoratedInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_decoratedExpression & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assertDecoratedInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_decoratedExpression inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertDecoratedInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertDecoratedInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assertDecoratedInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assertDecoratedInstruction : public cPtr_decoratedInstruction {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_decoratedExpression mProperty_mExpression ;

//--- Constructor
  public: cPtr_assertDecoratedInstruction (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_decoratedExpression & in_mExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assertDecoratedInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assertDecoratedInstruction_2D_weak : public GALGAS_decoratedInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assertDecoratedInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assertDecoratedInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assertDecoratedInstruction_2D_weak (const class GALGAS_assertDecoratedInstruction & inSource) ;

  public: GALGAS_assertDecoratedInstruction_2D_weak & operator = (const class GALGAS_assertDecoratedInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assertDecoratedInstruction bang_assertDecoratedInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assertDecoratedInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assertDecoratedInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assertDecoratedInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertDecoratedInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertDecoratedInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionList analyzeInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeInstructionList (const class GALGAS_instructionList inObject,
                                             const class GALGAS_analyzeContext constin_inAnalyzeContext,
                                             class GALGAS_decoratedInstructionList & out_outDecoratedInstructionList,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instruction analyzeInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_instruction_analyzeInstruction) (const class cPtr_instruction * inObject,
                                                                         const class GALGAS_analyzeContext constinArgument0,
                                                                         class GALGAS_decoratedInstruction & outArgument1,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeInstruction (const int32_t inClassIndex,
                                              extensionMethodSignature_instruction_analyzeInstruction inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInstruction (const class cPtr_instruction * inObject,
                                             const GALGAS_analyzeContext constin_inAnalyzeContext,
                                             GALGAS_decoratedInstruction & out_outDecoratedInstruction,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedAssignmentSourceExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedAssignmentSourceExpression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_decoratedAssignmentSourceExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedAssignmentSourceExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedAssignmentSourceExpression_2D_weak (const class GALGAS_decoratedAssignmentSourceExpression & inSource) ;

  public: GALGAS_decoratedAssignmentSourceExpression_2D_weak & operator = (const class GALGAS_decoratedAssignmentSourceExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedAssignmentSourceExpression bang_decoratedAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedAssignmentSourceExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedAssignmentSourceExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedAssignmentSourceExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedAssignmentSourceExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@assignmentSourceExpression analyzeAssignmentSourceExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression) (const class cPtr_assignmentSourceExpression * inObject,
                                                                                                       const class GALGAS_analyzeContext constinArgument0,
                                                                                                       const class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument1,
                                                                                                       class GALGAS_decoratedAssignmentSourceExpression & outArgument2,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeAssignmentSourceExpression (const int32_t inClassIndex,
                                                             extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeAssignmentSourceExpression (const class cPtr_assignmentSourceExpression * inObject,
                                                            const GALGAS_analyzeContext constin_inAnalyzeContext,
                                                            const GALGAS_unifiedScalarTypeMap_2D_entry constin_inTargetTypeProxy,
                                                            GALGAS_decoratedAssignmentSourceExpression & out_outDecoratedExpression,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'omnibus_syntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_omnibus_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_omnibus_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_assignment_5F_source_5F_expression_ (class GALGAS_assignmentSourceExpression & outArgument0,
                                                                  class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_assignment_5F_source_5F_expression_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_comparison_5F_right_5F_operand_ (class GALGAS_comparisonRightOperand & outArgument0,
                                                              class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_comparison_5F_right_5F_operand_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_else_5F_part_ (class GALGAS_instructionList & outArgument0,
                                            class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_else_5F_part_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_ (class GALGAS_ast & ioArgument0,
                                                   class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_ (class GALGAS_ast & ioArgument0,
                                                class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_expression & outArgument0,
                                          class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_expression_31__ (class GALGAS_expression & outArgument0,
                                              class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_expression_31__parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_expression_32__ (class GALGAS_expression & outArgument0,
                                              class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_expression_32__parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_expression_34__ (class GALGAS_expression & outArgument0,
                                              class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_expression_34__parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_instruction_ (class GALGAS_instruction & outArgument0,
                                           class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_instruction_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_ (class GALGAS_instructionList & ioArgument0,
                                                   class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_machine_ (class GALGAS_ast & ioArgument0,
                                       class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_machine_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_scenario_ (class GALGAS_ast & ioArgument0,
                                        class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_scenario_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_ast & outArgument0,
                                               class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_omnibus_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & outArgument0,
                                                              C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_scenario_i1_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_scenario_i1_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_enum_5F_declaration_i2_ (GALGAS_ast & ioArgument0,
                                                                  C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_enum_5F_declaration_i2_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_enum_5F_function_i3_ (GALGAS_ast & ioArgument0,
                                                               C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_enum_5F_function_i3_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_machine_i4_ (GALGAS_ast & ioArgument0,
                                                      C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_machine_i4_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_i5_ (GALGAS_expression & outArgument0,
                                                         C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_i5_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_31__i6_ (GALGAS_expression & outArgument0,
                                                             C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_31__i6_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_32__i7_ (GALGAS_expression & outArgument0,
                                                             C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_32__i7_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_34__i8_ (GALGAS_expression & outArgument0,
                                                             C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_34__i8_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_34__i9_ (GALGAS_expression & outArgument0,
                                                             C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_34__i9_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i10_ (GALGAS_comparisonRightOperand & outArgument0,
                                                                              C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i10_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i11_ (GALGAS_comparisonRightOperand & outArgument0,
                                                                              C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i11_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_5F_list_i12_ (GALGAS_instructionList & ioArgument0,
                                                                   C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_5F_list_i12_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i13_ (GALGAS_instruction & outArgument0,
                                                           C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i13_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i14_ (GALGAS_instruction & outArgument0,
                                                           C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i14_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i15_ (GALGAS_assignmentSourceExpression & outArgument0,
                                                                                  C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i15_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i16_ (GALGAS_assignmentSourceExpression & outArgument0,
                                                                                  C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i16_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i17_ (GALGAS_assignmentSourceExpression & outArgument0,
                                                                                  C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i17_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i18_ (GALGAS_instruction & outArgument0,
                                                           C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i18_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_else_5F_part_i19_ (GALGAS_instructionList & outArgument0,
                                                            C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_else_5F_part_i19_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_else_5F_part_i20_ (GALGAS_instructionList & outArgument0,
                                                            C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_else_5F_part_i20_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_else_5F_part_i21_ (GALGAS_instructionList & outArgument0,
                                                            C_Lexique_lexicalAnalyzer * inLexique) ;

  protected: void rule_omnibus_5F_syntax_else_5F_part_i21_parse (C_Lexique_lexicalAnalyzer * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_omnibus_5F_syntax_0 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_1 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_2 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_3 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_4 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_5 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_6 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_7 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_8 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_9 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_10 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_11 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_12 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_13 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_14 (C_Lexique_lexicalAnalyzer *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstruction : public GALGAS_instruction {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentInstruction (const class cPtr_assignmentInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetVarName (void) const ;

  public: class GALGAS_assignmentSourceExpression readProperty_mSourceExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstruction extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstruction constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_assignmentSourceExpression & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSourceExpression (class GALGAS_assignmentSourceExpression inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetVarName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assignmentInstruction : public cPtr_instruction {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTargetVarName ;
  public: GALGAS_assignmentSourceExpression mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_assignmentInstruction (const GALGAS_lstring & in_mTargetVarName,
                                      const GALGAS_assignmentSourceExpression & in_mSourceExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @attributeAsComparisonRightOperand reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_attributeAsComparisonRightOperand : public GALGAS_comparisonRightOperand {
//--------------------------------- Default constructor
  public: GALGAS_attributeAsComparisonRightOperand (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_attributeAsComparisonRightOperand constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_attributeAsComparisonRightOperand (const class cPtr_attributeAsComparisonRightOperand * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAttributeName (void) const ;

  public: class GALGAS_bool readProperty_mHasOldQualifier (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_attributeAsComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_attributeAsComparisonRightOperand constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_attributeAsComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasOldQualifier (class GALGAS_bool inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeAsComparisonRightOperand class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @attributeAsComparisonRightOperand class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_attributeAsComparisonRightOperand : public cPtr_comparisonRightOperand {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;
  public: GALGAS_bool mProperty_mHasOldQualifier ;

//--- Constructor
  public: cPtr_attributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName,
                                                  const GALGAS_bool & in_mHasOldQualifier
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonInExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonInExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_comparisonInExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonInExpression (const class cPtr_comparisonInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAttributeName (void) const ;

  public: class GALGAS_enumComparisonOperator readProperty_mOperator (void) const ;

  public: class GALGAS_comparisonRightOperand readProperty_mRightOperand (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonInExpression extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonInExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_enumComparisonOperator & inOperand1,
                                                                      const class GALGAS_comparisonRightOperand & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperator (class GALGAS_enumComparisonOperator inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperand (class GALGAS_comparisonRightOperand inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonInExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonInExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonInExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_comparisonInExpression : public cPtr_expression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;
  public: GALGAS_enumComparisonOperator mProperty_mOperator ;
  public: GALGAS_comparisonRightOperand mProperty_mRightOperand ;

//--- Constructor
  public: cPtr_comparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                       const GALGAS_enumComparisonOperator & in_mOperator,
                                       const GALGAS_comparisonRightOperand & in_mRightOperand
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constantAsAssignmentSourceExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantAsAssignmentSourceExpression : public GALGAS_assignmentSourceExpression {
//--------------------------------- Default constructor
  public: GALGAS_constantAsAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constantAsAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_constantAsAssignmentSourceExpression (const class cPtr_constantAsAssignmentSourceExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constantAsAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantAsAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantAsAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantAsAssignmentSourceExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @constantAsAssignmentSourceExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_constantAsAssignmentSourceExpression : public cPtr_assignmentSourceExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mConstantName ;

//--- Constructor
  public: cPtr_constantAsAssignmentSourceExpression (const GALGAS_lstring & in_mConstantName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constantAsComparisonRightOperand reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantAsComparisonRightOperand : public GALGAS_comparisonRightOperand {
//--------------------------------- Default constructor
  public: GALGAS_constantAsComparisonRightOperand (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constantAsComparisonRightOperand constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_constantAsComparisonRightOperand (const class cPtr_constantAsComparisonRightOperand * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constantAsComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantAsComparisonRightOperand constructor_new (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantAsComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantAsComparisonRightOperand class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @constantAsComparisonRightOperand class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_constantAsComparisonRightOperand : public cPtr_comparisonRightOperand {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mConstantName ;

//--- Constructor
  public: cPtr_constantAsComparisonRightOperand (const GALGAS_lstring & in_mConstantName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionAsAssignmentSourceExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionAsAssignmentSourceExpression : public GALGAS_assignmentSourceExpression {
//--------------------------------- Default constructor
  public: GALGAS_functionAsAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionAsAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_functionAsAssignmentSourceExpression (const class cPtr_functionAsAssignmentSourceExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_lstring readProperty_mOperandName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionAsAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionAsAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionAsAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionAsAssignmentSourceExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionAsAssignmentSourceExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_functionAsAssignmentSourceExpression : public cPtr_assignmentSourceExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_lstring mProperty_mOperandName ;

//--- Constructor
  public: cPtr_functionAsAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                     const GALGAS_lstring & in_mOperandName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varAsAssignmentSourceExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varAsAssignmentSourceExpression : public GALGAS_assignmentSourceExpression {
//--------------------------------- Default constructor
  public: GALGAS_varAsAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varAsAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_varAsAssignmentSourceExpression (const class cPtr_varAsAssignmentSourceExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mSourceVarName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varAsAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varAsAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varAsAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSourceVarName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varAsAssignmentSourceExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varAsAssignmentSourceExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_varAsAssignmentSourceExpression : public cPtr_assignmentSourceExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mSourceVarName ;

//--- Constructor
  public: cPtr_varAsAssignmentSourceExpression (const GALGAS_lstring & in_mSourceVarName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @machineVarListForDisplay list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarListForDisplay : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_machineVarListForDisplay (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_machineVarListForDisplay (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mAttributeName,
                                                 const class GALGAS_uint & in_mBDDStartIndex,
                                                 const class GALGAS_uint & in_mBDDBitCount,
                                                 const class GALGAS_lstringlist & in_mValueList,
                                                 const class GALGAS_uint & in_mColumnLength
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineVarListForDisplay extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineVarListForDisplay constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_machineVarListForDisplay constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_uint & inOperand1,
                                                                                  const class GALGAS_uint & inOperand2,
                                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                                  const class GALGAS_uint & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_machineVarListForDisplay inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_lstringlist & inOperand3,
                                                     const class GALGAS_uint & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_machineVarListForDisplay add_operation (const GALGAS_machineVarListForDisplay & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_machineVarListForDisplay_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_lstringlist constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 class GALGAS_uint & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                class GALGAS_lstringlist & outArgument3,
                                                class GALGAS_uint & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_lstringlist & outArgument3,
                                                      class GALGAS_uint & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBDDBitCountAtIndex (class GALGAS_uint constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBDDStartIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnLengthAtIndex (class GALGAS_uint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_uint & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             class GALGAS_lstringlist & outArgument3,
                                             class GALGAS_uint & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mColumnLengthAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarListForDisplay getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarListForDisplay getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_machineVarListForDisplay getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_machineVarListForDisplay ;
 
} ; // End of GALGAS_machineVarListForDisplay class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_machineVarListForDisplay : public cGenericAbstractEnumerator {
  public: cEnumerator_machineVarListForDisplay (const GALGAS_machineVarListForDisplay & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBDDStartIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBDDBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mColumnLength (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_machineVarListForDisplay_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarListForDisplay ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @machineVarListForDisplay_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarListForDisplay_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mAttributeName ;
  public: inline GALGAS_string readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GALGAS_uint mProperty_mBDDStartIndex ;
  public: inline GALGAS_uint readProperty_mBDDStartIndex (void) const {
    return mProperty_mBDDStartIndex ;
  }

  public: GALGAS_uint mProperty_mBDDBitCount ;
  public: inline GALGAS_uint readProperty_mBDDBitCount (void) const {
    return mProperty_mBDDBitCount ;
  }

  public: GALGAS_lstringlist mProperty_mValueList ;
  public: inline GALGAS_lstringlist readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

  public: GALGAS_uint mProperty_mColumnLength ;
  public: inline GALGAS_uint readProperty_mColumnLength (void) const {
    return mProperty_mColumnLength ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_machineVarListForDisplay_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_machineVarListForDisplay_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMBDDStartIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBDDStartIndex = inValue ;
  }

  public: inline void setter_setMBDDBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBDDBitCount = inValue ;
  }

  public: inline void setter_setMValueList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

  public: inline void setter_setMColumnLength (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnLength = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_machineVarListForDisplay_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_machineVarListForDisplay_2D_element (const GALGAS_string & in_mAttributeName,
                                                      const GALGAS_uint & in_mBDDStartIndex,
                                                      const GALGAS_uint & in_mBDDBitCount,
                                                      const GALGAS_lstringlist & in_mValueList,
                                                      const GALGAS_uint & in_mColumnLength) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_machineVarListForDisplay_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_machineVarListForDisplay_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_uint & inOperand1,
                                                                                   const class GALGAS_uint & inOperand2,
                                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                                   const class GALGAS_uint & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_machineVarListForDisplay_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineVarListForDisplay_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarListForDisplay_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_varList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_varList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mVarName,
                                                 const class GALGAS_lstringlist & in_mValueList,
                                                 const class GALGAS_uint & in_mBDDStartBitIndex,
                                                 const class GALGAS_uint & in_mBDDBitCount,
                                                 const class GALGAS_uint & in_mInitialValueIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varList extractObject (const GALGAS_object & inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_varList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstringlist & inOperand1,
                                                                 const class GALGAS_uint & inOperand2,
                                                                 const class GALGAS_uint & inOperand3,
                                                                 const class GALGAS_uint & inOperand4
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_varList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_uint & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_varList add_operation (const GALGAS_varList & inOperand,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_varList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 class GALGAS_uint & outArgument3,
                                                 class GALGAS_uint & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                class GALGAS_uint & outArgument3,
                                                class GALGAS_uint & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_uint & outArgument3,
                                                      class GALGAS_uint & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBDDBitCountAtIndex (class GALGAS_uint constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBDDStartBitIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarNameAtIndex (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              class GALGAS_uint & outArgument3,
                                              class GALGAS_uint & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             class GALGAS_uint & outArgument3,
                                             class GALGAS_uint & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartBitIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialValueIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_varList ;
 
} ; // End of GALGAS_varList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_varList : public cGenericAbstractEnumerator {
  public: cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mVarName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBDDStartBitIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBDDBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mInitialValueIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_varList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mVarName ;
  public: inline GALGAS_lstring readProperty_mVarName (void) const {
    return mProperty_mVarName ;
  }

  public: GALGAS_lstringlist mProperty_mValueList ;
  public: inline GALGAS_lstringlist readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

  public: GALGAS_uint mProperty_mBDDStartBitIndex ;
  public: inline GALGAS_uint readProperty_mBDDStartBitIndex (void) const {
    return mProperty_mBDDStartBitIndex ;
  }

  public: GALGAS_uint mProperty_mBDDBitCount ;
  public: inline GALGAS_uint readProperty_mBDDBitCount (void) const {
    return mProperty_mBDDBitCount ;
  }

  public: GALGAS_uint mProperty_mInitialValueIndex ;
  public: inline GALGAS_uint readProperty_mInitialValueIndex (void) const {
    return mProperty_mInitialValueIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_varList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMVarName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarName = inValue ;
  }

  public: inline void setter_setMValueList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

  public: inline void setter_setMBDDStartBitIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBDDStartBitIndex = inValue ;
  }

  public: inline void setter_setMBDDBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBDDBitCount = inValue ;
  }

  public: inline void setter_setMInitialValueIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValueIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_varList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_varList_2D_element (const GALGAS_lstring & in_mVarName,
                                     const GALGAS_lstringlist & in_mValueList,
                                     const GALGAS_uint & in_mBDDStartBitIndex,
                                     const GALGAS_uint & in_mBDDBitCount,
                                     const GALGAS_uint & in_mInitialValueIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varList_2D_element extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                  const class GALGAS_uint & inOperand2,
                                                                  const class GALGAS_uint & inOperand3,
                                                                  const class GALGAS_uint & inOperand4
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@varList displayVarVarInfo' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarListForDisplay extensionGetter_displayVarVarInfo (const class GALGAS_varList & inObject,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@varList displayArgVarVarInfo' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarListForDisplay extensionGetter_displayArgVarVarInfo (const class GALGAS_varList & inObject,
                                                                            const class GALGAS_varList & constinArgument0,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transitionEventMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_transitionEventMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_transitionEventMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transitionEventMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_transitionEventMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_transitionEventMap (const GALGAS_transitionEventMap & inSource) ;
  public: GALGAS_transitionEventMap & operator = (const GALGAS_transitionEventMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transitionEventMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transitionEventMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_transitionEventMap constructor_mapWithMapToOverride (const class GALGAS_transitionEventMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_eventArgumentList & inOperand1,
                                                     const class GALGAS_binaryset & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_eventArgumentList constinArgument1,
                                                  class GALGAS_binaryset constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentListForKey (class GALGAS_eventArgumentList constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransitionBinarySetForKey (class GALGAS_binaryset constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_eventArgumentList & outArgument1,
                                                  class GALGAS_binaryset & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_mArgumentListForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mTransitionBinarySetForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transitionEventMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_eventArgumentList & outOperand1,
                                                    class GALGAS_binaryset & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_transitionEventMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_transitionEventMap ;
 
} ; // End of GALGAS_transitionEventMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_transitionEventMap : public cGenericAbstractEnumerator {
  public: cEnumerator_transitionEventMap (const GALGAS_transitionEventMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_eventArgumentList current_mArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_binaryset current_mTransitionBinarySet (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_transitionEventMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transitionEventMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@transitionEventMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_transitionEventMap : public cMapElement {
//--- Map attributes
  public: GALGAS_eventArgumentList mProperty_mArgumentList ;
  public: GALGAS_binaryset mProperty_mTransitionBinarySet ;

//--- Constructor
  public: cMapElement_transitionEventMap (const GALGAS_lstring & inKey,
                                          const GALGAS_eventArgumentList & in_mArgumentList,
                                          const GALGAS_binaryset & in_mTransitionBinarySet
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transitionEventMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transitionEventMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_eventArgumentList mProperty_mArgumentList ;
  public: inline GALGAS_eventArgumentList readProperty_mArgumentList (void) const {
    return mProperty_mArgumentList ;
  }

  public: GALGAS_binaryset mProperty_mTransitionBinarySet ;
  public: inline GALGAS_binaryset readProperty_mTransitionBinarySet (void) const {
    return mProperty_mTransitionBinarySet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transitionEventMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_transitionEventMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentList (const GALGAS_eventArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentList = inValue ;
  }

  public: inline void setter_setMTransitionBinarySet (const GALGAS_binaryset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTransitionBinarySet = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_transitionEventMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_transitionEventMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_eventArgumentList & in_mArgumentList,
                                                const GALGAS_binaryset & in_mTransitionBinarySet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transitionEventMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transitionEventMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_eventArgumentList & inOperand1,
                                                                             const class GALGAS_binaryset & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transitionEventMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transitionEventMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transitionEventMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @binarysetList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_binarysetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_binarysetList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_binarysetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabel,
                                                 const class GALGAS_binaryset & in_mSet
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_binarysetList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_binarysetList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_binarysetList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_binaryset & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_binarysetList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_binaryset & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_binarysetList add_operation (const GALGAS_binarysetList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_binarysetList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_binaryset constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_binaryset & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_binaryset & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_binaryset & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetAtIndex (class GALGAS_binaryset constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_binaryset & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_binaryset & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mSetAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_binarysetList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_binarysetList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_binarysetList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_binarysetList ;
 
} ; // End of GALGAS_binarysetList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_binarysetList : public cGenericAbstractEnumerator {
  public: cEnumerator_binarysetList (const GALGAS_binarysetList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabel (LOCATION_ARGS) const ;
  public: class GALGAS_binaryset current_mSet (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_binarysetList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @binarysetList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_binarysetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: inline GALGAS_lstring readProperty_mLabel (void) const {
    return mProperty_mLabel ;
  }

  public: GALGAS_binaryset mProperty_mSet ;
  public: inline GALGAS_binaryset readProperty_mSet (void) const {
    return mProperty_mSet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_binarysetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_binarysetList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabel (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabel = inValue ;
  }

  public: inline void setter_setMSet (const GALGAS_binaryset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSet = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_binarysetList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_binarysetList_2D_element (const GALGAS_lstring & in_mLabel,
                                           const GALGAS_binaryset & in_mSet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_binarysetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_binarysetList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_binaryset & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_binarysetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_binarysetList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_varMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_varMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_varMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_varMap (const GALGAS_varMap & inSource) ;
  public: GALGAS_varMap & operator = (const GALGAS_varMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varMap extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_varMap constructor_mapWithMapToOverride (const class GALGAS_varMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_enumConstantMap & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_uint & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstringlist constinArgument1,
                                                  class GALGAS_enumConstantMap constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  class GALGAS_uint constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBDDBitCountForKey (class GALGAS_uint constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBDDStartBitForKey (class GALGAS_uint constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantListForKey (class GALGAS_lstringlist constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantMapForKey (class GALGAS_enumConstantMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_enumConstantMap & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_uint & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBDDStartBitForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantListForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_mConstantMapForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varMap getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstringlist & outOperand1,
                                                    class GALGAS_enumConstantMap & outOperand2,
                                                    class GALGAS_uint & outOperand3,
                                                    class GALGAS_uint & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_varMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_varMap ;
 
} ; // End of GALGAS_varMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_varMap : public cGenericAbstractEnumerator {
  public: cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mConstantList (LOCATION_ARGS) const ;
  public: class GALGAS_enumConstantMap current_mConstantMap (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBDDStartBit (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBDDBitCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_varMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@varMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_varMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstringlist mProperty_mConstantList ;
  public: GALGAS_enumConstantMap mProperty_mConstantMap ;
  public: GALGAS_uint mProperty_mBDDStartBit ;
  public: GALGAS_uint mProperty_mBDDBitCount ;

//--- Constructor
  public: cMapElement_varMap (const GALGAS_lstring & inKey,
                              const GALGAS_lstringlist & in_mConstantList,
                              const GALGAS_enumConstantMap & in_mConstantMap,
                              const GALGAS_uint & in_mBDDStartBit,
                              const GALGAS_uint & in_mBDDBitCount
                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstringlist mProperty_mConstantList ;
  public: inline GALGAS_lstringlist readProperty_mConstantList (void) const {
    return mProperty_mConstantList ;
  }

  public: GALGAS_enumConstantMap mProperty_mConstantMap ;
  public: inline GALGAS_enumConstantMap readProperty_mConstantMap (void) const {
    return mProperty_mConstantMap ;
  }

  public: GALGAS_uint mProperty_mBDDStartBit ;
  public: inline GALGAS_uint readProperty_mBDDStartBit (void) const {
    return mProperty_mBDDStartBit ;
  }

  public: GALGAS_uint mProperty_mBDDBitCount ;
  public: inline GALGAS_uint readProperty_mBDDBitCount (void) const {
    return mProperty_mBDDBitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_varMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstantList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantList = inValue ;
  }

  public: inline void setter_setMConstantMap (const GALGAS_enumConstantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantMap = inValue ;
  }

  public: inline void setter_setMBDDStartBit (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBDDStartBit = inValue ;
  }

  public: inline void setter_setMBDDBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBDDBitCount = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_varMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_varMap_2D_element (const GALGAS_lstring & in_lkey,
                                    const GALGAS_lstringlist & in_mConstantList,
                                    const GALGAS_enumConstantMap & in_mConstantMap,
                                    const GALGAS_uint & in_mBDDStartBit,
                                    const GALGAS_uint & in_mBDDBitCount) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varMap_2D_element extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstringlist & inOperand1,
                                                                 const class GALGAS_enumConstantMap & inOperand2,
                                                                 const class GALGAS_uint & inOperand3,
                                                                 const class GALGAS_uint & inOperand4
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expression computeExpressionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_expression_computeExpressionBDD) (const class cPtr_expression * inObject,
                                                                          const class GALGAS_varMap constinArgument0,
                                                                          const class GALGAS_uint constinArgument1,
                                                                          class GALGAS_binaryset & outArgument2,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeExpressionBDD (const int32_t inClassIndex,
                                                extensionMethodSignature_expression_computeExpressionBDD inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_computeExpressionBDD (const class cPtr_expression * inObject,
                                               const GALGAS_varMap constin_inVarMap,
                                               const GALGAS_uint constin_inVarTotalBDDBitCount,
                                               GALGAS_binaryset & out_outExpressionBDD,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@comparisonRightOperand computeRightOperandBDD'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD) (const class cPtr_comparisonRightOperand * inObject,
                                                                                        const class GALGAS_varMap constinArgument0,
                                                                                        const class GALGAS_enumConstantMap constinArgument1,
                                                                                        const class GALGAS_uint constinArgument2,
                                                                                        const class GALGAS_uint constinArgument3,
                                                                                        const class GALGAS_enumComparisonOperator constinArgument4,
                                                                                        const class GALGAS_uint constinArgument5,
                                                                                        class GALGAS_binaryset & outArgument6,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeRightOperandBDD (const int32_t inClassIndex,
                                                  extensionMethodSignature_comparisonRightOperand_computeRightOperandBDD inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_computeRightOperandBDD (const class cPtr_comparisonRightOperand * inObject,
                                                 const GALGAS_varMap constin_inVarMap,
                                                 const GALGAS_enumConstantMap constin_inConstantMap,
                                                 const GALGAS_uint constin_leftVarBDDStartBit,
                                                 const GALGAS_uint constin_leftVarBDDBitCount,
                                                 const GALGAS_enumComparisonOperator constin_inOperator,
                                                 const GALGAS_uint constin_inVarTotalBDDBitCount,
                                                 GALGAS_binaryset & out_outExpressionBDD,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instruction computeInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_instruction_computeInstructionBDD) (const class cPtr_instruction * inObject,
                                                                            const class GALGAS_uint constinArgument0,
                                                                            const class GALGAS_varMap constinArgument1,
                                                                            const class GALGAS_functionMap constinArgument2,
                                                                            const class GALGAS_uint constinArgument3,
                                                                            class GALGAS_binaryset & ioArgument4,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeInstructionBDD (const int32_t inClassIndex,
                                                 extensionMethodSignature_instruction_computeInstructionBDD inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_computeInstructionBDD (const class cPtr_instruction * inObject,
                                                const GALGAS_uint constin_inVarTotalBDDBitCount,
                                                const GALGAS_varMap constin_inVarMap,
                                                const GALGAS_functionMap constin_inFunctionMap,
                                                const GALGAS_uint constin_inArgOldVarVarBDDBitCount,
                                                GALGAS_binaryset & io_ioArgOldVarVarValueSet,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionList computeInstructionListBDD'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_computeInstructionListBDD (const class GALGAS_instructionList inObject,
                                                const class GALGAS_uint constin_inVarTotalBDDBitCount,
                                                const class GALGAS_varMap constin_inVarMap,
                                                const class GALGAS_functionMap constin_inFunctionMap,
                                                const class GALGAS_uint constin_inArgOldVarVarBDDBitCount,
                                                class GALGAS_binaryset & io_ioArgOldVarVarValueSet,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@assignmentSourceExpression computeAssignmentInstructionBDD'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD) (const class cPtr_assignmentSourceExpression * inObject,
                                                                                                     const class GALGAS_varMap constinArgument0,
                                                                                                     const class GALGAS_functionMap constinArgument1,
                                                                                                     const class GALGAS_enumConstantMap constinArgument2,
                                                                                                     const class GALGAS_uint constinArgument3,
                                                                                                     const class GALGAS_uint constinArgument4,
                                                                                                     const class GALGAS_uint constinArgument5,
                                                                                                     class GALGAS_binaryset & ioArgument6,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeAssignmentInstructionBDD (const int32_t inClassIndex,
                                                           extensionMethodSignature_assignmentSourceExpression_computeAssignmentInstructionBDD inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_computeAssignmentInstructionBDD (const class cPtr_assignmentSourceExpression * inObject,
                                                          const GALGAS_varMap constin_inVarMap,
                                                          const GALGAS_functionMap constin_inFunctionMap,
                                                          const GALGAS_enumConstantMap constin_constantMap,
                                                          const GALGAS_uint constin_leftVarBDDStartBit,
                                                          const GALGAS_uint constin_leftVarBDDBitCount,
                                                          const GALGAS_uint constin_inArgOldVarVarBDDBitCount,
                                                          GALGAS_binaryset & io_ioArgOldVarVarValueSet,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@decoratedInstructionList generateCCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateCCode (const class GALGAS_decoratedInstructionList & inObject,
                                                   const class GALGAS_string & constinArgument0,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@decoratedInstruction generateCCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_decoratedInstruction_generateCCode) (const class cPtr_decoratedInstruction * inObject,
                                                                                        const class GALGAS_string constinArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCCode (const int32_t inClassIndex,
                                         enterExtensionGetter_decoratedInstruction_generateCCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCCode (const class cPtr_decoratedInstruction * inObject,
                                                       const GALGAS_string constin_inIndentationString,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@decoratedAssignmentSourceExpression generateSourceExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode) (const class cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                                                                       const class GALGAS_unifiedScalarTypeMap_2D_entry constinArgument0,
                                                                                                                       class C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateSourceExpressionCCode (const int32_t inClassIndex,
                                                         enterExtensionGetter_decoratedAssignmentSourceExpression_generateSourceExpressionCCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateSourceExpressionCCode (const class cPtr_decoratedAssignmentSourceExpression * inObject,
                                                                       const GALGAS_unifiedScalarTypeMap_2D_entry constin_inTargetTypeProxy,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@decoratedExpression generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_decoratedExpression_generateExpressionCCode) (const class cPtr_decoratedExpression * inObject,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedExpression_generateExpressionCCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateExpressionCCode (const class cPtr_decoratedExpression * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@decoratedComparisonRightOperand generateExpressionCCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode) (const class cPtr_decoratedComparisonRightOperand * inObject,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateExpressionCCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_decoratedComparisonRightOperand_generateExpressionCCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateExpressionCCode (const class cPtr_decoratedComparisonRightOperand * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constantAsComparisonRightOperand_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantAsComparisonRightOperand_2D_weak : public GALGAS_comparisonRightOperand_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_constantAsComparisonRightOperand_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constantAsComparisonRightOperand_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_constantAsComparisonRightOperand_2D_weak (const class GALGAS_constantAsComparisonRightOperand & inSource) ;

  public: GALGAS_constantAsComparisonRightOperand_2D_weak & operator = (const class GALGAS_constantAsComparisonRightOperand & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_constantAsComparisonRightOperand bang_constantAsComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constantAsComparisonRightOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantAsComparisonRightOperand_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantAsComparisonRightOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantAsComparisonRightOperand_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantAsComparisonRightOperand_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @attributeAsComparisonRightOperand_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_attributeAsComparisonRightOperand_2D_weak : public GALGAS_comparisonRightOperand_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_attributeAsComparisonRightOperand_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_attributeAsComparisonRightOperand_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_attributeAsComparisonRightOperand_2D_weak (const class GALGAS_attributeAsComparisonRightOperand & inSource) ;

  public: GALGAS_attributeAsComparisonRightOperand_2D_weak & operator = (const class GALGAS_attributeAsComparisonRightOperand & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_attributeAsComparisonRightOperand bang_attributeAsComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_attributeAsComparisonRightOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_attributeAsComparisonRightOperand_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_attributeAsComparisonRightOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeAsComparisonRightOperand_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonInExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonInExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_comparisonInExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_comparisonInExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonInExpression_2D_weak (const class GALGAS_comparisonInExpression & inSource) ;

  public: GALGAS_comparisonInExpression_2D_weak & operator = (const class GALGAS_comparisonInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonInExpression bang_comparisonInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonInExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonInExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonInExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varAsAssignmentSourceExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varAsAssignmentSourceExpression_2D_weak : public GALGAS_assignmentSourceExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varAsAssignmentSourceExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varAsAssignmentSourceExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varAsAssignmentSourceExpression_2D_weak (const class GALGAS_varAsAssignmentSourceExpression & inSource) ;

  public: GALGAS_varAsAssignmentSourceExpression_2D_weak & operator = (const class GALGAS_varAsAssignmentSourceExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varAsAssignmentSourceExpression bang_varAsAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varAsAssignmentSourceExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varAsAssignmentSourceExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varAsAssignmentSourceExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varAsAssignmentSourceExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constantAsAssignmentSourceExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantAsAssignmentSourceExpression_2D_weak : public GALGAS_assignmentSourceExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_constantAsAssignmentSourceExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constantAsAssignmentSourceExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_constantAsAssignmentSourceExpression_2D_weak (const class GALGAS_constantAsAssignmentSourceExpression & inSource) ;

  public: GALGAS_constantAsAssignmentSourceExpression_2D_weak & operator = (const class GALGAS_constantAsAssignmentSourceExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_constantAsAssignmentSourceExpression bang_constantAsAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constantAsAssignmentSourceExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantAsAssignmentSourceExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantAsAssignmentSourceExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantAsAssignmentSourceExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionAsAssignmentSourceExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionAsAssignmentSourceExpression_2D_weak : public GALGAS_assignmentSourceExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionAsAssignmentSourceExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionAsAssignmentSourceExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionAsAssignmentSourceExpression_2D_weak (const class GALGAS_functionAsAssignmentSourceExpression & inSource) ;

  public: GALGAS_functionAsAssignmentSourceExpression_2D_weak & operator = (const class GALGAS_functionAsAssignmentSourceExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionAsAssignmentSourceExpression bang_functionAsAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionAsAssignmentSourceExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionAsAssignmentSourceExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionAsAssignmentSourceExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionAsAssignmentSourceExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstruction_2D_weak : public GALGAS_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentInstruction_2D_weak (const class GALGAS_assignmentInstruction & inSource) ;

  public: GALGAS_assignmentInstruction_2D_weak & operator = (const class GALGAS_assignmentInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentInstruction bang_assignmentInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedComparisonInExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedComparisonInExpression : public GALGAS_decoratedExpression {
//--------------------------------- Default constructor
  public: GALGAS_decoratedComparisonInExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedComparisonInExpression (const class cPtr_decoratedComparisonInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAttributeName (void) const ;

  public: class GALGAS_enumComparisonOperator readProperty_mOperator (void) const ;

  public: class GALGAS_decoratedComparisonRightOperand readProperty_mRightOperand (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedComparisonInExpression extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedComparisonInExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_enumComparisonOperator & inOperand1,
                                                                               const class GALGAS_decoratedComparisonRightOperand & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedComparisonInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperator (class GALGAS_enumComparisonOperator inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperand (class GALGAS_decoratedComparisonRightOperand inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedComparisonInExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedComparisonInExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedComparisonInExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedComparisonInExpression : public cPtr_decoratedExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;
  public: GALGAS_enumComparisonOperator mProperty_mOperator ;
  public: GALGAS_decoratedComparisonRightOperand mProperty_mRightOperand ;

//--- Constructor
  public: cPtr_decoratedComparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                                const GALGAS_enumComparisonOperator & in_mOperator,
                                                const GALGAS_decoratedComparisonRightOperand & in_mRightOperand
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedComparisonInExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedComparisonInExpression_2D_weak : public GALGAS_decoratedExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedComparisonInExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedComparisonInExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedComparisonInExpression_2D_weak (const class GALGAS_decoratedComparisonInExpression & inSource) ;

  public: GALGAS_decoratedComparisonInExpression_2D_weak & operator = (const class GALGAS_decoratedComparisonInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedComparisonInExpression bang_decoratedComparisonInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedComparisonInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedComparisonInExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedComparisonInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedComparisonInExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedComparisonInExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedConstantAsComparisonRightOperand reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedConstantAsComparisonRightOperand : public GALGAS_decoratedComparisonRightOperand {
//--------------------------------- Default constructor
  public: GALGAS_decoratedConstantAsComparisonRightOperand (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedConstantAsComparisonRightOperand constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedConstantAsComparisonRightOperand (const class cPtr_decoratedConstantAsComparisonRightOperand * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedScalarTypeMap_2D_entry readProperty_mConstantTypeProxy (void) const ;

  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

  public: class GALGAS_uint readProperty_mConstantValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedConstantAsComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedConstantAsComparisonRightOperand constructor_new (const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_uint & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedConstantAsComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantTypeProxy (class GALGAS_unifiedScalarTypeMap_2D_entry inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantValue (class GALGAS_uint inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedConstantAsComparisonRightOperand class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedConstantAsComparisonRightOperand class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedConstantAsComparisonRightOperand : public cPtr_decoratedComparisonRightOperand {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mConstantTypeProxy ;
  public: GALGAS_lstring mProperty_mConstantName ;
  public: GALGAS_uint mProperty_mConstantValue ;

//--- Constructor
  public: cPtr_decoratedConstantAsComparisonRightOperand (const GALGAS_unifiedScalarTypeMap_2D_entry & in_mConstantTypeProxy,
                                                          const GALGAS_lstring & in_mConstantName,
                                                          const GALGAS_uint & in_mConstantValue
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedConstantAsComparisonRightOperand_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak : public GALGAS_decoratedComparisonRightOperand_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak (const class GALGAS_decoratedConstantAsComparisonRightOperand & inSource) ;

  public: GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak & operator = (const class GALGAS_decoratedConstantAsComparisonRightOperand & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedConstantAsComparisonRightOperand bang_decoratedConstantAsComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedConstantAsComparisonRightOperand_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedAttributeAsComparisonRightOperand reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedAttributeAsComparisonRightOperand : public GALGAS_decoratedComparisonRightOperand {
//--------------------------------- Default constructor
  public: GALGAS_decoratedAttributeAsComparisonRightOperand (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedAttributeAsComparisonRightOperand constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedAttributeAsComparisonRightOperand (const class cPtr_decoratedAttributeAsComparisonRightOperand * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAttributeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedAttributeAsComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedAttributeAsComparisonRightOperand constructor_new (const class GALGAS_lstring & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedAttributeAsComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedAttributeAsComparisonRightOperand class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedAttributeAsComparisonRightOperand class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedAttributeAsComparisonRightOperand : public cPtr_decoratedComparisonRightOperand {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;

//--- Constructor
  public: cPtr_decoratedAttributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedAttributeAsComparisonRightOperand_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak : public GALGAS_decoratedComparisonRightOperand_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak (const class GALGAS_decoratedAttributeAsComparisonRightOperand & inSource) ;

  public: GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak & operator = (const class GALGAS_decoratedAttributeAsComparisonRightOperand & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedAttributeAsComparisonRightOperand bang_decoratedAttributeAsComparisonRightOperand_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedAttributeAsComparisonRightOperand_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentDecoratedInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentDecoratedInstruction : public GALGAS_decoratedInstruction {
//--------------------------------- Default constructor
  public: GALGAS_assignmentDecoratedInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentDecoratedInstruction (const class cPtr_assignmentDecoratedInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedScalarTypeMap_2D_entry readProperty_mTargetTypeProxy (void) const ;

  public: class GALGAS_lstring readProperty_mTargetVarName (void) const ;

  public: class GALGAS_decoratedAssignmentSourceExpression readProperty_mSourceExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentDecoratedInstruction extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentDecoratedInstruction constructor_new (const class GALGAS_unifiedScalarTypeMap_2D_entry & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_decoratedAssignmentSourceExpression & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentDecoratedInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSourceExpression (class GALGAS_decoratedAssignmentSourceExpression inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetTypeProxy (class GALGAS_unifiedScalarTypeMap_2D_entry inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetVarName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentDecoratedInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentDecoratedInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentDecoratedInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assignmentDecoratedInstruction : public cPtr_decoratedInstruction {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedScalarTypeMap_2D_entry mProperty_mTargetTypeProxy ;
  public: GALGAS_lstring mProperty_mTargetVarName ;
  public: GALGAS_decoratedAssignmentSourceExpression mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_assignmentDecoratedInstruction (const GALGAS_unifiedScalarTypeMap_2D_entry & in_mTargetTypeProxy,
                                               const GALGAS_lstring & in_mTargetVarName,
                                               const GALGAS_decoratedAssignmentSourceExpression & in_mSourceExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentDecoratedInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentDecoratedInstruction_2D_weak : public GALGAS_decoratedInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentDecoratedInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentDecoratedInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentDecoratedInstruction_2D_weak (const class GALGAS_assignmentDecoratedInstruction & inSource) ;

  public: GALGAS_assignmentDecoratedInstruction_2D_weak & operator = (const class GALGAS_assignmentDecoratedInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentDecoratedInstruction bang_assignmentDecoratedInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentDecoratedInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentDecoratedInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentDecoratedInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentDecoratedInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentDecoratedInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @attributeInDecoratedAssignmentSourceExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_attributeInDecoratedAssignmentSourceExpression : public GALGAS_decoratedAssignmentSourceExpression {
//--------------------------------- Default constructor
  public: GALGAS_attributeInDecoratedAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_attributeInDecoratedAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_attributeInDecoratedAssignmentSourceExpression (const class cPtr_attributeInDecoratedAssignmentSourceExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_attributeInDecoratedAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_attributeInDecoratedAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_attributeInDecoratedAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMVarName (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeInDecoratedAssignmentSourceExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @attributeInDecoratedAssignmentSourceExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_attributeInDecoratedAssignmentSourceExpression : public cPtr_decoratedAssignmentSourceExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;

//--- Constructor
  public: cPtr_attributeInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mVarName
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @attributeInDecoratedAssignmentSourceExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak : public GALGAS_decoratedAssignmentSourceExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak (const class GALGAS_attributeInDecoratedAssignmentSourceExpression & inSource) ;

  public: GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak & operator = (const class GALGAS_attributeInDecoratedAssignmentSourceExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_attributeInDecoratedAssignmentSourceExpression bang_attributeInDecoratedAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeInDecoratedAssignmentSourceExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @cstInDecoratedAssignmentSourceExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_cstInDecoratedAssignmentSourceExpression : public GALGAS_decoratedAssignmentSourceExpression {
//--------------------------------- Default constructor
  public: GALGAS_cstInDecoratedAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_cstInDecoratedAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_cstInDecoratedAssignmentSourceExpression (const class cPtr_cstInDecoratedAssignmentSourceExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mEnumCstName (void) const ;

  public: class GALGAS_uint readProperty_mValue (void) const ;

  public: class GALGAS_uint readProperty_mBDDBitCount (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_cstInDecoratedAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_cstInDecoratedAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_uint & inOperand1,
                                                                                        const class GALGAS_uint & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_cstInDecoratedAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBDDBitCount (class GALGAS_uint inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumCstName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_uint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_cstInDecoratedAssignmentSourceExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @cstInDecoratedAssignmentSourceExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_cstInDecoratedAssignmentSourceExpression : public cPtr_decoratedAssignmentSourceExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mEnumCstName ;
  public: GALGAS_uint mProperty_mValue ;
  public: GALGAS_uint mProperty_mBDDBitCount ;

//--- Constructor
  public: cPtr_cstInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mEnumCstName,
                                                         const GALGAS_uint & in_mValue,
                                                         const GALGAS_uint & in_mBDDBitCount
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @cstInDecoratedAssignmentSourceExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak : public GALGAS_decoratedAssignmentSourceExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak (const class GALGAS_cstInDecoratedAssignmentSourceExpression & inSource) ;

  public: GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak & operator = (const class GALGAS_cstInDecoratedAssignmentSourceExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_cstInDecoratedAssignmentSourceExpression bang_cstInDecoratedAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_cstInDecoratedAssignmentSourceExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionInDecoratedAssignmentSourceExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionInDecoratedAssignmentSourceExpression : public GALGAS_decoratedAssignmentSourceExpression {
//--------------------------------- Default constructor
  public: GALGAS_functionInDecoratedAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionInDecoratedAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_functionInDecoratedAssignmentSourceExpression (const class cPtr_functionInDecoratedAssignmentSourceExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_lstring readProperty_mOperandName (void) const ;

  public: class GALGAS_decoratedFunctionValueList readProperty_mDecoratedFunctionValueList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionInDecoratedAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionInDecoratedAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             const class GALGAS_decoratedFunctionValueList & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionInDecoratedAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDecoratedFunctionValueList (class GALGAS_decoratedFunctionValueList inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionInDecoratedAssignmentSourceExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionInDecoratedAssignmentSourceExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_functionInDecoratedAssignmentSourceExpression : public cPtr_decoratedAssignmentSourceExpression {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_lstring mProperty_mOperandName ;
  public: GALGAS_decoratedFunctionValueList mProperty_mDecoratedFunctionValueList ;

//--- Constructor
  public: cPtr_functionInDecoratedAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                              const GALGAS_lstring & in_mOperandName,
                                                              const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionInDecoratedAssignmentSourceExpression_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak : public GALGAS_decoratedAssignmentSourceExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak (const class GALGAS_functionInDecoratedAssignmentSourceExpression & inSource) ;

  public: GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak & operator = (const class GALGAS_functionInDecoratedAssignmentSourceExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionInDecoratedAssignmentSourceExpression bang_functionInDecoratedAssignmentSourceExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionInDecoratedAssignmentSourceExpression_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR omnibus_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_omnibus_5F_grammar : public cParser_omnibus_5F_syntax {
//------------------------------------- 'assignment_source_expression' non terminal
//--- 'parse' label
  public: virtual void nt_assignment_5F_source_5F_expression_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_assignment_5F_source_5F_expression_ (GALGAS_assignmentSourceExpression & outArgument0,
                                                               C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'comparison_right_operand' non terminal
//--- 'parse' label
  public: virtual void nt_comparison_5F_right_5F_operand_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_comparison_5F_right_5F_operand_ (GALGAS_comparisonRightOperand & outArgument0,
                                                           C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'else_part' non terminal
//--- 'parse' label
  public: virtual void nt_else_5F_part_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_else_5F_part_ (GALGAS_instructionList & outArgument0,
                                         C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_declaration_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'enum_function' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_function_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_function_ (GALGAS_ast & ioArgument0,
                                             C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public: virtual void nt_expression_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GALGAS_expression & outArgument0,
                                       C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'expression1' non terminal
//--- 'parse' label
  public: virtual void nt_expression_31__parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_31__ (GALGAS_expression & outArgument0,
                                           C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'expression2' non terminal
//--- 'parse' label
  public: virtual void nt_expression_32__parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_32__ (GALGAS_expression & outArgument0,
                                           C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'expression4' non terminal
//--- 'parse' label
  public: virtual void nt_expression_34__parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_34__ (GALGAS_expression & outArgument0,
                                           C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_ (GALGAS_instruction & outArgument0,
                                        C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GALGAS_instructionList & ioArgument0,
                                                C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'machine' non terminal
//--- 'parse' label
  public: virtual void nt_machine_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_machine_ (GALGAS_ast & ioArgument0,
                                    C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'scenario' non terminal
//--- 'parse' label
  public: virtual void nt_scenario_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_scenario_ (GALGAS_ast & ioArgument0,
                                     C_Lexique_lexicalAnalyzer * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (C_Lexique_lexicalAnalyzer * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GALGAS_ast & outArgument0,
                                            C_Lexique_lexicalAnalyzer * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_ast & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_ast & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

  public: virtual int32_t select_omnibus_5F_syntax_0 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_1 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_2 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_3 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_4 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_5 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_6 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_7 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_8 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_9 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_10 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_11 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_12 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_13 (C_Lexique_lexicalAnalyzer *) ;

  public: virtual int32_t select_omnibus_5F_syntax_14 (C_Lexique_lexicalAnalyzer *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@varList displayVarInfo' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_machineVarListForDisplay extensionGetter_displayVarInfo (const class GALGAS_varList & inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

