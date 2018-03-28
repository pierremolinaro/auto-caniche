#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-1.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Filewrapper 'CCodeGenerationTemplates'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_CCodeGenerationTemplates ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'CCodeGenerationTemplates enumerationDeclaration'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_enumerationDeclaration (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_ENUMERATION_5F_NAME,
                                                                                   const class GALGAS_lstringlist & in_CONSTANT_5F_LIST
                                                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Filewrapper template 'CCodeGenerationTemplates machineDeclaration'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_machineDeclaration (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_FILE_5F_NAME,
                                                                               const class GALGAS_unifiedScalarTypeMap & in_ENUM_5F_DECLARATION_5F_MAP,
                                                                               const class GALGAS_string & in_MACHINE_5F_NAME,
                                                                               const class GALGAS_machineVarList & in_ATTRIBUTE_5F_LIST,
                                                                               const class GALGAS_eventMap & in_EVENT_5F_MAP
                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Filewrapper template 'CCodeGenerationTemplates machineImplementation'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_machineImplementation (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_FILE_5F_NAME,
                                                                                  const class GALGAS_unifiedScalarTypeMap & in_ENUM_5F_DECLARATION_5F_MAP,
                                                                                  const class GALGAS_string & in_MACHINE_5F_NAME,
                                                                                  const class GALGAS_machineVarList & in_ATTRIBUTE_5F_LIST,
                                                                                  const class GALGAS_eventMap & in_EVENT_5F_MAP,
                                                                                  const class GALGAS_functionMap & in_FUNCTION_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Filewrapper template 'CCodeGenerationTemplates functionDeclaration'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_functionDeclaration (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_FILE_5F_NAME,
                                                                                const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                const class GALGAS_string & in_RESULT_5F_TYPE_5F_NAME,
                                                                                const class GALGAS_uint & in_OPERAND_5F_VALUE_5F_COUNT
                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'CCodeGenerationTemplates functionImplementation'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_CCodeGenerationTemplates_functionImplementation (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_FILE_5F_NAME,
                                                                                   const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                   const class GALGAS_string & in_RESULT_5F_TYPE_5F_NAME,
                                                                                   const class GALGAS_decoratedFunctionValueList & in_VALUE_5F_LIST
                                                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'performCCodeGeneration'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_performCCodeGeneration (const class GALGAS_string constinArgument0,
                                     const class GALGAS_unifiedScalarTypeMap constinArgument1,
                                     const class GALGAS_functionMap constinArgument2,
                                     const class GALGAS_machineMap constinArgument3,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

