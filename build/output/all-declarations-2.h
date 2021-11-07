#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@machineList-element performMachineDynamicAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_performMachineDynamicAnalysis (const class GALGAS_machineList_2D_element inObject,
                                                    const class GALGAS_string constin_inSourceFileName,
                                                    const class GALGAS_unifiedScalarTypeMap constin_inUnifiedScalarTypeMap,
                                                    const class GALGAS_scenarioList constin_inScenarioList,
                                                    const class GALGAS_functionMap constin_inFunctionMap,
                                                    class GALGAS_string & io_ioGenerationString,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'nameForValue'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_nameForValue (const class GALGAS_uint_36__34_ & constinArgument0,
                                           const class GALGAS_varList & constinArgument1,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addTransitionsToGraphvizString'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addTransitionsToGraphvizString (const class GALGAS_eventDeclarationList_2D_element constinArgument0,
                                             const class GALGAS_uint constinArgument1,
                                             const class GALGAS_binaryset constinArgument2,
                                             const class GALGAS_varList constinArgument3,
                                             const class GALGAS_uint constinArgument4,
                                             const class GALGAS_varList constinArgument5,
                                             class GALGAS_string & ioArgument6,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayArgVarVarValueSet'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayArgVarVarValueSet (const class GALGAS_string constinArgument0,
                                       const class GALGAS_binaryset constinArgument1,
                                       const class GALGAS_varList constinArgument2,
                                       const class GALGAS_varList constinArgument3,
                                       class GALGAS_string & ioArgument4,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displaySeparator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displaySeparator (const class GALGAS_machineVarListForDisplay constinArgument0,
                               class GALGAS_string & ioArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayValue (const class GALGAS_machineVarListForDisplay constinArgument0,
                           const class GALGAS_uint_36__34_ constinArgument1,
                           class GALGAS_string & ioArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayVarNames'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayVarNames (const class GALGAS_machineVarListForDisplay constinArgument0,
                              class GALGAS_string & ioArgument1,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayVarValueSet'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayVarValueSet (const class GALGAS_string constinArgument0,
                                 const class GALGAS_binaryset constinArgument1,
                                 const class GALGAS_varList constinArgument2,
                                 class GALGAS_string & ioArgument3,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayVarVarValueSet'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayVarVarValueSet (const class GALGAS_string constinArgument0,
                                    const class GALGAS_binaryset constinArgument1,
                                    const class GALGAS_varList constinArgument2,
                                    class GALGAS_string & ioArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_omnibus_5F_options_generateCCode ;

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
//Routine 'performStaticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performStaticAnalysis (const class GALGAS_ast constinArgument0,
                                    class GALGAS_unifiedScalarTypeMap & outArgument1,
                                    class GALGAS_functionMap & outArgument2,
                                    class GALGAS_machineMap & outArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performDisplay (const class GALGAS_string constinArgument0,
                             const class GALGAS_binaryset constinArgument1,
                             const class GALGAS_machineVarListForDisplay constinArgument2,
                             class GALGAS_string & ioArgument3,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performDynamicAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performDynamicAnalysis (const class GALGAS_string constinArgument0,
                                     const class GALGAS_ast constinArgument1,
                                     const class GALGAS_unifiedScalarTypeMap constinArgument2,
                                     const class GALGAS_functionMap constinArgument3,
                                     const class GALGAS_machineMap constinArgument4,
                                     class GALGAS_string & outArgument5,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'CCodeGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_CCodeGenerationTemplates ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates enumerationDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_enumerationDeclaration (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_ENUMERATION_5F_NAME,
                                                                                   const class GALGAS_lstringlist & in_CONSTANT_5F_LIST
                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates machineDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_machineDeclaration (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_FILE_5F_NAME,
                                                                               const class GALGAS_unifiedScalarTypeMap & in_ENUM_5F_DECLARATION_5F_MAP,
                                                                               const class GALGAS_string & in_MACHINE_5F_NAME,
                                                                               const class GALGAS_machineVarList & in_ATTRIBUTE_5F_LIST,
                                                                               const class GALGAS_eventMap & in_EVENT_5F_MAP
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates machineImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_machineImplementation (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_FILE_5F_NAME,
                                                                                  const class GALGAS_unifiedScalarTypeMap & in_ENUM_5F_DECLARATION_5F_MAP,
                                                                                  const class GALGAS_string & in_MACHINE_5F_NAME,
                                                                                  const class GALGAS_machineVarList & in_ATTRIBUTE_5F_LIST,
                                                                                  const class GALGAS_eventMap & in_EVENT_5F_MAP,
                                                                                  const class GALGAS_functionMap & in_FUNCTION_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates functionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_functionDeclaration (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_FILE_5F_NAME,
                                                                                const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                const class GALGAS_string & in_RESULT_5F_TYPE_5F_NAME,
                                                                                const class GALGAS_uint & in_OPERAND_5F_VALUE_5F_COUNT
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'CCodeGenerationTemplates functionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_functionImplementation (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_FILE_5F_NAME,
                                                                                   const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                   const class GALGAS_string & in_RESULT_5F_TYPE_5F_NAME,
                                                                                   const class GALGAS_decoratedFunctionValueList & in_VALUE_5F_LIST
                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performCCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performCCodeGeneration (const class GALGAS_string constinArgument0,
                                     const class GALGAS_unifiedScalarTypeMap constinArgument1,
                                     const class GALGAS_functionMap constinArgument2,
                                     const class GALGAS_machineMap constinArgument3,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

