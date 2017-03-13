#ifndef all_2D_declarations_2D__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               LEXIQUE lexicalAnalyzer                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    R O U T I N E S                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    F U N C T I O N S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                       T O K E N    C L A S S                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_lexicalAnalyzer : public cToken {
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;

  public : cTokenFor_lexicalAnalyzer (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                     S C A N N E R    C L A S S                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

class C_Lexique_lexicalAnalyzer : public C_Lexique {
//--- Constructors
  public : C_Lexique_lexicalAnalyzer (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_lexicalAnalyzer (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_lexicalAnalyzer (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_integer,
   kToken_literal_5F_string,
   kToken_enum_2D_type_2D_name,
   kToken_comment,
   kToken_assert,
   kToken_do,
   kToken_else,
   kToken_enum,
   kToken_ensures,
   kToken_event,
   kToken_function,
   kToken_if,
   kToken_invariant,
   kToken_machine,
   kToken_old,
   kToken_scenario,
   kToken_system,
   kToken_var,
   kToken__3A_,
   kToken__2C_,
   kToken__21_,
   kToken__7B_,
   kToken__7D_,
   kToken__2D__3E_,
   kToken__3D_,
   kToken__5B_,
   kToken__5D_,
   kToken__3D__3D_,
   kToken__26_,
   kToken__7C_,
   kToken__21__3D_,
   kToken__28_,
   kToken__29_,
   kToken__3F_,
   kToken__2E_} ;

//--- Key words table 'keyWordList'
  public : static int16_t search_into_keyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public : C_String attributeValue_tokenString (void) const ;
  public : uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys

//--- Unicode test functions

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 36 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (cTokenFor_lexicalAnalyzer & ioToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @enumTypeList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumTypeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumTypeList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumTypeList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEnumListName,
                                                  const class GALGAS_lstringlist & in_mEnumConstantList,
                                                  const class GALGAS_bool & in_mGenerateCode
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumTypeList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumTypeList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_enumTypeList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstringlist & inOperand1,
                                                                       const class GALGAS_bool & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumTypeList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumTypeList add_operation (const GALGAS_enumTypeList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumListNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateCodeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumTypeList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumTypeList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumTypeList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumTypeList ;
 
} ; // End of GALGAS_enumTypeList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumTypeList : public cGenericAbstractEnumerator {
  public : cEnumerator_enumTypeList (const GALGAS_enumTypeList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mEnumListName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mEnumConstantList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mGenerateCode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumTypeList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @enumTypeList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumTypeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mEnumListName ;

  public : GALGAS_lstringlist mProperty_mEnumConstantList ;

  public : GALGAS_bool mProperty_mGenerateCode ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumTypeList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumTypeList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumTypeList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumTypeList_2D_element (const GALGAS_lstring & in_mEnumListName,
                                           const GALGAS_lstringlist & in_mEnumConstantList,
                                           const GALGAS_bool & in_mGenerateCode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumTypeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumTypeList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstringlist & inOperand1,
                                                                        const class GALGAS_bool & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumTypeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumListName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateCode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumTypeList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumVarDeclarationList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumVarDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumVarDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumVarDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEnumTypeName,
                                                  const class GALGAS_lstring & in_mEnumVarName,
                                                  const class GALGAS_lstring & in_mConstantName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumVarDeclarationList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumVarDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_enumVarDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumVarDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumVarDeclarationList add_operation (const GALGAS_enumVarDeclarationList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumVarDeclarationList ;
 
} ; // End of GALGAS_enumVarDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumVarDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_enumVarDeclarationList (const GALGAS_enumVarDeclarationList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mEnumTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mEnumVarName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mConstantName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumVarDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumVarDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @enumVarDeclarationList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumVarDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mEnumTypeName ;

  public : GALGAS_lstring mProperty_mEnumVarName ;

  public : GALGAS_lstring mProperty_mConstantName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumVarDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumVarDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumVarDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumVarDeclarationList_2D_element (const GALGAS_lstring & in_mEnumTypeName,
                                                     const GALGAS_lstring & in_mEnumVarName,
                                                     const GALGAS_lstring & in_mConstantName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumVarDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumVarDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumVarDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumVarDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumVarDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @eventDeclarationList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_eventDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_eventDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_eventDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEventName,
                                                  const class GALGAS_eventArgumentList & in_mEventArgumentList,
                                                  const class GALGAS_instructionList & in_mEventInstructionList,
                                                  const class GALGAS_expressionList & in_mEnsureExpressionList,
                                                  const class GALGAS_location & in_mEndOfEnsureExpressionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_eventDeclarationList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_eventDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_eventDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_eventArgumentList & inOperand1,
                                                                               const class GALGAS_instructionList & inOperand2,
                                                                               const class GALGAS_expressionList & inOperand3,
                                                                               const class GALGAS_location & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_eventDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_eventArgumentList & inOperand1,
                                                      const class GALGAS_instructionList & inOperand2,
                                                      const class GALGAS_expressionList & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_eventDeclarationList add_operation (const GALGAS_eventDeclarationList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_eventArgumentList constinArgument1,
                                                       class GALGAS_instructionList constinArgument2,
                                                       class GALGAS_expressionList constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_eventArgumentList & outArgument1,
                                                  class GALGAS_instructionList & outArgument2,
                                                  class GALGAS_expressionList & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_eventArgumentList & outArgument1,
                                                 class GALGAS_instructionList & outArgument2,
                                                 class GALGAS_expressionList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_eventArgumentList & outArgument1,
                                                       class GALGAS_instructionList & outArgument2,
                                                       class GALGAS_expressionList & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_eventArgumentList & outArgument1,
                                               class GALGAS_instructionList & outArgument2,
                                               class GALGAS_expressionList & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_eventArgumentList & outArgument1,
                                              class GALGAS_instructionList & outArgument2,
                                              class GALGAS_expressionList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnsureExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_mEnsureExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_mEventArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_mEventInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEventNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_eventDeclarationList ;
 
} ; // End of GALGAS_eventDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_eventDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_eventDeclarationList (const GALGAS_eventDeclarationList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mEventName (LOCATION_ARGS) const ;
  public : class GALGAS_eventArgumentList current_mEventArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionList current_mEventInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_expressionList current_mEnsureExpressionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfEnsureExpressionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_eventDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @eventArgumentList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_eventArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_eventArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_eventArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mArgumentTypeName,
                                                  const class GALGAS_lstring & in_mArgumentVarName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_eventArgumentList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_eventArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_eventArgumentList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_eventArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_eventArgumentList add_operation (const GALGAS_eventArgumentList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_eventArgumentList ;
 
} ; // End of GALGAS_eventArgumentList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_eventArgumentList : public cGenericAbstractEnumerator {
  public : cEnumerator_eventArgumentList (const GALGAS_eventArgumentList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mArgumentTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mArgumentVarName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_eventArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @expressionList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_expressionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_expressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLabel,
                                                  const class GALGAS_expression & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_expressionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_expressionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_expression & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_expressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_expression & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_expressionList add_operation (const GALGAS_expressionList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_expression constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_expression & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_expression & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_expression & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_expression & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_expression & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_expressionList ;
 
} ; // End of GALGAS_expressionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_expressionList : public cGenericAbstractEnumerator {
  public : cEnumerator_expressionList (const GALGAS_expressionList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLabel (LOCATION_ARGS) const ;
  public : class GALGAS_expression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_expressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @instructionList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_instruction & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_instructionList constructor_listWithValue (const class GALGAS_instruction & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_instruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_instructionList add_operation (const GALGAS_instructionList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_instruction constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_instruction & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_instruction & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_instruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_instructionList ;
 
} ; // End of GALGAS_instructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_instructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_instructionList (const GALGAS_instructionList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @eventDeclarationList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_eventDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mEventName ;

  public : GALGAS_eventArgumentList mProperty_mEventArgumentList ;

  public : GALGAS_instructionList mProperty_mEventInstructionList ;

  public : GALGAS_expressionList mProperty_mEnsureExpressionList ;

  public : GALGAS_location mProperty_mEndOfEnsureExpressionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_eventDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_eventDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_eventDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_eventDeclarationList_2D_element (const GALGAS_lstring & in_mEventName,
                                                   const GALGAS_eventArgumentList & in_mEventArgumentList,
                                                   const GALGAS_instructionList & in_mEventInstructionList,
                                                   const GALGAS_expressionList & in_mEnsureExpressionList,
                                                   const GALGAS_location & in_mEndOfEnsureExpressionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_eventDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_eventDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_eventArgumentList & inOperand1,
                                                                                const class GALGAS_instructionList & inOperand2,
                                                                                const class GALGAS_expressionList & inOperand3,
                                                                                const class GALGAS_location & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_eventDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnsureExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_mEnsureExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventArgumentList getter_mEventArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_mEventInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEventName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_eventDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @eventArgumentList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_eventArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mArgumentTypeName ;

  public : GALGAS_lstring mProperty_mArgumentVarName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_eventArgumentList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_eventArgumentList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_eventArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_eventArgumentList_2D_element (const GALGAS_lstring & in_mArgumentTypeName,
                                                const GALGAS_lstring & in_mArgumentVarName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_eventArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_eventArgumentList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_eventArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_eventArgumentList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventArgumentList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @instruction class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_instruction (void) ;

//---
  public : inline const class cPtr_instruction * ptr (void) const { return (const cPtr_instruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_instruction (const cPtr_instruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instruction extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @instruction class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_instruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @instructionList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_instruction mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_instructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instructionList_2D_element (const GALGAS_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionList_2D_element constructor_new (const class GALGAS_instruction & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @expression class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_expression (void) ;

//---
  public : inline const class cPtr_expression * ptr (void) const { return (const cPtr_expression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expression (const cPtr_expression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expression extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @expression class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_expression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @expressionList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mLabel ;

  public : GALGAS_expression mProperty_mExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_expressionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_expressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_expressionList_2D_element (const GALGAS_lstring & in_mLabel,
                                             const GALGAS_expression & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_expressionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_expression & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @machineList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_machineList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_machineList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_machineList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mMachineName,
                                                  const class GALGAS_enumVarDeclarationList & in_mEnumVarDeclarationList,
                                                  const class GALGAS_expressionList & in_mInvariantExpressionList,
                                                  const class GALGAS_eventDeclarationList & in_mEventList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_machineList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_enumVarDeclarationList & inOperand1,
                                                                      const class GALGAS_expressionList & inOperand2,
                                                                      const class GALGAS_eventDeclarationList & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_machineList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_enumVarDeclarationList & inOperand1,
                                                      const class GALGAS_expressionList & inOperand2,
                                                      const class GALGAS_eventDeclarationList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_machineList add_operation (const GALGAS_machineList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_enumVarDeclarationList constinArgument1,
                                                       class GALGAS_expressionList constinArgument2,
                                                       class GALGAS_eventDeclarationList constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_enumVarDeclarationList & outArgument1,
                                                  class GALGAS_expressionList & outArgument2,
                                                  class GALGAS_eventDeclarationList & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_enumVarDeclarationList & outArgument1,
                                                 class GALGAS_expressionList & outArgument2,
                                                 class GALGAS_eventDeclarationList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_enumVarDeclarationList & outArgument1,
                                                       class GALGAS_expressionList & outArgument2,
                                                       class GALGAS_eventDeclarationList & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_enumVarDeclarationList & outArgument1,
                                               class GALGAS_expressionList & outArgument2,
                                               class GALGAS_eventDeclarationList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_enumVarDeclarationList & outArgument1,
                                              class GALGAS_expressionList & outArgument2,
                                              class GALGAS_eventDeclarationList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_mEnumVarDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_mEventListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_mInvariantExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_machineList ;
 
} ; // End of GALGAS_machineList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_machineList : public cGenericAbstractEnumerator {
  public : cEnumerator_machineList (const GALGAS_machineList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mMachineName (LOCATION_ARGS) const ;
  public : class GALGAS_enumVarDeclarationList current_mEnumVarDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_expressionList current_mInvariantExpressionList (LOCATION_ARGS) const ;
  public : class GALGAS_eventDeclarationList current_mEventList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_machineList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @machineList_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_machineList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mMachineName ;

  public : GALGAS_enumVarDeclarationList mProperty_mEnumVarDeclarationList ;

  public : GALGAS_expressionList mProperty_mInvariantExpressionList ;

  public : GALGAS_eventDeclarationList mProperty_mEventList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_machineList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_machineList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_machineList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_machineList_2D_element (const GALGAS_lstring & in_mMachineName,
                                          const GALGAS_enumVarDeclarationList & in_mEnumVarDeclarationList,
                                          const GALGAS_expressionList & in_mInvariantExpressionList,
                                          const GALGAS_eventDeclarationList & in_mEventList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_enumVarDeclarationList & inOperand1,
                                                                       const class GALGAS_expressionList & inOperand2,
                                                                       const class GALGAS_eventDeclarationList & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_machineList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumVarDeclarationList getter_mEnumVarDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventDeclarationList getter_mEventList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionList getter_mInvariantExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @implicationExpression class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_implicationExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_implicationExpression (void) ;

//---
  public : inline const class cPtr_implicationExpression * ptr (void) const { return (const cPtr_implicationExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_implicationExpression (const cPtr_implicationExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_implicationExpression extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_implicationExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                                      const class GALGAS_expression & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_implicationExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeft (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRight (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implicationExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicationExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @implicationExpression class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_implicationExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mProperty_mLeft ;
  public : GALGAS_expression mProperty_mRight ;

//--- Constructor
  public : cPtr_implicationExpression (const GALGAS_expression & in_mLeft,
                                       const GALGAS_expression & in_mRight
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeft (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRight (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @logicalOrExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_logicalOrExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_logicalOrExpression (void) ;

//---
  public : inline const class cPtr_logicalOrExpression * ptr (void) const { return (const cPtr_logicalOrExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_logicalOrExpression (const cPtr_logicalOrExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_logicalOrExpression extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_logicalOrExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                                    const class GALGAS_expression & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_logicalOrExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeft (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRight (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalOrExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalOrExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @logicalOrExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_logicalOrExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mProperty_mLeft ;
  public : GALGAS_expression mProperty_mRight ;

//--- Constructor
  public : cPtr_logicalOrExpression (const GALGAS_expression & in_mLeft,
                                     const GALGAS_expression & in_mRight
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeft (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRight (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @logicalAndExpression class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_logicalAndExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_logicalAndExpression (void) ;

//---
  public : inline const class cPtr_logicalAndExpression * ptr (void) const { return (const cPtr_logicalAndExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_logicalAndExpression (const cPtr_logicalAndExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_logicalAndExpression extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_logicalAndExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                                     const class GALGAS_expression & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_logicalAndExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeft (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRight (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalAndExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalAndExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @logicalAndExpression class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_logicalAndExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mProperty_mLeft ;
  public : GALGAS_expression mProperty_mRight ;

//--- Constructor
  public : cPtr_logicalAndExpression (const GALGAS_expression & in_mLeft,
                                      const GALGAS_expression & in_mRight
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeft (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRight (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @comparisonRightOperand class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_comparisonRightOperand : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_comparisonRightOperand (void) ;

//---
  public : inline const class cPtr_comparisonRightOperand * ptr (void) const { return (const cPtr_comparisonRightOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_comparisonRightOperand (const cPtr_comparisonRightOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_comparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_comparisonRightOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonRightOperand class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonRightOperand ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @comparisonRightOperand class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_comparisonRightOperand : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_comparisonRightOperand (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumComparisonOperator enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumComparisonOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_enumComparisonOperator (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_notEqual
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumComparisonOperator extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumComparisonOperator constructor_equal (LOCATION_ARGS) ;

  public : static class GALGAS_enumComparisonOperator constructor_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumComparisonOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumComparisonOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumComparisonOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @assignmentSourceExpression class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentSourceExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_assignmentSourceExpression (void) ;

//---
  public : inline const class cPtr_assignmentSourceExpression * ptr (void) const { return (const cPtr_assignmentSourceExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentSourceExpression (const cPtr_assignmentSourceExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentSourceExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentSourceExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @assignmentSourceExpression class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentSourceExpression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_assignmentSourceExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @assertInstruction class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assertInstruction : public GALGAS_instruction {
//--- Constructor
  public : GALGAS_assertInstruction (void) ;

//---
  public : inline const class cPtr_assertInstruction * ptr (void) const { return (const cPtr_assertInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assertInstruction (const cPtr_assertInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assertInstruction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assertInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_expression & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assertInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mAssertExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mAssertInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @assertInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assertInstruction : public cPtr_instruction {
//--- Attributes
  public : GALGAS_location mProperty_mAssertInstructionLocation ;
  public : GALGAS_expression mProperty_mAssertExpression ;

//--- Constructor
  public : cPtr_assertInstruction (const GALGAS_location & in_mAssertInstructionLocation,
                                   const GALGAS_expression & in_mAssertExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mAssertInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mAssertExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @ifInstruction class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifInstruction : public GALGAS_instruction {
//--- Constructor
  public : GALGAS_ifInstruction (void) ;

//---
  public : inline const class cPtr_ifInstruction * ptr (void) const { return (const cPtr_ifInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifInstruction (const cPtr_ifInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifInstruction extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ifInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_expression & inOperand1,
                                                              const class GALGAS_location & inOperand2,
                                                              const class GALGAS_instructionList & inOperand3,
                                                              const class GALGAS_instructionList & inOperand4
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mIFinstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @ifInstruction class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifInstruction : public cPtr_instruction {
//--- Attributes
  public : GALGAS_location mProperty_mIFinstructionLocation ;
  public : GALGAS_expression mProperty_mTestExpression ;
  public : GALGAS_location mProperty_mEndOfTestExpression ;
  public : GALGAS_instructionList mProperty_mThenInstructionList ;
  public : GALGAS_instructionList mProperty_mElseInstructionList ;

//--- Constructor
  public : cPtr_ifInstruction (const GALGAS_location & in_mIFinstructionLocation,
                               const GALGAS_expression & in_mTestExpression,
                               const GALGAS_location & in_mEndOfTestExpression,
                               const GALGAS_instructionList & in_mThenInstructionList,
                               const GALGAS_instructionList & in_mElseInstructionList
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mIFinstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @switchCaseList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchCaseList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_switchCaseList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_switchCaseList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstringlist & in_mConstantNameList,
                                                  const class GALGAS_location & in_mEndOfConstantList,
                                                  const class GALGAS_instructionList & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchCaseList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchCaseList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_switchCaseList constructor_listWithValue (const class GALGAS_lstringlist & inOperand0,
                                                                         const class GALGAS_location & inOperand1,
                                                                         const class GALGAS_instructionList & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchCaseList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstringlist & inOperand0,
                                                      const class GALGAS_location & inOperand1,
                                                      const class GALGAS_instructionList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_switchCaseList add_operation (const GALGAS_switchCaseList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstringlist constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_instructionList constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstringlist & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  class GALGAS_instructionList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 class GALGAS_instructionList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstringlist & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_instructionList & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstringlist & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               class GALGAS_instructionList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              class GALGAS_instructionList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_switchCaseList ;
 
} ; // End of GALGAS_switchCaseList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_switchCaseList : public cGenericAbstractEnumerator {
  public : cEnumerator_switchCaseList (const GALGAS_switchCaseList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfConstantList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_switchCaseList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @switchCaseList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchCaseList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstringlist mProperty_mConstantNameList ;

  public : GALGAS_location mProperty_mEndOfConstantList ;

  public : GALGAS_instructionList mProperty_mInstructionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_switchCaseList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_switchCaseList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_switchCaseList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_switchCaseList_2D_element (const GALGAS_lstringlist & in_mConstantNameList,
                                             const GALGAS_location & in_mEndOfConstantList,
                                             const GALGAS_instructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchCaseList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchCaseList_2D_element constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_instructionList & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchCaseList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchCaseList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @functionValueList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionValueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_functionValueList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_functionValueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOperandName,
                                                  const class GALGAS_lstring & in_mResultName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionValueList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionValueList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_functionValueList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionValueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionValueList add_operation (const GALGAS_functionValueList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionValueList ;
 
} ; // End of GALGAS_functionValueList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionValueList : public cGenericAbstractEnumerator {
  public : cEnumerator_functionValueList (const GALGAS_functionValueList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOperandName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionValueList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @functionValueList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mOperandName ;

  public : GALGAS_lstring mProperty_mResultName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionValueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_functionValueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionValueList_2D_element (const GALGAS_lstring & in_mOperandName,
                                                const GALGAS_lstring & in_mResultName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionValueList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionValueList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionValueList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @functionDefinitionList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_functionDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_functionDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFunctionName,
                                                  const class GALGAS_lstring & in_mOperandEnumTypeName,
                                                  const class GALGAS_lstring & in_mResultEnumTypeName,
                                                  const class GALGAS_functionValueList & in_mValueList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDefinitionList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_functionDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_functionValueList & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_functionValueList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionDefinitionList add_operation (const GALGAS_functionDefinitionList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_functionValueList constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_functionValueList & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_functionValueList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_functionValueList & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_functionValueList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_functionValueList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandEnumTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultEnumTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionDefinitionList ;
 
} ; // End of GALGAS_functionDefinitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_functionDefinitionList (const GALGAS_functionDefinitionList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOperandEnumTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultEnumTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_functionValueList current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDefinitionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionDefinitionList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mFunctionName ;

  public : GALGAS_lstring mProperty_mOperandEnumTypeName ;

  public : GALGAS_lstring mProperty_mResultEnumTypeName ;

  public : GALGAS_functionValueList mProperty_mValueList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_functionDefinitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionDefinitionList_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                     const GALGAS_lstring & in_mOperandEnumTypeName,
                                                     const GALGAS_lstring & in_mResultEnumTypeName,
                                                     const GALGAS_functionValueList & in_mValueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_functionValueList & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandEnumTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultEnumTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionValueList getter_mValueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDefinitionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDefinitionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @scenarioEventSequence list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_scenarioEventSequence : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_scenarioEventSequence (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_scenarioEventSequence (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEventName,
                                                  const class GALGAS_lstringlist & in_mArgumentNameList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_scenarioEventSequence extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_scenarioEventSequence constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_scenarioEventSequence constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstringlist & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_scenarioEventSequence inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_scenarioEventSequence add_operation (const GALGAS_scenarioEventSequence & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mArgumentNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEventNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_scenarioEventSequence ;
 
} ; // End of GALGAS_scenarioEventSequence class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_scenarioEventSequence : public cGenericAbstractEnumerator {
  public : cEnumerator_scenarioEventSequence (const GALGAS_scenarioEventSequence & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mEventName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mArgumentNameList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_scenarioEventSequence_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scenarioEventSequence ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @scenarioEventSequence_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_scenarioEventSequence_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mEventName ;

  public : GALGAS_lstringlist mProperty_mArgumentNameList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_scenarioEventSequence_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_scenarioEventSequence_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_scenarioEventSequence_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_scenarioEventSequence_2D_element (const GALGAS_lstring & in_mEventName,
                                                    const GALGAS_lstringlist & in_mArgumentNameList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_scenarioEventSequence_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_scenarioEventSequence_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstringlist & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_scenarioEventSequence_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mArgumentNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEventName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_scenarioEventSequence_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scenarioEventSequence_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @scenarioList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_scenarioList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_scenarioList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_scenarioList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mMachineName,
                                                  const class GALGAS_lstring & in_mScenarioName,
                                                  const class GALGAS_scenarioEventSequence & in_mEventSequence
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_scenarioList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_scenarioList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_scenarioList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_scenarioEventSequence & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_scenarioList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_scenarioEventSequence & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_scenarioList add_operation (const GALGAS_scenarioList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_scenarioEventSequence constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_scenarioEventSequence & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_scenarioEventSequence & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_scenarioEventSequence & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_scenarioEventSequence & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_scenarioEventSequence & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_mEventSequenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_scenarioList ;
 
} ; // End of GALGAS_scenarioList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_scenarioList : public cGenericAbstractEnumerator {
  public : cEnumerator_scenarioList (const GALGAS_scenarioList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mMachineName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mScenarioName (LOCATION_ARGS) const ;
  public : class GALGAS_scenarioEventSequence current_mEventSequence (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_scenarioList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scenarioList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @scenarioList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_scenarioList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mMachineName ;

  public : GALGAS_lstring mProperty_mScenarioName ;

  public : GALGAS_scenarioEventSequence mProperty_mEventSequence ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_scenarioList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_scenarioList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_scenarioList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_scenarioList_2D_element (const GALGAS_lstring & in_mMachineName,
                                           const GALGAS_lstring & in_mScenarioName,
                                           const GALGAS_scenarioEventSequence & in_mEventSequence) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_scenarioList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_scenarioList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_scenarioEventSequence & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_scenarioList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_mEventSequence (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMachineName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_scenarioList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scenarioList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @ast struct                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ast : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_enumTypeList mProperty_mEnumTypeList ;

  public : GALGAS_machineList mProperty_mMachineList ;

  public : GALGAS_functionDefinitionList mProperty_mFunctionDefinitionList ;

  public : GALGAS_scenarioList mProperty_mScenarioList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ast constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ast (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ast (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ast (const GALGAS_enumTypeList & in_mEnumTypeList,
                       const GALGAS_machineList & in_mMachineList,
                       const GALGAS_functionDefinitionList & in_mFunctionDefinitionList,
                       const GALGAS_scenarioList & in_mScenarioList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ast extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ast constructor_new (const class GALGAS_enumTypeList & inOperand0,
                                                    const class GALGAS_machineList & inOperand1,
                                                    const class GALGAS_functionDefinitionList & inOperand2,
                                                    const class GALGAS_scenarioList & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ast & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumTypeList getter_mEnumTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDefinitionList getter_mFunctionDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineList getter_mMachineList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioList getter_mScenarioList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ast class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedInstruction class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedInstruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_decoratedInstruction (void) ;

//---
  public : inline const class cPtr_decoratedInstruction * ptr (void) const { return (const cPtr_decoratedInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedInstruction (const cPtr_decoratedInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedInstruction extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @decoratedInstruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedInstruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_decoratedInstruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @decoratedInstructionList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_decoratedInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_decoratedInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_decoratedInstruction & in_mDecoratedInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedInstructionList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_decoratedInstructionList constructor_listWithValue (const class GALGAS_decoratedInstruction & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedInstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_decoratedInstruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedInstructionList add_operation (const GALGAS_decoratedInstructionList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_decoratedInstruction constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_decoratedInstruction & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_decoratedInstruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_decoratedInstruction & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_decoratedInstruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_decoratedInstruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstruction getter_mDecoratedInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedInstructionList ;
 
} ; // End of GALGAS_decoratedInstructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedInstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedInstructionList (const GALGAS_decoratedInstructionList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_decoratedInstruction current_mDecoratedInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @decoratedInstructionList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_decoratedInstruction mProperty_mDecoratedInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedInstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedInstructionList_2D_element (const GALGAS_decoratedInstruction & in_mDecoratedInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedInstructionList_2D_element constructor_new (const class GALGAS_decoratedInstruction & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstruction getter_mDecoratedInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedInstructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedInstructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_decoratedExpression (void) ;

//---
  public : inline const class cPtr_decoratedExpression * ptr (void) const { return (const cPtr_decoratedExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedExpression (const cPtr_decoratedExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedExpression extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @decoratedExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedExpression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_decoratedExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @decoratedExpressionList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_decoratedExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_decoratedExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLabel,
                                                  const class GALGAS_decoratedExpression & in_mDecoratedExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedExpressionList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_decoratedExpressionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_decoratedExpression & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedExpressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_decoratedExpression & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpressionList add_operation (const GALGAS_decoratedExpressionList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_decoratedExpression constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_decoratedExpression & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_decoratedExpression & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_decoratedExpression & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_decoratedExpression & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_decoratedExpression & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mDecoratedExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedExpressionList ;
 
} ; // End of GALGAS_decoratedExpressionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedExpressionList : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedExpressionList (const GALGAS_decoratedExpressionList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLabel (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedExpression current_mDecoratedExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedExpressionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @decoratedExpressionList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mLabel ;

  public : GALGAS_decoratedExpression mProperty_mDecoratedExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedExpressionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedExpressionList_2D_element (const GALGAS_lstring & in_mLabel,
                                                      const GALGAS_decoratedExpression & in_mDecoratedExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedExpressionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_decoratedExpression & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mDecoratedExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedExpressionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedExpressionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumConstantMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_enumConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_enumConstantMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) ;
  public : GALGAS_enumConstantMap & operator = (const GALGAS_enumConstantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_enumConstantMap constructor_mapWithMapToOverride (const class GALGAS_enumConstantMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_enumConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumConstantMap ;
 
} ; // End of GALGAS_enumConstantMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@enumConstantMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_enumConstantMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public : cMapElement_enumConstantMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumConstantMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @unifiedScalarTypeMap unique map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedScalarTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedScalarTypeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedScalarTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedScalarTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedScalarTypeMap (const GALGAS_unifiedScalarTypeMap & inSource) ;
  public : GALGAS_unifiedScalarTypeMap & operator = (const GALGAS_unifiedScalarTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedScalarTypeMap extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedScalarTypeMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_enumConstantMap constinArgument1,
                                                   class GALGAS_lstringlist constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConstantMapForKey (class GALGAS_enumConstantMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEnumConstantListForKey (class GALGAS_lstringlist constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGenerateForKey (class GALGAS_bool constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_enumConstantMap & outArgument1,
                                                   class GALGAS_lstringlist & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_mConstantMapForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantListForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedScalarTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedScalarTypeMap ;
 
} ; // End of GALGAS_unifiedScalarTypeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedScalarTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedScalarTypeMap (const GALGAS_unifiedScalarTypeMap & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_enumConstantMap current_mConstantMap (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mEnumConstantList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mGenerate (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedScalarTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@unifiedScalarTypeMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedScalarTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_enumConstantMap mProperty_mConstantMap ;
  public : GALGAS_lstringlist mProperty_mEnumConstantList ;
  public : GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public : cMapElement_unifiedScalarTypeMap (const GALGAS_lstring & inKey,
                                             const GALGAS_enumConstantMap & in_mConstantMap,
                                             const GALGAS_lstringlist & in_mEnumConstantList,
                                             const GALGAS_bool & in_mGenerate
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @unifiedScalarTypeMap_2D_proxy map proxy                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedScalarTypeMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_unifiedScalarTypeMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedScalarTypeMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedScalarTypeMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static class GALGAS_unifiedScalarTypeMap_2D_proxy constructor_searchKey (const class GALGAS_unifiedScalarTypeMap & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeOptionalProxy (class GALGAS_unifiedScalarTypeMap & ioArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument2
                                                       COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxy (class GALGAS_unifiedScalarTypeMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_unifiedScalarTypeMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_mConstantMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantList (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerate (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedScalarTypeMap_2D_proxy class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedScalarTypeMap_2D_proxy ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedArgumentList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_decoratedArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_decoratedArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedScalarTypeMap_2D_proxy & in_mArgumentTypeProxy,
                                                  const class GALGAS_lstring & in_mArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedArgumentList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_decoratedArgumentList constructor_listWithValue (const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedArgumentList add_operation (const GALGAS_decoratedArgumentList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mArgumentTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedArgumentList ;
 
} ; // End of GALGAS_decoratedArgumentList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedArgumentList : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedArgumentList (const GALGAS_decoratedArgumentList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedScalarTypeMap_2D_proxy current_mArgumentTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @decoratedArgumentList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mArgumentTypeProxy ;

  public : GALGAS_lstring mProperty_mArgumentName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedArgumentList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedArgumentList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedArgumentList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mArgumentTypeProxy,
                                                    const GALGAS_lstring & in_mArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedArgumentList_2D_element constructor_new (const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mArgumentTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedArgumentList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedArgumentList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @eventMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_eventMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_eventMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_eventMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_eventMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_eventMap (const GALGAS_eventMap & inSource) ;
  public : GALGAS_eventMap & operator = (const GALGAS_eventMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_eventMap extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_eventMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_eventMap constructor_mapWithMapToOverride (const class GALGAS_eventMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_decoratedArgumentList & inOperand1,
                                                      const class GALGAS_decoratedInstructionList & inOperand2,
                                                      const class GALGAS_decoratedExpressionList & inOperand3,
                                                      const class GALGAS_location & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_decoratedArgumentList constinArgument1,
                                                   class GALGAS_decoratedInstructionList constinArgument2,
                                                   class GALGAS_decoratedExpressionList constinArgument3,
                                                   class GALGAS_location constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDecoratedArgumentListForKey (class GALGAS_decoratedArgumentList constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDecoratedEventInstructionListForKey (class GALGAS_decoratedInstructionList constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfEnsureExpressionListForKey (class GALGAS_location constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEnsureDecoratedExpressionListForKey (class GALGAS_decoratedExpressionList constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_decoratedArgumentList & outArgument1,
                                                   class GALGAS_decoratedInstructionList & outArgument2,
                                                   class GALGAS_decoratedExpressionList & outArgument3,
                                                   class GALGAS_location & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_mDecoratedArgumentListForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_mDecoratedEventInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnsureExpressionListForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_mEnsureDecoratedExpressionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventMap getter_overriddenMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_eventMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_eventMap ;
 
} ; // End of GALGAS_eventMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_eventMap : public cGenericAbstractEnumerator {
  public : cEnumerator_eventMap (const GALGAS_eventMap & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedArgumentList current_mDecoratedArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedInstructionList current_mDecoratedEventInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedExpressionList current_mEnsureDecoratedExpressionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfEnsureExpressionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_eventMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@eventMap' map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_eventMap : public cMapElement {
//--- Map attributes
  public : GALGAS_decoratedArgumentList mProperty_mDecoratedArgumentList ;
  public : GALGAS_decoratedInstructionList mProperty_mDecoratedEventInstructionList ;
  public : GALGAS_decoratedExpressionList mProperty_mEnsureDecoratedExpressionList ;
  public : GALGAS_location mProperty_mEndOfEnsureExpressionList ;

//--- Constructor
  public : cMapElement_eventMap (const GALGAS_lstring & inKey,
                                 const GALGAS_decoratedArgumentList & in_mDecoratedArgumentList,
                                 const GALGAS_decoratedInstructionList & in_mDecoratedEventInstructionList,
                                 const GALGAS_decoratedExpressionList & in_mEnsureDecoratedExpressionList,
                                 const GALGAS_location & in_mEndOfEnsureExpressionList
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @eventMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_eventMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_decoratedArgumentList mProperty_mDecoratedArgumentList ;

  public : GALGAS_decoratedInstructionList mProperty_mDecoratedEventInstructionList ;

  public : GALGAS_decoratedExpressionList mProperty_mEnsureDecoratedExpressionList ;

  public : GALGAS_location mProperty_mEndOfEnsureExpressionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_eventMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_eventMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_eventMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_eventMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_decoratedArgumentList & in_mDecoratedArgumentList,
                                       const GALGAS_decoratedInstructionList & in_mDecoratedEventInstructionList,
                                       const GALGAS_decoratedExpressionList & in_mEnsureDecoratedExpressionList,
                                       const GALGAS_location & in_mEndOfEnsureExpressionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_eventMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_eventMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_decoratedArgumentList & inOperand1,
                                                                    const class GALGAS_decoratedInstructionList & inOperand2,
                                                                    const class GALGAS_decoratedExpressionList & inOperand3,
                                                                    const class GALGAS_location & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_eventMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedArgumentList getter_mDecoratedArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_mDecoratedEventInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnsureExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_mEnsureDecoratedExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_eventMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_eventMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @machineVarMap map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_machineVarMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_machineVarMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_machineVarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_machineVarMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_machineVarMap (const GALGAS_machineVarMap & inSource) ;
  public : GALGAS_machineVarMap & operator = (const GALGAS_machineVarMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineVarMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineVarMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_machineVarMap constructor_mapWithMapToOverride (const class GALGAS_machineVarMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMaxValueForKey (class GALGAS_uint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeProxyForKey (class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxValueForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_machineVarMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_machineVarMap ;
 
} ; // End of GALGAS_machineVarMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_machineVarMap : public cGenericAbstractEnumerator {
  public : cEnumerator_machineVarMap (const GALGAS_machineVarMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedScalarTypeMap_2D_proxy current_mTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mMaxValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_machineVarMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@machineVarMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_machineVarMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mTypeProxy ;
  public : GALGAS_uint mProperty_mMaxValue ;

//--- Constructor
  public : cMapElement_machineVarMap (const GALGAS_lstring & inKey,
                                      const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTypeProxy,
                                      const GALGAS_uint & in_mMaxValue
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @machineVarMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_machineVarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mTypeProxy ;

  public : GALGAS_uint mProperty_mMaxValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_machineVarMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_machineVarMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_machineVarMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_machineVarMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTypeProxy,
                                            const GALGAS_uint & in_mMaxValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineVarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineVarMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                                         const class GALGAS_uint & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_machineVarMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineVarMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @machineVarList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_machineVarList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_machineVarList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_machineVarList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTypeProxy,
                                                  const class GALGAS_lstring & in_mVarName,
                                                  const class GALGAS_lstringlist & in_mValueList,
                                                  const class GALGAS_lstring & in_mInitialValueConstantName,
                                                  const class GALGAS_uint & in_mInitialValueConstantIndex
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineVarList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineVarList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_machineVarList constructor_listWithValue (const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstringlist & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_uint & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_machineVarList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_uint & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_machineVarList add_operation (const GALGAS_machineVarList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_uint & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_uint & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_uint & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_uint & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_uint & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialValueConstantIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInitialValueConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_machineVarList ;
 
} ; // End of GALGAS_machineVarList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_machineVarList : public cGenericAbstractEnumerator {
  public : cEnumerator_machineVarList (const GALGAS_machineVarList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedScalarTypeMap_2D_proxy current_mTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mVarName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mInitialValueConstantName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mInitialValueConstantIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_machineVarList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @machineVarList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_machineVarList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mTypeProxy ;

  public : GALGAS_lstring mProperty_mVarName ;

  public : GALGAS_lstringlist mProperty_mValueList ;

  public : GALGAS_lstring mProperty_mInitialValueConstantName ;

  public : GALGAS_uint mProperty_mInitialValueConstantIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_machineVarList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_machineVarList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_machineVarList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_machineVarList_2D_element (const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mTypeProxy,
                                             const GALGAS_lstring & in_mVarName,
                                             const GALGAS_lstringlist & in_mValueList,
                                             const GALGAS_lstring & in_mInitialValueConstantName,
                                             const GALGAS_uint & in_mInitialValueConstantIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineVarList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineVarList_2D_element constructor_new (const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstringlist & inOperand2,
                                                                          const class GALGAS_lstring & inOperand3,
                                                                          const class GALGAS_uint & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_machineVarList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialValueConstantIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInitialValueConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineVarList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineVarList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedScenarioList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedScenarioList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_decoratedScenarioList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_decoratedScenarioList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mScenarioName,
                                                  const class GALGAS_scenarioEventSequence & in_mEventSequence
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedScenarioList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedScenarioList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_decoratedScenarioList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_scenarioEventSequence & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedScenarioList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_scenarioEventSequence & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedScenarioList add_operation (const GALGAS_decoratedScenarioList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_scenarioEventSequence constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_scenarioEventSequence & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_scenarioEventSequence & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_scenarioEventSequence & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_scenarioEventSequence & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_scenarioEventSequence & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_mEventSequenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedScenarioList ;
 
} ; // End of GALGAS_decoratedScenarioList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedScenarioList : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedScenarioList (const GALGAS_decoratedScenarioList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mScenarioName (LOCATION_ARGS) const ;
  public : class GALGAS_scenarioEventSequence current_mEventSequence (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedScenarioList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedScenarioList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @decoratedScenarioList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedScenarioList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mScenarioName ;

  public : GALGAS_scenarioEventSequence mProperty_mEventSequence ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedScenarioList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedScenarioList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedScenarioList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedScenarioList_2D_element (const GALGAS_lstring & in_mScenarioName,
                                                    const GALGAS_scenarioEventSequence & in_mEventSequence) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedScenarioList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedScenarioList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_scenarioEventSequence & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedScenarioList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_scenarioEventSequence getter_mEventSequence (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mScenarioName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedScenarioList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedScenarioList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @machineMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_machineMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_machineMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_machineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_machineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_machineMap (const GALGAS_machineMap & inSource) ;
  public : GALGAS_machineMap & operator = (const GALGAS_machineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_machineMap constructor_mapWithMapToOverride (const class GALGAS_machineMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_machineVarMap & inOperand1,
                                                      const class GALGAS_machineVarList & inOperand2,
                                                      const class GALGAS_decoratedExpressionList & inOperand3,
                                                      const class GALGAS_eventMap & inOperand4,
                                                      const class GALGAS_decoratedScenarioList & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_machineVarMap constinArgument1,
                                                   class GALGAS_machineVarList constinArgument2,
                                                   class GALGAS_decoratedExpressionList constinArgument3,
                                                   class GALGAS_eventMap constinArgument4,
                                                   class GALGAS_decoratedScenarioList constinArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAttributeListForKey (class GALGAS_machineVarList constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAttributeMapForKey (class GALGAS_machineVarMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDecoratedScenarioListForKey (class GALGAS_decoratedScenarioList constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEventMapForKey (class GALGAS_eventMap constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInvariantDecoratedExpressionListForKey (class GALGAS_decoratedExpressionList constinArgument0,
                                                                                    class GALGAS_string constinArgument1,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_machineVarMap & outArgument1,
                                                   class GALGAS_machineVarList & outArgument2,
                                                   class GALGAS_decoratedExpressionList & outArgument3,
                                                   class GALGAS_eventMap & outArgument4,
                                                   class GALGAS_decoratedScenarioList & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_mAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarMap getter_mAttributeMapForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_mDecoratedScenarioListForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventMap getter_mEventMapForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_mInvariantDecoratedExpressionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_machineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_machineMap ;
 
} ; // End of GALGAS_machineMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_machineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_machineMap (const GALGAS_machineMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_machineVarMap current_mAttributeMap (LOCATION_ARGS) const ;
  public : class GALGAS_machineVarList current_mAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedExpressionList current_mInvariantDecoratedExpressionList (LOCATION_ARGS) const ;
  public : class GALGAS_eventMap current_mEventMap (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedScenarioList current_mDecoratedScenarioList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_machineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@machineMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_machineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_machineVarMap mProperty_mAttributeMap ;
  public : GALGAS_machineVarList mProperty_mAttributeList ;
  public : GALGAS_decoratedExpressionList mProperty_mInvariantDecoratedExpressionList ;
  public : GALGAS_eventMap mProperty_mEventMap ;
  public : GALGAS_decoratedScenarioList mProperty_mDecoratedScenarioList ;

//--- Constructor
  public : cMapElement_machineMap (const GALGAS_lstring & inKey,
                                   const GALGAS_machineVarMap & in_mAttributeMap,
                                   const GALGAS_machineVarList & in_mAttributeList,
                                   const GALGAS_decoratedExpressionList & in_mInvariantDecoratedExpressionList,
                                   const GALGAS_eventMap & in_mEventMap,
                                   const GALGAS_decoratedScenarioList & in_mDecoratedScenarioList
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @machineMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_machineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_machineVarMap mProperty_mAttributeMap ;

  public : GALGAS_machineVarList mProperty_mAttributeList ;

  public : GALGAS_decoratedExpressionList mProperty_mInvariantDecoratedExpressionList ;

  public : GALGAS_eventMap mProperty_mEventMap ;

  public : GALGAS_decoratedScenarioList mProperty_mDecoratedScenarioList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_machineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_machineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_machineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_machineMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_machineVarMap & in_mAttributeMap,
                                         const GALGAS_machineVarList & in_mAttributeList,
                                         const GALGAS_decoratedExpressionList & in_mInvariantDecoratedExpressionList,
                                         const GALGAS_eventMap & in_mEventMap,
                                         const GALGAS_decoratedScenarioList & in_mDecoratedScenarioList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_machineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_machineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_machineVarMap & inOperand1,
                                                                      const class GALGAS_machineVarList & inOperand2,
                                                                      const class GALGAS_decoratedExpressionList & inOperand3,
                                                                      const class GALGAS_eventMap & inOperand4,
                                                                      const class GALGAS_decoratedScenarioList & inOperand5
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_machineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarList getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarMap getter_mAttributeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedScenarioList getter_mDecoratedScenarioList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_eventMap getter_mEventMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpressionList getter_mInvariantDecoratedExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_machineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_machineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @decoratedFunctionValueList sorted list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedFunctionValueList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_decoratedFunctionValueList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedFunctionValueList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedFunctionValueList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_decoratedFunctionValueList constructor_sortedListWithValue (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_uint & inOperand1,
                                                                                           const class GALGAS_lstring & inOperand2,
                                                                                           const class GALGAS_uint & inOperand3
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedFunctionValueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_uint & inOperand3
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_lstring & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     class GALGAS_lstring & outArgument2,
                                                     class GALGAS_uint & outArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_lstring & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     class GALGAS_lstring & outArgument2,
                                                     class GALGAS_uint & outArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedFunctionValueList ;
 
} ; // End of GALGAS_decoratedFunctionValueList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedFunctionValueList : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedFunctionValueList (const GALGAS_decoratedFunctionValueList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOperandName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mOperandValue (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mResultValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedFunctionValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedFunctionValueList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @decoratedFunctionValueList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedFunctionValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mOperandName ;

  public : GALGAS_uint mProperty_mOperandValue ;

  public : GALGAS_lstring mProperty_mResultName ;

  public : GALGAS_uint mProperty_mResultValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedFunctionValueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedFunctionValueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedFunctionValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedFunctionValueList_2D_element (const GALGAS_lstring & in_mOperandName,
                                                         const GALGAS_uint & in_mOperandValue,
                                                         const GALGAS_lstring & in_mResultName,
                                                         const GALGAS_uint & in_mResultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedFunctionValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedFunctionValueList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_uint & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_uint & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedFunctionValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOperandValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mResultValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedFunctionValueList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedFunctionValueList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @functionMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_functionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_functionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_functionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_functionMap (const GALGAS_functionMap & inSource) ;
  public : GALGAS_functionMap & operator = (const GALGAS_functionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_functionMap constructor_mapWithMapToOverride (const class GALGAS_functionMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand2,
                                                      const class GALGAS_decoratedFunctionValueList & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument1,
                                                   class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument2,
                                                   class GALGAS_decoratedFunctionValueList constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDecoratedFunctionValueListForKey (class GALGAS_decoratedFunctionValueList constinArgument0,
                                                                              class GALGAS_string constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperandTypeProxyForKey (class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultTypeProxyForKey (class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_unifiedScalarTypeMap_2D_proxy & outArgument2,
                                                   class GALGAS_decoratedFunctionValueList & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedFunctionValueList getter_mDecoratedFunctionValueListForKey (const class GALGAS_string & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mOperandTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mResultTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_functionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_functionMap ;
 
} ; // End of GALGAS_functionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedScalarTypeMap_2D_proxy current_mOperandTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedScalarTypeMap_2D_proxy current_mResultTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedFunctionValueList current_mDecoratedFunctionValueList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@functionMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_functionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mOperandTypeProxy ;
  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mResultTypeProxy ;
  public : GALGAS_decoratedFunctionValueList mProperty_mDecoratedFunctionValueList ;

//--- Constructor
  public : cMapElement_functionMap (const GALGAS_lstring & inKey,
                                    const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mOperandTypeProxy,
                                    const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mResultTypeProxy,
                                    const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @functionMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mOperandTypeProxy ;

  public : GALGAS_unifiedScalarTypeMap_2D_proxy mProperty_mResultTypeProxy ;

  public : GALGAS_decoratedFunctionValueList mProperty_mDecoratedFunctionValueList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mOperandTypeProxy,
                                          const GALGAS_unifiedScalarTypeMap_2D_proxy & in_mResultTypeProxy,
                                          const GALGAS_decoratedFunctionValueList & in_mDecoratedFunctionValueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand1,
                                                                       const class GALGAS_unifiedScalarTypeMap_2D_proxy & inOperand2,
                                                                       const class GALGAS_decoratedFunctionValueList & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedFunctionValueList getter_mDecoratedFunctionValueList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mOperandTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap_2D_proxy getter_mResultTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @analyzeContext struct                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_analyzeContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_unifiedScalarTypeMap mProperty_mUnifiedScalarTypeMap ;

  public : GALGAS_machineVarMap mProperty_mMachineVarMap ;

  public : GALGAS_functionMap mProperty_mFunctionMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_analyzeContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_analyzeContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_analyzeContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_analyzeContext (const GALGAS_unifiedScalarTypeMap & in_mUnifiedScalarTypeMap,
                                  const GALGAS_machineVarMap & in_mMachineVarMap,
                                  const GALGAS_functionMap & in_mFunctionMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_analyzeContext extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_analyzeContext constructor_new (const class GALGAS_unifiedScalarTypeMap & inOperand0,
                                                               const class GALGAS_machineVarMap & inOperand1,
                                                               const class GALGAS_functionMap & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_analyzeContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_functionMap getter_mFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_machineVarMap getter_mMachineVarMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedScalarTypeMap getter_mUnifiedScalarTypeMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_analyzeContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analyzeContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @implicationDecoratedExpression class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_implicationDecoratedExpression : public GALGAS_decoratedExpression {
//--- Constructor
  public : GALGAS_implicationDecoratedExpression (void) ;

//---
  public : inline const class cPtr_implicationDecoratedExpression * ptr (void) const { return (const cPtr_implicationDecoratedExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_implicationDecoratedExpression (const cPtr_implicationDecoratedExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_implicationDecoratedExpression extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_implicationDecoratedExpression constructor_new (const class GALGAS_decoratedExpression & inOperand0,
                                                                               const class GALGAS_decoratedExpression & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_implicationDecoratedExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mLeft (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mRight (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implicationDecoratedExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicationDecoratedExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @implicationDecoratedExpression class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_implicationDecoratedExpression : public cPtr_decoratedExpression {
//--- Attributes
  public : GALGAS_decoratedExpression mProperty_mLeft ;
  public : GALGAS_decoratedExpression mProperty_mRight ;

//--- Constructor
  public : cPtr_implicationDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
                                                const GALGAS_decoratedExpression & in_mRight
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpression getter_mLeft (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpression getter_mRight (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @logicalOrDecoratedExpression class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_logicalOrDecoratedExpression : public GALGAS_decoratedExpression {
//--- Constructor
  public : GALGAS_logicalOrDecoratedExpression (void) ;

//---
  public : inline const class cPtr_logicalOrDecoratedExpression * ptr (void) const { return (const cPtr_logicalOrDecoratedExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_logicalOrDecoratedExpression (const cPtr_logicalOrDecoratedExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_logicalOrDecoratedExpression extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_logicalOrDecoratedExpression constructor_new (const class GALGAS_decoratedExpression & inOperand0,
                                                                             const class GALGAS_decoratedExpression & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_logicalOrDecoratedExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mLeft (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mRight (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalOrDecoratedExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalOrDecoratedExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @logicalOrDecoratedExpression class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_logicalOrDecoratedExpression : public cPtr_decoratedExpression {
//--- Attributes
  public : GALGAS_decoratedExpression mProperty_mLeft ;
  public : GALGAS_decoratedExpression mProperty_mRight ;

//--- Constructor
  public : cPtr_logicalOrDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
                                              const GALGAS_decoratedExpression & in_mRight
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpression getter_mLeft (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpression getter_mRight (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @logicalAndDecoratedExpression class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_logicalAndDecoratedExpression : public GALGAS_decoratedExpression {
//--- Constructor
  public : GALGAS_logicalAndDecoratedExpression (void) ;

//---
  public : inline const class cPtr_logicalAndDecoratedExpression * ptr (void) const { return (const cPtr_logicalAndDecoratedExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_logicalAndDecoratedExpression (const cPtr_logicalAndDecoratedExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_logicalAndDecoratedExpression extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_logicalAndDecoratedExpression constructor_new (const class GALGAS_decoratedExpression & inOperand0,
                                                                              const class GALGAS_decoratedExpression & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_logicalAndDecoratedExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mLeft (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mRight (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalAndDecoratedExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalAndDecoratedExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @logicalAndDecoratedExpression class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_logicalAndDecoratedExpression : public cPtr_decoratedExpression {
//--- Attributes
  public : GALGAS_decoratedExpression mProperty_mLeft ;
  public : GALGAS_decoratedExpression mProperty_mRight ;

//--- Constructor
  public : cPtr_logicalAndDecoratedExpression (const GALGAS_decoratedExpression & in_mLeft,
                                               const GALGAS_decoratedExpression & in_mRight
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpression getter_mLeft (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpression getter_mRight (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @decoratedComparisonRightOperand class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedComparisonRightOperand : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_decoratedComparisonRightOperand (void) ;

//---
  public : inline const class cPtr_decoratedComparisonRightOperand * ptr (void) const { return (const cPtr_decoratedComparisonRightOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedComparisonRightOperand (const cPtr_decoratedComparisonRightOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedComparisonRightOperand class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedComparisonRightOperand ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @decoratedComparisonRightOperand class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedComparisonRightOperand : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_decoratedComparisonRightOperand (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract extension method '@expression analyzeExpression'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expression_analyzeExpression) (const class cPtr_expression * inObject,
                                                                       const class GALGAS_analyzeContext constinArgument0,
                                                                       const class GALGAS_bool constinArgument1,
                                                                       class GALGAS_decoratedExpression & outArgument2,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeExpression (const int32_t inClassIndex,
                                             extensionMethodSignature_expression_analyzeExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeExpression (const class cPtr_expression * inObject,
                                            const GALGAS_analyzeContext constin_inAnalyzeContext,
                                            const GALGAS_bool constin_inEnsureClause,
                                            GALGAS_decoratedExpression & out_outDecoratedExpression,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@expressionList analyzeExpressionList'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeExpressionList (const class GALGAS_expressionList inObject,
                                            const class GALGAS_analyzeContext constin_inAnalyzeContext,
                                            const class GALGAS_bool constin_inEnsureClause,
                                            class GALGAS_decoratedExpressionList & out_outDecoratedExpressionList,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension method '@comparisonRightOperand analyzeComparisonRightOperand'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand) (const class cPtr_comparisonRightOperand * inObject,
                                                                                               const class GALGAS_analyzeContext constinArgument0,
                                                                                               const class GALGAS_bool constinArgument1,
                                                                                               class GALGAS_decoratedComparisonRightOperand & outArgument2,
                                                                                               const class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument3,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeComparisonRightOperand (const int32_t inClassIndex,
                                                         extensionMethodSignature_comparisonRightOperand_analyzeComparisonRightOperand inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeComparisonRightOperand (const class cPtr_comparisonRightOperand * inObject,
                                                        const GALGAS_analyzeContext constin_inAnalyzeContext,
                                                        const GALGAS_bool constin_inEnsureClause,
                                                        GALGAS_decoratedComparisonRightOperand & out_outDecoratedExpression,
                                                        const GALGAS_unifiedScalarTypeMap_2D_proxy constin_inVarTypeProxy,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @decoratedAssignmentSourceExpression class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedAssignmentSourceExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_decoratedAssignmentSourceExpression (void) ;

//---
  public : inline const class cPtr_decoratedAssignmentSourceExpression * ptr (void) const { return (const cPtr_decoratedAssignmentSourceExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedAssignmentSourceExpression (const cPtr_decoratedAssignmentSourceExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedAssignmentSourceExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedAssignmentSourceExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @decoratedAssignmentSourceExpression class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedAssignmentSourceExpression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_decoratedAssignmentSourceExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @ifDecoratedInstruction class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifDecoratedInstruction : public GALGAS_decoratedInstruction {
//--- Constructor
  public : GALGAS_ifDecoratedInstruction (void) ;

//---
  public : inline const class cPtr_ifDecoratedInstruction * ptr (void) const { return (const cPtr_ifDecoratedInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifDecoratedInstruction (const cPtr_ifDecoratedInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifDecoratedInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ifDecoratedInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_decoratedExpression & inOperand1,
                                                                       const class GALGAS_location & inOperand2,
                                                                       const class GALGAS_decoratedInstructionList & inOperand3,
                                                                       const class GALGAS_decoratedInstructionList & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifDecoratedInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mIFinstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifDecoratedInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifDecoratedInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @ifDecoratedInstruction class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifDecoratedInstruction : public cPtr_decoratedInstruction {
//--- Attributes
  public : GALGAS_location mProperty_mIFinstructionLocation ;
  public : GALGAS_decoratedExpression mProperty_mTestExpression ;
  public : GALGAS_location mProperty_mEndOfTestExpression ;
  public : GALGAS_decoratedInstructionList mProperty_mThenInstructionList ;
  public : GALGAS_decoratedInstructionList mProperty_mElseInstructionList ;

//--- Constructor
  public : cPtr_ifDecoratedInstruction (const GALGAS_location & in_mIFinstructionLocation,
                                        const GALGAS_decoratedExpression & in_mTestExpression,
                                        const GALGAS_location & in_mEndOfTestExpression,
                                        const GALGAS_decoratedInstructionList & in_mThenInstructionList,
                                        const GALGAS_decoratedInstructionList & in_mElseInstructionList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mIFinstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpression getter_mTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedInstructionList getter_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedInstructionList getter_mElseInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @switchDecoratedCaseList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchDecoratedCaseList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_switchDecoratedCaseList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_switchDecoratedCaseList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstringlist & in_mConstantNameList,
                                                  const class GALGAS_decoratedInstructionList & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchDecoratedCaseList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchDecoratedCaseList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_switchDecoratedCaseList constructor_listWithValue (const class GALGAS_lstringlist & inOperand0,
                                                                                  const class GALGAS_decoratedInstructionList & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchDecoratedCaseList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstringlist & inOperand0,
                                                      const class GALGAS_decoratedInstructionList & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_switchDecoratedCaseList add_operation (const GALGAS_switchDecoratedCaseList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstringlist constinArgument0,
                                                       class GALGAS_decoratedInstructionList constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstringlist & outArgument0,
                                                  class GALGAS_decoratedInstructionList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_decoratedInstructionList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstringlist & outArgument0,
                                                       class GALGAS_decoratedInstructionList & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstringlist & outArgument0,
                                               class GALGAS_decoratedInstructionList & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_decoratedInstructionList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchDecoratedCaseList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchDecoratedCaseList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchDecoratedCaseList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_switchDecoratedCaseList ;
 
} ; // End of GALGAS_switchDecoratedCaseList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_switchDecoratedCaseList : public cGenericAbstractEnumerator {
  public : cEnumerator_switchDecoratedCaseList (const GALGAS_switchDecoratedCaseList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedInstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_switchDecoratedCaseList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchDecoratedCaseList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @switchDecoratedCaseList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchDecoratedCaseList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstringlist mProperty_mConstantNameList ;

  public : GALGAS_decoratedInstructionList mProperty_mInstructionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_switchDecoratedCaseList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_switchDecoratedCaseList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_switchDecoratedCaseList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_switchDecoratedCaseList_2D_element (const GALGAS_lstringlist & in_mConstantNameList,
                                                      const GALGAS_decoratedInstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchDecoratedCaseList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchDecoratedCaseList_2D_element constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                                   const class GALGAS_decoratedInstructionList & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchDecoratedCaseList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedInstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchDecoratedCaseList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchDecoratedCaseList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @assertDecoratedInstruction class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assertDecoratedInstruction : public GALGAS_decoratedInstruction {
//--- Constructor
  public : GALGAS_assertDecoratedInstruction (void) ;

//---
  public : inline const class cPtr_assertDecoratedInstruction * ptr (void) const { return (const cPtr_assertDecoratedInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assertDecoratedInstruction (const cPtr_assertDecoratedInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assertDecoratedInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assertDecoratedInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_decoratedExpression & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assertDecoratedInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedExpression getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertDecoratedInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertDecoratedInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @assertDecoratedInstruction class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assertDecoratedInstruction : public cPtr_decoratedInstruction {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;
  public : GALGAS_decoratedExpression mProperty_mExpression ;

//--- Constructor
  public : cPtr_assertDecoratedInstruction (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_decoratedExpression & in_mExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedExpression getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@instructionList analyzeInstructionList'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeInstructionList (const class GALGAS_instructionList inObject,
                                             const class GALGAS_analyzeContext constin_inAnalyzeContext,
                                             class GALGAS_decoratedInstructionList & out_outDecoratedInstructionList,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract extension method '@instruction analyzeInstruction'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_instruction_analyzeInstruction) (const class cPtr_instruction * inObject,
                                                                         const class GALGAS_analyzeContext constinArgument0,
                                                                         class GALGAS_decoratedInstruction & outArgument1,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeInstruction (const int32_t inClassIndex,
                                              extensionMethodSignature_instruction_analyzeInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeInstruction (const class cPtr_instruction * inObject,
                                             const GALGAS_analyzeContext constin_inAnalyzeContext,
                                             GALGAS_decoratedInstruction & out_outDecoratedInstruction,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract extension method '@assignmentSourceExpression analyzeAssignmentSourceExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression) (const class cPtr_assignmentSourceExpression * inObject,
                                                                                                       const class GALGAS_analyzeContext constinArgument0,
                                                                                                       const class GALGAS_unifiedScalarTypeMap_2D_proxy constinArgument1,
                                                                                                       class GALGAS_decoratedAssignmentSourceExpression & outArgument2,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeAssignmentSourceExpression (const int32_t inClassIndex,
                                                             extensionMethodSignature_assignmentSourceExpression_analyzeAssignmentSourceExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeAssignmentSourceExpression (const class cPtr_assignmentSourceExpression * inObject,
                                                            const GALGAS_analyzeContext constin_inAnalyzeContext,
                                                            const GALGAS_unifiedScalarTypeMap_2D_proxy constin_inTargetTypeProxy,
                                                            GALGAS_decoratedAssignmentSourceExpression & out_outDecoratedExpression,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Parser class 'omnibus_syntax' declaration                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_omnibus_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_omnibus_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_assignment_5F_source_5F_expression_ (class GALGAS_assignmentSourceExpression & outArgument0,
                                                                   class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_assignment_5F_source_5F_expression_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_comparison_5F_right_5F_operand_ (class GALGAS_comparisonRightOperand & outArgument0,
                                                               class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_comparison_5F_right_5F_operand_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_else_5F_part_ (class GALGAS_instructionList & outArgument0,
                                             class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_else_5F_part_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_ (class GALGAS_ast & ioArgument0,
                                                    class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_function_ (class GALGAS_ast & ioArgument0,
                                                 class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_function_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_expression & outArgument0,
                                           class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_expression_31__ (class GALGAS_expression & outArgument0,
                                               class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_expression_31__parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_expression_32__ (class GALGAS_expression & outArgument0,
                                               class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_expression_32__parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_expression_34__ (class GALGAS_expression & outArgument0,
                                               class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_expression_34__parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_instruction_ (class GALGAS_instruction & outArgument0,
                                            class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_instruction_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_instruction_5F_list_ (class GALGAS_instructionList & ioArgument0,
                                                    class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_instruction_5F_list_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_machine_ (class GALGAS_ast & ioArgument0,
                                        class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_machine_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_scenario_ (class GALGAS_ast & ioArgument0,
                                         class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_scenario_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_ast & outArgument0,
                                                class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_lexicalAnalyzer * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_omnibus_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & outArgument0,
                                                               C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_scenario_i1_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_scenario_i1_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_enum_5F_declaration_i2_ (GALGAS_ast & ioArgument0,
                                                                   C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_enum_5F_declaration_i2_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_enum_5F_function_i3_ (GALGAS_ast & ioArgument0,
                                                                C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_enum_5F_function_i3_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_machine_i4_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_machine_i4_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_i5_ (GALGAS_expression & outArgument0,
                                                          C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_i5_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_31__i6_ (GALGAS_expression & outArgument0,
                                                              C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_31__i6_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_32__i7_ (GALGAS_expression & outArgument0,
                                                              C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_32__i7_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_34__i8_ (GALGAS_expression & outArgument0,
                                                              C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_34__i8_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_34__i9_ (GALGAS_expression & outArgument0,
                                                              C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_expression_34__i9_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i10_ (GALGAS_comparisonRightOperand & outArgument0,
                                                                               C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i10_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i11_ (GALGAS_comparisonRightOperand & outArgument0,
                                                                               C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_comparison_5F_right_5F_operand_i11_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_instruction_5F_list_i12_ (GALGAS_instructionList & ioArgument0,
                                                                    C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_instruction_5F_list_i12_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_instruction_i13_ (GALGAS_instruction & outArgument0,
                                                            C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_instruction_i13_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_instruction_i14_ (GALGAS_instruction & outArgument0,
                                                            C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_instruction_i14_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i15_ (GALGAS_assignmentSourceExpression & outArgument0,
                                                                                   C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i15_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i16_ (GALGAS_assignmentSourceExpression & outArgument0,
                                                                                   C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i16_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i17_ (GALGAS_assignmentSourceExpression & outArgument0,
                                                                                   C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_assignment_5F_source_5F_expression_i17_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_instruction_i18_ (GALGAS_instruction & outArgument0,
                                                            C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_instruction_i18_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_else_5F_part_i19_ (GALGAS_instructionList & outArgument0,
                                                             C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_else_5F_part_i19_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_else_5F_part_i20_ (GALGAS_instructionList & outArgument0,
                                                             C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_else_5F_part_i20_parse (C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_else_5F_part_i21_ (GALGAS_instructionList & outArgument0,
                                                             C_Lexique_lexicalAnalyzer * inLexique) ;

  protected : void rule_omnibus_5F_syntax_else_5F_part_i21_parse (C_Lexique_lexicalAnalyzer * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_omnibus_5F_syntax_0 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_1 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_2 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_3 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_4 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_5 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_6 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_7 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_8 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_9 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_10 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_11 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_12 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_13 (C_Lexique_lexicalAnalyzer *) = 0 ;

  protected : virtual int32_t select_omnibus_5F_syntax_14 (C_Lexique_lexicalAnalyzer *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @assignmentInstruction class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentInstruction : public GALGAS_instruction {
//--- Constructor
  public : GALGAS_assignmentInstruction (void) ;

//---
  public : inline const class cPtr_assignmentInstruction * ptr (void) const { return (const cPtr_assignmentInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentInstruction (const cPtr_assignmentInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentInstruction extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentInstruction constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_assignmentSourceExpression & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_assignmentSourceExpression getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @assignmentInstruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentInstruction : public cPtr_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetVarName ;
  public : GALGAS_assignmentSourceExpression mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_assignmentInstruction (const GALGAS_lstring & in_mTargetVarName,
                                       const GALGAS_assignmentSourceExpression & in_mSourceExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_assignmentSourceExpression getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @attributeAsComparisonRightOperand class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeAsComparisonRightOperand : public GALGAS_comparisonRightOperand {
//--- Constructor
  public : GALGAS_attributeAsComparisonRightOperand (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_attributeAsComparisonRightOperand constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_attributeAsComparisonRightOperand * ptr (void) const { return (const cPtr_attributeAsComparisonRightOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_attributeAsComparisonRightOperand (const cPtr_attributeAsComparisonRightOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeAsComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_attributeAsComparisonRightOperand constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_attributeAsComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasOldQualifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeAsComparisonRightOperand class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeAsComparisonRightOperand ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @attributeAsComparisonRightOperand class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_attributeAsComparisonRightOperand : public cPtr_comparisonRightOperand {
//--- Attributes
  public : GALGAS_lstring mProperty_mAttributeName ;
  public : GALGAS_bool mProperty_mHasOldQualifier ;

//--- Constructor
  public : cPtr_attributeAsComparisonRightOperand (const GALGAS_lstring & in_mAttributeName,
                                                   const GALGAS_bool & in_mHasOldQualifier
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasOldQualifier (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @comparisonInExpression class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_comparisonInExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_comparisonInExpression (void) ;

//---
  public : inline const class cPtr_comparisonInExpression * ptr (void) const { return (const cPtr_comparisonInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_comparisonInExpression (const cPtr_comparisonInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_comparisonInExpression extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_comparisonInExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_enumComparisonOperator & inOperand1,
                                                                       const class GALGAS_comparisonRightOperand & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_comparisonInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumComparisonOperator getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_comparisonRightOperand getter_mRightOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonInExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @comparisonInExpression class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_comparisonInExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_lstring mProperty_mAttributeName ;
  public : GALGAS_enumComparisonOperator mProperty_mOperator ;
  public : GALGAS_comparisonRightOperand mProperty_mRightOperand ;

//--- Constructor
  public : cPtr_comparisonInExpression (const GALGAS_lstring & in_mAttributeName,
                                        const GALGAS_enumComparisonOperator & in_mOperator,
                                        const GALGAS_comparisonRightOperand & in_mRightOperand
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_enumComparisonOperator getter_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_comparisonRightOperand getter_mRightOperand (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @constantAsAssignmentSourceExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constantAsAssignmentSourceExpression : public GALGAS_assignmentSourceExpression {
//--- Constructor
  public : GALGAS_constantAsAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constantAsAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_constantAsAssignmentSourceExpression * ptr (void) const { return (const cPtr_constantAsAssignmentSourceExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_constantAsAssignmentSourceExpression (const cPtr_constantAsAssignmentSourceExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constantAsAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constantAsAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constantAsAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantAsAssignmentSourceExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantAsAssignmentSourceExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @constantAsAssignmentSourceExpression class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_constantAsAssignmentSourceExpression : public cPtr_assignmentSourceExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mConstantName ;

//--- Constructor
  public : cPtr_constantAsAssignmentSourceExpression (const GALGAS_lstring & in_mConstantName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @constantAsComparisonRightOperand class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constantAsComparisonRightOperand : public GALGAS_comparisonRightOperand {
//--- Constructor
  public : GALGAS_constantAsComparisonRightOperand (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constantAsComparisonRightOperand constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_constantAsComparisonRightOperand * ptr (void) const { return (const cPtr_constantAsComparisonRightOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_constantAsComparisonRightOperand (const cPtr_constantAsComparisonRightOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constantAsComparisonRightOperand extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constantAsComparisonRightOperand constructor_new (const class GALGAS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constantAsComparisonRightOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantAsComparisonRightOperand class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantAsComparisonRightOperand ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @constantAsComparisonRightOperand class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_constantAsComparisonRightOperand : public cPtr_comparisonRightOperand {
//--- Attributes
  public : GALGAS_lstring mProperty_mConstantName ;

//--- Constructor
  public : cPtr_constantAsComparisonRightOperand (const GALGAS_lstring & in_mConstantName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @functionAsAssignmentSourceExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionAsAssignmentSourceExpression : public GALGAS_assignmentSourceExpression {
//--- Constructor
  public : GALGAS_functionAsAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionAsAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionAsAssignmentSourceExpression * ptr (void) const { return (const cPtr_functionAsAssignmentSourceExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionAsAssignmentSourceExpression (const cPtr_functionAsAssignmentSourceExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionAsAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionAsAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionAsAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperandName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionAsAssignmentSourceExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionAsAssignmentSourceExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @functionAsAssignmentSourceExpression class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionAsAssignmentSourceExpression : public cPtr_assignmentSourceExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mFunctionName ;
  public : GALGAS_lstring mProperty_mOperandName ;

//--- Constructor
  public : cPtr_functionAsAssignmentSourceExpression (const GALGAS_lstring & in_mFunctionName,
                                                      const GALGAS_lstring & in_mOperandName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOperandName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @varAsAssignmentSourceExpression class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varAsAssignmentSourceExpression : public GALGAS_assignmentSourceExpression {
//--- Constructor
  public : GALGAS_varAsAssignmentSourceExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varAsAssignmentSourceExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varAsAssignmentSourceExpression * ptr (void) const { return (const cPtr_varAsAssignmentSourceExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varAsAssignmentSourceExpression (const cPtr_varAsAssignmentSourceExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varAsAssignmentSourceExpression extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varAsAssignmentSourceExpression constructor_new (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varAsAssignmentSourceExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varAsAssignmentSourceExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varAsAssignmentSourceExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @varAsAssignmentSourceExpression class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varAsAssignmentSourceExpression : public cPtr_assignmentSourceExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mSourceVarName ;

//--- Constructor
  public : cPtr_varAsAssignmentSourceExpression (const GALGAS_lstring & in_mSourceVarName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSourceVarName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
